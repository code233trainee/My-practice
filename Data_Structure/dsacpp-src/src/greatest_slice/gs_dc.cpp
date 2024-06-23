/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

/*DSA*/#include <cstdlib>
/*DSA*/#include "_share/util.h"

extern int s_lo, s_hi;

int gs_DC( int A[], int lo, int hi ) { //���β��ԣ�O(n*logn)
   if ( hi - lo < 2 ) return A[lo];
   int mi = (lo + hi) / 2;

   int gsL = A[mi-1], sL = 0, i = mi; //ö��
   while ( lo < i-- ) //����[i, mi)������
      if ( gsL < (sL += A[i]) ) gsL = sL;

   int gsR = A[mi], sR = 0, j = mi-1; //ö��
   while ( ++j < hi ) //����[mi, j)������
      if ( gsR < (sR += A[j]) ) gsR = sR; //���š�����

   return max( gsL + gsR, max( gs_DC( A, lo, mi ), gs_DC( A, mi, hi ) ) ); //�ݹ�
}