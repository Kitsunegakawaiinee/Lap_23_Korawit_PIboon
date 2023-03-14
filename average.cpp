#include <iostream>
#include <vector>
#include <string>

using namespace std;

int s_to_d(string a);

int main(int num, char *argu[])
{
	bool check(int);

	if(check(num))
	{
		vector <int> allnum;

		for(int i = 1; i<num; i++) 
		{
			//cout << "vector at i = " << i<< " is " << argu[i] << endl; //debug
			string inventory = "\0";
			allnum.push_back(s_to_d(inventory + argu[i]));
		}

		float sum = 0.0f;

		for(int i: allnum)
		{
			//cout << "in vector index i= " << i << endl; //debug
			sum += i;
			//cout << "sum in loop "<<sum << endl; //debug
		}

		sum /= (float)allnum.size();

		//cout << "last sum " << sum << endl; //debug

		cout << "---------------------------------" << endl;
		cout << "Average of "<< allnum.size() <<" numbers = " << sum << endl; 
		cout << "---------------------------------";
	}
	else
	{
		cout << "Please input numbers to find average." << endl;
	}

	return 0;
}

bool check(int num)
{
	bool a = (num > 1)? true: false;

	return a;
}

int s_to_d(string a)
{
	return atof(a.c_str());//stod(a.c_str());
}