#include<iostream>
#include<climits>
using namespace std;

int MTC(int n, int x, int y, int z)
{
    if(n == 0)
        return 0;
    if(n < 0)
        return INT_MIN;

    int option1 = 1 + MTC(n - x, x, y, z);
    int option2 = 1 + MTC(n - y, x, y, z);
    int option3 = 1 + MTC(n - z, x, y, z);

    return max(option1, max(option2, option3));
}

int main()
{
    int n = 4;
    int x = 2;
    int y = 1;
    int z = 1;

    int finalans = MTC(n, x, y, z);
    cout << "Maximum number of cuts: " << finalans << endl;

    return 0;
}