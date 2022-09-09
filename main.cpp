#include <iostream>
#include <vector>
using namespace std;

// O(nLog(n)) time | O(1) space
bool classPhotos(vector<int> redShirtHeights, vector<int> blueShirtHeights) {
    sort(redShirtHeights.begin(), redShirtHeights.end());// O(nLog(n)) time
    sort(blueShirtHeights.begin(), blueShirtHeights.end());// O(nLog(n)) time
    string frontRowColor = (redShirtHeights[0] < blueShirtHeights[0]) ? "RED" : "BLUE";
    for(int i = 0; i < redShirtHeights.size(); i++) {// O(n) time
        if(frontRowColor == "RED") {
            if(redShirtHeights[i] >= blueShirtHeights[i]) {
                return false;
            }
        } else {
            if(blueShirtHeights[i] >= redShirtHeights[i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<int> redShirtHeights = {5, 8, 1, 3, 4};
    vector<int> blueShirtHeights = {6, 9, 2, 4, 5};
    cout << classPhotos(redShirtHeights, blueShirtHeights);
    return 0;
}
