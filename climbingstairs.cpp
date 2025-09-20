#include<iostream>
using namespace std;

int ClimbStairs(int n) 
{ 
    if(n == 1) 
        return 1; 
    if(n == 2) 
        return 2; 

    return ClimbStairs(n-1) + ClimbStairs(n-2); 
} 

int main()
{
    int n = 5;
    int result = ClimbStairs(n);
    cout << "Number of ways to climb " << n << " stairs: " << result << endl;
    return 0;
}