/* In this challenge, you will use logical bitwise operators. All data is stored in its binary representation. The logical operators, and C language, use 1 to represent true and 0 to represent false. The logical operators compare bits in two numbers and return true or false, 0 or 1, for each bit compared.
          Bitwise AND operator & The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0. It is denoted by &.
          Bitwise OR operator | The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.
          Bitwise XOR (exclusive OR) operator ^ The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. 
For example, for integers 3 and 5,
3 = 00000011 (In Binary)
5 = 00000101 (In Binary)
AND operation        OR operation        XOR operation
  00000011             00000011            00000011
& 00000101           | 00000101          ^ 00000101
  ________             ________            ________
  00000001  = 1        00000111  = 7       00000110  = 6
You will be given an integer n, and a threshold, k. For each number i from 1 through n, find the maximum value of the logical and, or & xor when compared against all integers through n that are greater than i. Consider a value only if the comparison returns a result less than k.
Print the results of the and, or and exclusive or comparisons on separate lines, in that order.

Example
n = 3 
k = 3
The results of the comparisons are below:
a b   and or xor
1 2   0   3  3
1 3   1   3  2
2 3   2   3  1
For the and comparison, the maximum is 2. For the or comparison, none of the values is less than k, so the maximum is 0. For the xor comparison, the maximum value less than k is 2. The function should print:
2
0
2

Function Description
Complete the calculate_the_maximum function in the editor below.
calculate_the_maximum has the following parameters:
    int n: the highest number to consider
    int k: the result of a comparison must be lower than this number to be considered
Prints
Print the maximum values for the and, or and xor comparisons, each on a separate line.
Input Format
The only line contains 2 space-separated integers, n and k.     */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max1=0, max2=0, max3 = 0;
  int and, or, xor;
  for(int i=1;i<n;i++){
      for(int j=i+1;j<=n;j++){
          and = i&j; 
          or = i|j;
          xor = i^j;
          max1 = ((and > max1) && (and < k))? and : max1;
          max2 = ((or > max2) && (or < k))? or : max2;
          max3 = ((xor > max3) && (xor < k))? xor : max3;
      }
  }
  printf("%d\n%d\n%d",max1,max2,max3);
  return;
}

int main() {
    int n, k; 
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k); 
    return 0;
}
