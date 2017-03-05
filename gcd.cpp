#include <stdio.h>

void gcd(int g1, int g2){
	
	g1 = g1 % g2;
	if(g1 == 0)
		printf("%d", g2);
	else
		gcd(g2, g1);
	
	
}

int main(){
	int g1, g2;
	scanf("%d %d", &g1, &g2);
	
	if(g1>g2)
		gcd(g1, g2);
	else
		gcd(g2, g1);
	
	
	return 0;
}
