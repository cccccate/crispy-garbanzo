/*******************
* �ļ�����if_example
* ���ߣ�lcccate
* ʱ�䣺18.11.21
* ������ͳ����������ÿ��ֵ���������˶��ٴΣ�ע�����������֣�
* ˼·����������������currval������ͳ�Ƶ�����val���������ֵ��cnt��������
        �����
*******************/
#include <iostream>
using namespace std;
int main()
{
    int currval = 0, val = 0;  //currval:����ͳ�Ƶ�����val���������ֵ
    if (cin>>currval)
    {
        int cnt = 1;          //������
        while (cin>>val)
        {
            if (val == currval)//����������ֵ������ͳ�Ƶ���һ������ô����һ��
                ++cnt;
            else {             //�����ӡ
                cout<<currval<<" occurs "<<cnt<<" times "<<endl;
                currval = val; //������ֵ����currval
                cnt = 1;       //����������
            }
        }
        //��ӡ���һ��ֵ�ĸ���
        cout<<currval<<" occurs "<<cnt<<" times "<<endl;
    }
    return 0;
}
