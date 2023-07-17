#include <iostream>
#include <string>

using namespace std;

/*
This function expects :
arr - a pointer to an array of integers
size - the number in integers in arr

the function loops through arr and displays all the integers in the array
*/
void print(const int *const arr, size_t size){
    cout<<"[ ";
    for(size_t i{0};i<size;++i){
        cout<<arr[i]<<" ";
    }
    cout<<" ]";
    cout<<endl;
}

/*
This Function dynamically allocates a new arra that is of size =size1 * size2
Then it loops through each element of arr2 and multiplies it across all the elements
of arr1 and each podulrt is stored in the newly created array
*/
int* apply_all(const int *const arr1,size_t size1,const int *const arr2,size_t size2){
    int *new_array{};
    new_array = new int[size1 * size2];

    int position{0};
    for(size_t i{0}; i<size2;++i){
        for(size_t j{0};j<size1;++j){
            new_array[position]=arr1[j]*arr2[i];
            ++position;
        }
    }
    return new_array;
}

int main(){
    cout<<"Hello ROnak\n";
    
    const size_t array1_size{5};
    const size_t array2_size{3};

    int array1[]{1,2,3,4,5};
    int array2[]{10,20,30};

    cout<<"Array 1 : ";
    print(array1,array1_size);

    cout<<"Array 2 : ";
    print(array2,array2_size);

    int *results = apply_all(array1,array1_size,array2,array2_size);
    constexpr size_t results_size{array1_size * array2_size};

    cout<<"Results : ";
    print(results,results_size);

    delete [] results;
    cout<<endl;
    return 0;

}
