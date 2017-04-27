#if 0
#include<iostream>
using namespace std;

int
main()
{
    int n,m,k,a[1000][1000];
    cin>>n>>m>>k;


    int i,j;
    for(i = 1;i<= n;++i)
    {
        for(j = 1;j<= m; ++j)
        {
            a[i][j] = i * j;
        }
    }


     for(i = 1;i<= n;++i)
    {
        for( j = 1;j<= m; ++j)
        {
           cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;

}

#endif // 0


//���˵�AC�Ĵ�
#include <iostream>
#include <cmath>
using namespace std;
typedef long long int64;  // int64(LL): 64λ������, ��long long�ı��

int64 m, n, k;

int64 cal(int64 x)  // �����xС�����ĸ���
{
	int64 sum = 0;
	for (int i = 1; i <= n; i++)
	{
		int64 temp = ( x / i>=m) ? m : (x / i);//tempÿһ���б�xС�����ĸ���(��i*m<=x,�����m��������Ҫ�󣬷������x/i��������)
		sum += temp;
	}
	return sum;
}


int64 cal2(int64 x)
{

    int64 sum = 0;
    for(int i = 1;i <= n;++i)
    {

        int64 temp = (x/i >= m)?m:(x/i);
        sum += temp;
    }
    return sum;
}




int64 binarySearch(int64 leftVal, int64 rightVal, int64 kth)
{
	int64 midVal;
	while (leftVal <=rightVal)
	{
		midVal = (leftVal + rightVal) / 2;
		int64 calvalue = cal2(midVal);//��˷��������е�С�ڵ���midval�����ĸ���
		if (calvalue < kth)
		{
			leftVal = midVal + 1;// Ҫ�ҵ����ں��棬�������޼�������
		}
		else
		{
			rightVal = midVal - 1;  // Ҫ�ҵ�����ǰ�棬�������޼�����С
		}
	}
	return leftVal;
}

int main()
{
	cin >> n;
	cin >> m;
	cin >> k;
	if (n<1 || n>500000 || m<1 || m>500000 || k<1 || k>n*m)
	{
		return 0;
	}
	cout << binarySearch(1, n*m, k);

	return 0;
}


