class DynamicArray {
public:
        int* data;
        int size;
        int capacity;

    DynamicArray(int capacity) {
        this->capacity = capacity;
        size = 0;
        data = new int[capacity];
    }

    int get(int i) {
        return data[i];
    }

    void set(int i, int n) {
        data[i] = n;
    }

    void pushback(int n) {
        if(size == capacity){
            resize();
        }
        data[size] = n;
        size++;
    }

    int popback() {
        size--;
        return data[size];
    }

    void resize() {
        //Set a new variable with the new capacity
        int newCapacity = capacity * 2;
        //Create a pointer to the new dataset that is the size of newCapacity
        int* newData = new int[newCapacity];
        //Move all of the data from the old array to the new one with a for loop
        for(int i = 0; i < size; i++){
            newData[i] = data[i];
        }
        //Delete the old data
        delete data;
        //Set the pointer of the old data to the new Data
        data = newData;
        //Set the new capacity
        capacity = newCapacity;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }

    //Need a destructor
    ~DynamicArray(){
        delete[] data;
    }
};
