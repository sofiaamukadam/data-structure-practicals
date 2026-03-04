#include<stdio.h>
int main(){
	int a[5],element,i;
	printf("enter element for array");
	for(i=0;i<5;i++){
	scanf("%d",&a[i]);}
	 printf("enter the searching element");
	 scanf("%d",&element);
	 for (int i=0;i<5;i++)
	 {
	 	if(a[i]==element)
		{
	 		printf("element is %d",i);
		 }
    }
    return 0;
            }
