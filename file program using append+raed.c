#include<stdio.h>
int main()
{
  FILE *fp;
  char c[100];#
  fp=fopen("file.txt.txt","a+");
  fputc('t',fp);
  fputs("darshan",fp);
  return 0;
}
