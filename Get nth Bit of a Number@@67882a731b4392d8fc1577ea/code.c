#include<stdio.h>
int main(){
    int a, bit,result;
    scanf("%d %d",&a, &bit);
    result = (a>>bit)&1;
    printf("%d",result);

}