#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    float num1, num2;
    char opr;
    sscanf(argv[2], "%f", &num1);
    sscanf(argv[3], "%f", &num2);
    sscanf(argv[1], "%c", &opr);

    switch(opr){
        case '-':
        printf("%.2f\n", num1 - num2);
        break;

        case '+':
        printf("%.2f\n", num1 + num2);
        break;

        case '/':
        printf("%.2f\n", num1 / num2);
        break;

        case 'x':
        printf("%.2f\n", num1 * num2);
        break;
    }
    return 0;
}