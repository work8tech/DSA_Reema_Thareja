#include <stdio.h>
int main(){
    int i=0,n;
    printf("Enter n: ");
    scanf("%d",&n);
    do
    {
        i += n;
        n--;
    } while (n>=0);
    printf("Sum is %d\n",i);
}