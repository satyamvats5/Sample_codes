#include<stdio.h>
int main()
{
	int i,j,k;
	while(1){
		scanf("%d %d %d",&i,&j,&k);
		if((i==0)&&(j==0)&&(k==0)){
			return 0;
		}else if((k+i)==2*j){
			printf("AP\t%d\n",k+(j-i));
		}else{
			printf("GP\t%d\n",k*(j/i));
		}
	}
}

