#include<stdio.h>
#include<string.h>
void game_word( int word_len,char guess_word,char word[100])
{
    int i;
    for(i=0;i<word_len;i++)
    {
        if (guess_word==word[i])
        {
            printf("%c",guess_word);
        }
        else
        {
            printf("-");
        }
        
    }

    
}

int main()
{
    char word[100];
    char guess_word[100];
    int word_len=strlen(word);
    int i;

    //p1 input word
    printf("Enter the first word for p2:");
    scanf("%s",word);

   // system("cls");
    printf("Enter first letter:");
    scanf("%c",guess_word);
    guess_word[100]=getchar();
    game_word(word_len,guess_word,word);

    return 0; 
}