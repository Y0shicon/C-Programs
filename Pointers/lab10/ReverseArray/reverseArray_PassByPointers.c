
//complete this function based on the definitions in reverseArray.h
void reverseArray_PassByPointers(int* arr, int size){
    for (int i = 0; i < size/2; i++)
    {
        int temp = *(arr + i);
        *(arr+i) = *(arr + size - i - 1);
        *(arr + size - i - 1) = temp;
    }
    
}