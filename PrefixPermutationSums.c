#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n-1];
        int st[n+1];
        for(int i=0; i<=n; i++)
            st[i] = 0;
        st[n] = 1;
        for(int i=0; i<n-1; i++){
            scanf("%d", &arr[i]);
            st[arr[i]] = 1;
        }
        int fl = 1;
        int left = -1;
        if(st[arr[0]] == 1){
            st[arr[0]] = 0;
        } else {
            if(left == -1)
                left = arr[0];
            else
                fl = 0;
        }
        for(int i=1; i<n-1; i++){
            int diff = arr[i] - arr[i-1];
            if(st[diff] == 1){
                st[diff] = 0;
            } else {
                if(left == -1)
                    left = diff;
                else {
                    fl = 0;
                    break;
                }
            }
        }
        if(fl == 0){
            printf("NO\n");
        } else {
            int sum = 0;
            for(int i=1; i<=n; i++)
                sum += st[i]*i;
            if(left == -1){
                int req = n*(n+1)/2;
                if(req - arr[n-2] == sum)
                    printf("YES\n");
                else
                    printf("NO\n");
            } else {
                if(sum == left)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
        }
    }
    return 0;
}
