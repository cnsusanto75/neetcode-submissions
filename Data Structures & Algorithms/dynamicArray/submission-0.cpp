class DynamicArray {
private:
    int* dynArray = nullptr;
    int capacity = 0;
    int length = 0;
public:
    DynamicArray(int capacity) {
        dynArray = new int[capacity];
        this -> capacity = capacity;
        length = 0;
    }

    int get(int i) {
        return dynArray[i];
    }

    void set(int i, int n) {
        dynArray[i] = n;
    }

    void pushback(int n) {
        if (length == capacity) resize();
        dynArray[length] = n;
        length++;
    }

    int popback() {
        int back = dynArray[length - 1];
        length--;
        return back;
    }

    void resize() {
        capacity *= 2;
        int* temp = nullptr;
        temp = new int[capacity];
        for (int i = 0; i < length; i++){
            temp[i] = dynArray[i];
        }
        delete[] dynArray;
        dynArray = temp;
    }

    int getSize() {
        return length;
    }

    int getCapacity() {
        return capacity;
    }
};
