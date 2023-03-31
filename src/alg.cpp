// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int l = 0;
    int r = size;
    int m;
    int tmp_l, tmp_r;
    int itog;
    while (l < r) {
        m = (l + r) / 2;
        if (value > arr[m]) {
            l = m + 1;
        } else {
            r = m;
        }
    }
    tmp_l = l;
    l = 0;
    r = size;
    while (l < r) {
        m = (l + r) / 2;
        if (value < arr[m]) {
            r = m;
        } else {
            l = m + 1;
        }
    }
    tmp_r = r;
    r = tmp_r - tmp_l;
    return itog;
}
