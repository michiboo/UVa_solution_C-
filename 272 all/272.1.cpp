#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main()
{
string input = "";
bool want = 0;  // 0 - left , 1 - right
int c = 0;
string tmp = "";

 while ( getline (cin,tmp) )
    {
      input = input + tmp ;
    }


string res = "";


for(string::iterator it = input.begin(); it!= input.end(); ++it){



	if(*it == '"')
	
	{

	
		if(want == 0){
		res += "``";
	}
		else{
			
			res += "\'\'";
		}
		want = !want;

		
	
} else 
	res += *it;


}


cout << res << endl;


return 0;

}
