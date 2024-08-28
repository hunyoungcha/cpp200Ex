#include <iostream>
#include <vector>
#include <string>

template <class T>
class TmpData {
public:
    void Add(T arg) { data_.push_back(arg); }
    
    int Size() const { return data_.size(); }

    void Print() const {
        int size = data_.size(); 
        for (int i = 0; i < size; ++i) { 
            std::cout << "data_ : " << data_.at(i) << std::endl; 
        }
    }

private:
    std::vector<T> data_;
};

int main() {
    TmpData<int> data_int;
    data_int.Add(1);
    data_int.Add(2);
    data_int.Print();

    TmpData<std::string> data_string;
    data_string.Add("Hello");
    data_string.Add("World");
    data_string.Print(); 

    return 0;
}
