#include <stdio.h>
#include <stdlib.h>




void BuildMaxHeap(int num[], int len)
{
    int i;
    for(i = 1; i <= len; i++)
        AdjustDown(num, len-i+1);
}


/*新构建大顶堆和删除元素向下调整*/
void AdjustDown(int num[], int n)
{

}

/*插入元素后，向上调整堆*/
void AdjustUp()
{

}



int main(int argc, char const *argv[])
{
    
    return 0;
}
