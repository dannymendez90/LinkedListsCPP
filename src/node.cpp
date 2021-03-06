// Implementation for Node class

#ifndef NODE_TPP
#define NODE_TPP

#include "node.hpp"

template <typename T>
Node<T>::Node() : data(new T()), next(nullptr) {}

template <typename T>
Node<T>::Node(const Node& origin)
    : data(new T(*origin.data)), next(origin.next) {}

template <typename T>
Node<T>::Node(const T& value) : data(new T(value)), next (nullptr) {}

template <typename T>
Node<T>::~Node()
{
    delete data;
}

// Inspectors
template <typename T>
T* Node<T>::Data() const
{
    return data;
}

template <typename T>
Node<T>* Node<T>::Next() const
{
    return next;
}

// Mutators
template <typename T>
Node<T>* Node<T>::Data(const T& value)
{
    delete data;
    this->data = new T(value);
    return this;
}

template <typename T>
Node<T>* Node<T>::Next(Node* node)
{
    next = node;
    return this;
}

#endif // NODE_TPP