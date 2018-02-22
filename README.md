# 适用任何类型的简单的排序函数
## 函数原型
void sort(void* first, size_t size, size_t elem_size, int(*comp)(const void*, const void*))
## 参数
- first(需要排序的数组的第一个值的指针)
- size(数组中元素的个数)  		
- elem_size(每个元素的大小) 	
- comp(一个指向比较回调函数的指针)     
  
## 比较回调函数范例
```
//double型比较
int double_comp(const void *a, const void *b)
{
	double _a = *((double *)a);
	double _b = *((double *)b);

	return (_a == _b) ? 0 : (_a >_b ? 1 : -1);
}
//int型比较
int int_comp(const void *a, const void *b)
{
	int _a = *((int *)a);
	int _b = *((int *)b);

	return (_a == _b) ? 0 : (_a >_b ? 1 : -1);
}
//char型比较
int str_comp(const void *a, const void *b)
{
	char _a = *((char *)a);
	char _b = *((char *)b);

	return (_a == _b) ? 0 : (_a >_b ? 1 : -1);
}
```