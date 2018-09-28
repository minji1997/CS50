#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
    float n;
    do
    {
        printf("Change owed: ");
        n = get_float();
    }
    while (n <= 0);
// 100개 곱해서 환산시켜 주기
//솔직히 c언어에서 % 랑 // 차이 확실히는 모르겠다 흑 ㅠㅠ 나중에 해야지
    int coin = round(n * 100);
    int quarter = (coin / 25);
    int dime = (coin % 25) / 10;
    int nickel = (coin % 25 % 10) / 5;
    int penny = (coin % 25 % 10 % 5) / 1;

    int total = quarter + dime + nickel + penny;
    printf("%d\n", total);
}