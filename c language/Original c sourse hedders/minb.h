#define MINB_H

int RNG(int RNG_index, int Bit)
{
    RNG_index = RNG_index * 5 + 1 % Bit;
    return RNG_index;
}
