#include<stdio.h>
#include<string.h>

void swap(char *word1,char *word2)
{

	char * temp1=word1[0];
	 word1[0]=word2[0];
	 word2[0]= temp1;


}

int main()
{
	char *word1[3];
	char *word2[3];
	int i;
	printf("Enter 1st and 2nd word: ");
	for( i=0;i<=6;i++)
	{
	scanf("%s  %s",word1,word2);
	swap(word1,word2);
	printf("%s %s",word1,word2);
    getchar();
	}
	return 0;
}