#include <stdio.h>

int RNG(int RNG_index, int Bit)
{
    RNG_index = RNG_index * 5 + 1 % Bit;
    return 0;
}

int main()
{
    int index;
    int bit = 4096;

    printf("bit長は:");
    scanf("%d", &bit);
    printf("\n");
    
    for (int i = 0; i > bit; i++)
    {
        index = RNG(index,bit);
        printf("index = %d\n", index);
    }
    
        return 0;
}
