#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution {
public:
    vector<int> grayCode(int n) {
        
        vector<int> res(pow(2,n),0);
        if(n==0) return res;
        res[0]=0,res[1]=1;
        int count=1,end=1;
        for(int i=1;i<n;i++)
        {
            // replicate it
            while(count>=0)
            {
                res[++end]=res[count--];
                res[end]+=(1<<i);
		cout<<res[end]<<"\t"<<end<<"\t"<<count<<"\n";
            }
            count=end;
        }
        
        return res;
    }
};
int main()
{
	Solution ob;
	vector<int> res;
	res=ob.grayCode(3);
	for(int n : res)
	cout<<n<<"\t";

	cout<<"\n";
	return 0;
}
