/******************************************************************
    > File Name     : 007qtj.c
    > Author      : biolxy
    > Mail        : biolxy@aliyun.com 
    > Created Time: 2019年02月21日 星期四 15时17分47秒
******************************************************************/
#include<stdio.h>
#define PI 3.1415927
int main()
{
    /* 备注： */
    // 根据输入的半径值，计算球的体积。

    // 输入
    // 输入数据有多组，每组占一行，每行包括一个实数，表示球的半径。
    // 输出
    // 输出对应的球的体积，对于每组输入数据，输出一行，计算结果保留三位小数。
    double inputNum, volume;
    while((scanf("%lf", &inputNum))!= EOF){
        volume = PI * inputNum * inputNum * inputNum * 4 / 3;
        printf("volume is: %.2lf\n", volume);
    };
    return 0;
}

