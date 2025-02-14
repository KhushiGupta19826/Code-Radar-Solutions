#include<stdio.h>
int main(){
    char ch;
    double num1 , num2,result;
    scanf("%ld %ld %c",&num1,&num2,&ch);
    switch (ch){
        case '+':
        result = num1+num2;
        printf("%d",result);
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