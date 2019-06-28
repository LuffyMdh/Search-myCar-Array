#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x = 0;
	string userSearch;
	string myCar[10] = {"Proton","Kancil","Toyota","Honda","Suzuki","Perodua","Ford","Mitsubishi","Kia","Volvo"};
	bool found = false;
	
	cout << "Input car name :";
	cin >> userSearch;
	
	while(x<10 && not found)
	{
		if(userSearch == myCar[x])
		{
			cout << userSearch << " is found in position " << x + 1 << endl;
			found = true;
		}
		x++;
	}
	
	if(found == false)
	{
		cout << "Your search is not found" << endl;
	}
	
	return 0;
}