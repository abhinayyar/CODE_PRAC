#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        
        if(s.size()==0) return true;
        if(s.size()<2) return false;
        
        vector<char> stack;
        char c;
        
        if(s[0]=='}' || s[0]==']' || s[0]==')') return false;
        else stack.push_back(s[0]);
        
        for(int i=1;i<s.size();i++)
        {
		
		for(char n : stack)
        	cout<<n<<"\t";
        	cout<<"\n";
		/*
		if(stack.empty())
		{
			cout<<i<<"True\n";
			
			        if(s[i]=='}' || s[i]==']' || s[i]==')') return false;
				else
				stack.push_back(s[i]);
				continue;
		}
		*/
            c=stack.back();
            if(s[i]==')' && c!='(') return false;
            else if(s[i]=='}' && c!='{') return false;
            else if(s[i]==']' && c!='[') return false;
            else if((s[i]=='}' && c=='{') || (s[i]==']' && c=='[') || (s[i]==')' && c=='('))
		{
			cout<<"pop\n";
		 stack.pop_back();
			cout<<"After pop\n";
		}
            else stack.push_back(s[i]);
            
        }
	for(char n : stack)
	cout<<n<<"\t";
	cout<<"\n";
        if(!stack.empty()) return false;
        else
        return true;
    }
};
int main()
{
	Solution ob;
	ob.isValid("()[]{}");
	return 0;

}
