#include<iostream>
using namespace std;
int pow(int m ,int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}
int main()
{
   int m;
   int n;
   cout<<"enter value of m"<<endl;
   cin>>m;
   cout<<"enter value of n"<<endl;
   cin>>n;
  
   int result = pow(m,n);
   cout<<result<<endl;

}