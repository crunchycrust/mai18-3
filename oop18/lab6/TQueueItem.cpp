#include "TQueueItem.h"


template <class T> 
TQueueItem<T>::TQueueItem(const T &val, TQueueItem<T> *item) {
    value = new T(val);
    next = item;
}

template <class T>
void TQueueItem<T>::SetNext(TQueueItem<T> *item)
{
    next = item;
}

template <class T>
TQueueItem<T> &TQueueItem<T>::GetNext() const
{
    return *next;
}

template <class T> TQueueItem<T>::~TQueueItem() {
    delete value;
}

typedef unsigned char Byte;

template class
TQueueItem<void *>;
