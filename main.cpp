#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   if (cnt == M) {
      for(int v: vec) cout << v << " "; cout << endl;
      return;
   }
   int last = 0;
   if (last = cnt) {
      last = vec[cnt - 1];
   }
   for(int i = last; i < N; i++) {
      vec.push_back(i+1);
      func(cnt+1);
      vec.pop_back();
   }
}

int main() {
   cin >> N >> M;
   func(0);
}
