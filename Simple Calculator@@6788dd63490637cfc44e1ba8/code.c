#include<stdio.h>
int main(){
    char ch;
    double num1 , num2,result;
    scanf("%ld %ld %c",&num1,&num2,&ch);
    switch (ch){
        case '+':
        result = num1+num2;
        printf("%ld",result);
        break;
        case '-':
        result = num1-num2;
        printf("%ld",result);
        break;
        case '*':
        result = num1*num2;
        printf("%ld",result);
        break;
        case '/':
        result = num1/num2;
        printf("%ld",result);
        break;
        default:
        printf("error");
    }

}