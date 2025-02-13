#include<stdio.h>
int main(){
    char a;
    scanf("%c", &a);
    a == 'R' ? printf("Stop"):(a == "G"? printf("Go"): (a == "Y"? printf("Slow Down"):printf("Invalid Input");))
}