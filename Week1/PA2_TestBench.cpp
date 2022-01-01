#include<iostream>
#include<cstdlib>
#include<vector>
#include "PA2_Maximum_Pairwise_product.cpp"
#include  "PA2_Maximum_Pairwise_product_alt.cpp"

using namespace std;

int main(){
    while(true){
        long long n = rand()%10 + 2;
        cout <<n<<"\n";
        vector <long long> a;
        for (long long i = 0; i <n;i++){
            a.push_back(rand()%100000);
        }
        for(long long i =0; i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        long long res1 = pairWiseProduct(n,a);
        long long res2 = getMaxPairwiseProduct(n,a);
        if(res1 != res2){
            cout<<"Wrong answer: "<< res1 <<" "<<res2<<"\n";
            break;
        }
        else{
            cout<<"Ok\n";
        }
    }
}