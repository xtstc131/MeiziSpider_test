//
// Created by 夏添 on 2016/10/12.
//

#pragma once

#include<iostream>
#include<vector>
#include "PQMin_macro.h"

using namespace std;

template<typename T>
class PQMin {
public:
    PQMin() = default;

    PQMin(const vector<T> &v, int x) {
        _elem = v;
        heapify(x);
    }

    ~PQMin() = default;

    bool isEmpty() const { return _elem.empty(); }

    void Append(T);

    void Print() {
        for (int i = 0; i < _elem.size(); i++)
            cout << _elem[i] << " ";
        cout << endl;
    }

    T GetMax();

    T DelMax();

protected:
    int PercolateDown(int, int);

    int PercolateUp(int);

    void heapify(int);

private:
    vector<T> _elem;
};


#include "PQMin_implementation.h"
