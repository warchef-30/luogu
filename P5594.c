#include <stdio.h>

int main(){
    int arr[1005][1005];
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            int date;
            scanf("%d",&date);
            arr[date][j]++;
        }
    }
    
    int cnt[1005]={0};
    
    for (int d=1; d<=k; d++){
        for (int j=1; j<=m; j++){
            if (arr[d][j]>0)cnt[d]++;
        }
        printf("%d",cnt[d]);
    }
}