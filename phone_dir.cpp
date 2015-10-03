#include<iostream>
#include<cstring>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    void find_combi(vector<string>& res,string& stack,map<int,string>& m,int k,int start,string digits)
    {
	//int num= digits[start]-'0';
	//cout<<num<<"\n";
	//cout<<"map val is : "<<m[num]<<" Digits val "<<digits[0]<<"\n";
        if(k==0)
        {
            res.push_back(stack);
            return;
        }
        for(int i=0;i<m[digits[start]-'0'].size();i++)
        {
            stack.push_back(m[digits[start]-'0'][i]);
            find_combi(res,stack,m,k-1,start+1,digits);
            stack.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        
        // Create map list
        map<int,string> m;
        int count=0,i=0,j=0,k=digits.size();
        string sub;
        sub.resize(k);
        vector<string> res;
        string stack;
        if(digits.size()==0) return res;
        // Create a map maping strings with numbers
        for(i=2;i<=9;i++)
        {
                string sn;
                sn.resize(3);
                for(int j=0;j<3;j++)
                {
                        char rs =(char)('a'+j+count);
                        sn[j]=rs;

                }
		if(i==7)
		{
			sn.resize(4);
			sn[3]=(char)('a'+3+count);
			count++;
		}
		count+=3;
                if(i==9)
                {
                        sn.resize(4);
                        sn[3]='z';
                }
                m[i]=sn;
		cout<<m[i]<<"\t";
        }
	cout<<"\n";
        
	//cout<<"Map 2 is "<<m[2]<<"\n";
        find_combi(res,stack,m,k,0,digits);
        return res;
        
    }
};
int main()
{
	Solution ob;
	string s="23";
	vector<string> res;
	res=ob.letterCombinations(s);
	for(string n : res)
	{
//		cout<<n<<"\t";
	}
	cout<<"\n";
	return 0;
}
