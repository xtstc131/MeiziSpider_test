#include "PriorityQueue/PQMin.h"

using namespace std;

int main() {
    int array[] = {2, 3, 5, 6, 1, 7, 8};
    vector<int> v;
    for (int i = 0; i < 7; i++) {
        v.push_back(array[i]);
    }
    for (int i = 0; i < 7; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    PQMin<int> PQ(v, 7);

}
