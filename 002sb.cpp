#include <stdio.h>
#include <stdlib.h>
int main(){
// https://bingyishow.top/Technical-article/16.html#%E5%85%B0%E5%B7%9E%E7%83%A7%E9%A5%BC
    int n;
    int k;
    int total;
    int result;
    printf("input n, k\n");
    scanf("%d%d", &n, &k);
    total = n*2;

    if(total<k){
        result = 2;
    } else{
        result = total/k + 1;
    }
    printf("%d\n",result);
    system("pause");
}
