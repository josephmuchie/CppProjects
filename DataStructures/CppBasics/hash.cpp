#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

#define f first;
#define s second;

using namespace std;

void countingSort(int length, vector<int> &arr){
    int min, max, range, idx;
    int count[length], i , j;
    min = max = arr[0];

    for( i =0; i < length; i++){
        min = (arr[i] < min) ? arr[i] : min;
        max = (arr[i] > max) ? arr[i] : max;
    }
    range = 1 + max - min;
      cout << range << " ";
    //count[length];

    for(i = 0; i < length; i++){
        count[arr[i] - min]++;
    }

    for(i = 0; i < range; i++){
        
        for(j = 0; j < count[i]; j++){
            arr[idx] = min + i;
            idx++;
        }
    }
  
}

void printArray(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
    cout << "\n";
}

int main(){
    vector <int> arr = {1,3,1,4,3,1,4,2,1,4};
    int length = size(arr);
    countingSort(length, arr);
    printArray(arr);

/*vector<int> arr = {2,5,7,4,2,3,4,1,7};
sort(arr.begin(),arr.end());

unordered_map <int, int> um = {};

for(auto v: arr){
    if(um.find(v) != um.end()){
        um[v]++;
    }

    else{
        um[v] = 0;
    }
}

for(auto x : um){
    cout  << x.first << " -> " << x.second << "\n";
    
}
*/
    return 0;
}