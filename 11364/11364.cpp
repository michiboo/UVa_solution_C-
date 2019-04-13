#include <stdio.h>
using namespace std;

int main(){

	int tn, size, maxi, mini,tmp;

	scanf("%d",&tn);

	while(tn--){

		scanf("%d",&size);
		maxi = 0;
		mini = 100;

		for(int i = 0; i < size; i ++){
		scanf("%d",&tmp);
		tmp > maxi ? maxi = tmp : true;
		tmp < mini ? mini = tmp : true;
	}

		printf("%d\n", (maxi-mini)*2);




	}



	return 0;
}