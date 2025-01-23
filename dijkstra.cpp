#include <iostream>
using namespace std;

vector<vector<int>> graph;
vector<int> dist;

typedef long long ll;

void dijkstra(int r){
    priority_queue<pair<ll, ll>> prioq; 

    dist[r] = 0;

    prioq.push({-dist[r], r})

    for(int i = 0; i < m; i++){
        cin >> graph[i][1] >> graph[i][2] >> graph[i][0];
    }

    while(!prioq.empty()){
        ll act = prioq.front().second;
        ll distance = -prioq.front().first;
        pq.pop();

        if(distance != dist[act]) continue;

        for(auto c : graph[act]){
            if(dist[act] + c.second < dist[c.first]){
                dist[c.first] = fist[act] + c.second;
                prioq.push({-dist[i.first], i.first})
            }
        }
    }
}

int main(){

    int n, m;
    cin >> n >> m;

    graph.resize(m, vector<int>(3));
    dist.resize(n, inf);



	return 0;
 
}