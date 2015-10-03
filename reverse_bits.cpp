#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        vector<int> stack;
        uint32_t num=0;
        int count=0;
        
        while(n>0)
        {
		int np=n&1;
		cout<<np<<"\n";
            stack.push_back(n&1);
            n=n>>1;
        }
        
        while(!stack.empty())
        {
            num+=stack.back()*pow(2,count);
            stack.pop_back();
            count++;
        }
        
        return num;
        
        
    }
};

int main()
{
	Solution ob;
	cout<<ob.reverseBits(uint32_t(1))<<"\n";
	return 0;
}
