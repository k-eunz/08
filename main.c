#include <stdio.h>

#define SIZE 5

int main(void)
{
    int i;
    int score[SIZE];
    int sum = 0;

    for(i=0;i<SIZE;i++)
    {
        printf("점수를 입력하세요 : ");
        scanf("%d", &score[i]);
        sum += score[i];
    }

    printf("성적평균:%d\n", sum/SIZE);

    return 0;
}
