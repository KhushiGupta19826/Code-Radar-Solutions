#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(ch >= 'a' && ch<= 'z'){
        printf("Lowercase");
    }
    if(ch >= 'A' && ch<= 'Z'){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }

}