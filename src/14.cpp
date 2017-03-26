#include "utils.hpp"

int main()
{
	long int nMaxCount = 0;
	long int maxCount= 0;

	for(long int i=1; i<1000000; i++)
	{
		long int n = i;
		cout << "Testing n = " << n << "... ";
		long int count = 0;
		while(n!=1)
		{
			if(n%2 == 0) n *= 0.5;
			else n = 3*n + 1;
			count++;
		}
		if (count > maxCount) 
		{
			maxCount = count;
			nMaxCount = i;
		}
		cout << "count = " << count << endl;
	}
	cout << endl;
	cout << "maxCount = " << maxCount << endl;
	cout << "nMaxCount = " << nMaxCount << endl;
}