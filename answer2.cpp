#include <list>
#include <iostream>
#include <unordered_map>
using namespace std; 
  
class LRUCache 
{ 
    // declare a list for cache
    list<int> ca; 
  
    // declare a iterator and a maximum size for cache
    unordered_map<int, list<int>::iterator> it; 
    int casize;
  
public: 
    LRUCache(int); 
    void putkey(int); 
    int getkey(int);
    void printkey(); 
};
  
// Declare the size 
LRUCache::LRUCache(int i) 
{ 
    casize = i; 
}
  
// insert a key x in the cache
void LRUCache::putkey(int x) 
{ 

    if (it.find(x) == it.end()) { 
        // if cache is full then delete LRU
        if (ca.size() == casize) { 
            int caback = ca.back(); 
            ca.pop_back(); 
            it.erase(caback); 
        } 
    } 
  
    ca.push_front(x); 
    it[x] = ca.begin(); 
} 
  
// display all keys
void LRUCache::printkey() 
{ 
    for (auto i = ca.begin(); i != ca.end(); 
         i++) 
            cout << (*i) << " "; 
         
  
    cout << endl; 
} 

// get the distinct key in the cache
int LRUCache::getkey(int x)
{
    int y = -1;
    if (it.find(x) == it.end())
    {
        return y;
    }
    else
    {
        return x;
    }
}

int main() 
{ 
    LRUCache cac(4); 
    //input keys into the cache
    cac.putkey(1); 
    cac.putkey(2); 
    cac.putkey(3); 
    cac.putkey(4); 
    cac.putkey(5); 
    cac.putkey(6); 
    //print all keys in the cache
    cac.printkey(); 
    // get keys from the cache
    cout<<cac.getkey(5);
    cout<<cac.getkey(1);
    return 0; 
} 