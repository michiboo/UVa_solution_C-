#include <stdio.h>

using namespace std;
typedef unsigned int ui;

int main()
{

int i,a,b,c,deg,tmp;

while(scanf("%d%d%d%d",&i,&a,&b,&c)==4)
{
if (i==0 &&a==0 && b==0 && c==0) break;

deg = 1080;

tmp = i - a;
if(tmp < 0)
	tmp += 40;

deg += tmp * 9;




tmp = b - a;
if(tmp < 0)
	tmp += 40;
deg += tmp*9;


tmp = b-c;
if(tmp < 0)
	tmp += 40;
deg += tmp * 9;

printf("%d\n", deg);

}

	





return 0;
	}