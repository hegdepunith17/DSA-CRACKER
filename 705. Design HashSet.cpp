// class MyHashSet {
// public:
//     vector<int >m;
    
//     MyHashSet() {
//        int size=1e6+1;
//         m.resize(size);
//     }
    
//     void add(int key) {
//         m[key]=1;
        
//     }
    
//     void remove(int key) {
//         m[key]=0;
//     }
    
//     bool contains(int key) {
//         if(m[key])return 1;
//         else return 0;
//     }
// };
class MyHashSet {
public:
    vector<list<int>>m;
     int size;
    MyHashSet() {
       size=100;
        m.resize(size);
    }
    int hash(int key)
    {
        return key%size;
    }
    void add(int key) {
      if(contains(key))return;
        else {
            int i=hash(key);
            m[i].push_back(key);
            
        }
        
    }
    
    void remove(int key) {
       if(contains(key))
       {
           int i=hash(key);
           m[i].erase(search(key));
           
       }
        else return ;
    } 
    list<int>::iterator search(int key)
    {
        int i=hash(key);
        return find(m[i].begin(),m[i].end(),key);
        
        
        
    }
    
    
    bool contains(int key) {
        int i=hash(key);
        if(search(key)!=m[i].end())return true;
           else return false;
      
    }
};
