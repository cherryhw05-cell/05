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

// 대면 실습 06
int main(void) {
    int number;
    int answer = 60;
    int count = 0;

    do {
        printf("정답 숫자를 맞춰보세요! : ");
        scanf("%d", &number);
        count++;

        if (number < answer)
            printf("입력 숫자가 정답보다 작음!\n");
        else if (number > answer)
            printf("입력 숫자가 정답보다 큼!\n");

    } while (number != answer);

    printf("정답!\n");
    printf("시도 횟수: %d\n", count);

    return 0;
}

