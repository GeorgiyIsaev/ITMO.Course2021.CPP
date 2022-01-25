#pragma once

template<class T, class T1> class Array
{
public:
	Array(int size);
	T1 sum();
	T average_value();
	void show_array();
	int add_value(T);
private:
	T* data;
	int size;
	int index;
};

template<class T, class T1> T Array<T, T1>::average_value()
{
	T1 sum = 0;
	for (int i = 0; i < index; i++) sum += data[i];
	return (sum / index);
}
template<class T, class T1> Array<T, T1>::Array(int size)
{
	data = new T[size];
	if (data == NULL)
	{
		cerr << "Error memory ---- exit program" << endl;
		exit(1);
	}
	array::size = size;
	array::index = 0;
}
template<class T, class T1> T1 Array<T, T1>::sum()
{
	T1 sum = 0;
	for (int i = 0; i < index; i++) sum += data[i];
	return(sum);
}
template<class T, class T1> T Array<T, T1>::average_value()
{
	T1 sum = 0;
	for (int i = 0; i < index; i++) sum += data[i];
	return (sum / index);
}
template<class T, class T1> void Array<T, T1>::show_array()
{
	for (int i = 0; i < index; i++) cout << data[i] << ' ';
	cout << endl;
}
template<class T, class T1> int Array<T, T1>::add_value(T value)
{
	if (index == size)
		return(-1);
	else
	{
		data[index] = value;
		index++;
		return(0);
	}
}