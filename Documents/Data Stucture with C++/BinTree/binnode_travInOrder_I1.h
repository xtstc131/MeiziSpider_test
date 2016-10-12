#pragma once

#include<stack>

using namespace std;

template<typename T, typename VST>
void travInOrder_i1(BinNodePosi(T)x, VST &visit) {
    stack<BinNodePosi(T)> s;

    while (true) {
        if (x) {
            s.push(x);//根节点入栈
            x = x->lChild;//深入遍历左子树
        }
        else if (!s.empty()) {
            x = s.top();
            s.pop();//弹出并访问栈顶节点
            visit(x->_element);
            x = x->rChild;//转向右子树
        }
        else
            break;

    }
}