/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

/*DSA*/#include "convert.h"

void convert ( Stack<char>& S,unsigned long long n, int base ) { //������n��2<=base<=16���ƴ�ӡ�������棩
   char digit[] = "0123456789ABCDEF"; //��λ���ţ����б�Ҫ����Ӧ����
   while ( n > 0 ) { //�ɵ͵��ߣ���һ������½����µĸ���λ
      /*DSA*/printf ( "\n\t%20llu = %20llu * %d + %llu\n", n , n/base, base, n%base );
      S.push ( digit[ n % base ] ); //��������ǰλ����ջ
      n /= base; //n����Ϊ���base�ĳ���
      /*DSA*/print ( S );
   }
} //�½������ɸߵ��͵ĸ���λ���Զ����±�����ջS��