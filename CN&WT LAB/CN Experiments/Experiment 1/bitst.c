#include<stdio.h>
int main(){
int n,c=0;
printf("enter number of frames\n");
scanf("%d",&n);
int sender[30] , stuffData[40],i,j=0;
printf("\nenter frames:");
for(i=0;i<n;i++){
scanf("%d",&sender[i]);
}
for(i=0;i<n;i++){
if(sender[i] == 1){
c++;
}
else{
c = 0;
}
stuffData[j] = sender[i];
j++;
if(c==5 && i!=n-1){
c = 0;
stuffData[j] = 0;
j++;
}
}
printf("\nAt sender , after stuffing : 01111110");
for(i=0;i<j;i++){
printf("%d",stuffData[i]);
}

printf("01111110\n\nAt reciver side , after destuffing : ");
c=0;
for(i=0;i<j;i++){
if(stuffData[i] == 1){
c++;
}
else{
c=0;
}
printf("%d",stuffData[i]);
if(c==5){
i++;
}
}
printf("\n");
return 0;
}