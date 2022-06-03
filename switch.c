#include <stdio.h>
int main()
{
    char letter;
    scanf("%c",&letter);
    switch(letter)
    {
        case 'A':
            printf("Letter is cap a");
            break;
        case 'B':
            printf("Letter id cap b");
            break;
        case 'Z':
            printf("Letter id cap z");
            break;
        default:
            printf("lol");
            break;

    }
}