#include<stdio.h>
#include<string.h>

int main(){
int n,i;
printf("frames : ");
scanf("%d",&n);
char data[20][50];
int length[20];
for(i=0;i<n;i++){
printf("frame %d : ",i+1);
scanf("%s",data[i]);
length[i] = strlen(data[i])+1;
}
printf("AT THE SENDER\n");
printf("Data as frames :\n");
for(i=0;i<n;i++){
printf("frame %d :%d%s\n",i+1,length[i],data[i]);
}
printf("Data transmitted :");
for(i=0;i<n;i++){
printf("%d%s",length[i],data[i]);
}
    printf("\nAT THE RECIEVER");
    printf("the data after removing count char : ");
    for(i=0;i<n;i++){
        printf("%s ",data[i]);
    }
    printf("\nthe data in frame form:\n");
    for(i=0;i<n;i++){
        printf("frame %d :%s\n",i+1,data[i]);
    }
    return 0;
}