#include "../include/common.h"

void Reverse()
{
     char c;
     scanf("%c",&c);
     if(c!='\n')
    {
       Reverse();
       printf("%c",c);	
    }
}

int main()
{
    printf("递归颠倒字符串\n");
    printf("请输入字符串：\n");
    Reverse();
    return 0;
}
