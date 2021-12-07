#include <stdio.h>
int main()
{
  int a,b[6];
  for(a=0;a<=5;a++)
  {
    scanf("%d",&b[a]);
  }
  for(a=0;a<=5;a++)
  {
    printf("打印数字：\n.",b[a])
    }
  return 0;
}
