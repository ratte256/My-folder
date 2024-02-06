#include <stdio.h>
#include <string.h>


/*とりあえずテキストのみを使用してメモ帳を作ってみる*/
void include_files();

void frame_drawing()
{
  char frame1[] = {'+','-','-','-','-','-','-','-','-','+'}
  char frame2[] = {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'}
  for(j = 0; j < 10; j++)
  {
    printf(frame1[j]);
  }
  printf("\n")
  for(k = 0; k < 10; k++)
  {
    for(int i = 0; i < 10; i++)
    {
      printf(frame2[i])
    }
    prntf("\n")
  }
}


void textarea_drawing();

void soft_mode();

int main()
{

  return 0;
}
