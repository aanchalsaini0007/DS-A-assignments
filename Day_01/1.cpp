/*https://leetcode.com/problems/remove-duplicates-from-sorted-array/
Remove Duplicates from Sorted Array*/

#include<iostream>
#include<vector>
using namespace std;
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
        if(nums.size()==0)
            return 0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
    int main()
    {
        int n;
        cin>>n;
        int val;
        vector<int> nums;
        for(int i=0;i<n;i++)
        {
            cin>>val;
            nums.push_back(val);
        }
        int k=removeDuplicates(nums);
        for(int i=0;i<k;i++)
            cout<<nums[i]<<" ";
    }
    
