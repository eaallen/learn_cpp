#include <cstdio>

struct IntNode {
    const int TAG{321};
    int value{};
    IntNode* next_ptr{};

    IntNode(int val, IntNode* node_ptr) {
        value = val;
        next_ptr = node_ptr;
    }

    void add(IntNode* node_ptr) { next_ptr = node_ptr; }

    void insert(IntNode* node_ptr) {
        node_ptr->next_ptr = next_ptr;
        next_ptr = node_ptr;
    }

    void _printMembers() const { // const here means it is read only!
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
        for (IntNode* courser = this; courser; courser = courser->next_ptr) {
            printf("value: %d \n", courser->value);
        }
    }
};

int main() {
    IntNode n2 = IntNode(2, nullptr);
    IntNode n3 = IntNode(3, nullptr);
    IntNode n4 = IntNode(4, nullptr);
    IntNode n5 = IntNode(5, nullptr);
    IntNode ll = IntNode(1, nullptr);

    n3.add(&n4);
    n2.add(&n3);
    ll.add(&n2);

    ll.insert(&n5);

    printf("ll[0].value = %d\n", ll.value);

    ll.printMembers();
    ll.printMembersForLoop();
}
