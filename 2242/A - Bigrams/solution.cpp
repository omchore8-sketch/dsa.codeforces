#include <iostream>
 
#include <vector>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int k;
        cin >> k;
 
        int count_3_or_more = 0;
        int count_2_or_more = 0;
 
        for (int i = 0; i < k; i++) {
            int card_count;
            cin >> card_count;
 
            if (card_count >= 3) {
                count_3_or_more++;
            }
            if (card_count >= 2) {
                count_2_or_more++;
            }
        }
 
 
        if (count_3_or_more > 0 || count_2_or_more >= 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}