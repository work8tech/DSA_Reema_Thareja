#include<stdio.h>
int main(){
    float radius;
    double area;
    printf("\nEnter Circle Radius: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("\nArea = %.2lf\n", area);
}