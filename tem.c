#include<stdio.h>
int cmp(char *);
int main()
{
	int i;
	char A[100000];
	scanf("%d",&i);
	while(i--){
		scanf("%s",A);
		int res=cmp(A);
		if(res==0)
			printf("no\n");
		else 
		printf("yes\n");
	}

	return 0;
}
int cmp(char *x)
{
	int i=0;
	int j=x[i];
	i++;
	while(j=='C'&&j!='\0'){
		j=x[i];
		i++;
	}
	while((j=='E'||j=='C')&&j!='\0'){
		if(j=='C')
			return 0;
		j=x[i];
		i++;
	}
	while((j=='S'||j=='E'||j=='C' )&&j!='\0'){
		if(j=='C'||j=='E')
			return 0;
		j=x[i];
		i++;
	}
	return 1;
}
