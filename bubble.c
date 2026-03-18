#include <stdio.h>
int main()
{
	int array [100],n,i,key;
	int low,high,mid;
	int found=0;
	
	 printf("enter number for element:");
	 scanf("%d", &n);
	 
	 printf("enter sorted element:\n");
	 
	 for(i=0; i<n; i++)
	 {
	 	scanf("%d", &array[i]);
	 }
	 printf("enter element to search:\n");
	 scanf("%d", &key);
	 
	 low=0;
	 high=n-1;
	 
	 while(low<=high)
	 {
	 	mid=(low+high) /2;
	 	if(array[mid]==key)
	 	{
	 		printf("element found position %d",mid+1);
	 		found=1;
	 		break;
		 }
         else if (key<array[mid])
        {
        	high=mid-1;
		}
		else 
		{
			low=mid+1;
		}
	 }
	 if (found==0)
	 {
	 	printf("Element not found");
	 }
	 return 0;
}
