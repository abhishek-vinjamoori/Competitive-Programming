#include<iostream>
#include<math.h>
#include<stdio.h>
#include<cmath>
typedef unsigned long long int ull;
using namespace std;
double calculate(ull x1,ull x2,ull y1,ull y2)
{
	  double distancex = (x2 - x1)*(x2-x1);
	    double distancey = (y2 - y1)*(y2-y1);
	    double calcdistance = (double)sqrt(distancex + distancey);
	      return calcdistance; 
}
double Area(double dX0, double dY0, double dX1, double dY1, double dX2, double dY2)
{
	cout << dX0<< dY0<<dX1<< dY1<< endl;
	    double dArea = ((dX1 - dX0)*(dY2 - dY0) - (dX2 - dX0)*(dY1 - dY0))/2.0;
	        return (dArea > 0.0) ? dArea : -dArea;
}
int main()
{
	int n;
	cin >> n;
	unsigned long long int x,y,m1,m2,s1,s2,a[100010][2];
	double min;
	int r1,r2;
	for(int i=0;i<n;i++)
	{
		cin >> x >> y;
		a[i][0]=x;
		a[i][1]=y;
		if(i==0)
		{
			m1=x;
			m2=y;
		}
		if(i>1)
		{
			double temp = calculate(m1,x,m2,y);
			if(temp<min)
			{
				min=temp;
				r1=i;
				s1=x;
				s2=y;
			}
			
		}
		else if(i==1)
		{
			min = calculate(m1,a[i][0],m2,a[i][1]);
			r1=i;
			s1=x;
			s2=y;
		}
	}
	cout << "1 ";
	cout << r1+1 << " ";
	int r3,i;
	double fin=1000000000000000000.0;
	for(i=1;i<n;i++)
	{
		if(i!=r1)
		{
			double ss=Area(m1*1.0,m2*1.0,a[r1][0]*1.0,a[r1][1]*1.0,a[i][0]*1.0,a[i][1]*1.0);
			cout << ss << endl;
			if(ss!=0 && ss < fin)
			{
				fin=x;
				r3=i;
			}
		}
	}
	cout << r3+1 << endl;
}
