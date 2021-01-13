/*Take value of length and breath of a rectangle from user as float. 
Find its area and print it on screen after type casting it to int.*/
#include<iostream>
using namespace std;
int main()
{
   float length,breadth,area;
	cout<<"enter length";
	cin>>length;
	cout<<"enter breadth";
	cin>>breadth;
	area=length*breadth;
	cout<<(int)area<<endl;
	
}
