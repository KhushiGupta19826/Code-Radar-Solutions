#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int sign = a>0?1: a<0?-1: 0;
    switch (sign){
        case 1:
        printf("Positive");
        break;
        case -1:
        printf("Negative");
        break;
        default:
        printf("Zero");
    }
}