#include<stdio.h>
int main(){
    float kgs,lbs;
    printf("enter the weight in kgs:");
    scanf("%f", &kgs);
    lbs=kgs*2.2;
    printf("\n %6.2f kilograms=%6.2f pounds\n",kgs, lbs);
    }