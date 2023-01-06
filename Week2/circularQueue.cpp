class MyCircularQueue {
public:
    int array[1000];
    int front=-1;
    int rear=-1;
    int MAX;
    MyCircularQueue(int k) {
        array[k];
        MAX=k;
    }
    
    bool enQueue(int value) {
        if (isFull())
        {
            return false;
        }
        if (isEmpty())
        {
            front++;
        }
        rear = (rear + 1) % MAX;
        array[rear] = value;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty())
        {
            return false;
        }
        int value = array[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
            return true;
        }
        front = (front + 1) % MAX;
        return true;
    }
    
    int Front() 
    {
        if(!isEmpty())
        {
            return array[front];
        }
        return -1;
    }
    
    int Rear() {
        if(!isEmpty())
        {
            return array[rear];
        }
        return -1;
    }
    
    bool isEmpty() {
        if (front == -1)
        {
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if ((front == 0 && rear == MAX - 1) ||
        (front == rear + 1))
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */