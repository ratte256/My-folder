#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
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
    _getch(); // キー入力待ち
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
    _getch(); // キー入力待ち
}

int main()
{
    int mode = -1;
    char confirm;

    do
    {
        if (confirm == 'y' || confirm == 'Y')
        {
            break;
        }
        system("cls"); // Windows環境専用の画面クリア

        printf("Select mode: 0-Exit\n 1-Demo RNG_Function\n 2-Execute RNG_Function\n 3-Peek RNG_Function\n");
        
        mode = _getch() - '0';
        switch (mode)
        {
        case 0:
        {
            printf("Are you sure you want to exit? (y/n): ");
            scanf(" %c", &confirm);
            if (confirm == 'y' || confirm == 'Y')
            {
                break;
            }
            break;
        }
        case 1:
            demo(10);
            break;
        case 2:
            executeRNG();
            break;
        case 3:
            peekRNGFunction();
            break;
        default:
            printf("Invalid mode. Please try again.\n");
            _getch(); // キー入力待ち
            break;
        }

    } while (1);

    printf("Program exited.\n");

    return 0;
}