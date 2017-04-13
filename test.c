#include <stdio.h>


int check(char [],char [],char [],char[],char [],char [],char [],char []);
int main()
{
	int i, j, res;
	scanf("%d",&i);
       getchar();
	while(i--){
		char ARR1[11],ARR2[11],ARR3[11],ARR4[11],ARR5[11],ARR6[11],ARR7[11],ARR8[11];
		int c;
		for(j = 0 ; j <= 10 && (c = getchar()) != EOF && c != '\t' && c != '\n' && c != ' '; j++)
			ARR1[j] = c;
		ARR1[j] = '\0';
		for(j = 0 ; j <= 10 && (c = getchar() )!= EOF && c != '\t'  && c != ' ' && c!= '\n' ;j++)
			ARR2[j]=c;
		ARR2[j]='\0';
		for(j=0;j<=10 && (c=getchar())!= EOF && c!='\t'  && c!='\n' && c!=' ';j++)
			ARR3[j]=c;
		ARR3[j]='\0';
		for(j=0;j<=10 && (c=getchar())!=EOF && c!='\t' && c!='\n' && c!=' ';j++)
			ARR4[j]=c;
		ARR4[j]='\0';
		for(j=0;j<=10 && (c=getchar())!=EOF && c!='\t'  && c!=' '&& c!='\n';j++)
			ARR5[j]=c;
		ARR5[j]='\0';
		for(j=0;j<=10 && (c=getchar())!= EOF && c!='\t'   && c!=' '&& c!='\n';j++)
			ARR6[j]=c;
		ARR6[j]='\0';
		for(j=0;j<=10 && (c=getchar())!=EOF && c!='\t' && c!='\n' && c!=' ';j++)
			ARR7[j]=c;
		ARR7[j]='\0';
		for(j=0;j<=10 && (c=getchar())!=EOF && c!='\t' && c!='\n' && c!=' ';j++)
			ARR8[j]=c;
		ARR8[j]='\0';	
		res=check(ARR1,ARR2,ARR3,ARR4,ARR5,ARR6,ARR7,ARR8);
		if(res>=2)
			printf("similar\n");
		else 
			printf("dissimilar\n");
	}
	return 0;
}
int check(char X[],char Y[],char Z[],char W[],char A[],char B[],char C[],char D[])
{
	int res=0,i;
	for(i=0;i<=12;i++){
		if((X[i]=='\0'&&A[i]!='\0')||(X[i]!='\0'&&A[i]=='\0'))
			break;
		if(X[i]!=A[i])
			break;
		if(X[i]=='\0'&&A[i]=='\0'){
			res++;
			break;
		}	
	}

			
	for(i=0;i<=11;i++){
		if((X[i] == '\0' && B[i] != '\0') || (X[i] != '\0' && B[i] == '\0'))
			break;
		 if(X[i]!=B[i])
			break;
		if(X[i]=='\0' && B[i]=='\0'){
			res++;
			break;	
		} 
	}
			
		for(i=0;i<=11;i++){
		if((X[i] == '\0' && C[i] != '\0')||(X[i] !='\0' && C[i]== '\0'))
			break;
		 if(X[i]!=C[i])
			break;
		if(X[i]=='\0' && C[i]=='\0'){
			res++;
		break;
		}
	}
	 
	for(i=0;i<=11;i++){
		if((X[i]=='\0'&& D[i]!='\0')||(X[i]!='\0'&& D[i]=='\0'))
			break;
		 if(X[i]!=D[i])
			break;
		if(X[i]=='\0' && D[i]=='\0'){
			res++;
		     	break;
		}
	}

	 
	for(i=0;i<=11;i++){
		if((Y[i]=='\0'&&A[i]!='\0')||(Y[i]!='\0'&&A[i]=='\0'))
			break;  
		 if(Y[i]!=A[i])
			break;
		if(Y[i]=='\0' && A[i]=='\0'){
			res++;
			break;
		}
	}

	for(i=0;i<=11;i++){
		if((Y[i]=='\0'&&B[i]!='\0')||(Y[i]!='\0'&&B[i]=='\0'))
			break;
		 if(Y[i]!=B[i])
			break;
		if(Y[i]=='\0' && B[i]=='\0'){
			res++;
			break;
		}
	}
	
	for(i=0;i<=11;i++){
		if((Y[i]=='\0'&&C[i]!='\0')||(Y[i]!='\0'&&C[i]=='\0'))
			break;  
		 if(Y[i]!=C[i])
			break;
		if(Y[i]=='\0' && C[i]=='\0'){
			res++;
			break;
		}
	}

	
	for(i=0;i<=11;i++){
		if((Y[i]=='\0'&&D[i]!='\0')||(Y[i]!='\0'&&D[i]=='\0'))
			break;
		 if(Y[i]!=D[i])
			break;
		if(Y[i]=='\0' && D[i]=='\0'){
			res++;
			break;
		}
	}
	
	for(i=0;i<=11;i++){
		if((Z[i]=='\0' && A[i]!='\0')||(Z[i]!='\0' && A[i]=='\0'))
			break;
		 if(Z[i]!=A[i])
			break;
		if(Z[i]=='\0' && A[i]=='\0'){
			res++;
			break;
		}	
	}
	
	for(i=0;i<=11;i++){
		if((Z[i]=='\0' && B[i]!='\0')||(Z[i]!='\0' && B[i]=='\0'))
			break;
		 if(Z[i]!=B[i])
			break;
		if(Z[i]=='\0' && B[i]=='\0'){
			res++;
			break;
		}	
	}

	
	for(i=0;i<=11;i++){
		if((Z[i]=='\0' && C[i]!='\0')||(Z[i]!='\0' && C[i]=='\0'))
			break;
		 if(Z[i]!=C[i])
			break;
		if(Z[i]=='\0' && C[i]=='\0'){
			res++;
			break;
		}
	}

	
	for(i=0;i<=11;i++){
		if((Z[i]=='\0' && D[i]!='\0')||(Z[i]!='\0' && D[i]=='\0'))
			break;
		 if(Z[i]!=D[i])
			break;
		if(Z[i]=='\0' && D[i]=='\0'){
			res++;
			break;
		}
	}

	
	for(i=0;i<=11;i++){
		if((W[i]=='\0' && A[i]!='\0')||(W[i]!='\0' && A[i]=='\0'))
			break;
		 if(W[i]!=A[i])
			break;
		if(W[i]=='\0' && A[i]=='\0'){
			res++;
			break;
		}	
	}
	for(i=0;i<=11;i++){
		if((W[i]=='\0' && B[i]!='\0')||(W[i]!='\0' && B[i]=='\0'))
			break;
		 if(W[i]!=B[i])
			break;
		if(W[i]=='\0' && B[i]=='\0'){
			res++;
			break;
		}	
	}

	
	for(i=0;i<=11;i++){
		if((W[i]=='\0' && C[i]!='\0')||(W[i]!='\0' && C[i]=='\0'))
			break;
		 if(W[i]!=C[i])
			break;
		if(W[i]=='\0' && C[i]=='\0'){
			res++;
			break;
		}	
	}
	
	for(i=0;i<=11;i++){
		if((W[i]=='\0' && D[i]!='\0')||(W[i]!='\0' && D[i]=='\0'))
			break;
		 if(W[i]!=D[i])
			break;
		if(W[i]=='\0' && D[i]=='\0'){
			res++;
			break;
		}
	}

	
	return res;
}
