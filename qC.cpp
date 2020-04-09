#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;
typedef long long ll;


void print_vec(const vector<ll>& vec){
    for(auto x:vec)
        cout << x << " ";
    cout<<endl;
}

void update_all_for_jump_n_from(int pos, int jump, ll cost, const vector<ll>& vec, vector<vector<ll>>& min_price_vec){
    if (pos + jump > vec.size() -1)
        return;
}


int main() {
    int n;
    while (cin >> n){
        vector<ll> vec(n+1);
        vector<vector<ll>> min_price_vec(n + 1);
        for(int i=0;i<n+1;i++)
            for(int j=0;j<n+1;j++)
                min_price_vec[i].push_back(LLONG_MAX);
        for (int i=1;i<n+1;i++)
            cin >> vec[i];


        update_all_for_jump_n_from();
        for(const auto& x:min_price_vec){
            for (auto y: x)
                cout << y << "  ";
            cout<<endl;
        }
        cout << *min_element(min_price_vec[n].begin(), min_price_vec[n].end())<<endl;
    }
}


