#include <iostream>
using namespace std;
// allocate more than necessary
int A[112345];
int main() {
    int T;
    cin >> T;
    for (int cas = 1; cas <= T; cas++) {
        // we use 'cas' because 'case' is a keyword
        int N;
        cin >> N;
        int count = 0;
        for (int i = 1; i <= N; i++) {
            cin >> A[i];
        }
        for (int i = 1; i <= N; i++) {
            if(i > 1){
                if(A[i] != A[i - 1]){
                    count++;
                    continue;
                }
            }
            if(i < N){
                if(A[i] != A[i + 1]){
                    count++;
                }
            }
        }
        cout << count << '\n';
    }
}
