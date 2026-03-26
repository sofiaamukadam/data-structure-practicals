#include <stdio.h>
int main(){
	int a[5],i,element;
	
	for(i=0;i<5;i++){
		printf("enter element for a[%d]",i);
		scanf("%d",&a[i]);
	}
	 printf("Enter searching element:");
	 scanf("%d",&element);
	 
	 for(i=0;i<5;i++){
	 	if (a[i]==element){
		 
	 	printf("element is in a[%d]",i);
	 }
}
	 return 0;
	 
}
