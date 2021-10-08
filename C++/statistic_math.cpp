#include <iostream>
using namespace std;

int n, data[20], tertinggi, terendah, tengah;
float rataRata;

void inputData()
{
	cout << "Enter th enumber of values you want to input: "; // max 20 data input
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		cout << "Enter Value-" << i << ": "; 
		cin >> data[i]; 
	}
}

void urutData()
{
	int temp;
	for (int i=1; i<=n-1; i++)
	{
		for (int j=i+1; j<=n; j++)
		{
			if (data[i] > data[j])
			{
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
}

void average()
{
	rataRata = 0;
	for (int i=1; i<=n; i++)
	{
		rataRata += data[i];
	}
	rataRata = rataRata/n;
	cout << "Mean = " << rataRata << endl;
}

void highest()
{
	tertinggi = data[n];
	cout << "Maximum Value = " << tertinggi << endl;
}

void lowest()
{
	terendah = data[1];
	cout << "Minimum Value = " << terendah << endl;	
}

void median() 
{
	tengah = data[((n+1)/2)];
	cout << "Median = " << tengah << endl; 
}

int main()
{
	inputData(); 
	urutData();	
	
	cout << "=========STATISTIC===========\n";
	average(); 
	highest(); 
	lowest(); 
	median(); 
	
	return 0;
}
