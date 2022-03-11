#include <stdio.h>
#include <stdlib.h>

int main()
{
   int fn=0,sn=1,fs,num=10;
   printf("%d %d\n",fn,sn);
   while(num>0)
   {
       fs=fn+sn;
       fn=sn;
       sn=fs;
       printf("%d\n",fs);
       num--;
   }

    return 0;
}
