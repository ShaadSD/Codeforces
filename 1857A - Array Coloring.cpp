    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            vector<int>l(n);
            for(int i=0;i<n;i++){
                cin>>l[i];
            }
            int sum=0;
            int flag=0;
            sort(l.begin(),l.end());
            if(n%2==0){
            for(int i=0;i<n/2;i++){
            if(n>1){
            int k=l[n-1-i]-l[i];
            
            sum=sum+k;
            flag=1;
            
            }else{
                flag=0;
            }
            }
            if(flag==1){
                cout<<sum<<endl;
            }
            else{
                cout<<0<<endl;
            }
        
        }
            if(n%2!=0){
            for(int i=0;i<=n/2;i++){
            if(n>1){
            int k=l[n-1-i]-l[i];
            
            sum=sum+k;
            flag=1;
            
            }else{
                flag=0;
            }
            }
            if(flag==1){
                cout<<sum<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        }
     
        return 0;
    }