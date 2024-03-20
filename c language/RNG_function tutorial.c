#include <stdio.h>
#include <minb.h>

int main()
{
    int index;
    int bit = 4096;

    printf("bit length is :");
    scanf("%d", &bit);
    printf("\n");
    
    for (int i = 0; i < bit; i++)
    {
        index = RNG(index,bit);
        printf("index = %d\n", index);
    }
    
        return 0;
}
