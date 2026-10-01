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

// 대면 실습
int main() {
    int number;
    printf("정수 하나를 입력하세요 : ");
    scanf("%d", &number);

    if (number > 0)
        printf("입력한 정수는 양수입니다.\n");
    else if (number < 0)
        printf("입력한 정수는 음수입니다.\n");
    else
        printf("입력한 정수는 0입니다.\n");

    return 0;
}