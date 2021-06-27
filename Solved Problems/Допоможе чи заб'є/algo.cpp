#include <iostream>
#include <string>
using namespace std;
int main()
{
	int K, i = 0, counter = 0;
	string S;
	cin >> K;
	getline(cin, S);
	getline(cin, S);
	while (S[i] != '\0')
	{
		if (S[i] == 'T' && S[i + 1] == 'O' && S[i + 2] == 'I' && S[i + 3] == 'L' && S[i + 4] == 'E' && S[i + 5] == 'T')
		{
			counter++;
			i += 5;
		}
		i++;
	}
	if (counter == K)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	system("pause");
	return 0;
}
