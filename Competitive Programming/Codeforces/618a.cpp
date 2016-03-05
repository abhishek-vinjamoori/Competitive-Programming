#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	vector<int> mai;
	mai.push_back(1);
	for(int i=2;i<=n;i++)
	{
		mai.push_back(1);
		
		while(mai.size()-2>=0 && mai[mai.size()-1]==mai[mai.size()-2])
		{
			mai[mai.size()-2]+=1;
			mai.pop_back();
		}
	}
	for(int j=0;j<mai.size();j++)
	{
		cout << mai[j] << " ";
	}
	cout << endl;
}
