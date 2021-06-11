#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> nums, int target)
{
    vector<int> arr(2);
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j <= nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                arr = {i, j};
                // arr[1] = j;
                return (arr);
            }
        }
    }
    cout << "No match Found";
    exit(0);
}
int main()
{
    vector<int> nums(1), result;
    int target, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cin >> target;
    result = twoSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
    return 0;
}