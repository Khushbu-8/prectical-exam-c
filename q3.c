#include<stdio.h>

void main(){
	
int i;
int n;
cnt=0;
  
  FILE *p;
  
  p=fopen("febo.txt","w");
  
  if(i!=0){
  	printf("CAN'T open file ...");
  }
  
for(i=1; i<=n; i++){
	printf("%d",i);
	cnt++;
}
  fprintf(p,cnt);

}
