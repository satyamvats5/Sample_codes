#include<stdio.h>
int rev(int);
int main()
{
	int i,j,k,sum,sum_rev;
	scanf("%d",&k);
	while(k--){
		scanf("%d %d",&i,&j);
		sum=rev(i)+rev(j);
		sum_rev=rev(sum);
		printf("%d\n",sum_rev);
	}
	return 0;
}
int rev(int x)
{
	int i=0;

	while(x!=0)
	{
		i=i*10;
		i=i+x%10;
		x=x/10;
	}
	return i;
}

