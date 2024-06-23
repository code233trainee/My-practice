/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

//ͨ��zig��ת��������BST����x��������Ҳ�ͨ·
template <typename T> void stretchByZig( BinNodePosi<T>& x ) {
   if ( !x ) return;
   /*DSA*/int c = 0; //��¼��ת����
   BinNodePosi<T> r = x; while ( r->lc ) r = r->lc; //��С�ڵ㣬�����������յĸ�
   BinNodePosi<T> v = x; while ( v->rc ) v = v->rc; //�����Ҳ�ͨ·��ĩ�˳���
   while ( v != r ) //��㴦��ֱ���ִ������ĸ�
      if ( v == v->zig() ) //��vΪ����zig��ת��ͬʱ���¸߶ȣ�
         ( v = v->parent )->updateHeight(); //ֱ��û������
      /*DSA*/else
         /*DSA*/c++;
   v->updateHeightAbove();
   /*DSA*/ printf( "size = %d, height = %d, #zig = %d\n", r->size(), r->height, c );
   x = r;
}
