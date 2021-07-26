#include <stdio.h>

int n;

int f(int n){
    if(n == 1 || n == 2){
        return 1;
    } 

    return f(n - 2) + f(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%d", f(n));
}