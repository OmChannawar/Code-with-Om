/*In this code file, i'll be solving another problem of DSA known as Next Greater Element.*/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    vector<int> arr = {6, 8, 0, 1, 3};
    stack<int> s;

    vector<int> ans(arr.size(), 0);

    for(int i = arr.size() - 1; i >= 0; i--)
    {
        while(s.size() > 0 && s.top() <= arr[i])
        {
            s.pop();
        }

        if(s.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = s.top();
        }

        s.push(arr[i]);
    }

    for(int val : ans)
    {
        cout << val << " ";
    }

    return 0;
}


/*Talking about the time complexity, as we have used stack, the worst case scenario will also have O(n) i.e. Linear Time Complexity*/