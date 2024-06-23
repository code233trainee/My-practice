/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

template <typename K, typename V> bool Hashtable<K, V>::remove( K k ) { //ɢ�б����ɾ���㷨
   Rank r = probe4Hit( k ); if ( !ht[r] ) return false; //ȷ��Ŀ�����ȷʵ����
   release( ht[r] ); ht[r] = NULL; --N; //�������
   removed->set(r); //��������ɾ�����
   return true;
}