#include<iostream>
#include<vector>

using namespace std;

int coinchange2(vector<int> &A, int B) {
    vector<int> buf(B+1,0);
    buf[0]=1;
   
	// simple approach is that if we pick any coin then we are sure we will include it, then we need
//	to find max ways to find it in num N-coin, so we can move on this way

	for(int i=0;i<A.size();i++)
	{
		for(int j=A[i];j<=B;j++)
		{
			buf[j]+=buf[j-A[i]];
		}
	}
	 
    return buf[B];
}
int main()
{
	int arr[]={1,2,3};
	vector<int> A(arr,arr+sizeof(arr)/sizeof(int));
	cout<<"Result is "<<coinchange2(A,4)<<"\n";
}
