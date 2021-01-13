#include<iostream>
#include<string>
using namespace std;
int main()
{
  string num;
  int num1=0,average=0,count=0,prod=1,sum=0;  
  while(1)
  {
    
     cout<<"Enter Number : ";
        cin>>num;
     if(num =="q")
         break;
         num1=stoi(num);
      prod=prod*num1;
        sum=sum+num1;
        count++;
      // cin.clear();        
  }
  if(count)
    {
      average=sum/count;  
    } 
    
    cout<<"Average :"<<average<<endl;
    cout<<"Product :"<<prod<<endl;
}
