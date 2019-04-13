#include <stdio.h>
#include <math.h>
using namespace std;
typedef long int int64;

int main() {
long double tmp1,tmp2,intpart;
int tn,size,res;
scanf("%d",&tn);
int po2 ={1,2,4,8,32,64};


while(tn--){
res = 0;
tmp1 = 1;
scanf("%d",&size);

int64 arr[size];
for(int i = 0; i < size; i++)
	scanf("%ld",&arr[i]);




for(long int i = 1; i < pow(2,size-1) ; i++)
{ 	

	tmp1 = 1;
	


	for(int j = 0; j < 6; j++)
	{
		if(i & po2[j] > 0)
			tmp *= arr[]
	}
	
	



	tmp2 = sqrt(tmp1);
	intpart = abs(tmp2);
	if(intpart == floor(tmp2))
		res += 1;


}

printf("%d\n", res);

}




	return 0;
}