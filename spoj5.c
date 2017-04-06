#include<stdio.h>
int main()
{
	int i;
	while(1){
		scanf("%d",&i);
		if(i!=0){
			int  res=0;
			for(int j=i;j>0;j--){
				res=res+j*j;
			}
			printf("%d\n",res);																		}
		else return 0;
	}
	return 0;
}
