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


/*関係ない話だけど、bing検索で出てくる”https://www.bing.com/search?q=%E7%BF%BB%E8%A8%B3&aqs=edge.0.69i59j69i65j69i61l2.5852j0j1&pglt=43&FORM=ANCMS9&PC=U531”で
英語の”HeHeHe  birthed day is Tenmon 3 years may 12th.”
を日本語に翻訳すると
”へへへぇぇ��”になるバグがあってんだけど
原因はたぶん”HeHeHe”だよね。*/