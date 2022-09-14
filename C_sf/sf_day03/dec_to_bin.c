#include "../include/common.h"
#include <math.h>
int dec_bin(int n)
{
     int rem,i=1,binary=0;
     while(n!=0)
    {
	rem=n%2;
	n/=2;
	binary+=rem*i;
	i*10;
    }
	return binary;
}

int bin_dec(int n)
{
    int dec=0,i=0,rem;
    while(n!=0)
   {
	rem=n%10;
	n/=10;
	dec+=rem*pow(2,i);
	++i;
   }
	return dec;
}

int main()
{
    int n;
    char c;
    printf("十进制转换成二进制");
    printf("1.输入‘d’进行二进制转十进制\n");
    printf("2.输入‘b’进行十进制转二进制\n");
    scanf("%c",&c);
    if(c=='d'||c=='D')
   {
    printf("请输入数字：");
    scanf("%d",&n);
    printf("%d 的十进制为%d",n,bin_dec(n));
   }
    if(c=='b'||c=='B')
   {
    printf("请输入数字：");
    scanf("%d",&n);
    printf("%d的二进制为%d",n,dec_bin(n));
   }
	return 0;
}
