#include<stdio.h>
#include<string.h>

int main(){
    int keylength,msglength,i,j;
    char data[100],data1[100],k[100],k1[100],temp[100],Quot[100],Rem[100];
    printf("Enter data:");
    scanf("%s",data);
    strcpy(data1,data);
    printf("Enter the Polynomial:");
    scanf("%s",k);
    msglength = strlen(data);
    keylength = strlen(k);
    strcpy(k1,k);
    for(i=1;i<keylength;i++){
    strcat(data,"0");
    }
    printf("String after adding zeroes:%s\n",data);
    for (i=0;i<keylength;i++){
            temp[i]=data[i];
    }
    for(i=0;i<msglength;i++) {
    Quot[i]=temp[0];
    if(Quot[i]=='0'){
        for (j=0;j<keylength;j++)
          k[j]='0';
    }else{
        for (j=0;j<keylength;j++)
		 k[j]=k1[j];
    }
    for(j=keylength-1;j>0;j--) {
        if(temp[j]==k[j]){
            Rem[j-1]='0';
        }else{
            Rem[j-1]='1';
        }
    }
		Rem[keylength-1]=data[i+keylength];
		strcpy(temp,Rem);
}
	strcpy(Rem,temp);
    Quot[msglength] = '\0';
    Rem[keylength-1] = '\0';

	printf("Quotient:%s\n",Quot);
	printf("Remainder:%s\n",Rem);
	printf("Data received at receiver side:");
	strcat(data1,Rem);
	printf("%s",data1);
	printf("\n");


	return 0;
}
