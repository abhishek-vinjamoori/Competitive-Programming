#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char s[1000];
	int n;
	int nas=0;
	int up=0,right=0;
	cin >> n;
	scanf("%s",s);
	for(int i=0;i<n;i++)
	{
		for(int k=i+1;k<=n;k++)
		{
			up=0;
			right=0;
			for(int j=i;j<k;j++)
			{
				switch(s[j])
				{
					case 'U':
						up++;
						break;
					case 'R':
						right++;
						break;
					case 'L':
						right--;
						break;
					case 'D':
						up--;
						break;
				}

			}
			if(up==0 && right==0)
			{
				nas++;
			}
		}

	}
	cout << nas << endl;
	return 0;
}
