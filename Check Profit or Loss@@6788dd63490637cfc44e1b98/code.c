#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    a<b? printf("Profit"): a>b? printf("Loss"): a=b ?printf(No profit No Loss);
}