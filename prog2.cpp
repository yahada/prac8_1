#include <iostream>

void rm(int ** mtx, size_t created) {
  for (size_t i = 0; i < created; i++) {
    delete[] mtx[i];
  }
  delete[] mtx;
}

size_t det_size (size_t n1, size_t m1, size_t n2, size_t m2, size_t i) {
  size_t minn = n1 > n2 ? n2 : n1;

  if (i < minn) {
    return m1 + m2;
  }

  return n1  < n2 ? m2 : m1;

}

int ** ct(size_t n1, size_t m1, size_t n2, size_t m2) {
  size_t n = n1 > n2 ? n1 : n2;
  int ** c = new int * [n];
  size_t i = 0;
  try {
    for (; i < n; ++i) {
      size_t m = 1;
      c[i] = new int [m];
    } 
  } catch (...) {
      rm(c, i);
  } throw;
  return c;

}