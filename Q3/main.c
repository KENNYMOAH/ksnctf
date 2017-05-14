#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    int input[21] = {70,152,195,284,475,612,791,896,810,850,737,1332,1469,1120,1470,832,1785,2196,1520,1480,1449};
    for (count = 0; count < 21; count++)
    {
        input[count] /= (count + 1);
        printf("%c", input[count]);
    }

    printf("\n");
    return 0;
}