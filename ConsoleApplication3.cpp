#include <iostream>
using namespace std;
int main() {
	int A[10][10],i,j, number, count = 0;
	cout << "enter number" << endl;
	for(i=0;i<=9;i++)
	{
		for (j = 0;j<=9;j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "enter number" << endl;
	cin >> number;
	for (i = 0; i <= 9; i++);
	{
		for (j = 0; j <= 9; j++);

		{if (A[i][j] == number)
			count++;
		}
	}
	if(count==0)
	cout<<"no"<<endl;
	else {
		cout << "yes" << endl;
	}
	
}