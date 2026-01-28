#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

// Function to find the Next Greater Element (NGE) for each element in nums1 based on nums2
vector<int> nextGreaterElement(const vector<int> &nums1, const vector<int> &nums2)
{
    unordered_map<int, int> nextGreater; // maps each number in nums2 to its next greater element
    stack<int> st;                       // monotonic stack to keep track of elements

    // Traverse nums2 in reverse to find next greater elements
    for (int i = nums2.size() - 1; i >= 0; i--)
    {
        int num = nums2[i];

        // Pop smaller or equal elements from the stack
        while (!st.empty() && st.top() <= num)
        {
            st.pop();
        }

        // If stack is empty, no greater element exists
        if (st.empty())
        {
            nextGreater[num] = -1;
        }
        else
        {
            nextGreater[num] = st.top();
        }

        // Push current number into stack
        st.push(num);
    }

    // Build result for nums1 using the precomputed map
    vector<int> result;
    result.reserve(nums1.size());
    for (int num : nums1)
    {
        result.push_back(nextGreater[num]);
    }

    return result;
}

// Driver function
int main()
{
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    vector<int> result = nextGreaterElement(nums1, nums2);

    cout << "Next Greater Elements: ";
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}