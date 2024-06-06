#include<stdio.h>
void game_word( char word[],guess_word[])
{
    

    
}

int main()
{
    char word[10];
    char guess_word[10];
    int word_len=strlen(word);
    int i;

    //p1 input word
    printf("Enter the first word for p2:");
    scanf("%s",word);

    //printing --- inplace of the word
    for(i=0;i<word_len;i++)
    {
        printf(" - ");
    }
    return 0; 
}