#include "RingBuff.h"

class ArrayBasedQueueIterator {
private:
    ArrayBasedQueue& _arrayBasedQueue;
    int _index;
public:
    explicit ArrayBasedQueueIterator(ArrayBasedQueue& arrayBasedQueue);

    void start();

    void next();

    bool finish();

    int getValue();
};
