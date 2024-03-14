#include <iostream>
using namespace std;
void sort_ref(int &x,int &y)
{
	
	if(x<y)
	cout<<"Min = "<<x<<endl<<"Max = "<<y;
	else
	cout<<"Min = "<<y<<endl<<"Max = "<<x;
	
}

int main()
{
	int a,b;
    cout<<"Enter A and B : ";
	cin>>a>>b;
	sort_ref(a,b);
	
	return 0;
}
