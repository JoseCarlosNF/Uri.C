// 1087 - Dama

#include <stdio.h>

int main()
{
    int X1, X2, Y1, Y2;

    while (1)
    {
        scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);

        if (X1 == 0 && X2 == 0 && Y1 == 0 && Y2 == 0)
            break;
        else
        {
            if ((X1 == X2) && (Y1 == Y2))
                printf("0\n");
            else if ((X1 == X2) || (Y1 == Y2))
            {
                printf("1\n");
                continue;
            }
            else if (abs(X1 - X2) == abs(Y1 - Y2))
            {
                printf("1\n");
                continue;
            }
            else
                printf("2\n");
        }
    }
    return 0;
}