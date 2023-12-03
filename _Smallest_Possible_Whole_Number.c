#include <stdio.h>

int main() {
   int t;
   printf("Enter the number of test cases : \n");
   scanf("%d",&t);
   while(t--)
   {
       int N, K;
       printf("Enter N: \n");
       scanf("%d",&N);
       printf("Enter K: \n");
       scanf("%d",&K);
       if(N>K)
       {
           N=N-K;
           printf("%d\n",N);
       }
       else
       {
           printf("%d\n",N);
           
       }
       
   }

    return 0;
