#include <bits/stdc++.h>
using namespace std;
class Edge{
    public:
    int source;
    int dest;
    int weight;
};
bool compare(Edge e1, Edge e2){
    return e1.weight < e2.weight;
}

int findParent(int v, int *parent){
    if(parent[v]==v){
    return v;
    }
    return findParent(parent[v], parent);
}
void Kruskals(Edge *input, int n, int E){
    sort(input, input+E, compare);
    Edge *output = new Edge[n-1];
    int *parent = new int[n];
    for(int i=0;i<n;i++){
        parent[i]=i;
    }
    int cost=0;
    int count=0;
    int i=0;
    while(count!=n-1){
        Edge currentEdge = input[i];
        int sourceParent = findParent(currentEdge.source, parent);
        int destParent = findParent(currentEdge.dest, parent);
        if(sourceParent!=destParent){
            output[count]=currentEdge;
            count++;
            cost+=currentEdge.weight;
            parent[sourceParent]=destParent;
        }
        i++;
    }
    for(int i=0;i<n-1;i++){
        if(output[i].source< output[i].dest){
        cout<<output[i].source<<" "<<output[i].dest<<" "<<output[i].weight<<endl;
        }
        else{
         cout<<output[i].dest<<" "<<output[i].source<<" "<<output[i].weight<<endl;   
        }
    }
    cout<<"Cost is: "<<cost<<endl;
}
int main()
{
    int n,E;
    cin>>n>>E;
    Edge *input = new Edge[E];
    for(int i=0;i<E;i++){
        int s,w,d;
        cin>>s>>d>>w;
        input[i].source=s;
        input[i].dest=d;
        input[i].weight=w;
    }
    cout<<"Implementing Kruskals: "<<"\n";
    Kruskals(input, n, E);

    return 0;
}
/*
6 11
0 1 2
1 3 1
0 2 4
2 4 9
4 5 5
3 5 7
4 3 11
2 5 10
0 3 3
2 1 8
2 3 6
Implementing Kruskals: 
1 3 1
0 1 2
0 2 4
4 5 5
3 5 7
Cost is: 19

*/
