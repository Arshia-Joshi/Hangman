#include<stdio.h>
#include<string.h>
void game_word( int word_len,char guess_word,char word[100])
    {
    int i;
    for(i=0;i<=word_len-1;i++)
    {
        printf("\nlen: %d\ni: %d",word_len,i);
        printf("\nguess: %c\nword_letter:%c",guess_word,word[i]);
        if (guess_word==word[i])
        {
            printf("\n%c",guess_word);
        }
        else
        {
             printf("\n-");
        }
        
    }

    
}

int main()
{
    char word[100];
    char guess_word;
    
    int i;

    //p1 input word
    printf("Enter the first word for p2:");
    scanf("%s",word);
    int word_len=strlen(word);

   // system("cls");
    printf("Enter first letter:");
    scanf("%c",&guess_word);
    guess_word=getchar();
    game_word(word_len,guess_word,word);

   return 0;
}