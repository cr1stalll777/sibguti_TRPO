#include "func.h"

template <typename T>
auto max_value(T a, T b, T c) {
  T temp = a > b ? a : b;
  return temp > c ? temp : c;
}
