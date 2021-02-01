#include <stdio.h>

// represent a set object
struct Set
{
    int size; //size of the set
    int arr[100];
};

struct Set read_s(int n) {
    for (int i = 0; i < n; i++)
    {
    }
}

/**
 * @brief prints the set
 *
 * @param s set
 * @param n size of set to print
 */
void print_s(struct Set s, int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%d ", s.arr[i]);
    }
    printf("\n");
}

/**
 * @brief add two sets
 *
 * @param s1 set 1
 * @param s2 set 2
 * @param n1 size of set 1
 * @param n2 size of set 2
 * @param n size of resultant set
 * @return struct Set : resultant set
 */
struct Set add_s(struct Set s1, struct Set s2, int n1, int n2, int* n) {
    struct Set res;
    int k = 0;
    res.size = 0;
    for (int i = 0; i < n1; i++) {
        res.arr[k++] = s1.arr[i];
        res.size++;
    }
    for (int j = 0; j < n2; j++) {
        res.arr[k++] = s2.arr[j];
        res.size++;
    }
    *n = k;
    return res;
}

/**
 * @brief substract set from another set
 *
 * @param s1 set 1
 * @param s2 set 2
 * @param n1 size of set 1
 * @param n2 size of set 2
 * @param n size of resultant set
 * @return struct Set : resultant set
 */
struct Set sub_s(struct Set s1, struct Set s2, int n1, int n2, int* n) {
    struct Set res;
    int k = 0, flag = 0;
    for (int i = 0; i < n1; i++)
    {
        flag = 0;
        for (int j = 0; j < n2; j++)
        {
            if (s1.arr[i] == s2.arr[j]) {
                flag = 1;
                break;
            }
        } if (flag == 0) {
            res.arr[k++] = s1.arr[i];
            res.size++;
        }
    }
    *n = k;
    return res;
}

/**
 * @brief union of two sets
 *
 * @param s1 set 1
 * @param s2 set 2
 * @param n1 size of set 1
 * @param n2 size of set 2
 * @param n size of resultant set
 * @return struct Set : resultant set
 */
struct Set union_s(struct Set s1, struct Set s2, int n1, int n2, int* n) {
    struct Set res;
    res.size = 0;
    int k = 0;
    for (int i = 0; i < n1; i++) {
        res.arr[k++] = s1.arr[i];
        res.size++;
    }
    int flag = 0;
    for (int j = 0; j < n2; j++) {
        for (int i = 0; i < n1; i++) {
            flag = 0;
            if (s2.arr[j] == s1.arr[i]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            res.arr[k++] = s2.arr[j];
            res.size++;
        }
    }
    *n = k;
    return res;
}


/**
 * @brief find intersaction of two sets
 *
 * @param s1 set 1
 * @param s2 set 2
 * @param n1 size of set 1
 * @param n2 size of set 2
 * @param n size of resultant set
 * @return struct Set : resultant set
 */
struct Set intersection_s(struct Set s1, struct Set s2, int n1, int n2, int* n) {
    struct Set res;
    res.size = 0;
    int k = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (s1.arr[i] == s2.arr[j]) {
                res.arr[k++] = s1.arr[i];
                res.size++;
            }
        }
    }
    *n = k;
    return res;
}

int main() {
    int n;
    struct Set s1, s2, s;
    for (int i = 0; i < 5; i++) {
        scanf("%d%d", &s1.arr[i], &s2.arr[i]);
    }
    print_s(s1, 5);
    print_s(s2, 5);
    // s = add_s(s1, s2, 5, 5, &n);
    // s = sub_s(s1, s2, 5, 5, &n);
    // s = union_s(s1, s2, 5, 5, &n);
    s = intersection_s(s1, s2, 5, 5, &n);
    print_s(s, n);
    return 0;
}
