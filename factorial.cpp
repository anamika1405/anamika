#include <iostream>

#define ll long long

using namespace std;

ll fact(int num)
{
	int i;
	ll tmp = 1;
	for(i = 1; i <= num; i++){
		tmp = i*tmp;
	}
	return tmp;
}

int main()
{
	int num;
	cout << "Enter the number :" << endl;
	cin >> num;
	
	if(num < 0)
		cout << "Number should be equal to or greater than Zero." << endl;

	cout << fact(num) << endl;
	return 0;
}
