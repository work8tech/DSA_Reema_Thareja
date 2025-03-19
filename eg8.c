#include <stdio.h>
int evenOdd(int n);
int main(){
    int n;
    printf("Give n: ");
    scanf("%d",&n);
    printf("%s",(evenOdd(n)==0)?"Even":"Odd");
}
int evenOdd(int n){
    return n%2;
}