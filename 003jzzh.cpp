#include <stdio.h>
#include <stdlib.h>
int printTurnedNum(int num){
    if(num<10){
        printf("%d", num);
    }else if(num==10){
        printf("A");
    } else if(num==11){
        printf("B");
    }else if(num==12){
        printf("C");
    }else if(num==13){
        printf("D");
    }else if(num==14){
        printf("E");
    }else if(num==15){
        printf("F");
    };
    return 0;
}

int main()
{
    // ����һ��ʮ������num������ת����binaryNum�����������
    int num, tmpNum, binaryNum;
    printf("input num, binaryNum:\n");
    scanf("%d %d",&num,&binaryNum);
    printf("you input num is %d %d\n",num, binaryNum);
    while(num>binaryNum){
        tmpNum = num/binaryNum;
        num = num%binaryNum;
        printTurnedNum(num);
        };
    };
    printTurnedNum(num);
    system("pause");
    return 0;
}


