/* Program to reverse a string by its word 
for example string is : my new car
the expected output as follow
output ->  ym wen rac 
*/

#include <iostream>
#include <cstring>
using namespace std;


void toReverse(string &a, int num)
    {
        int i = num;
        int j = a.length();
        
        while (i < j)
        {
            swap(a[i++], a[(j-1)]);
            j--;
        }

    }


string anotherString (string str )
{

    string d = "";
    int count = 0;
    for(int i = 0; i <= str.length(); i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            toReverse(d , count);
            count = i + 1;
            d.push_back(str[i]);
        }
        else 
        {
            d.push_back(str[i]);
        }
    }
    return d;
    
}


int main()
{
    string str = "My new car";

    cout << "Enter a string : ";
    getline(cin, str);

    cout << str << endl;

    str = anotherString(str);

    cout << str << endl;

    return 0;
}
