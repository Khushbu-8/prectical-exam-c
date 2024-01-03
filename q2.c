//output:
//	
//	Enter any number: 10
//	Even number is : 2 4 6 8 10

#include<stdio.h>

int cube(int j){
	return j;
	
}

 void main(){
 	
 int n;
 	int i;
 	int c;
 
 	
 	printf("Enter arary size :");
 	scanf("%d",&n);
 	
	int a[n];
	
	 	
 	for(i=1; i<n; i++){
 		
 			printf("Enter a[%d]:",i);
 			scanf("%d",&a[i]);
	 }

	 	
 		printf("square number is :");
 	for (i=1; i<=n; i++){
 		c=a[i]*a[i];
		 }
		
	 cube(c);
 
 
 	
 }
