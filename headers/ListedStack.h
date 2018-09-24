//
// Created by Рома on 20.09.2018.
//

#ifndef SHAPES_LISTEDSTACK_H
#define SHAPES_LISTEDSTACK_H

template<class T>
class ListedStack {
private:
    class Node {
    public:
        T data;
        Node *next_node;
    };

    Node *head;

public:
    ListedStack();

    ~ListedStack();

    void push(T d);

    T pop();

    bool isEmpty() const;

    void clear();

    class iterator {
        friend class ListedStack;

    private:
        ListedStack<T>::Node *s;

        iterator(ListedStack::Node *is) : s(is) {}

    public:
        T operator*() const {
            return s->data;
        }

        bool operator!=(const iterator &rv) const {
            return s != rv.s;
        }

        iterator operator++() {
            s = s->next_node;
            return *this;
        }
    };

    iterator begin() const {
        return iterator(head);
    }

    iterator end() const {
        return iterator(nullptr);
    }
};

template<class T>
ListedStack<T>::ListedStack() : head(nullptr) {}

template<class T>
void ListedStack<T>::push(const T data) {
    Node *pv = new Node;
    pv->data = data;
    pv->next_node = head;
    head = pv;
}

template<class T>
T ListedStack<T>::pop() {
    if (isEmpty()) {
        return nullptr;
    }
    T temp = head->data;
    Node *pv = head;
    head = head->next_node;
    delete pv;
    return temp;
}

template<class T>
bool ListedStack<T>::isEmpty() const {
    return head == nullptr;
}

template<class T>
void ListedStack<T>::clear() {
    while (head) {
        Node *pv = head;
        head = head->next_node;
        delete pv;
    }
}

template<class T>
ListedStack<T>::~ListedStack() {
    clear();
}

#endif //SHAPES_LISTEDSTACK_H
