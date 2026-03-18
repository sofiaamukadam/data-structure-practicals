
#include<stdio.h>
int main(){
	int a[10],pos,element,n=5;
	 for (int i=0;i<n;i++){
	 	printf("enter a number for a[%d]",i);
	 	scanf("%d",&a[i]);
		 }
	 	
	 	printf("enter position");
	 	scanf("%d",&pos);
	 	printf("enter element");
	 	scanf("%d",&element);
	for (int i=n;i>pos;i--){
		a[i]=a[i-1];}
		a[pos]=element;
		n++;
    for(int i=0;i<n;i++){
    	printf("%d",a[i]);
	}
	return 0;
	 }
	 
