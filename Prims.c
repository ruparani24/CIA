#include <stdlib.h>
#include <stdio.h>
int cyc(int a,int par[]){
    while(par[a]) a=par[a];
    return a;
}
void krus(int n,int arr[][n]){
    int par[n],itr=1,cost=0;
    while(itr<n){
        int min=99999,a,b,c,d;
        for(int i=0;i<n;i++){
            par[i]=0;
            for(int j=0;j<n;j++){
                if(arr[i][j]<min){
                    min=arr[i][j];
                    a=c=i;b=d=j;
                }
            }
        }
        c=cyc(c,par);
        d=cyc(d,par);
        if(c!=d){
            par[c]=d;
            printf("%d - %d  %d\n",b,a,min);
            cost+=min;
            itr++;
        }
        arr[a][b]=arr[b][a]=99999;
    }
    printf("Total cost:%d\n",cost);
}
int main(){
    int n=5;
    int arr[5][5]={ { 0, 3, 0, 4, 0 },
                    { 4, 1, 2, 9, 5 },
                    { 0, 2, 6, 7, 3 },
                    { 5, 9, 0, 0, 2 },
                    { 0, 3, 6, 1, 0 } };
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0) arr[i][j]=99999;
        }
    }
    krus(n,arr);
    return 0;
}
