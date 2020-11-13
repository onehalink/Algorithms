#ifndef SORT_INCLUDED
#define SORT_INCLUDED

#include "../Helpers/Utility.h"

template<class T> void BubbleSort(T* p, int count, bool reversed) {
	if (reversed) {
		for (int l = 0; l < count - 1; l++) {
			for (int r = l + 1; r < count; r++) {
				if (*(p + l) < *(p + r))
					Swap<T>((p + l), (p + r));
			}
		}
	}
	else {
		for (int l = 0; l < count - 1; l++) {
			for (int r = l + 1; r < count; r++) {
				if (*(p + l) > *(p + r))
					Swap<T>((p + l), (p + r));
			}
		}
	}
}

template<class T> void InsertionSort(T* p, int count, bool reversed) {
	int currentIndex = 0 + 1;
	while(currentIndex < count){
		if (reversed) {
			for (int i = currentIndex; i > 0; i--) {
				if (*(p + i - 1) < *(p + i))
					Swap<T>((p + i - 1), (p + i));
				else
					break;
			}
		}
		else {
			for (int i = currentIndex; i > 0; i--) {
				if (*(p + i - 1) > * (p + i))
					Swap<T>((p + i - 1), (p + i));
				else
					break;
			}
		}
		currentIndex++;
	}
}
#endif