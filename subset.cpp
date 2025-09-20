#include<iostream>
using namespace std;

void powerSet(string str, int index = 0, string curr = "")  

{  

    int n = str.length();  

   

    // base case  

      if (index == n)  

       {  

        cout << curr << endl;  

        return;  

    }  

    powerSet(str, index + 1, curr);  

    powerSet(str, index + 1, curr + str[index]);  

}  