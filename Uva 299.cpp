#include<stdio.h>
int main()
{
     int T;
     scanf("%d",&T);
     while(T--)
     {int n;
     scanf("%d",&n);
     int trains[n],i;
     for (i=0;i<n;i++)
     {scanf("%d",&trains[i]);}
     int j,S=0;
     for (i=0;i<n-1;i++)
     {
         for ( j=0;j<n-i-1;j++)
            {if (trains[j]>trains[j+1])
         { int temp=trains[j];
         trains[j]=trains[j+1];
         trains[j+1]=temp;
           S++;
         }
     }}
     printf("Optimal train swapping takes %d swaps.\n",S);}
     return 0;
}
