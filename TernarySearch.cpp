#include <iostream>

int TernarySearch(int x, int* arr, int n);

int main()
{
    int x, n;
    std::cout << "Nhap vao so can tim: ";
    std::cin >> x;
    std::cout << "Nhap vao so phan tu trong day: ";
    std::cin >> n;
    int* arr = new int [n];
    std::cout << "Nhap day so theo thu tu tang dan: ";
    for (int i=0; i<n; i++)
    {
        std::cin >> arr[i];
    }
    int result = TernarySearch(x, arr, n);
    if (result != 0)
        std::cout << "Vi tri cua " << x << " trong day so tren la: " << result << std::endl;
    else
        std::cout << "Khong co gia tri cua " << x << " trong day so tren!\n";
    return 0;
}

int TernarySearch(int x, int* arr, int n)
{
    int low = 0, high = n-1;
    int mid1, mid2;
    while (low < high)
    {
        mid1 = low+(high-low+1)/3;
        mid2 = high-(high-low+1)/3;
        if (x != arr[mid1] && x != arr[mid2])
        {
            if (x < arr[mid1])
            {
                high = mid1-1;
            }
            else if (x > arr[mid1] && x < arr[mid2])
            {
                low = mid1+1;
                high = mid2-1;
            }
            else
                low = mid2+1;
        }
        else if (x == arr[mid1])
        {
            return mid1+1;
        }
        else return mid2+1;
    }
    if (x == arr[low]) return low+1;
    else return 0;
}
