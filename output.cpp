#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <random>
using namespace std;
int main(){
vector<int> arr = {9,3,7,1,5,3,2,8,1};
sort(arr.rbegin(),arr.rend());
sort(arr.begin(),arr.end());
arr.erase(unique(arr.begin(),arr.end()),arr.end());
arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x<=3;}),arr.end());
for(auto& x:arr) cout<<x<<" "; cout<<"\n";

return 0;
}
