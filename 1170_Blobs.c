// 1170 - Blobs

#include <stdio.h>
int main()
{
    int N, i, dias;
    float c;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        dias = 0;
        scanf("%f", &c);
        while (c > 1)
        {
            c -= c*0.5;
            dias += 1;
        }
        printf("%d dias\n", dias);
    }
    return 0;
}
