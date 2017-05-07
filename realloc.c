#include<malloc.h>
#include<stdio.h>
#include<stdlib.h>
 struct dat{
	int* A;
	int l;
      }dat;
int x=10;
void gt_data();
void average();
int main()
{
	gt_data();
	average();
	free(dat.A);
	return 0;
}
void gt_data()
{
	int i,l=0;
	int* A;
	A=(int*)calloc(x,sizeof(int));
	printf("Originally allocated space=%lu\n",malloc_usable_size(A));
	scanf("%d",&i);
	while(i!=0){
		printf("x=%d,l=%d\t",x,l);
		A[l]=i;
		l++;
		if(x<=l){
			x+=2;
			A=realloc(A,sizeof(int));
			printf("\n memory reallocated\n");
			printf("size of newly allocated space=%lu\n",malloc_usable_size(A));
			}
		scanf("%d",&i);
	}
	dat.A=A;
	dat.l=l;
	return;
}
void average()
{
	int res=0,i;
	for(i=0;i<dat.l;i++)
 		res=res+dat.A[i];
	res=res/dat.l;
	printf("required value is =%d\n",res);
	return;
}
