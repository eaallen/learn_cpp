#include <cstdio>

struct IntNode {
    const int TAG{321};
    int value{};
    IntNode* next_ptr{nullptr};
    IntNode* prev_ptr{nullptr};

    IntNode(int val, IntNode* node_ptr) {
        value = val;
        next_ptr = node_ptr;
    }

    void insert(IntNode* node_ptr) {
        if (this->next_ptr != nullptr) {
            this->next_ptr->prev_ptr = node_ptr;
        }
        node_ptr->next_ptr = this->next_ptr;
        node_ptr->prev_ptr = this;
        this->next_ptr = node_ptr;
    }

    void presert(IntNode* node_ptr) {
        node_ptr->prev_ptr = this->prev_ptr;
        node_ptr->next_ptr = this;
        this->prev_ptr = node_ptr;
    }

    void _printMembers() const {  // const here means it is read only!
        printf("%d", value);
        if (next_ptr != nullptr) {
            printf(" -> ");
            next_ptr->_printMembers();
        }
    }

    void printMembers() const {
        printf("\n");
        _printMembers();
        printf("\n");
    }

    void printMembersForLoop() {
        for (IntNode* courser = this->prev_ptr; courser; courser = courser->prev_ptr) {
            printf(" %d <- ", courser->value);
        }
        for (IntNode* courser = this; courser; courser = courser->next_ptr) {
            printf(" %d -> ", courser->value);
        }

        printf("\n");
    }
};

int main() {
    IntNode ll = IntNode(1, nullptr);
    IntNode n2 = IntNode(2, nullptr);
    IntNode n3 = IntNode(3, nullptr);
    IntNode n4 = IntNode(4, nullptr);
    IntNode n5 = IntNode(5, nullptr);
    IntNode n6 = IntNode(6, nullptr);

    ll.insert(&n2);
    ll.insert(&n3);
    ll.insert(&n4);
    ll.insert(&n5);
    ll.insert(&n6);

    printf("ll[0].value = %d\n", ll.value);

    ll.printMembers();
    n4.printMembersForLoop();
}
