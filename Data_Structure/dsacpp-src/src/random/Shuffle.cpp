/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

/*DSA*/#include <iostream>
/*DSA*/using namespace std;

void shuffle( int A[], int n ) { //��A[0, n)�������
   for ( ; 1 < n; --n ) //�Ժ���ǰ
      swap( A[rand() % n], A[n - 1] );
}

void shuffle( int A[], int lo, int hi ) //��A[lo, hi)�������
   { shuffle( A + lo, hi - lo ); }