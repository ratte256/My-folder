#ifndef MINB_H
#define MINB_H

int RNG(int RNG_index)
{
    RNG_index = RNG_index * 5 + 1 % 4096;
    return 0;
}
