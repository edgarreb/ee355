// Name: Edgar Martinez
// Email: edgarmar@usc.edu

#include <iostream>

using namespace std;
template <typename T> 
T max(T a, T b)
{
	if(a > b) 
	{
		return a;
	}
	else 
		return b;
}

int main() 
{
	
	cout << "max(1,3) " << max<int>(1,3) << endl;
	cout << "max(2.2, 2.1) " << max<double>(2.2,2.1) << endl;

	return 0;
}
