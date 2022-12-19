#include <stdio.h>
#include <string.h>

int main()
{
	int t, i, j, k, got, score[101];
	long long a, b;
	scanf("%d",&t);
	while(t--)
	{
		memset(score,0,sizeof score);
		for(i=0;i<11;i++)
		{
			scanf("%d",&k);
			score[k]++;
		}
		scanf("%d",&got);
		for(i=100;;got-=score[i--]) if(score[i]>=got)
			{
				a = b = 1;
				for(j=0;j<got;j++) a*=score[i]-j, b*=(j+1);
				printf("%lld\n",a/b);
				break;
			}
	}
	return 0;
}
