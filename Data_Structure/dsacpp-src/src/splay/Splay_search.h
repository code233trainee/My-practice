/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

template <typename T> BinNodePosi<T>& Splay<T>::search( const T& e ) { //����չ���в���e
   BinNodePosi<T> p = BST<T>::search( e ); //��BST��׼�㷨����
   _root = p ? splay(p) : _hot ? splay(_hot) : NULL;  //���۳ɹ���ʧ�ܡ����գ������ʵĽڵ㽫��չ����
   return _root;
} //������BST��ͬ��������Σ�_root��ָ����󱻷��ʵĽڵ�