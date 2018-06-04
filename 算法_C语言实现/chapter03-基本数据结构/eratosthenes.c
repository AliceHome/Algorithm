/*************************************************************************
	> File Name: eratosthenes.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jun  4 09:59:33 2018
 ************************************************************************/

#include<stdio.h>

#define N 10000

int main() 
{

    int i, j, a[N];
    for (i = 2; i < N ; i++)
        a[i] = 1;

    for(i = 2; i < N; i ++)
        if (a[i])
            for (j = i; i * j < N; j ++)
                a[i * j] = 0;
    for(i = 2; i< N; i++)
        if (a[i])
            printf("%4d", i);
    printf("\n");


}
