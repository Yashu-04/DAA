 #include<stdio.h>
int main()
{
	int i,n,r,num,sum=0,count=0;
	count++;
	count++;
	printf("enter a number");
	count++;
	scanf("%d",&n);
	count++;
	num=n;
	count++;
	while(n!=0)
	{count++;
		
		r=n%10;
		count++;
		sum=sum+r*r*r;
		count++;
		n=n/10;
		count++;
	}
	count++;
	if(sum==num)
	{
		printf("%d is an armstrong number",num);
		count++;
	}
	else
	{
		printf("%d is not an armstrong number",num);
		count++;
	}
	count++;
	printf("%d is time complexity",count);
	return 0;
}
