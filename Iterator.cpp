#include "Iterator.h"

template<typename ValueType>
Iterator<ValueType>::Iterator(ValueType* p) :
	p(p)
{

}

template<typename ValueType>
Iterator<ValueType>::Iterator(const Iterator& it) :
	p(it.p)
{

}

template<typename ValueType>
bool Iterator<ValueType>::operator!=(Iterator const& other) const
{
	return p != other.p;
}

template<typename ValueType>
bool Iterator<ValueType>::operator==(Iterator const& other) const
{
	return p == other.p;
}

template<typename ValueType>
typename Iterator<ValueType>::reference Iterator<ValueType>::operator*() const
{
	return *p;
}

template<typename ValueType>
Iterator<ValueType>& Iterator<ValueType>::operator++()
{
	++p;
	return *this;
}
