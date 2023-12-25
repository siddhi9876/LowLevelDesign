#include<bits/stdc++.h>
using namespace std;

class Snake {
    int head;
    int tail;

public:
    Snake(int headIn, int tailIn) {
        head = headIn;
        tail = tailIn;
    }

    int getStart() {
        return head;
    }

    int getEnd() {
        return tail;
    }
};