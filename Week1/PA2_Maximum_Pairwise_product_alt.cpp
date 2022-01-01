#include <iostream>
#include <vector>
using namespace std;

long long getMaxPairwiseProduct(long long length, vector <long long> input_nums){
    long long product = 0;
    for(long long i = 0; i <length; i++){
        for(long long j = 0; j <length;j++){
            if(input_nums[i]*input_nums[j]> product){
                if(i == j){
                    continue;
                }
                product = input_nums[i]*input_nums[j];
            }
        }
    }
    return product;

}
int main(){
    long long n;
    vector <long long> inputs;
    cin>>n;
    inputs.resize(n);
    for(long long i = 0; i<n;i++)
        cin>>inputs[i];
    cout<<getMaxPairwiseProduct(n,inputs);
}
