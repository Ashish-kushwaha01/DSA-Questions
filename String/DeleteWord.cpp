/* Write a program to delete a given word in my string . */
#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    string s;
    cout << "Enter your string : ";
    getline(cin, s);

    cout << "Enter which word do you want to delete : ";
    string p;
    cin >> p;

    int n = s.size();
    int k = p.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == p[count])
        {
            
            if (count == k)
                break;
            for (int j = i; j < n; j++)
            {
                s[j] = s[j + 1];
            }
            count++;
            n--;
            i--;
        }
    }

    cout << "After deleting my word in my string is : " << s;

    return 0;
}