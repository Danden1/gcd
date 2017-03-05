#include <stdio.h>

int main(){
	int a,b,c,d,tmp;
	
	scanf("%d %d %d %d", &a,&b,&c,&d);
	if(a >b){
		tmp = b; b=a;a=b;}
	if(c >d){
		tmp =d; d=c; c=tmp;}
	
	
	if(a<c && c<b && d>b){
		printf("cross");
		return 0;
	}
	if(a<d && d<b && (c>b||c<a)){
		printf("cross");
		return 0;
	}
	
	printf("not cross");
}
