#include<stdio.h>//define the header file

// factorial program
int main() {
    int n,f=1,x,a;
    
    printf("Enter a number");
    scanf("%d",&n);
    x = n;
    while(n>=1)
    {
    f=f*n;
    n--;
    }
    printf("factorial of %d is %d", x,f);
    
    return 0;
}