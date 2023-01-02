
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    printf('enter string :\n');
    gets(s);
    strrev(s);
    printf('the reverse of the string is : %s\n', s);
    return 0;
}