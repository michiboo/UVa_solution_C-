#include <bits/stdc++.h>
using namespace std;
template<typename T> struct map_init_helper
{
    T& data;
    map_init_helper(T& d) : data(d) {}
    map_init_helper& operator() (typename T::key_type const& key, typename T::mapped_type const& value)
    {
        data[key] = value;
        return *this;
    }
};

template<typename T> map_init_helper<T> map_init(T& item)
{
    return map_init_helper<T>(item);
}

int main() {

	std::map<string,int> MyMap;
map_init(MyMap)
    ("HELLO", 1)
    ("HOLA", 2)
    ("HALLO",3)
    ("BONJOUR",4)
    ("CIAO",5)
    ("ZDRAVSTVUJTE",6);
	

	string input_line;
	string t ("#");
	string tmp;
	unsigned int count = 1;

	cin >> input_line;

	while(input_line.compare(t) != 0){

		

	switch(MyMap[input_line]){
		case 1: printf("Case %d: ENGLISH\n",count);
			break;
		case 2 : printf("Case %d: SPANISH\n",count);
			break;
		case 3 : printf("Case %d: GERMAN\n",count);
			break;
		case 4 : printf("Case %d: FRENCH\n",count);
			break;
		case 5 : printf("Case %d: ITALIAN\n",count);
			break;
		case 6 : printf("Case %d: RUSSIAN\n",count);
			break;
		default : printf("Case %d: UNKNOWN\n",count);
			break;

	}
	count ++;

	cin >> input_line;

}

	return 0;
}