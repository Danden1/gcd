#include <stdio.h>
 
int main(){
    int n,m,a,re;
    
    scanf("%d %d", &n, &m);
    
    if( n<=m )
        printf("%d", n);
    else{
        a=n/(m+1);
        re = m*a;
        a=n%(m+1);
        re+=a;
        printf("%d",re);
    }
    
}