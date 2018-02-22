//交换函数
void _swap(const void *a, const void *b,size_t elem_size)
{
	 assert(a != NULL && b != NULL);
	char tmp = 0;
	int i = 0;
	while (elem_size > 0)//判断当前元素内的字节交换完了吗
	{
		//交换
		tmp = *((char *)a + i);
		*((char*)a + i) =*((char*)b + i);
		*((char*)b + i) = tmp;
		++i;
		--elem_size;
	}
}

//适用任何类型的简单的排序函数
//first 		需要排序的数组的第一个值的指针
//size  		数组中元素的个数
//elem_size 	每个元素的大小
//comp         一个指向比较回调函数的指针
void sort(void* first, size_t size, size_t elem_size, int(*comp)(const void*, const void*))
{
	assert(first != NULL && size >= 1 && elem_size >= 1&& cmp != NULL);
	size_t i = 0, j = 0;
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			//处理偏移的问题,需要转成字节来处理
			char * left = (char *)first + i * elem_size;
			char * right = (char *)first + j * elem_size;
			
			if (comp(left, right)>0)
			{
				_swap(left, right,elem_size);
			}
		}
	}
}