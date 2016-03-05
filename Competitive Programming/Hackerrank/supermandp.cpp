#include<iostream>
using namespace std;
int max(int arr[],int n)
{
	int temp;
	for(int i=0;i<n;i++)
	{
		if(i=0)
			temp=arr[i];
		else if(temp < arr[i])
			temp=arr[i];
	}
	return temp;
}
int arr[1900][1900],func[1900][1900],maxfloor[1900];
int main()
{
	int temp,temp1,temp2,n,h,jmp,res;
	cin >> n >> h >> jmp;
	for(int i=0;i<n;i++)
	{
		int num;
		cin >> num;
		for(int j=0;j<num;j++)
		{
			cin >> temp;
			arr[i][temp-1]++;
		}
	}
	temp=0;
	for (int i = 0; i < n; i++)
	{
		func[i][h] = arr[i][h];
		if (func[i][h] > maxfloor[h])
			maxfloor[h] = func[i][h];
	}
	for (int j = h-1; j >= 0; j--)
	{
		for (int i = 0; i < n; i++)
		{
			temp=0;
			if (j+jmp <= h)
			{
				if (maxfloor[j+jmp] > temp) 
					temp = maxfloor[j+jmp];
			}
			if (func[i][j+1] > temp) 
				temp = func[i][j+1];
			func[i][j] = temp + arr[i][j];
			if (func[i][j] > maxfloor[j])
				maxfloor[j] = func[i][j];
		}
	}
	for (int i = 0; i < n; i++)
		if (func[i][0] > res)
			res = func[i][0];
	cout << res << endl;
	return 0;
}