/*Task
For each integer n in the interval [a, b] (given as input) :
    If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
    Else if n>9 and it is an even number, then print "even".
    Else if n>9 and it is an odd number, then print "odd".
Input Format
The first line contains an integer, a.
The seond line contains an integer, b.
Constraints- 1 <= a <= b <= 10**6
Output Format- Print the appropriate English representation,even, or odd, based on the conditions described in the 'task' section.
Sample Input
8
11
Sample Output
eight
nine
even
odd  */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(int n=a; n<=b; n++){
        if(n==1){
            printf("one");
        }else if(n==2){
            printf("two");
        }else if(n==3){
            printf("three");
        }else if(n==4){
            printf("four");
        }else if(n==5){
            printf("five");
        }else if(n==6){
            printf("six");
        }else if(n==7){
            printf("seven");
        }else if(n==8){
            printf("eight");
        }else if(n==9){
            printf("nine");
        }else if(n>9){
            (n%2==0) ? printf("even") : printf("odd");
        }
        printf("\n");
    }
    return 0;
}
