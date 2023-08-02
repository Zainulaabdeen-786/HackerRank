/* Given an array, of size n, reverse it.
Example: If array, [1, 2, 3, 4, 5], after reversing it, the array should be, [5, 4, 3, 2, 1].

Input Format
The first line contains an integer, n, denoting the size of the array. The next line contains n space-separated integers denoting the elements of the array.
Output Format
The output is handled by the code given in the editor, which would print the array.

Sample Input 0
6
16 13 7 2 1 12 
Sample Output 0
12 1 2 7 13 16 

Sample Input 1
7
1 13 15 20 12 13 2 
Sample Output 1
2 13 12 20 15 13 1   */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    /* Write the logic to reverse the array. */
    int* left_ptr = arr;
    int* right_ptr;
    int temp;
    for(i = 0; i < num; i++) {
        if(i == num - 1) 
            right_ptr = (arr + i);
    }
    while(left_ptr < right_ptr) {
        temp = *right_ptr;
        *right_ptr = *left_ptr;
        *left_ptr = temp;
        right_ptr--;
        left_ptr++;
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

/* Simple solution-
for(i = 0; i < num/2; i++) {
        temp = arr[i];
        arr[i] = arr[num-1-i];
        arr[num-1-i] = temp;
    }    */
