#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

void eulerb(const double, double*,const int);

int main(){
  const int n=100;	
  const double pi=3.14159;
  const double dt= pi/n;
  const int N=20*n;
  double y[2*N];

    eulerb( dt, y, N);
    
    for(int i=0;i<N;i++)
    {
      cout<<i*dt<<" " <<y[i]<< endl;
    }

return 0 ;
}

void eulerb(const double dt, double* y,const int N)
{
    y[0]=1;
    y[N]=0;
   for(int i= 0; i<N; i++)
	{y[i+1]=(y[i]+dt*y[N+i])/(1+dt*dt);
	 y[N+i+1]=(y[N+i]-dt*y[i])/(1+dt*dt);
	}
}