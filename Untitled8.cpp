#include <bits/stdc++.h>
using namespace std;
int find3Numbers(int A[], int arr_size)
{
    int l, r;
    int count=0;
    sort(A, A + arr_size);
    for (int i = 0; i < arr_size - 2; i++) {
        l = i + 1; 
        r = arr_size - 1;
        while (l < r) {
            if ((A[i] + A[l] + A[r])%2==0) 
			{
                count++;
            }
            else if (A[i] + A[l] + A[r] < sum)
                l++;
            else
                r--;
        }
    }
    return count;
}
int main()
{
    int A[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 22;
    int arr_size = sizeof(A) / sizeof(A[0]);
 
    find3Numbers(A, arr_size);
 
    return 0;
}
