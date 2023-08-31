#include <stdio.h>
#include <stdlib.h>
#include <time.h>



char randchar()
{
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char x = str[rand()%26];
    return x;
}

