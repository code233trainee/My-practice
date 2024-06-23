/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

template <typename T> BTNodePosi<T> BTree<T>::search( const T& e ) { //��B-���в��ҹؼ���e
   _hot = NULL;
   for ( BTNodePosi<T> v = _root; v; ) { //�Ӹ��ڵ������������
      Rank r = v->key.search( e ); //�ڵ�ǰ�ڵ��У��ҵ�������e�����ؼ���
      if ( ( -1 != r ) && ( e == v->key[r] ) ) return v; //�ɹ�������...
      _hot = v; v = v->child[r + 1]; //ת���Ӧ�ĺ��ӽڵ㣨I/O��
   } //����������key���Ƕ��ֲ��ң�����ͨ����_m����Ϊ˳�����Ч�ʷ�������
   return NULL; //ʧ�ܣ����յִ��ⲿ�ڵ�
}
