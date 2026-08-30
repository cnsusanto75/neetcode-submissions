class LinkedList {
public:
    LinkedList() {
        head = nullptr;
    }

    int get(int index) {
        LinkedListNode* current = head;
        for (int i = 0; i < index; i++){
            if (current == nullptr) return -1;
            current = current -> next;
        }
        return (current == nullptr) ? -1 : current -> val;
    }

    void insertHead(int val) {
        LinkedListNode* newHead = new LinkedListNode;
        newHead -> val = val;
        newHead -> next = head;
        head = newHead;
    }
    
    void insertTail(int val) {
        LinkedListNode* newNode = new LinkedListNode;
        newNode -> val = val;
        if (head == nullptr) {
            head = newNode;
            return;
        }
        LinkedListNode* current = head;
        while (current -> next != nullptr) current = current -> next;
        current -> next = newNode;
    }

    bool remove(int index) {
        if (head == nullptr) return false;
        if (index == 0) {
            LinkedListNode* temp = head;
            head = head -> next;
            delete temp;
            return true;
        }
        LinkedListNode* current = head;
        for (int i = 0; i < index - 1; i++){
            if (current -> next == nullptr) return false;
            current = current -> next;
        }
        if (current -> next == nullptr) return false;
        LinkedListNode* toRemove = current -> next;
        current -> next = toRemove -> next;
        delete toRemove;
        return true;
    }

    vector<int> getValues() {
        vector<int> results;
        LinkedListNode* current = head;
        while (current != nullptr){
            results.push_back(current -> val);
            current = current -> next;
        }
        return results;
    }
private:
    struct LinkedListNode{
        int val = 0;
        LinkedListNode* next = nullptr;
    };
    LinkedListNode* head = nullptr;
};