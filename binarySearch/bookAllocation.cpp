#include <iostream>
#include <numeric> // for accumulate()
using namespace std;

/*
🔹 Problem: Book Allocation Problem (GFG / LeetCode Style)

Given:
- An array A[] of N books with each element representing the number of pages in a book.
- There are M students and the books are to be distributed among them.

Objective:
- Allocate books to students such that:
   1. Each student gets at least one book.
   2. Each book is allocated to exactly one student.
   3. The maximum number of pages assigned to any student is minimized.

🔸 Constraints:
- Books are allocated in contiguous order.
- A student cannot be allocated books from different segments.

🔍 Goal:
Find the **minimum number of maximum pages** that a student has to read.
*/

/*
🔁 Time Complexity:
- Binary search range = sum of pages ⇒ O(log(sum of A))
- For each binary search step, we check feasibility in O(N)

Total Time = O(N * log(sum of A))

📦 Space Complexity: O(1) — no extra space used
*/

// ✅ Helper function to check if we can allocate books within 'sol' max pages per student
bool isPossibleSolution(int A[], int N, int M, int sol)
{
    int pageSum = 0;
    int c = 1; // student counter

    for (int i = 0; i < N; i++)
    {
        if (A[i] > sol)
            return false; // book too large for limit

        if (pageSum + A[i] > sol)
        {
            c++;            // assign to next student
            pageSum = A[i]; // reset current sum

            if (c > M)
                return false; // too many students
        }
        else
        {
            pageSum += A[i]; // add to current student
        }
    }

    return true;
}

// ✅ Main function to find the minimum number of pages
int findPages(int A[], int N, int M)
{
    if (M > N)
        return -1; // Not enough books

    int start = 0;
    int end = 0;
    for (int i = 0; i < N; i++)
    {
        end += A[i];
    }
    // int end = accumulate(A, A + N, 0);  // maximum possible pages (all books to one student)
    int ans = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2; // try mid as max pages

        if (isPossibleSolution(A, N, M, mid))
        {
            ans = mid; // valid, try smaller value
            end = mid - 1;
        }
        else
        {
            start = mid + 1; // increase limit
        }
    }

    return ans;
}

int main()
{
    // Sample input
    int A[] = {12, 34, 67, 90};
    int N = sizeof(A) / sizeof(A[0]); // number of books
    int M = 2;                        // number of students

    int result = findPages(A, N, M);

    cout << "Minimum number of pages allocated: " << result << endl;

    return 0;
}
