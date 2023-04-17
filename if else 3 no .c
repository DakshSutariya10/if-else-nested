 #include<stdio.h>
 
 main()
 
{
	int a,b,c;
	
	printf("value of A=");
	scanf("%d",&a);
	
	printf("value of B=");
	scanf("%d",&b);
	
	printf("value of C=");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("A is max");
		}
		else
		{
			printf("C is max");
		}
	}
	else
	{
		if(b>c)
		{
			printf("B is max");
		}
		else
		{
			printf("C is max");
		}
	}
}
