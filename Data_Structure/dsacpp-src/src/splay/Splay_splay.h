/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

template <typename NodePosi> inline //�ڽڵ�*p��*lc������Ϊ�գ�֮�佨���������ӹ�ϵ
void attachAsLC( NodePosi lc, NodePosi p ) { p->lc = lc; if ( lc ) lc->parent = p; }

template <typename NodePosi> inline //�ڽڵ�*p��*rc������Ϊ�գ�֮�佨�������ң��ӹ�ϵ
void attachAsRC( NodePosi p, NodePosi rc ) { p->rc = rc; if ( rc ) rc->parent = p; }

template <typename T> //Splay����չ�㷨���ӽڵ�v���������չ
BinNodePosi<T> Splay<T>::splay( BinNodePosi<T> v ) { //vΪ��������ʶ�����չ�Ľڵ�λ��
   BinNodePosi<T> p, g; //*v�ĸ������游
   while ( ( p = v->parent ) && ( g = p->parent ) ) { //���¶��ϣ�������*v��˫����չ
      BinNodePosi<T> gg = g->parent; //ÿ��֮��*v����ԭ���游��great-grand parent��Ϊ��
      switch ( ( IsRChild( *p ) << 1 ) | IsRChild( *v ) ) { //��p��v�Ĺ��򣬷��������
         case 0b00 : //zig-zig
            attachAsLC( p->rc, g ); attachAsLC( v->rc, p );
            attachAsRC( p, g ); attachAsRC( v, p ); break;
         case 0b01 : //zig-zag
            attachAsRC( p, v->lc ); attachAsLC( v->rc, g );
            attachAsRC( v, g ); attachAsLC( p, v ); break;
         case 0b10 : //zag-zig
            attachAsLC( v->rc, p ); attachAsRC( g, v->lc );
            attachAsLC( g, v ); attachAsRC( v, p ); break;
         default : //0b11 ~ zag-zag
            attachAsRC( g, p->lc ); attachAsRC( p, v->lc );
            attachAsLC( g, p ); attachAsLC( p, v ); break;
      }
      if ( !gg ) v->parent = NULL; //��*vԭ�ȵ����游*gg�����ڣ���*v����ӦΪ����
      else //����*gg�˺�Ӧ����*v��Ϊ����Һ���
         ( g == gg->lc ) ? attachAsLC( v, gg ) : attachAsRC( gg, v );
      g->updateHeight(); p->updateHeight(); v->updateHeight();
   } //˫����չ����ʱ������g == NULL����p���ܷǿ�
   if ( p = v->parent ) { //��p�����Ǹ������������һ�ε���
      if ( IsLChild( *v ) ) { attachAsLC( v->rc, p ); attachAsRC( v, p ); }
      else                  { attachAsRC( p, v->lc ); attachAsLC( p, v ); }
      p->updateHeight(); v->updateHeight();
   }
   v->parent = NULL; return v;
} //����֮��������ӦΪ����չ�Ľڵ㣬�ʷ��ظýڵ��λ���Ա��ϲ㺯����������
