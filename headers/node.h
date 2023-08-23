#pragma once

template <typename K, typename V>
class Node{
    public:
        K key; 
        V value;
        bool is_sentinel;
        Node<K, V>* prev;
        Node<K, V>* next;

    Node(K key_input, V value_input){
        key = key_input;
        value = value_input;
        next = prev = nullptr;
    }

    Node(bool is_sentinel_input = true){
        is_sentinel = is_sentinel_input;
        next = prev = nullptr;
    }
};