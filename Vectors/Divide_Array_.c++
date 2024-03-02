/* Can we divide these array into two subarray whose sum are equal to each other .
   If yes , then return "yes",else return "NO".
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool divide(vector<int> arr)
{
    int add = 0, sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    for (int i = 0; i < arr.size() - 1; i++)
    {
        add += arr[i];
        int ans = sum - add;

        if (add == ans)
            return 1;
    }
    return 0;
}
int main()
{

    //  ****** First method ******** .

    int brr[] = {3, 4, -2, 5, 8, 20, -10, 8};
    // int end=1;

    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        sum += brr[i];
    }
    int index = -1;
    int add = 0;
    for (int i = 0; i < 7; i++)
    {
        add += brr[i];
        int ans = sum - add;
        {
            if (add == ans)
            {
                index = i;
                cout << "Yes";
                break;
            }
        }
    }
    cout << " \n ";

    cout << "Your sub array are : ";
    for (int i = 0; i <= index; i++)
    {
        cout << brr[i] << " ";
    }

    cout << "\n\n";

    for (int i = index + 1; i < 8; i++)
    {
        cout << brr[i] << " ";
    }

    //  ********* Second Method **************
    // By using function .


    cout<<" \n\n";

    int n;
    cout << "Enter that how many no you have : ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter your no. " << i + 1 << " : ";
        cin >> arr[i];
    }
 
    cout << " \n\n";

    cout << "My no. are : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    cout << " \n\n";

    cout<<divide(arr);

    return 0;
}