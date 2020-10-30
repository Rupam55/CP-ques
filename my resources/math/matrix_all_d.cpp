ll n;
        cin>>n;

        vector<vector<ll>> matrix (n,vector<ll>(n,0));

        for(ll i=0; i<n; i++){
            for(ll j=0; j<n; j++){
                cin>> matrix[i][j];
            }
        }

        vector<ll> vals;
        ll sum =0;
        for(ll i=0; i<n; i++){
            sum+= matrix[i][i];
        }vals.push_back(sum);

        for(ll i=1 ; i < n; i++){
            sum =0;
            for(ll j=0; j < n-1; j++){
                if((i+j) <n && j<n){
                    sum += matrix[i+j][j];
                }
            }
            vals.push_back(sum);
        }

        for(ll j= 1; j<n; j++){
            sum =0; 
            for(ll i=0 ; i<n-1; i++){
                if((j+i) < n && i < n){
                    sum += matrix[i][j+i];
                }
            }
            vals.push_back(sum);
        }

        ll maxi =LONG_LONG_MIN;
        for(auto it: vals){
            // cout<<it<<" ";
            maxi = max(it,maxi);
        }

        cout << "Case #" << t1 - t << ": " << maxi << "\n";