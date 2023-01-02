
#include <stdio.h>

int string_lenght(char*);

void reverse(char*);
int main(){
    char s[100];
    printf("enter a string :\n");
    gets(s);
    reverse(s);
    printf('the reverse of the string is \"%s\".\n', s);
    return 0;
}
void reverse(char *s)
{
    int lenght, c;
    char *begin, *end, temp;
    lenght = string_lenght(s);
    begin = s;
    end = s;
    for (c=0; c<lenght-1; c++)
    {
        end++;
        for (c=0; c<lenght/2; c++)
        {
            temp = *end;
            *end = *begin;
            *begin = temp;
            begin++;
            end--;
        }
    }
}
