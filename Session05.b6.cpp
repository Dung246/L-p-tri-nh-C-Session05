#include <stdio.h> 
 
int main() { 
    char operator; 
    double number1, number2; 
    printf("Lua chon cua ban : "); 
    scanf("%c", &operator); 
    printf("Enter two numbers: "); 
    scanf("%lf %lf", &number1, &number2); 
    switch (operator) { 
        case +: 
            printf("Tong cua hai so la : %.2lf\n", number1 + number2); 
            break; 
        case -: 
            printf("Hieu cua hai so la: %.2lf\n", number1 - number2); 
            break; 
        case *: 
            printf("Tich cua hai so la: %.2lf\n", number1 * number2); 
            break; 
        case /: 
            if (number2 != 0) { 
                printf("Thuong cua hai so la: %.2lf\n", number1 / number2); 
        default: 
            printf("Moi nhap lai \n"); 
    } 
 
    return 0;
  
