#include<stdio.h>
int main()
{
int arr[100],i,j,n,count=0,a,t;
scanf("%d",&t);
while(t--)
{

scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}	
for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				count++;
				arr[i]=arr[i]^arr[j];
			    arr[j]=arr[i]^arr[j];
			    arr[i]=arr[i]^arr[j];
			}
		}
	}
   printf("Optimal train swapping takes %d swaps.\n",count);
   count=0;
   }
   return 0;
}
