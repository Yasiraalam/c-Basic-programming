#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,num,count_p=0,count_n=0,count_z=0;
    int arr[100];
    printf("enter num\n");
    scanf("%d ",&num);
    for(i=0; i<num; i++ )
    {
      scanf("%d ",&arr[i]);
    }
    for(i=1;i<=num; i++)
    {  
         
         if(arr[i]>0)
         { 
              count_p++;
   
         }
         else if(arr[i]<0)
         { 
              count_n++;
            
         }
         else if(arr[i]==0)
         {  
             count_z++;
            
         }
         else{
             printf("wrong entry");
             break;
         }
       


    }
    printf("positive numbers:%d\n",count_p);
    printf("negative numbers:%d\n",count_n);
    printf("zeros numbers:%d\n",count_z);
}