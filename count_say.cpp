#include<iostream>
#include<cstring>

using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
       	string res; 
        int count=1,val=1;
        string s="1";
        while(val<n)
        {
          	cout<<"Mod st"<<s<<"\n"; 
            for(int i=0;i<s.size();i++)
            {
                if(s[i]==s[i+1])
                {
                    count++;
                    continue;
                }
                res=res+to_string(count)+s[i];
                count=1;
            }
		cout<<res<<"\n";
            s.assign(res);
		res.assign("");
            count=1;
            val++;
        }
        return s;
        
    }
};
int main()
{
	Solution ob;
	cout<<ob.countAndSay(4)<<"\n";
	
	return 0;
}
