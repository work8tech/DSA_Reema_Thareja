#include<stdio.h>
int main(){
    float f_num;
    int i_num;
    printf("Enter any integer: ");
    scanf("%d",&i_num);
    f_num = (float)i_num;
    printf("The floating point vaiant of %d is %f\n", i_num,f_num);
}