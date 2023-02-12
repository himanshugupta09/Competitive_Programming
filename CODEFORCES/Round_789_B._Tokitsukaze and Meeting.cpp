#include<bits/stdc++.h>
using namespace std;
int rownum[1000100];
int col[1000100];
int n,m;
void init(){
	for(int i = 0;i <= max(n,m);i++) {
		rownum[i] = col[i] = 0;
	}
}
void solve(){
	scanf("%d%d",&n,&m);
	init();
	int las = -n*m;
	int colnum = 0;
	char tmp;
	for(int i = 0;i < n*m;i++) {
		scanf(" %c",&tmp);
		tmp -= '0';
		if(tmp == 1) {
			las = i;
			if(col[i%m] == 0) {
				col[i%m] = 1;
				colnum++;
			}
		}
		if(i - las < m) {
			rownum[i%m]++;
		}
		if(i!=0) printf(" ");
		printf("%d",rownum[i%m] + colnum);
		
	}
	printf("\n");
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--) {
		solve();
	}
} 
