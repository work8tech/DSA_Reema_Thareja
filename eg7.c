#include<stdio.h>
int main(){
    int flag = 0,i, n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (i=2;i<n;i++){
        if (n%i==0){
            flag++;
            break;
        }
    }
    printf("%s\n",(flag==0)? "Prime":"Composite");
}