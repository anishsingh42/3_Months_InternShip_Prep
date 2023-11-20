class Solution {
public:
    bool isCycleDFS(vector<int> &visit,unordered_map<int, vector<int>> &adj, int idx){
        /*
        * if(visit[idx] == ' 0') ===> the courses are not visited
        * if(visit[idx] == '1') ===> the current course idx has been visisted and we are currently in recursion checking its child nodes or directed nodes.
        * if(visit[idx] == '2') ===> the current node is visited along with its all child or directed nodes 
        */
        
        
        if(visit[idx] == 1){
            return true; // cycle present and ended up back in the same spot
        }
        if(visit[idx] == 0){
            visit[idx] = 1;
            for(auto edge: adj[idx]){
                if(isCycleDFS(visit, adj, edge)) return true; // cycle present
            }
        }
        
        visit[idx] = 2;
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // lets create a graph or adjacent list 
        unordered_map<int, vector<int>> adj;
        
        
        for(auto vec: prerequisites){
            int a = vec[0];
            int b = vec[1];
            
            // a -----> b
            adj[a].push_back(b);
        }
        
        vector<int> visit(numCourses, 0);
        for(int i=0; i<numCourses; i++){
            if(!visit[i] and isCycleDFS(visit, adj, i)) return false; // present of cycle
        }
        
        
        return true; // cycle not present
        
    }
};