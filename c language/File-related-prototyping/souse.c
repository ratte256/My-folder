#include <stdio.h>


int main()
{



FILE *fp;
fp = fopen("file.txt", "r")
if(fp == NULL)
{
  printf("The file could not be opened.\n");
}
else
{
  printf("The file could be opened.\n");
}

printf("Do you want to read the file[0]? \n Do you want to write [1]? \n Are you sure you want to quit [2]?\n")

return 0;
}