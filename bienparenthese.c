#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int trouve(int j, int* x[], int k)
{
    for (int i = 0; i < k; i++)
    {
        if (x[i] == j)
        {
            return 1;
        }
    }
}

int main()
{

    bool valide = true;
    short j = 0, i, k = 0;
    short pos, s = 0, s2 = 0;
    char ch[40];
    int parenthese[50];
    printf(" donner une chaine de caractere : ");
    scanf("%s", &ch);

    if (ch[0] == ')' || ch[strlen(ch) - 1] == '(')
    {
        valide = false;
    }
    else
    {

        for (i = 0; i < strlen(ch); i++)
        {
            if (ch[i] == '(')
            {
                pos = i;
                s++;
            }
            if (ch[i] == ')')
            {
                s2++;
            }
        }
        if ((s == 0) || (s2 == 0) || (s != s2))
        {
            valide = false;
        }

        if (valide)
        {
            for (i = pos; i < 0; i--)
            {
                if (ch[i] == '(')
                {
                    for (j = i; j < strlen(ch); j++)
                    {
                        if (ch[j] == ')' && (trouve(j, parenthese, k) != 1))
                        {
                            printf("%d", trouve(j, parenthese, k) != 1);

                            parenthese[k] = j;
                            k++;
                        }
                        else if ((ch[j] != ')') && (j == strlen(ch) - 1))
                        {
                            valide = false;
                        }
                    }
                }
            }
        }
    }

    printf(" validite de chaine est : %d", valide);
    return 0;
}
