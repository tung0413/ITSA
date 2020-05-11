#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define MAXN 1000

typedef pair<int, int> EDGE;

vector< vector<EDGE> > g;
int cost[1000];

typedef pair<int, int> PQPAIR;
typedef priority_queue< PQPAIR, vector<PQPAIR>, greater<PQPAIR> > PQ;

int Dijkstra(int source, int target)
{
    PQ pq;
    int cost[MAXN];
    memset(cost, 0x3f, sizeof(cost));
    cost[source] = 0;
    pq.push(make_pair(0, source));
    while(!pq.empty()){
        PQPAIR pqPair = pq.top();
        int u = pqPair.second;
        if(u==target) break;
        pq.pop();
        for(int i=0; i<g[u].size(); i++){
            int v = g[u][i].first;
            int c = g[u][i].second;
            if(cost[v] > cost[u] + c){
                cost[v] = cost[u] + c;
                pq.push(make_pair(cost[v], v));
            }
        }
    }
    return cost[target];
}

int main()
{
    int s, n ;

    cin >> s;
    while(s--){
        cin >> n;
        g.clear();
        g.resize(n+1);
        int u, v, w;

        while(cin>>u)
        {
        	if(u==-1)break;
        	cin>>v>>w;
        	g[u].push_back(EDGE(v, w));
        }
        int ans2=0, ans=0;
    	for(int j=0;j<n+1;j++)
    	{
    	int dj=Dijkstra(0,j);
    		if(dj>ans)
    		{
    			ans=dj;
    			ans2=j;
    		}
    		else if(dj==ans)
    		{
    			if(ans2>j)ans2=j;
    		}
    	}
    	cout<<ans2<<" "<<ans<<endl;
    }

    return 0;
}
