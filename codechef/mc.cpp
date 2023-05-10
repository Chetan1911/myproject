#include <iostream>
using namespace std;

int main() {
    int t,x;
    int count;
    std::cin >> t;
	for(int i=0;i<t;i++)
	{
	    cin >> x;
	    if(x<10)
	    {
	        for(int i=1;i<=x;i++)
	        {
	            count++;
	        }
	    cout<<count;
	    break;
	    }
	    else
	    {
	    int r=x%10;
	    if(r==0){
	    return 0;}
	    else{
	        int count1;
	        for(int i=1;i<=r;i++)
	         {
	             count1++;
	         }
	        cout<<count;
	        }
	    }
	  }
}
