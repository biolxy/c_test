#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c, num;
    printf("input a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    for(num=10;num<=100;num++){
        if(num%3==a && num%5==b && num%7==c){
            printf("%d\n", num);
            break;
        };
    };
    if(num==101)
        printf("No answer\n");
    system("pause");
    return 0;
}
