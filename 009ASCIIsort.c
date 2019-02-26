/******************************************************************
    > File Name     : 009ASCIIsort.c
    > Author      : biolxy
    > Mail        : biolxy@aliyun.com 
    > Created Time: 2019年02月25日 星期一 16时29分12秒
******************************************************************/
#include <stdio.h>


void Exchg2(char *px, char *py)
{
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

int main()
{
    /* 备注： */
    // 输入三个字符（可以重复）后，按各字符的ASCII码从小到大的顺序输出这三个字符。

    // 输入
    // 第一行输入一个数N,表示有N组测试数据。后面的N行输入多组数据，每组输入数据都是占一行，有三个字符组成，之间无空格。
    // 输出
    // 对于每组输入数据，输出一行，字符中间用一个空格分开。
    char a, b, c;
    int aa, bb, cc;
    aa = (int) a;
    bb = (int) b;
    cc = (int) c;
    scanf("%c%c%c", &a, &b, &c);
    // if((int)a > (int)b){
    //     Exchg2(&a, &b);
    // };
    // if((int)a > (int)c){
    //     Exchg2(&a, &c);
    // };
    // if((int)b > (int)c){
    //     Exchg2(&b, &c);
    // };
    printf("%c %d\n", a ,aa);
    printf("%c %d\n", b, bb);
    printf("%c %d\n", c, cc);
    // printf("ascii number is %d %d %d\n", (int)a, (int)b, (int)c);
    printf("%c %c %c \n", a, b,c);
}