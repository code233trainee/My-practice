/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

//ͨ��zag��ת��������BST����x����������ͨ·
template <typename T> void stretchByZag( BinNodePosi<T>& x ) {
   if ( !x ) return;
   /*DSA*/int c = 0; //��¼��ת����
   BinNodePosi<T> r = x; while ( r->rc ) r = r->rc; //���ڵ㣬�����������յĸ�
   BinNodePosi<T> v = x; while ( v->lc ) v = v->lc; //�������ͨ·��ĩ�˳���
   while ( v != r ) //��㴦��ֱ���ִ������ĸ�
      if ( v == v->zag() ) //��vΪ����zag��ת��ͬʱ���¸߶ȣ�
         ( v = v->parent )->updateHeight(); //ֱ��û���Һ���
      /*DSA*/else
         /*DSA*/c++;
   v->updateHeightAbove();
   /*DSA*/ printf( "size = %d, height = %d, #zag = %d\n", r->size(), r->height, c );
   x = r;
}
