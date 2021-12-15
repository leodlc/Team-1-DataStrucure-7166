#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Multiplo {
	int mul;

public:
	Multiplo(int multi):mul(multi){}
	bool operator() (int x)
	{
		return !(x % mul);
	}
};
int main()
{
	vector<int> vec = {1,3,5,7,9,8,6,4,12};
	int multi = 4;
	sizeof tam;
	tam = count_if(vec.begin(), vec.end(), [multi](int x) { return !(x % multi); });
	cout << "enteros multiplos de " << multi << ": " << tam << endl;

}