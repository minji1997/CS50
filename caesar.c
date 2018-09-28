# include <cs50.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main(int argc, string argv[])
{

    //입력된 값 확인
    if (argc != 2)
    {
        printf("No write a value after ./casear\n");
        return 1;
    }


    //atoi 는 string 을 숫자로 바꿔줌
    int k = atoi(argv[1]);
    if (k < 0)
    {
        printf("No k must be greater or equal to 0\n");
        return 1;
    }
    //기본적인게 세팅됐으면
    else    //중요! if 다음에 바로 뒤에 아무것도 안쓰고 else 해야함! 중간에 다른 코드들어가면 안됨
    {
        string plain = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, n = strlen(plain); i < n; i++)
        {
            //check if the character is an alphabet
            if isalpha(plain[i])
            {
                //check if the character is an upper, & print
                if isupper(plain[i])
                {
                    printf("%c", (plain[i] + (k % 26) - 65) % 26 + 65);
                }

                else if islower(plain[i])
                {
                    printf("%c", (plain[i] + (k % 26) - 97) % 26 + 97);
                }

            }

            else
            {
                printf("%c", plain[i]);
            }


        }
        printf("\n");
    }
}