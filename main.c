// 05주차 프로그래밍 실습

#include <stdio.h>

// // 예제 1
// int main() {
//     int temperature;

//     printf("기온을 입력하세요 : ");
//     scanf("%d", &temperature);

//     if (temperature < 0)
//         printf("현재 영하입니다.\n");
//     else 
//         printf("현재 영상입니다.\n");

//     printf("프로그램을 종료합니다.\n");

//     return 0;
// }

// 대면 실습 05
int main(void) {
    int number1, number2;
    char operator;

    printf("enter the calculation : ");
    scanf("%d %c %d", &number1, &operator, &number2);

    if (operator == '+') {
        printf("%d + %d = %d\n", number1, number2, number1 + number2);
    } else if (operator == '-') {
        printf("%d - %d = %d\n", number1, number2, number1 - number2);
    } else if (operator == '*') {
        printf("%d * %d = %d\n", number1, number2, number1 * number2);
    } else if (operator == '/') {
        if (number2 != 0) {
            printf("%d / %d = %.2f\n", number1, number2, (float)number1 / number2);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: 연산자가 잘못되었음.\n");
    }
    
    return 0;
}
