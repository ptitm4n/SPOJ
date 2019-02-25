#include <bits/stdc++.h>
using namespace std;

vector< int > pdiv{0,1,2,3,2,5,2,7,2,3,2,11,2,13,2,3,2,17,2,19,2,3,2,23,2,5,2,3};
map<int,int> req[28];

void pre()
{
	for(int i=2; i<=27; i++)
	{
		map< int, int>temp;
		for(int j=i; j>1; j/=pdiv[j])
		{
			temp[pdiv[j]]++;
		}
		req[i] = temp;
	}
	for(int i=2; i<=27; i++)
	{
		cout<<i<<" : ";
		for(auto x: req[i]) cout<<x.first<<","<<x.second<<" "; cout<<"\n";
	}
cout<<"done\n";
}

int main()
{
	pre();

	int t;
	cin>>t;
	string s;

	for(int i=1; i<=t; i++)
	{
		cin>>s;
		map< int ,int >avl,used;
		for(char c: s)
		{
			int x = c-'a'+2;

			while(x>1)
			{
				avl[pdiv[x]]++;
				x /= pdiv[x];
			}


		}



	}
}

