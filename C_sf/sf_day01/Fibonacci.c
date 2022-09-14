#include "../include/common.h"

int main()
{
	int count,n,t1=0,t2=1,display=0;
	printf("请输入数字：");
	scanf("%d",&n);
	printf("对应的斐波纳切数列为：%d+%d+",t1,t2);
	count=2;
	while(count<n)
{
	display=t1+t2;
	t1=t2;
	t2=display;
	++count;
	printf("%d+",display);
}
	return 0;
}
