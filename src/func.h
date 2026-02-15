#ifndef FUNC_H
#define FUNC_H

#include <iostream>

template <typename T = int>
T max_value(T a, T b, T c) {
  T max = a;
  if (b > max) max = b;
  if (c > max) max = c;
  return max;
}

template <typename T, size_t N>
T filter_the_array(const T (&array)[N], bool (*filter)(T)) {
  T sum = 0;
  for (size_t i = 0; i < N; i++) {
    if (filter(array[i])) {
      sum += array[i];
    }
  }
  return sum;
}

template <typename T, size_t N>
T filter_the_array(const T (&array)[N], bool (*filter)(T, T)) {
  T res = array[0];
  for (size_t i = 1; i < N; i++) {
    if (filter(res, array[i])) {
      res = array[i];
    }
  }
  return res;
}

template <typename T, size_t N>
T filter_the_array(const T (&array)[N], T value) {
  T res{-1};
  for (size_t i = 0; i < N; i++) {
    if (array[i] == value) {
      res = i;
    }
  }
  return res;
}

template <typename T, size_t N>
T filter_the_array(const T (&array)[N], bool (*filter)(T, T), T value) {
  T counter = 0;
  for (size_t i = 0; i < N; i++) {
    if (filter(value, array[i])) {
      counter++;
    }
  }
  return counter;
}

char* delete_spase(char string[]);



#endif