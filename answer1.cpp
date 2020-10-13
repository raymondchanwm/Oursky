#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
bool isSubset (vector<string>seta,vector<string>setb)
{
    //sorting elements in sets in chronological orders
    sort(seta.begin(),seta.end());
    sort(setb.begin(),setb.end());

    //compare elements in sets
    //i indicates set b,
    int j=0;
    for(int i=0;i<setb.size();i++)
    {
        while (setb[i] != seta[j])
        {
            if (j<seta.size()-1)
            {
                j++;
            }
            else
            {
                return false;
            }
        }
    };
    return true;
}

int main()
{
    //Store sets in vectors
    vector<string> set1, set2, set3, set4, set5;
    set1.insert(set1.end(), {"A", "B", "C", "D", "E"});
    set2.insert(set2.end(), {"A", "E", "D"});
    set3.insert(set3.end(), {"A", "D", "Z"});
    set4.insert(set4.end(), {"A", "D", "E"});
    set5.insert(set5.end(), {"A","A", "D", "E"});
    
    //Test whether set"b" is the Subset of set a
    cout<<boolalpha; 
    cout<<isSubset(set1, set2);
    cout<<isSubset(set1, set3);
    cout<<isSubset(set4, set5);
    return 0;
}
