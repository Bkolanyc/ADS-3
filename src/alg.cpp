// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
        int h = 0;
        for (int i = 0; i <= size; i++) {
            if (*(arr + i) == value)
                h += 1;
        }
        return h;
  return 0; // если ничего не найдено
}
