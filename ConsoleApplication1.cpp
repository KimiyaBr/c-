#include <iostream>
using namespace std;
main() {
	int A[3][3], i, j, answer = 0;
	for(i=0;i<=2;i++)
	{
		for (j = 0;j<=2;j++)
		{
			cout << "enter number" << i << j<< endl;
			cin>>A[i][j]
		}
	}
	answer = A[0][0] * ((A[1][1] * A[2][2]) - (A[1][2] * A[2][1])) - A[1][0] * ((A[0][1] * A[2][2]) - (A[0][2] * A[2][1])) + A[0][2] * ((A[0][1] * A[1][2]) - (A[0][2] * A[1][1]));
	cout << "answer: " << answer << endl;

}

