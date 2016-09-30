/*t000000est test*/
#include <iostream>
#include <math.h>
using namespace std;

double newt(double xn, double accu){
    double temp,f,fd,xn1;
     f=exp(xn)+xn*xn*xn-5.0;
     fd=exp(xn)+3.0*xn*xn;
     xn1=xn-(f/fd);    //This line is the Newton Raphson method
    temp=xn;
    xn=xn1;
    
// uuuuu3333uuuuuuuuuuu

    if(fabs(temp-xn)>=accu){   

        newt(xn, accu);   //This line is where the recursion start
        return 0;
    }
    cout<<xn<<endl;
        return xn;
    
}


int main() {
    
    double x0,e;
    cin>>x0;
    cin>>e;

    double result1=newt(x0,e);
    
        
    return 0;
        
}

