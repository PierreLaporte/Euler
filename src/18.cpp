#include "utils.hpp"

int main()
{
	ifstream input("inputPb63.txt");

	vector<vector<int> > pyramid;

	int row = 0; // first row is the top of the pyramid. 
	int nofcols = 1;
	while(!input.eof())
	{
		pyramid.push_back(vector<int>(nofcols));
		for(int col=0; col<nofcols; col++)
		{
			input >> pyramid[row][col];
		}
		row++;
		nofcols++;
	}

	cout << "pyramid : " << endl;
	for(unsigned int i=0; i<pyramid.size(); i++)
	{
		for(unsigned int j=0; j<pyramid[i].size(); j++)
		{
			cout << pyramid[i][j] << " "; 
		}
		cout << endl;
	}

	// we start from the second bottom row of the pyramid i.e. pyramid.size()-2  
	for(unsigned int row=pyramid.size()-2; row>=0; row--)
	{
		for(unsigned int col=0; col<pyramid[row].size(); col++)
		{
			/* for each element in the row, we add the value of the biggest of the 2 elements 
			   below, to the element's own value */
			if(pyramid[row+1][col] >= pyramid[row+1][col+1])
				pyramid[row][col] += pyramid[row+1][col];
			else
				pyramid[row][col] += pyramid[row+1][col+1];
		}
	}

	cout << "max path value = " << pyramid[0][0] << endl;
	return 0;

}
