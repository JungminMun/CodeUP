#include <stdio.h>

void f(int x, int n){
    printf("%d\n", x);

    if(x == n){
        return;
    }

    f(x + 1, n);
}

int main(){
    int n;
    scanf("%d", &n);

    f(1, n);

    return 0;
}