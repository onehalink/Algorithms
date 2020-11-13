
#ifndef SEARCH_INCLUDED
#define SEARCH_INCLUDED

//if find target return index, or return -1
//and need it is sorted
template<class T>int BinarySearch(T*p, T target, int count){
	int lo = 0, hi = count, mid;
	while (lo != hi) {
		mid = (lo + hi) / 2;
		if (*(p + mid) == target)
			return mid;
		else if(*(p + mid) > target)
		{
			hi = mid - 1;
		}
		else {
			lo = mid + 1;
		}
	}
}
#endif
