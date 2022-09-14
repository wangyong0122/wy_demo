#include "../include/common.h"
//*号半金字塔
void xtrangle1()
{
	int i,j,rows;
	printf("请输入阶数：");
	scanf("%d",&rows);
	for(i=1;i<=rows;++i)
{
	for(j=1;j<=i;++j)
{
	printf("*");
}
	printf("\n");
}

}
//*号倒半金字塔
void xtrangle2()
{
	int i,j,rows;
	printf("请输入阶数：");
	scanf("%d",&rows);
	for(i=rows;i>=1;--i)
{
	for(j=1;j<=i;++j)
{
	printf("*");
}
	printf("\n");
}
	
}
//*号全金字塔
void Xtrangle1()
{
	int i,s,rows,k=0;
	printf("请输入阶数：");
	scanf("%d",&rows);
	for(i=1;i<=rows;++i)
{
	for(s=1;s<=rows-i;++s)
{
	printf(" ");
}
	while(k!=2*i-1)
{
	printf("*");
	++k;
}
	k=0;
	printf("\n");
}
	
}
//*号倒全金字塔
void Xtrangle2()
{
	int i,s,rows,j;
	printf("请输入阶数：");
	scanf("%d",&rows);
	for(i=rows;i>=1;--i)
{
	for(s=0;s<=rows-i;++s)
	printf(" ");
	for(j=i;j<=2*i-1;++j)
	printf("*");
	for(j=0;j<i-1;++j)
	printf("*");
	printf("\n");


}
}
//数字半金字塔
void Ntrangle()
{
	int i,j,rows;
        printf("请输入阶数：");
        scanf("%d",&rows);
        for(i=1;i<=rows;++i)
{
        for(j=1;j<=i;++j)
{
        printf("%d",j);
}
        printf("\n");
}
        
}

void show()
{
	int num=0;
	char YorN='y';
	while(1)
	{
	printf(" 1、星号半三角形\n 2、星号半金字塔\n 3、星号全金字塔\n 4、星号倒金字塔\n 5、数字三角形\n");
	printf("请输入需要显示的内容：");
	scanf("%d",&num);
	switch(num)
	{
	case 1:
	xtrangle1();
	break;
	case 2:
	xtrangle2();
	break;
	case 3:
	Xtrangle1();
	break;
	case 4:
	Xtrangle2();
	break;
	case 5:
	Ntrangle();
	break;
	default:
	exit(0);
	break;
	}
}
}
int main()
{	
	show();
	return 0;
}



