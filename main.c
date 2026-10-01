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

// 대면 실습 03
int main(void) {
    int number = 0;   
    char character;

    printf("input a string : ");

    while ((character = getchar()) != '\n') {
        if (character >= '0' && character <= '9') {
            number++;
        }
    }

    printf("The number of digits is : %d\n", number);

    return 0;
}
