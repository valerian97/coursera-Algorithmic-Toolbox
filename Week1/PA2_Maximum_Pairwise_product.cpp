//Input -> n
//      -> Xo ..Xi... Xn 

#include <iostream>
#include <vector>
using namespace std;
long long getGreatestValueIdx(long long length, vector<long long> input_nums, long long idx_to_ignore = -1){
    int idx_of_max = -1;
    for(long long i = 0; i <length; i++){
        if(i == idx_to_ignore)
            continue;
        if(idx_of_max == -1)
            idx_of_max = i;
        if(input_nums[i] >= input_nums[idx_of_max])
            idx_of_max = i;
    }
    return idx_of_max;
}
long long pairWiseProduct(long long length, vector<long long> input_nums){
    long long idx_of_max = getGreatestValueIdx(length,input_nums);
    long long idx_of_second_max = getGreatestValueIdx(length,input_nums,idx_of_max);
    return input_nums[idx_of_max]*input_nums[idx_of_second_max];
}


int main(){
    long long n;
    cin>>n;
    vector <long long> inputs;
    inputs.resize(n);
    for (long long i = 0; i<n;i++)
        cin>>inputs[i];
    cout<<pairWiseProduct(n,inputs);
}


