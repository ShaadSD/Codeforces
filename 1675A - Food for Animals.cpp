    #include <bits/stdc++.h>
    using namespace std;
     
     
    int main()
    {
        int t;
        cin>>t;
        while(t--){
            int a,b,c,x,y;
            cin>>a>>b>>c>>x>>y;
            
            
            int food_dog=max(0,x-a);
            int food_cat=max(0,y-b);
            
            if(food_dog + food_cat <=c){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        
        
        return 0;
    }