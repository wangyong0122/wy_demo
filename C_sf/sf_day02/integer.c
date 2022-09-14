#include "../include/common.h"
int prime(int n)
{
    int i,flag=1;
    for(i=2;i<=n/2;++i)
    if(n%i==0)
    flag=0;
    return flag;
}
int main()
{
    int n,i,flag=0;
    printf("检查一个数能否表示为两个质数之和\n");
    printf("请输入数字：");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
   {
	if(prime(i)!=0)
       {
	if(prime(n-i)!=0)
	{
	  printf("%d=%d+%d\n",n,i,n-i);
	  flag=1;
	}
       }
   }
	if(flag==0)
	printf("%d 不能表示为两个质数之和\n",n);
	return 0;
}
