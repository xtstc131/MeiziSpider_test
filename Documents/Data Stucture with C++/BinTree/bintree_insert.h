#pragma once

template<typename T>
BinNodePosi(T)
BinTree<T>::insertAsRoot(T const
&c)
{
_size = 1;
_root = new BinNode<T>(c);
}


template<typename T>
BinNodePosi(T)

BinTree<T>::insertAsLC(BinNodePosi(T)

x,
T const &c
)
{
_size ++; x->
insertAsLC(c);
updateHeighAbove(x);
return x ->
lChild;
}


template<typename T>
BinNodePosi(T)

BinTree<T>::insertAsRC(BinNodePosi(T)

x ,
T const &c
) {

_size ++; x->
insertAsRC(c);
updateHeighAbove(x);
return x ->
rChild;
}
