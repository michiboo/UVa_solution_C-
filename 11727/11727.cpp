#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)



int main(){

	int t,tmp;
	int arr[3];

	scanf("%d",&t);
	REP(i,0,t){
	
		REP(k,0,3){

			scanf("%d",&arr[k]);
		}

		REP(k,0,2){

		REP(j,k+1,3){
			if(arr[k] > arr[j]){
				tmp = arr[k];
				arr[k] = arr[j];
				arr[j] = tmp;
			}
		}


		}

		printf("Case %d: %d\n",i+1,arr[1]);

	}




	return 0;
}