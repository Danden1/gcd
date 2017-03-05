#include <stdio.h>
unsigned long long fibo(int n){
	unsigned long long a, b, tmp;
    a = 0; b = 1;
 	if(n==0)
 		return 0;
    for (int i = 1; i < n; i++){
        tmp = b; b = a + b; a = tmp;
	}
	return b;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%llu", fibo(n)*4+fibo(n-1)*2);
}
