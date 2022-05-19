#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double a,s,d,f,g,h,S,X,Y;
	/*a,s,d
	  f,g,h*/
	while(scanf("%lf%lf%lf%lf%lf%lf",&a,&s,&d,&f,&g,&h)!=EOF)
	{
		S=a*g-s*f;
		X=d*g-s*h;
		Y=a*h-d*f;
		if(S==X and X==Y and Y==0)
		printf("Too many\n");
		else if(S==0 and (X!=0 or Y!=0))
		printf("No answer\n");
		else
		{
			printf("x=%.2lf\ny=%.2lf\n",(-s*h+d*g)/(a*g-s*f),(a*h-f*d)/(a*g-s*f));
		}
	}
 }
