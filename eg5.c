#include<stdio.h>
int main(){
    int m,n,i;
    i = 0;
    printf("Enter value of m: ");
    scanf("%d",&m);
    printf("Enter value of n: ");
    scanf("%d",&n);
    while(m<=n){
        i += m;
        m++;
    }    
    printf("%d is sum of the numbers.", i);
}
