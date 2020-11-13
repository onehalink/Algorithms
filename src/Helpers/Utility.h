
#ifndef UTILITY_INCLUDED
#define UTILITY_INCLUDED

template<class T> void Swap(T* lValue, T* rValue) {
	T temporaryBuffer = *lValue;
	*lValue = *rValue;
	*rValue = temporaryBuffer;
}
#endif