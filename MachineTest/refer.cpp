#include<iostream>
using namespace std;


/*
 ���þ��Ǹ�������һ��������ʹһ���ڴ�ռ����ͨ�����������������ʡ�

 type &varName;

һ���� һ����������Ϊ һ�������ı������Ͳ�����ʹ����Ϊ ��һ�������ı�����

����ָ��� ������Ҫ������


���� �� �����õı���֮��� ���� ���õġ���ָ�����ͨ����ֵָ����һ��������

int i,k,*p = &k;

int &j = i;



*/
int
main()
{
    int i = 1;
    int &j = i;
    cout<<j<<endl;

    int &jj = j;
        cout<<jj<<endl;

     //   const int &a = 100; ok!
/*
�������͵ı���һ����һ��ͬ���͵ı������� ������ʽת���ɸ�����
�ı�������������������������ǳ��������ĳ�ֵҲ�����ǳ�����
*/

      //     int &a = 100; error!
        // cout<<a<<endl;

        #if 0
        int a = 12;
        const int &b = a;

        cout<<a<<endl;
        cout<<b<<endl;
        a = 14;
        cout<<a<<endl;
        cout<<b<<endl;
        #endif // 0

        int a = 12;
        const int &b = a;

        cout<<a<<endl;
        cout<<b<<endl;
        b = 14; // assignment of read-only reference
        cout<<a<<endl;
        cout<<b<<endl;


    return 0;
}
