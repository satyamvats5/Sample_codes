#include <stdio.h>
int main()
{
	int i,j;
	scanf("%d",&i);
	while(i--){
		scanf("%d",&j);
		int ARR1[j],ARR2[j];
		for(int k=0;k<j;k++)
			scanf("%d",&ARR1[k]);
         		for(int k=0;k<j;k++){
 				printf("%d\t",ARR1[k]);
			}
		for(int k=0;k<j;k++)
			scanf("%d",&ARR2[k]);
		int l=0;
		for(int k=0;k<j;k++)
			l=l+(ARR1[k]*ARR2[k]);
	
	printf("%d\n",l);
	}
	return 0;
}
