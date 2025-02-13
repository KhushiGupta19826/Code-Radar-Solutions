#include<stdio.h>
int main(){
    int a, ShiftCount;
    scanf("%d", &a);
    scanf("%d", &ShiftCount);
    int result = a << ShiftCount;
    printf("%d", result);
    return 0;
}