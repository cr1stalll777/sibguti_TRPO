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

template <typename T, size_t N>
void shiftLeft(T (&array)[N], int k) {
    if (k <= 0) return;
    
    if (k >= N) {
        for (int i = 0; i < N; i++) array[i] = 0;
        return;
    }

    for (int i = 0; i < N - k; i++) {
        array[i] = array[i + k];
    }

    for (int i = N - k; i < N; i++) {
        array[i] = 0;
    }
}
char* reverse_string(char string[]);
char* delete_all_spase(char string[]);

template <typename T>
bool is_triangle(T a, T b, T c) {
  return (a + b > c) && (a + c > b) && (b + c > a);
}

char* capitalize(char word[]);
char* abbreviate(char word[]);
int calculate_shipping(int count);
#endif