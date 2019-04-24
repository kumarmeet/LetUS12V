/*Calculate and print paper size A0, A1, A3 ....... An*/
/*24-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a0width, a0height,
        a1width, a1height,
        a2width, a2height,
        a3width, a3height,
        a4width, a4height,
        a5width, a5height,
        a6width, a6height,
        a7width, a7height,
        a8width, a8height,
        a9width, a9height,
        a10width, a10height;

    a0width = 841;
    a0height = 1189;
    printf("A0 height = %d and A0 width = %d\n",a0width, a0height);

    a1height = a0width;
    a1width = a0height / 2;
    printf("A1 height = %d and A1 width = %d\n",a1height, a1width);

    a2height = a1width;
    a2width = a1height / 2;
    printf("A2 height = %d and A2 width = %d\n",a2height, a2width);

    a3height = a2width;
    a3width = a2height / 2;
    printf("A3 height = %d and A3 width = %d\n",a3height, a3width);

    a4height = a3width;
    a4width = a3height / 2;
    printf("A4 height = %d and A4 width = %d\n",a4height, a4width);

    a5height = a4width;
    a5width = a4height / 2;
    printf("A5 height = %d and A5 width = %d\n",a5height, a5width);

    a6height = a5width;
    a6width = a5height / 2;
    printf("A6 height = %d and A6 width = %d\n",a6height, a6width);

    a7height = a6width;
    a7width = a6height / 2;
    printf("A7 height = %d and A7 width = %d\n",a7height, a7width);

    a8height = a7width;
    a8width = a7height / 2;
    printf("A8 height = %d and A8 width = %d\n",a8height, a8width);

    a9height = a8width;
    a9width = a8height / 2;
    printf("A9 height = %d and A9 width = %d\n",a9height, a9width);

    a10height = a9width;
    a10width = a9height / 2;
    printf("A10 height = %d and A10 width = %d\n",a10height, a10width);


    return 0;
}
