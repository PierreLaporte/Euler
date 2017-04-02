#include "utils.hpp"

deque<int> powerOfTwo(int n)
{
	deque<int> result(1,1);
	for(int i=0; i<n; i++)
		result = sommeGrandsNombres(result,result);

	return result;
}

int main()
{
	int n = 1000;
	deque<int> result = powerOfTwo(n);
	
	int sum = 0;
	cout << "result : ";
	for(unsigned int i=0; i<result.size(); i++)
	{
		sum += result[i];
		cout << result[i];
	}
	cout << endl;
	cout << "sum of the digits : " << sum << endl;


}