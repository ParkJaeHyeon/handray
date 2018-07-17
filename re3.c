#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
        int v1=0;
        int v2=0;
        if(argc != 2)
        {
                exit(0);
        }
        else
        {
                for(v1=1;v1<10;v1++)
                {
                        for(v2=1;v2<10;v2++)
                        {
                                printf("%d\n",v1*v2);
                        }
                }
        }
        return 0;
}
