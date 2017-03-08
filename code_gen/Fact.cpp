#include <iostream>
#include "Fact.h"
#define ll long double

using namespace std;

ll fact(double num)
{
	if(num - (int(num)) != 0){
		cout << "Input should not be a decimal number." << endl;
		return 0;
	}
	
	else if(num < 0.0){
		cout << "Input should not be a negative number." << endl;
		return 0;
	}
		
	int i;
	long double tmp = 1;
	for(i = 1; i <= num; i++){
		tmp = i*tmp;
	}
	return tmp;
}
