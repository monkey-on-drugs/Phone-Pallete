#pragma once
#include "node.h"

template <typename K, typename V>
class dll{
    private:
    Node<K,V>* head; Node<K,V>* tail; 

    public:
    int size;

    dll(){
        head = new Node(); tail = new Node();
        head->next = tail; tail->prev = head;
    }

    ~dll(){

    }

    insert_at_tail(K key_input, V value_input){
        Node<K, V>* n = new Node(key_input, value_input);
        n->next = tail;
        n->prev = tail->prev;
        tail->prev->next = n;
        tail->prev = n;
        size++;

        
    }
};