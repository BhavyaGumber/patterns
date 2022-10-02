class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i=1;i<=n;i++){
            for(int j=0;j<i-1;j++){
                cout<<" ";
            }
            for(int k=n;k>i;k--){
                cout<<"*";
            }
            for(int s=n;s>=i;s--){
                cout<<"*";
            }
           cout<<endl;
        }
	}
};
