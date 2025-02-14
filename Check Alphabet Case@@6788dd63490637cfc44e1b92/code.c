#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch >= 'a' && ch<= 'z'){
        printf("Lowercase");
        break;
    }
    else if(ch >= 'A' && ch<= 'Z'){
        printf("Uppercase");
        break;
    }
    else{
        printf("Not an alphabet");
    }

}