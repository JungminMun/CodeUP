#include <stdio.h>

int main(){
    int n, sum = 0, minn = 99999;

    for(int i = 0; i < 7; i ++){
        scanf("%d", &n);

        if(n % 2 == 1){
            sum += n;

            if(n < minn){
                minn = n;
            }
        }
    }
    
    if(sum) printf("%d %d", sum, minn);
    else printf("-1");
}