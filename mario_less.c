#include <stdio.h>
#include <cs50.h>

// 처음에 default 출력
//int main(void) 다음에는 ; 없음에 유의!
int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 0 || n > 23); //n 의 범위 설정을 위해서는 항상 n 다음에 기호가 와줘야함

    //본격 문제 시작


    for (int i = 0; i < n; i++)
    {
        //이건 앞부분에 공간 만드는것
        for (int j = 0; j < n - 1 - i; j++)
        {
            printf(" ");
        }
        //이건 뒤에서 부터 #블록 쌓아올리는거
        for (int k = 0; k < i + 2; k++)
        {
            printf("#");
        }
        //세로 줄 나누기
        printf("\n");
    }

}


//순서대로 코딩이 진행된다는 걸 기억하자! 그리고 같은 tab 의 for 도 여러개 작성 가능하다!