#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
 	int size=10,length=0;
	char *str;
        str=(char *)calloc(size ,4);
	printf("original size allocated=%lu\n",malloc_usable_size(str));
	printf("ENter the size of string=");
	scanf("%d",&length);
	if(length>size)
	{
		size=length;
		str=(char *)realloc(str,size * sizeof(char));
		printf(" What's the word?\n");
		scanf("%s",str);
	}
	else
	{
		printf("What's the word?\n");
		scanf("%s",str);
	}
	printf("%s\n",str);
	free(str);
	return 0;
}
