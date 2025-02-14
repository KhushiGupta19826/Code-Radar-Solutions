#include<stdio.h>
int main(){
    char ch;
    int num1 , num2;
    scanf("%d %d",&num1,&num2);
    scanf("%c",&ch);
    switch (ch){
        case "+":
        printf("%d",num1 + num2);
        break;
        case '-':
        printf("%d",num1 - num2);
        break;
        case '*':
        printf("%d",num1*num2);
        break;
        case '/':
        printf("%d",num1/num2);
        break;
        default:
        printf("error");
    }

}