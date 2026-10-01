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

// 대면 실습 04
int main(void) {
    int number = 0;  
    int sum = 0; 
    
    printf("정수를 입력하세요 : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        sum += i;

    }

    printf("1부터 %d까지의 합은 %d\n", number, sum);

    return 0;
}
