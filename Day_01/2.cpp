/*https://leetcode.com/problems/remove-element/
Remove Element
*/
#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0)
            return 0;
        int i=0,j=nums.size()-1;
        for(i=0;i<j;i++)
        {
            if(nums[i]==val)
            {
                while(1)
                {
                    if(nums[j]==val)
                    {
                        if(j==i && i==0)
                            return 0;
                        else if(j==i && i!=0)
                        {
                            return j;
                        }
                        else
                            j--;
                    }
                    else
                    {
                        break;
                    }
                }
                nums[i]=nums[j];
                j--;
            }
        }
        if(nums[i]==val && i==j)
            return j;
        return j+1;
    }
    
int main()
{
    vector<int> nums;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    int k;
    cin>>k;
    int res=removeElement(nums,k);
    if(res==0)
     cout<<"[]";
    else
    {
        for(int i=0;i<res;i++)
            cout<<nums[i]<<" ";
    }
}