/* Bubble Sort
You have been given an array A of size N . you need to sort this array non-decreasing oder using bubble sort. However, you do not need to print the sorted array . You just need to print the number of swaps required to sort this array using bubble sort

Input Format

The first line consists of a single integer N denoting size of the array. The next line contains N space separated integers denoting the elements of the array.

Output Format Print the required answer in a single line

SAMPLE INPUT 
5
1 2 3 4 5
SAMPLE OUTPUT 
0
*/

#include <stdio.h>

int main()
{
    int  A[100];
    int  n;
    int temp;
    int a=0;
    for(int k=0; k<n-1; k++)
    {
        for(int i=0; i<n-k-1; i++)
        {
            if(A[i]>A[i+1])
            {
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
        }
    }
    printf("%d \n",a++);
}
