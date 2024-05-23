
#include<iostream>

class Box {
	int length;
	int width;
	int height;

public:
	Box();
	Box(int _length, int _width, int _height) {
		length = _length;
		width = _width;
		height = _height;
	}
	int getLength() { return length; }
	int getBreadth() { return width; }
	int getHeight() { return height; }
	long long CalculateVolume() {
		long long volume = length * width * height;
		return volume;
	}

	void operator <<(const Box& box) {
		std::cout << box.length << " " << box.width << " " << box.height;
	}

};

int main()
{

}