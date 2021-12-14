#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int k , n;
	cin >> n >> k;
	if(n%2 == 0 and k <= n/2)
	{
		cout << (k*2)-1;
	}
	else if(n%2 == 0 and k > n/2)  
	{
		cout << (k-(n/2))*2;
	}
	else if(n%2 != 0 and k <= (n/2)+1)
	{
		cout << (k*2)-1;
	}
	else if(n%2 != 0 and k > (n/2)+1)
	{
		cout << (k-((n/2)+1))*2;
	}
	
	return 0;
}