#include <iostream>
using namespace std;

template<typename T, size_t S>
class Array {
public:
	T& operator[](size_t index);
	const T& operator[](size_t index) const;
	constexpr size_t size() const { return S; }   // can be used while compiling
	T* data() { return data; }
	const T* data() const { return data; }
private:
	T data[S];
};
T& Array::operator[](size_t index) {
	if (!(index < S)) {
		
	}
	return data;
}