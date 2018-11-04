
/*��˳���L���ж�����*/
void HeapSort(SqList *L)
{
	int i;
	for(i = L->length / 2; i > 0; i--)			/*��L�е�r������һ���󶥶�*/
		HeapAdjust(L, i, L->length);
	
	for(i = L->length; i > 1; i--)
	{
		swap(L, 1, i);							/*���Ѷ���¼�͵�ǰδ�����������е����һ����¼����*/
		HeapAdjust(L, 1, i-1);					
	}
}


/*��֪L->r[s..m]�м�¼�Ĺؼ��ֳ�L->r[s]֮�������ѵĶ���*/
/*����������L->r[s]�Ĺؼ���,ʹL->r[s..m]��Ϊһ���󶥶�*/
void HeapAdjust(SqList *L, int s, int m)
{
	int temp, j;
	temp = L->r[s];
	for(j = 2 * s; j <= m; j*=2)			/*�عؼ��ֽϴ�ĺ��ӽ������ɸѡ*/
	{
		if(j < m) && L->r[j] < L->r[j+1])
			++j;							/*jΪ�ؼ����нϴ��¼���±�*/ 
		if(temp >= L->r[j])
			break;							/*rcӦ������λ��s��*/
		L->r[s] = L->r[j];
		s = j; 
	}
	
	L->r[s] = temp;							/*����*/ 
}
