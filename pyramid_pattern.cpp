 public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            for(int j=0;j<n-i;j++){
                cout<<" ";
            }
            for(int k=1;k<=i;k++){
                cout<<"*";
            }
            for(int s=1;s<i;s++){
                cout<<"*";
            }
           cout<<endl;
        }
         
    }
};
