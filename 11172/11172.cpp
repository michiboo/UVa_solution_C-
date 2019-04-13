#include <stdio.h>
using namespace std;


int main()
{
	int tn, n1, n2;
	char c;
	scanf("%d",&tn);

	while(tn--){

		 scanf("%d%d",&n1,&n2);
		 n1 = n1 - n2;

		 if(n1 > 0)
		 	printf("%c\n",'>');
		 else if(n1 < 0)
		 	printf("%c\n",'<');
		 else 
		 	printf("%c\n",'=');


	}






return 0;
	}