#include <bits/stdc++.h>
using namespace std;


int main() {


	unsigned long long int c, x,y,n;
    cin >> c;

    for(unsigned int i = 0; i < c; ++i)
        {
            unsigned long long int res = 1;
            vector<unsigned long long int> tmp;
            cin >> x >> y >> n;            
            bitset<70> bset2(y);
            for (unsigned long long int i = 0; i < 70; ++i) 
                if(bset2[i] == 1)
                    tmp.push_back(i+1);
            
            for(unsigned int i = 0; i < tmp.size(); ++i){
                cout << res << endl;
                res *= pow(x,tmp[i]);
               
            }
            
            cout << res << endl;



        }

    

	



	return 0;
}