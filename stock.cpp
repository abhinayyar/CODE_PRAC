// The idea of this problem is we can make only one transaction

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
	public:
	int profit(vector<int> & stock)
	{
		int maxgain=0,MaxtillNow= -10000;
		for(int i=stock.size()-1;i>=0;i--)
		{
			maxgain=max(maxgain,MaxtillNow-stock[i]);
			MaxtillNow=max(stock[i],MaxtillNow);
		}
		return maxgain;
	}
};

int main()
{
	Solution ob;
	int arr[]={2,5,1,3,8};
	vector<int> stock(arr,arr+sizeof(arr)/sizeof(int));
	cout<<"Max Profit "<<ob.profit(stock)<<"\n";
	return 0;
}
