int ans=INT_MAX;
    // vi vis(m+1,0);
    // vis[1]=1;
    // for(int i=n-1;i>=0;i++){
    //         int maxi=INT_MIN, mini=INT_MAX;
    //         int cnt=0;
    //     for(int j=i;j>=0;j--){
    //         for(auto it:adj[j]){
    //             if(!vis[it]){
    //                 maxi=max(maxi,a[j]);
    //                 mini=min(mini,a[j]);
    //                 vis[it]=1;
    //                 cnt++;
    //             }
    //             if(cnt==m) break;
    //         }
    //             if(cnt==m) break;
    //     }
    //     if(cnt==m) ans=min(ans,(maxi-mini));
    // }
    // cout<<ans<<"\n";