/******************************************************************
    > File Name     : 005cjzh.c
    > Author      : biolxy
    > Mail        : biolxy@aliyun.com 
    > Created Time: 2019年02月21日 星期四 10时02分41秒
******************************************************************/
#include<stdio.h>

int main()
{
    /* 备注： */
    // 输入一个百分制的成绩M，将其转换成对应的等级，具体转换规则如下：
    // 90~100为A;
    // 80~89为B;
    // 70~79为C;
    // 60~69为D;
    // 0~59为E;
    int inputnum;
    printf("plase input a num:");
    while(scanf("%d", &inputnum)!= EOF){
        if(inputnum < 60){
            printf("E\n");
        } else if( inputnum >= 60 && inputnum < 70){
            printf("D\n");
        } else if( inputnum >= 70 && inputnum < 80){
            printf("C\n");
        } else if( inputnum >= 80 && inputnum < 90){
            printf("B\n");
        } else if( inputnum >= 90 && inputnum <= 100){
            printf("A\n");
        }
    };
    return 0;
}
