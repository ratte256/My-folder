#include <stdio.h>
#include <string.h>


/*とりあえずテキストのみを使用してメモ帳を作ってみる*/
void include_files();

void frame_drawing()
{
  char frame1[] = ['+','-','-','-','-','-','-','-','-','+']
  char frame2[] = ['|',' ',' ',' ',' ',' ',' ',' ',' ','|']
  for(int i = 0; i < 10; i++)
  {
    
    for(int j = 0; j < 10; j++)
    {
      printf(frame2[j])
    }
    printf(frame1[i])
  }
}


void textarea_drawing();

void soft_mode();

int main()
{

  return 0;
}