#include <iostream>
#include <string>

template <typename E>
class Node{
    private:
        Node<E> *next;
        E elem;

        friend class LinkedList<E>;
 
};

template <typename E>
class LinkedList{
    public:
        LinkedList();       //empty constructor;
        ~LinkedList();       //destructor
        bool Empty() const; 
        const E &Front() const;
        void addFront(const E &e);
        void removeFront();
        void printList(Node *n);
    private:
        Node<E> *head;

};

template <typename E>
LinkedList<E>::LinkedList()
: head(NULL){}

template <typename E>
LinkedList<E>::~LinkedList(){
    while(!Empty()) removeFront();
}

template <typename E>
bool LinkedList<E>::Empty() const {
    return head == NULL;
}

template <typename E>
const E& LinkedList<E>::Front() const {
    return head->elem;
}

template <typename E>
void LinkedList<E>::addFront(const E &e){
    Node<E> *v = new Node;
    v->elem = e;
    v->next = head;
    head = v;
}

template <typename E>
void LinkedList<E>::removeFront(){
    Node<E> *old = head;
    head = old->next;
    delete old;
}

void LinkedList() :: printList(Node *n){
    while(n != NULL){
        std::cout << n.elem << " ";
        n = n.next;
    }
}

int main(){
    LinkedList<std::string> a;
    a.addFront("Muchie");

    LinkedList<int> b;
    b.addFront(23);

    LinkedList::printList(a);
    return 0;
}