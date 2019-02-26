/******************************************************************
    > File Name     : 006jdz.c
    > Author      : biolxy
    > Mail        : biolxy@aliyun.com 
    > Created Time: 2019年02月21日 星期四 15时07分06秒
******************************************************************/
#include<stdio.h>

int main()
{
    /* 备注： */
    // 求实数的绝对值。

    // 输入
    // 输入数据有多组，每组占一行，每行包含一个实数。
    // 输出
    // 对于每组输入数据，输出它的绝对值，要求每组数据输出一行，结果保留两位小数。
    double inputNum;
    double outputNum;
    while((scanf("%lf", &inputNum))!= EOF){
        if(inputNum<0){
            outputNum = inputNum * -1;
        } else{
            outputNum = inputNum;
        };
        printf("%.2lf\n", outputNum);
    };
    return 0;
}
