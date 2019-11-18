// 561.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main(int argc, char* argv[])
{
	double x1,x2,a;
	scanf("%lf",&a);
	x1=a/2;	
	x2=0.5*(x1+a/x1);	
	while(fabs(x1-x2)>=1e-5)
	{
	x1=x2;
	x2=0.5*(x1+a/x1);
	}
printf("x=%lf\tsqrt=%lf\n",a,x2);

	return 0;
}

