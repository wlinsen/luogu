#include <iostream>
#include <cmath>
using namespace std;
double a, b , c ,d;
double f(double x)
{
	return a * x *x *x+ b *x *x+ c * x+d;
}


int main()
{
	
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	
	for(int i = -100; i<= 99; i++)
	{
		double l = i, r = i + 1;
		if(fabs(f(l)) < 1e-16) printf("%.2lf ", l);//判断是否为零
		else if(f(l)*f(r) < 0)
		{
			//cout << "fl: "<<f(l) << " fr: "<< f(r)<<endl; 
			while(r - l > 1e-4)
			{
				double mid = (l +r)  /2;
				if(f(mid) * f(r) < 0) l = mid;
				else r = mid;
			}
			printf("%.2lf ",l );
		}
	}
}
