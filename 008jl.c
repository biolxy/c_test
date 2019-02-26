/******************************************************************
    > File Name     : 008jl.c
    > Author      : biolxy
    > Mail        : biolxy@aliyun.com 
    > Created Time: 2019年02月21日 星期四 15时53分23秒
******************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    /* 备注： */
    // 输入两点坐标（X1,Y1）,（X2,Y2）(0<=x1,x2,y1,y2<=1000),计算并输出两点间的距离。

    // 输入
    // 第一行输入一个整数n（0<n<=1000）,表示有n组测试数据;随后每组占一行，由4个实数组成，分别表示x1,y1,x2,y2,数据之间用空格隔开。
    // 输出
    // 对于每组输入数据，输出一行，结果保留两位小数。
    int a, b, c, d;
    double distance;
    while((scanf("%d %d %d %d", &a, &b, &c, &d))!=EOF){
        distance = sqrt((c - a)*(c - a) + (d - b)*(d - b));
        printf("distance is %.2lf", distance);
    };
    return 0;
}
