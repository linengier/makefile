/*************************************************************************
    > File Name: test.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年11月28日 星期一 23时52分41秒
 ************************************************************************/

#include <stdio.h>

int main()
{
#if defined(ADD_FLAGS)
    printf("makefile make name=xxx test\r\n");
#endif

#if defined(MY_FLAGS)
    printf("makefile -Dxxxx test\r\n");
#endif
    printf("makefile test\t\n");
    return 0;
}
