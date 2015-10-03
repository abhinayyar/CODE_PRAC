#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void find_comb(vector<vector<int> >& res,vector<int>& stack,int start,int sum,int k,int n)
    {
        if(k==0 && sum==n)
        {
            res.push_back(stack);
            return;
        }
        if(k<0) return;
        
        for(int i=start;i<=n;i++)
        {
            stack.push_back(i);
            sum+=i;
            find_comb(res,stack,i+1,sum,k-1,n);
            sum-=i;
            stack.pop_back();
        }
    }
    vector<vector<int> > combinationSum3(int k, int n) {
        vector<int> stack;
        vector<vector<int> > res;
        
        if(n==0 || k==0) return res;
        
        find_comb(res,stack,1,0,k,n);
        
        return res;
        
    }
};
int main()
{
	Solution ob;
	vector<vector<int> > res;
	res=ob.combinationSum3(8,30);
	return 0;
}
