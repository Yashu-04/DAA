#include<stdio.h>
int main()
{
	int a[50],i,n,odd=0,even=0;
	//printf("enter the count:");//
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
   //printf("enter the %d element :",i);//
	scanf("%d",&a[i]);
    }
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("the no of odd=%d\n",odd);
	printf("the no of even=%d",even);
	return 0;
}

