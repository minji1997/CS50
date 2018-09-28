# include <cs50.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>


//총평
//광건은 j값을 정하는 거였다 ㅠㅠ 정말로 어려웠다 ㅠㅠㅠㅠㅠ 일단 상하 관계를 잘 파악하자.
//예를 들어 제아무리 if isalpha 밑에 int j = 0, j ++ 해도 j는 0이기만 했다!!!
//그리고 처음에는 그 key 값이 돌아오게 (loop)하게 하는것도 정말 어려웠다 ㅠ
int main(int argc, string argv[])
{
    //입력된 값 확인
    if (argc < 2)
    {
        printf("No write a value after ./casear\n");
        return 1;
    }

    string key = argv[1];

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        //checking if the ith letter of argv[1] is alphabet
        if (isalpha(argv[1][i]) == 0)
        {
            printf("You must only write letters");
            return 1;
        }
    }

    string plain = get_string("plaintext: ");
    printf("ciphertext: ");

    //difference from caesar begins

    int m;
    m = strlen(key);
    int j = 0;

    for (int i = 0, n = strlen(plain); i < n; i++)
    {
        j = j % m;

        if isalpha(plain[i])
        {
            //remember to have 4 cases (2 X 2) for vigenere
            if (isupper(plain[i]) && isupper(key[j]))
            {
                printf("%c", ((plain[i] + key[j]) % 26) + 65);
            }

            else if (isupper(plain[i]) && islower(key[j]))
            {
                printf("%c", ((plain[i] + (key[j] - 32)) % 26) + 65);
            }

            else if (islower(plain[i]) && isupper(key[j]))
            {
                printf("%c", (((plain[i] - 32) + key[j]) % 26) + 97);
            }

            else if (islower(plain[i]) && islower(key[j]))
            {
                printf("%c", (((plain[i] - 32) + (key[j] - 32)) % 26) + 97);
            }
            j++;
        }

        else
        {
            printf("%c", plain[i]);
        }

    }
    printf("\n");
}