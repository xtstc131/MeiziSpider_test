//
// Created by 夏添 on 2016/10/12.
//
#pragma once

template<typename T>
T PQMin<T>::GetMax() {
    return _elem[0];
}

//插入元素到优先队列中
template<typename T>
void PQMin<T>::Append(T x) {
    _elem.push_back(x);
    PercolateUp((int) (_elem.size() - 1));
}

template<typename T>
inline void Swap(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
}

//上滤操作
template<typename T>
int PQMin<T>::PercolateUp(int i) {
    cout << "I:" << i << endl;
    while (ParentValid(i)) {
        int j = Parent(i);
        if (_elem[i] >= _elem[j]) break;
        Swap(_elem[i], _elem[j]);
        i = j;
    }
    return i;
}

//删除优先级最大的元素,并返回
template<typename T>
T PQMin<T>::DelMax() {
    T maxElem = _elem[0];
    _elem[0] = _elem.back();
    _elem.pop_back();
    PercolateDown(_elem.size(), 0);
    return maxElem;
}

template<typename T>
int PQMin<T>::PercolateDown(int j, int r) {
    int child = 2 * r + 1;
    T temp = _elem[r];
    while (child <= j) {
        if ((child < j) && (_elem[child] > _elem[child + 1])) child++;
        if (temp <= _elem[child]) break;
        _elem[Parent(child)] = _elem[child];
        child = LChild(child);
    }
    _elem[Parent(child)] = temp;
    return Parent(child);
}

template<typename T>
void PQMin<T>::heapify(int n) {
    for (int i = LastInternal (n); InHeap (n, i); i--) {
        PercolateDown(n, i); //下滤各内部节点
    }
}
