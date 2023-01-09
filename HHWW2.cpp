#include <iostream>
#include "header.h"


int main() {
    int a;
    std::cout << "Vibor nomera zadaniya: ";
    std::cin >> a;
    switch (a) {
    case 1: {
        task_one();
        break;
    }

    case 2: {
        task_two();
        break;
    }
    case 4: {
        task_four();
        break;
    }
    case 6: {
        task_six();
        break;
    }
    case 8: {
        task_eight();
        break;
    }
    case 10: {
        task_ten();
        break;
    }
    case 12: {
        task_twelf();
        break;
    }
    case 14: {
        task_fourteen();
        break;
    }
    case 15: {
        task_fifthteen();
        break;
    }
    case 5: {
        fifth_task();
        break;
    }
    case 7: {
        seventh_task();
        break;
    }
    case 9: {
        ninth_task();
        break;
    }
    case 11: {
        eleventh_task();
        break;
    }
    case 13: {
        thirteenth_task();
        break;
    } 
    return 0;
}



template <typename T>
void _swap(T* a_ptr, T* b_ptr) {

    T c = *a_ptr;
    *a_ptr = *b_ptr;
    *b_ptr = c;

}

void task_one() {

    std::cout << "vvedite 1 znach " << std::endl;
    int a = 0;
    std::cin >> a;
    std::cout << "vvedire 2 znach " << std::endl;;
    int b = 0;
    std::cin >> b;

    std::cout << a << " " << b << " vash order" << std::endl;

    int* a_ptr = &a;
    int* b_ptr = &b;

    _swap(a_ptr, b_ptr);

    std::cout << a << " " << b << " reversed";

}


void task_two() {
    int n;
    std::cout << std::endl << "dlina massiva:";
    std::cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int* p = &a[0];
    int* pl = &a[n - 1];
    int x = a[n - 1];
    *pl = *p;
    *p = x;
    std::cout << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
}
void task_four() {
    int n = 12;
    double t = 0.0;
    double a[12];
    std::cout << "napishite massiv";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int k = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j] < a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                k++;
            }
        }
    }
    for (int i = 0; i < n; i++)
        std::cout << a[i] << " ";
    std::cout << std::endl << k;
}
void task_six() {
    int n = 14;
    int a[14];
    std::cout << "napishite massiv";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n / 2; i++) {
        int t = a[i];
        a[i] = a[i + n / 2];
        a[i + n / 2] = t;
    }
    std::cout << "reverse massiv";
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }

    std::cout << "Nomer pomenualsya " << n / 2;

}
void task_eight() {
    int n, m;
    std::cout << std::endl << "napishite dlinu matrici";
    std::cin >> n >> m;
    int a[100][100];
    std::cout << std::endl << "napishite massiv";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    int sum, flag = 0;
    for (int i = 0; i < n; i++) {
        sum = 0;
        flag = 0;
        for (int j = 0; j < m; j++) {
            if (flag == 1 && a[i][j] != 0) {
                sum = sum + a[i][j];
            }
            else if (a[i][j] == 0)
                ++flag;
        }
        std::cout << sum << " ";
    }

}
void task_ten() {
    int n, m;
    std::cout << "dlina massiva:";
    std::cin >> n >> m;
    double a[100], b[100];
    double max1 = a[0], max2 = b[0];
    int k1 = 0, k2 = 0;
    std::cout << std::endl << "napishite massiv 1";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (a[i] > max1) {
            max1 = a[i];
            k1 = i;
        }
    }
    std::cout << std::endl << "napishite massiv 2";
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
        if (b[i] > max2) {
            max2 = b[i];
            k2 = i;
        }
    }
    a[k1] = max2;
    b[k2] = max1;
    for (int i = 0; i < n; i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;
    for (int i = 0; i < m; i++)
        std::cout << b[i] << " ";

}
void task_twelf() {
    int n, m;
    std::cout << std::endl << "napishite dliny matrix";
    std::cin >> n >> m;
    int a[100][100];
    std::cout << std::endl << "napishite massiv";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    int maxsum = a[0][0];
    int minsum = 100000000000;
    int sum;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < m; j++) {
            sum = sum + a[i][j];
        }
        if (sum > maxsum) {
            maxsum = sum;
        }
        if (sum < minsum) {
            minsum = sum;
        }
    }
    std::cout << maxsum << " " << minsum;
}
void task_fourteen() {
    int n;
    int a[100];
    std::cout << std::endl << "napishite dliny massiva";
    std::cin >> n;
    std::cout << std::endl << "napishite massiv";
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    int max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int p = a[j] - a[i];
            if (max < p)
                max = p;
        }
    }
    std::cout << max;
}
void task_fifthteen() {
    int n;
    std::cout << "napishite uroven treugolnika paskalya ";
    std::cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        a[i] = 0;
        a[0] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j > 0; j--) {
            a[j] = a[j - 1] + a[j];
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << a[i];
    }
    void fifth_task() {

        std::cout << std::endl << "vvedite dliny massiva ";
        int size = 0;
        std::cin >> size;
        int* array = new int[size]();
        for (int i = 0; i < size; i++) {
            std::cin >> array[i];
        }
        
        int* array_under_zero = new int[size]();
        int* array_over_zero = new int[size]();
        int* arrayresult = new int[size]();


        int m = 0;
        int n = 0;
       
        for (int i = 0; i < size; i++) {
            if (array[i] < 0) {
                array_under_zero[m] = array[i];
                m++;


            }
            else {
                array_over_zero[n] = array[i];
                n++;
            }

        }

        
        for (int i = 0; i < m; i++) {
            arrayresult[i] = array_under_zero[i];
        }
        int j = 0;
        for (int i = m; i < size; i++) {
            arrayresult[i] = array_over_zero[j];
            j++;
        }
        std::cout << "sorted: " << std::endl;
        for (int i = 0; i < size; i++) {
            std::cout << arrayresult[i] << " ";
        }

        delete[] array_over_zero;
        delete[] array_under_zero;

    }

    oid ninth_task() {
        int size = 15;
        int* array = new int[size]();
        std::cout << std::endl << "vvedite 15 numbers " << std::endl;
        for (int i = 0; i < size; i++) {
            std::cin >> array[i];
        }
        
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    int* p1 = &array[j];
                    int* p2 = &array[j + 1];
                    _swap(p1, p2);

                }
            }
        }
        
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (array[j] >= 0 && array[j + 1] >= 0 && array[j] < array[j + 1]) {
                    int* p1 = &array[j];
                    int* p2 = &array[j + 1];
                    _swap(p1, p2);
                }
            }
        }
        for (int i = 0; i < size; i++) {
            std::cout << array[i] << " ";
        }
    }


    void eleventh_task() {
        std::cout << "vvedite lines your massiva " << std::endl;
        int lines = 0;
        std::cin >> lines;

        std::cout << "vvedite columns your massiva " << std::endl;
        int columns = 0;
        std::cin >> columns;

        int** array = new int* [lines];
        for (int i = 0; i < lines; i++) {
            array[i] = new int[columns];
        }
        
        for (int i = 0; i < lines; i++)
        {
            for (int j = 0; j < columns; j++) {
                std::cin >> array[i][j];

            }
        }
        std::cout << "your massiv : " << std::endl;
        for (int i = 0; i < lines; i++)
        {
            std::cout << std::endl;
            for (int j = 0; j < columns; j++) {
                std::cout << array[i][j] << " ";

            }
        }

        int t;
        for (int i = 0; i < lines; ++i) {
            t = array[i][columns - 1];
            for (int j = columns - 1; j > 0; --j)
                array[i][j] = array[i][j - 1];
            array[i][0] = t;
        }

        std::cout << std::endl << "new massiv : " << std::endl;
        for (int i = 0; i < lines; i++)
        {
            std::cout << std::endl;
            for (int j = 0; j < columns; j++) {
                std::cout << array[i][j] << " ";

            }
        }

    }

    void thirteenth_task() {
        std::cout << std::endl << "vvedite dlinu 1 massiva ";
        int m = 0;
        std::cin >> m;
        std::cout << std::endl << "vvedite dlinu 2 massiva ";
        int n = 0;
        std::cin >> n;

        int* nums1 = new int[n + m]();
        int* nums2 = new int[n];

        std::cout << "vvedite numbers 1 massiva " << std::endl;
        for (int i = 0; i < m; i++) {
            std::cin >> nums1[i];
        }

        std::cout << "vvedite numbers 2 massiva " << std::endl;
        for (int i = 0; i < n; i++) {
            std::cin >> nums2[i];
        }

        for (int i = m; i < m + n; i++) {
            nums1[i] = nums2[i - m];
        }
        for (int i = 0; i < n + m; i++) {
            for (int j = 0; j < n + m - i - 1; j++) {
                if (nums1[j] > nums1[j + 1]) {
                    int t = nums1[j];
                    nums1[j] = nums1[j + 1];
                    nums1[j + 1] = t;
                }
            }
        }
        for (int i = 0; i < n + m; i++) {
            std::cout << nums1[i] << " ";
        }
    }
    void seventh_task() {
        std::cout << std::endl << " vvedite  dlinu your massiva " << std::endl;
        int size = 0;
        std::cin >> size;
        int* array = new int[size]();

        std::cout << std::endl << "vvedite numbers " << std::endl;
        for (int i = 0; i < size; i++) {
            std::cin >> array[i];
        }

        int k = 0;
        std::cout << "local mins : " << std::endl;
        for (int i = 1; i < size - 1; i++) {
            if (array[i - 1] > array[i] && array[i + 1] > array[i]) {
                std::cout << array[i] << " ";
                k++;
            }
        }

        std::cout << std::endl << "the number of local mins = " << k;

    }
    
         
}