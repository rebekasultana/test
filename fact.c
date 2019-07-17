#include <stdio.h>

int factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}
int main(){
    int n, x;
    while(1){
    scanf("%d", &n);

    x = factorial(n);

    printf("the factorial of %d is: %d\n", n, x);
}
    return 0;
}
// output 2!=2
//3!=6
