#include<bits/stdc++.h>
using namespace std;

class Ladder {
    int start;
    int end;

public:
    Ladder(int startIn, int endIn) {
        start = startIn;
        end = endIn;
    }

    int getStart() {
        return start;
    }

    int getEnd() {
        return end;
    }
};