/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

template <typename K, typename V> struct Dictionary { //�ʵ�Dictionaryģ����
   virtual Rank size() const = 0; //��ǰ��������
   virtual bool put( K, V ) = 0; //�������
   virtual V* get( K k ) = 0; //��ȡ����
   virtual bool remove( K k ) = 0; //ɾ������
};