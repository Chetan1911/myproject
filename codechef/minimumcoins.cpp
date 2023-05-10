#include <iostream>
using namespace std;

int main() {
    int t,x;
    std::cout << t;
	for(int i=0;i<t;i++)
	{
	    cout<<x;
	    int r=x%10;
	    int count;
	    for(int i=0;i<=r;i++)
	    {
	       count++; 
	    }
	    cout<<"Mininmum number of coins is"<<count;
	}
}
