#include <stdio.h>
int main() {
    int num1, num2, result;
    char ch;
    scanf("%d %d %c", &num1, &num2, &ch);
    switch (ch) {
        case '+':
            result = num1 + num2;
            printf("%d", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d", result);
            } else {
                printf("error");
            }
            break;
        default:
            printf("error");
    }

    return 0;
}
