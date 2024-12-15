    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main()
    {
        int t;
        cin >> t;
        while(t--) {
            int n,d;
            cin>>n>>d;
            vector<int>m(n);
            for(int i=0;i<n;i++){
                cin>>m[i];
            }
            sort(m.begin(),m.end());
             int max=*max_element(m.begin(),m.end());
                if(max<=d){
                    cout<<"YES"<<endl;
                }
                else if(m[0]+m[1]>d){
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                }
        
            
        }
        return 0;
    }