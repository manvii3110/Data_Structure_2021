#include <bits/stdc++.h>
using namespace std;
#define V 5
int minKey(int key[], bool Mst[]){
    int min=INT_MAX;
    int min_index;
    for(int v=0;v<V;v++){
        if(Mst[v]==false && key[v]<min){
        min=key[v];
        min_index=v;
        }
    }
    return min_index;
}
void printMst(int parent[], int graph[V][V]){
    cout<<"Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout<<parent[i]<<" - "<<i<<" \t"<<graph[i][parent[i]]<<" \n";
    
}
void primMST(int graph[V][V]){
    bool Mst[V];
    int parent[V];
    int key[V];
    for(int i=0;i<V;i++){
        key[i]=INT_MAX;
        Mst[i]=false;
    }
    key[0]=0;
    parent[0]=-1;
    for(int i=0;i<V-1;i++){
        int u = minKey(key ,Mst);
        Mst[u]=true;
        for(int v=0;v<V;v++){
            if(graph[u][v] && Mst[v]==false && graph[u][v]<key[v]){
                key[v]=graph[u][v];
                parent[v]=u;
            }
        }
    }
    printMst(parent, graph);
}
int main()
{
    int graph[V][V] = { { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };
    primMST(graph);
    return 0;
}
/*
Edge 	Weight
0 - 1 	2 
1 - 2 	3 
0 - 3 	6 
1 - 4 	5 
*/