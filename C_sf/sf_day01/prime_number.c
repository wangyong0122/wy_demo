#include "../include/common.h"

int main()
{
	int n,i,flag=0;
	printf("请输入数字：");
	scanf("%d",&n);
	for(i=2;i<=n/2;++i)
{
	if(n%i==0)
{
	flag=1;
	break;
}	
}	
	if(flag==0)
	printf("%d是质数",n);
	else
	printf("%d不是质数",n);
	return 0;
}
