#include<iostream>
#include<vector>
using namespace std;

void Vect_Implementation(){

    vector<int> v;

   

    v.push_back(2);
    v.emplace_back(4);
     
    cout<<v[0]<<endl;

    
    vector<pair<int ,int>>v_pair;
     v_pair.push_back({1, 2});
    v_pair.push_back({3, 4});
    v_pair.push_back({5, 6});

    cout<<v_pair[0].first<<endl;
    cout<<v_pair[0].second<<endl;

     cout<<v_pair[2].first<<endl;
    cout<<v_pair[2].second<<endl;



    vector<int>Org(5,100);
    // for(int i=0;i<Org.size();i++){
    //     cout<<"-"<<Org[i];
    // }

    // vector<int>Copy(Org);
    //  for(int i=0;i<Copy.size();i++){
    //     cout<<"-"<<Copy[i];
    // }
    
    
// for(auto it = Org.begin(); it != Org.end(); it++){
//     cout << *it << " ";
// }

vector<int>Nat={1,2,3,4,5,6};
for(int i=0;i<Nat.size();i++){
    cout<<Nat[i]<<" ";

}
Nat.erase(Nat.begin()+1);

for(int i=0;i<Nat.size();i++){
    cout<<Nat[i]<<" ";

   

}
 cout<<"OVER"<<endl;

// for( auto it:Nat){
//     cout<<it;
// }



// vector <int> dell ={1,2,3,4,5};
// dell.erase(dell.begin()+1,dell.begin()+4);
// for(auto a:dell){
//     cout<<a<<" ";
// }
// }
 vector <int> ins ={1,2,3,4,5};
ins.insert(ins.begin()+3,44);
for(auto a:ins){
     cout<<a<<" ";
 }


}
int main(){

Vect_Implementation();
    return 0;
}