#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main()
{
char c;
unsigned int ind = 0;
char word[1000];
// fgets(word, sizeof word, stdin);




while ((c = getchar()) != EOF && c != '\0' )
{

	word[ind] = c;
	ind ++;

}



printf("%s",word);



return 0;
	}