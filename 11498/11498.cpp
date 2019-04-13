#include <stdio.h>
#include <string.h>
using namespace std;

int main(){

	int tn, n,m,x,y;
	
	

	while(1){
scanf("%d", &tn);
if(tn == 0)
	break;

scanf("%d%d",&n,&m);
while(tn--){

		scanf("%d%d",&x,&y);
		if(x == n or y == m)
			printf("%s\n","divisa");
		else if (x > n and y > m)
			printf("%s\n","NE");
		else if(x > n and y < m)
			printf("%s\n","SE");
		else if(x < n and y > m)
			printf("%s\n","NO");
		else
			printf("%s\n","SO");
		
}
		
	

		



	}



	return 0;
}