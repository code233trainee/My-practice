/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

template <typename T> Rank quickSelect( T const * A, Rank n, Rank k ) { //���ڿ��ٻ��ֵ�kѡȡ�㷨
   Vector<Rank> R; for ( Rank k = 0; k < n; k++ ) R.insert(k); //ʹ����������������ԭ���еĴ���
   for ( Rank lo = 0, hi = n; lo < hi; ) { //������quickParititon
      Rank i = lo, j = hi; Rank pivot = R[lo]; //�󵨲²�
      while ( i < j ) { //С����֤��O(hi - lo + 1) = O(n)
         do j--; while ( ( i < j ) && ( A[pivot] <= A[R[j]] ) );
         if ( i < j ) R[i] = R[j];
         do i++; while ( ( i < j ) && ( A[R[i]] <= A[pivot] ) );
         if ( i < j ) R[j] = R[i];
      } //assert: �˳�ʱ���� i = j �� i = j+1
      R[j] = pivot; //[0, R[j]) <= [R[j]] <= (R[j], n)
      if ( k <= j ) hi = j; //������׺
      if ( i <= k ) lo = i; //����ǰ׺
      /*DSA*///print ( A ); for ( int i = 0; i < lo; i++ ) printf ( "     " ); for ( int i = lo; i < hi; i++ ) printf ( "-----" ); printf ( "\n" );
   }
   return R[k];
}
