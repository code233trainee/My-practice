/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

#include "BinNode.h" //����������ڵ���
template <typename T> class BinTree { //������ģ����
protected:
   Rank _size; BinNodePosi<T> _root; //��ģ�����ڵ�
public:
   BinTree() : _size( 0 ), _root( NULL ) {} //���캯��
   ~BinTree() { if ( 0 < _size ) remove( _root ); } //��������
   Rank size() const { return _size; } //��ģ
   bool empty() const { return !_root; } //�п�
   BinNodePosi<T> root() const { return _root; } //����
   BinNodePosi<T> insert( T const& ); //������ڵ�
   BinNodePosi<T> insert( T const&, BinNodePosi<T> ); //��������
   BinNodePosi<T> insert( BinNodePosi<T>, T const& ); //�����Һ���
   BinNodePosi<T> attach( BinTree<T>*&, BinNodePosi<T> ); //����������
   BinNodePosi<T> attach( BinNodePosi<T>, BinTree<T>*& ); //����������
   Rank remove ( BinNodePosi<T> ); //����ɾ��
   BinTree<T>* secede ( BinNodePosi<T> ); //��������
   template <typename VST> //������
   void travLevel( VST& visit ) { if ( _root ) _root->travLevel( visit ); } //��α���
   template <typename VST> //������
   void travPre( VST& visit ) { if ( _root ) _root->travPre( visit ); } //�������
   template <typename VST> //������
   void travIn( VST& visit ) { if ( _root ) _root->travIn( visit ); } //�������
   template <typename VST> //������
   void travPost( VST& visit ) { if ( _root ) _root->travPost( visit ); } //�������
   /*DSA*/template <typename VST> //������
   /*DSA*/void traverse ( VST& ); //�Զ������
   bool operator<( BinTree<T> const& t ) //�Ƚ������������в��䣩
      { return _root && t._root && lt( _root, t._root ); }
   bool operator==( BinTree<T> const& t ) //�е���
      { return _root && t._root && ( _root == t._root ); }
}; //BinTree

#include "BinTree_implementation.h"