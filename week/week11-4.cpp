#include <stdio.h>
typedef struct data{
    int ans;
    char c;
}DATA;
DATA box;
int main()
{
    box.ans=1;
    box.c='A';
    printf("%C %d\n",box.c,box.ans);
}
