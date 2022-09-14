#include "../include/common.h"

int main()
{
    char o;
    float num1,num2;
    printf("请选择要进行的运算\n");
    scanf("%c",&o);
    scanf("%f%f",&num1,&num2);
    switch(o)
   {
    case '+':
    printf("%.1f+%.1f=%.1f\n",num1,num2,num1+num2);
    break;

    case '-':
    printf("%.1f-%.1f=%.1f\n",num1,num2,num1-num2);
    break;

    case '*':
    printf("%.1f*%.1f=%.1f\n",num1,num2,num1*num2);
    break;

    case '/':
    printf("%.1f/%.1f=%.1f\n",num1,num2,num1/num2);
    break;

    default:
    exit(0);
    break;
    return 0;
}
}
