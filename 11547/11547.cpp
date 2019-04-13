#include <bits/stdc++.h>
#define REP(i,a,b) for (int i = a; i < b; i++)
using namespace std;


int main() {
int t, n;

scanf("%d",&t);

REP(i,0,t){

	scanf("%d",&n);
	n = (((n * 567) / 9 + 7492) * 235 / 47) - 498;
	n = (n / 10)%10;
	
	if(n < 0)
		n = -n;

	printf("%d\n",n);

}


	return 0;
}