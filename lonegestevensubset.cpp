#include <iostream>
using namespace std;
int lengthsubr(string arr,int n)
{
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        int l=i,r=i+1;
        int lsum=0,rsum=0;
        while(r<n&&l>=0)
        {
            lsum+=arr[l]-'0';
            rsum+=arr[r]-'0';
            if(lsum==rsum)
            ans=max(ans,r-l+1);
          
          l--;r++;  
        }
    }
    return ans;
}

int main() {
	//codeis
	string str="";
	int t;
	cin>>t;
	while(t--)
	{
	    cin>>str;
	    cout<<lengthsubr(str,str.length())<<endl;
	}
	
	return 0;
}
