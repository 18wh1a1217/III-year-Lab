#include<stdio.h>
int main(){
int bucket_size,output_rate,input_lines;
  printf("Enter the bucket size and output rate:\n");
  scanf("%d %d",&bucket_size,&output_rate);
  printf("Enter the  input lines \n");
  scanf("%d",&input_lines);
  int a[input_lines];
   printf("Enter the  input packet rates of %d lines :\n",input_lines);
   for(int i=0;i<input_lines;i++){
    scanf("%d",&a[i]);
   }
   int iter,t=0;
   printf("Enter number of iterations");
   scanf("%d",&iter);
   for(int i=0;i<iter;i++){
    printf("Iteration %d\n",i+1);
    for(int j=0;j<input_lines;j++){
         t = t + a[j];
         if(t <=bucket_size){
            printf("Input from line %d with rate %d is added to the bucket\n Current bucket size is %d\n",j+1,a[j],t);
         }
         else{
            t = t -a[j];
            printf("Input from line %d with rate %d is thrown out of the bucket\n Current bucket size is %d\n",j+1,a[j],t);
         }
    }

    if(t <= output_rate){
      printf("packet sent to output line at a rate %d",t);
    t=0;
    printf("Current bucket size is %d",t);
    }
    else{
        t =t -output_rate;
        printf("Packets sent to the output line at rate %d\n current bucket size is %d\n",output_rate,t);
    }

   }
   return 0;

}
