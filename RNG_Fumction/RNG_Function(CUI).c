#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int *BinaryData;
} data;

int RNG_Function(int INPUT, int Bit)
{
    int RNG_INDEX = (INPUT * 5 + 1) % Bit;
    return RNG_INDEX;
}

void demo(int Bit)
{
    data Data;
    Data.BinaryData = (int *)malloc(Bit * sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < Bit; i++)
    {
        Data.BinaryData[i] = rand();
    }

    int INPUT = rand();
    int RNG_INDEX = RNG_Function(INPUT, Bit);

    printf("Randomly generated INPUT value: %d\n", INPUT);
    printf("Index of the list to access: %d\n", RNG_INDEX);
    printf("Corresponding value in the list: %d\n", Data.BinaryData[RNG_INDEX]);

    free(Data.BinaryData);
}

void executeRNG()
{
    int Bit;
    printf("Enter the length of the list (Bit): ");
    scanf("%d", &Bit);

    demo(Bit);
}

void peekRNGFunction()
{
    printf("int RNG_Function(int INPUT, int Bit)\n");
    printf("{\n");
    printf("    int RNG_INDEX = (INPUT * 5 + 1) %% Bit;\n");
    printf("    return RNG_INDEX;\n");
    printf("}\n");
}

int main()
{
    int mode;

    do
    {
        printf("Select mode: 0-Exit, 1-Demo RNG_Function, 2-Execute RNG_Function, 3-Peek RNG_Function: ");
        scanf("%d", &mode);

        if (mode == 0)
        {
            char confirm;
            printf("Are you sure you want to exit? (y/n): ");
            scanf(" %c", &confirm);
            if (confirm == 'y' || confirm == 'Y')
            {
                break;
            }
        }
        else if (mode == 1)
        {
            demo(10); // 10を適当に選択
        }
        else if (mode == 2)
        {
            executeRNG();
        }
        else if (mode == 3)
        {
            peekRNGFunction();
        }
        else
        {
            printf("Invalid mode. Please try again.\n");
        }

    } while (1);

    printf("Program exited.\n");

    return 0;
}