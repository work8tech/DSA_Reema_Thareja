#include<stdio.h>
int main(){
    int num;
    printf("Give number: ");
    scanf("%d",&num);
    printf("%s\n",(num%2==0)? "True": "False");
}