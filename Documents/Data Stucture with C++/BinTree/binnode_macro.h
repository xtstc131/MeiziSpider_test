#pragma once

#define IsRoot(x) ( ! ( (x).parent ) )
#define IsLChild(x) ( ! IsRoot(x) && ( & (x) == (x).parent->lChild ) )
#define IsRChild(x) ( ! IsRoot(x) && ( & (x) == (x).parent->rChild ) )
#define HasParent(x) ( ! IsRoot(x) )
#define HasLChild(x) ( (x).lChild )
#define HasRChild(x) ( (x).rChild )
#define HasChild(x) ( HasLChild(x) || HasRChild(x) ) //至少拥有一个孩子
#define HasBothChild(x) ( HasLChild(x) && HasRChild(x) ) //同时拥有两个孩子
#define IsLeaf(x) ( ! HasChild(x) )
