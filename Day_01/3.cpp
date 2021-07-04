/*https://leetcode.com/problems/shuffle-the-array/
Shuffle the Array
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) 
{
    vector<int> v;
    for(int i=0,j=n;j<nums.size();i++,j++)
    {
        v.push_back(nums[i]);
        v.push_back(nums[j]);
    }
    return v;
}

int main()
{
    vector<int> nums;
    int size,val;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    int n;
    cin>>n;
    nums=shuffle(nums,n);
    for(int i=0;i<size;i++)
        cout<<nums[i]<<" ";
}