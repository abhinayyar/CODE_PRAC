#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        int i=0,j=0,key,temp;
        if(m==0 && n==0) return;
        
      if(m==0)
        {
            return;
        }
        if(n==0) return;
	 
        while(i<=m)
        {
		cout<<nums1[i]<<nums2[j]<<"\n";	
            if(nums1[i]>nums2[j]&&j<=n)
            {
                temp=nums1[i];
                nums1[i]=nums2[j];
                nums2[j]=temp;
                key=nums2[j];
                while(j+1<=n&&nums2[j+1]<key)
                {
                    temp=nums2[j];
                    nums2[j]=nums2[j+1];
                    nums2[j+1]=temp;
                    j++;
                }
            }
		
            i++;
	    j=0;
            
        }

        j=0;
        i=m;
	cout<<"is i"<<i<<"\n";
	
        while(i<(m+n))
        {
            nums1[i]=nums2[j];
            j++;
	    i++;
        }
	
        
    }
};
int main()
{
	Solution ob;
	int arr1[]={1,3,5,6,0,0,0,0};
	int arr2[]={2,4,7,8};
	vector<int> nums1(arr1,arr1+sizeof(arr1)/sizeof(int));
	vector<int> nums2(arr2,arr2+sizeof(arr2)/sizeof(int));
	ob.merge(nums1,4,nums2,4);

	for(int n : nums1)
	cout<<n<<"\t";

	cout<<"\n";
	for(int k : nums2)
	cout<<k<<"\t";
	cout<<"\n";


	char ch='.';
	cout<<(int)ch-'0'<<"\n";
	return 0;
}
