    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int t;
        cin >> t;
     
        while (t--) {
            int n, m;
            cin >> n >> m;
            string x, s;
            cin >> x >> s;
     
             
            int count = 0;   
            bool found = false; 
     
        if(s!=x){
            for (int i = 0; i < 25; i++) {
                x += x;    
                count++;      
                
              
                if (x.find(s) != string::npos) {
                    found = true;
                    break;  
                }
            }
     
            if (found) {
                cout << count << endl; 
            } else {
                cout << -1 << endl;
            }
        }
        else{
            cout<<0<<endl;
        }
        }
     
        return 0;
    }