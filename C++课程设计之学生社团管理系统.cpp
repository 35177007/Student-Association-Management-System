#include<iostream>
#include<string>
using namespace std;
string stu[10][9] = { { "1", "Zhang", "Man", "computer", "1", "dance", "project1", "computer", "project0" },      //�����ά���飬���ڴ��ѧ��������Ϣ 
					{ "2", "Zhao", "Woman", "computer", "1", "sing", "project1", "computer", "project0" } };          //��ʼ������ѧ��������Ϣ 
string pro[10][10]={{"project0","Zhang","Zhao"},{"project1","Zhang","Zhao"}};
string xin[10][2];
int n = 1,z=3,h=0;                        //��n������������� 
string m = "1";                   //���ڲ���ѧ�� 
void tianjia()                   //���ѧ����Ϣ����
{
	cout << "�������ѧ����ѧ�ţ�"  << endl;
	cin >> stu[n][0];
	cout << "�������ѧ����������" << endl;
	cin >> stu[n][1];
	cout << "�������ѧ�����Ա�" << endl;
	cin >> stu[n][2];
	cout << "�������ѧ����רҵ��" << endl;
	cin >> stu[n][3];
	cout << "�������ѧ���İ༶��" << endl;
	cin >> stu[n][4];
	cout << "�������ѧ�����س���" << endl;
	cin >> stu[n][5];
	cout << "�������ѧ����ǰ����Ŀ��" << endl;
	cin >> stu[n][6];
	if(stu[n][6]==stu[0][6])             //��ʱ�Ե�ǰ��Ŀ���в��� 
	{
		pro[1][z]=stu[n][1];
	}
	cout << "�������ѧ����ǰ��ְ��" << endl;
	cin >> stu[n][7];
	cout << "�������ѧ����������Ŀ��" << endl;
	cin >> stu[n][8];
	if(stu[n][8]==stu[0][8])             //��ʱ��������Ŀ���в��� 
	{
		pro[0][z]=stu[n][1];
	}
	cout << "ѧ��Ϊ" << stu[n][0] << "��ѧ������Ϣ����ӳɹ���" << endl;
}
void shanchu()                                        //ɾ��ѧ����Ϣ����
{
	cout << "��������Ҫɾ��ѧ����Ϣ��ѧ�ţ�" << endl;
	cin >> m;         
	for (int j = 0; j <= n; j++)           //����j����ѭ������ 
	{
		if (stu[j][0] == m)                 //������Ӧ��ѧ�� 
		{
			stu[j][0] = ""; 
			stu[j][1] = ""; 
			stu[j][2] = ""; 
			stu[j][3] = "";                              //ɾ��������Ϣ 
			stu[j][4] = ""; 
			stu[j][5] = ""; 
			stu[j][6] = ""; 
			stu[j][7] = ""; 
			stu[j][8] = "";
			cout << "ѧ��Ϊ" << m << "��ѧ������Ϣ�ѳɹ�ɾ����" << endl;
			break;
		}
	}
}
void chazhao()                                   //����ѧ����Ϣ����
{
	cout << "��������Ҫ����ѧ����Ϣ��ѧ�ţ�" << endl;
	cin >> m;
	for (int j = 0; j <= n; j++)                //����j����ѭ������ 
	{
		if (stu[j][0] == m)                       //������Ӧ��ѧ�� 
		{
			cout << "ѧ�ţ�" << stu[j][0] << endl;
			cout << "������" << stu[j][1] << endl;
			cout << "�Ա�" << stu[j][2] << endl;
			cout << "רҵ��" << stu[j][3] << endl;
			cout << "�༶��" << stu[j][4] << endl;
			cout << "�س���" << stu[j][5] << endl;
			cout << "��ǰ��Ŀ��" << stu[j][6] << endl;
			cout << "��ǰְ��" << stu[j][7] << endl;
			cout << "������Ŀ��" << stu[j][8] << endl;
			break;
		}
	}
}
void xiugai()                         //�޸�ѧ����Ϣ����
{
	char b = '0';
	cout << "��������Ҫ�޸�ѧ����Ϣ��ѧ��" << endl;
	cin >> m;
	for (int j = 0; j <= n; j++)
	{
		if (stu[j][0] == m)               //�ҵ�mѧ�Ŷ�Ӧ������
		{
			while (b != 'q')               //��������b���ڿ���ѭ�� 
			{
				cout<<"****************************************"<<endl;
				cout << "1��ѧ��\n2������\n3���Ա�\n4��רҵ\n5���༶\n6���س�\n7����ǰ��Ŀ\n8����ǰְ��\n9��������Ŀ\n��������Ҫ�޸ĵ����ݵ����(����q������һ��)��" << endl;
				cout<<"****************************************"<<endl;
				cin >> b;
				if (b == '1')              //�޸�ѧ�� 
				{
					cout << "������ѧ�ţ�" << endl;
					cin >> stu[j][0];
					cout << "�޸ĳɹ���" << endl;
				}
				else if (b == '2')            //�޸����� 
				{
					cout << "������������" << endl;
					cin >> stu[j][1];
					cout << "�޸ĳɹ���" << endl;
				}
				else if (b == '3')                 //�޸��Ա� 
				{
					cout << "�������Ա�" << endl;
					cin >> stu[j][2];
					cout << "�޸ĳɹ���" << endl;
				}
				else if (b == '4')                 //�޸�רҵ 
				{
					cout << "������רҵ��" << endl;
					cin >> stu[j][3];
					cout << "�޸ĳɹ���" << endl;
				}
				else if (b == '5')           //�޸İ༶ 
				{
					cout << "������༶��" << endl;
					cin >> stu[j][4];
					cout << "�޸ĳɹ���" << endl;
				}
				else if (b == '6')           //�޸��س� 
				{
					cout << "�������س���" << endl;
					cin >> stu[j][5];
					cout << "�޸ĳɹ���" << endl;
				}
				else if (b == '7')        //�޸ĵ�ǰ��Ŀ 
				{
					cout << "�����뵱ǰ��Ŀ��" << endl;
					cin >> stu[j][6];
					cout << "�޸ĳɹ���" << endl;
				}
				else if (b == '8')           //�޸���Ŀְ�� 
				{
					cout << "��������Ŀְ��" << endl;
					cin >> stu[j][7];
					cout << "�޸ĳɹ���" << endl;
				}
				else if (b == '9')              //�޸�������Ŀ 
				{
					cout << "������������Ŀ��" << endl;
					cin >> stu[j][8];
					cout << "�޸ĳɹ���" << endl;
				}
				else if (b == 'q')        //������һ�㣬�˳�ѭ�� 
					break;
				else
				{
					cout << "����������������룺" << endl;
					continue;
				}
			}
		}
	}
}
void quanbu()                    //����ȫ��ѧ����Ϣ���� 
{
		for(int j=0;j<=n;j++)
		{
			cout << "ѧ�ţ�" << stu[j][0] << endl;
			cout << "������" << stu[j][1] << endl;
			cout << "�Ա�" << stu[j][2] << endl;
			cout << "רҵ��" << stu[j][3] << endl;
			cout << "�༶��" << stu[j][4] << endl;
			cout << "�س���" << stu[j][5] << endl;
			cout << "��ǰ��Ŀ��" << stu[j][6] << endl;
			cout << "��ǰְ��" << stu[j][7] << endl;
			cout << "������Ŀ��" << stu[j][8] << endl;
			cout<<"****************************************"<<endl;
		}
}
void xiangmu()                     //��Ŀ�����ܺ��� 
{
	char b='0';
	while(b!='q')
	{
		cout<<"1���鿴��ǰ��Ŀ���\n2���Ե�ǰ��Ŀ���в���\n3�����һ������Ŀ\n��������Ҫ��������ţ�����q������һ�㣩��"<<endl;
		cout<<"****************************************"<<endl;
		cin>>b;
		if(b=='1')            //�鿴��ǰ��Ŀ��� 
		{
			for(int i=1;i<=1;i++)
			{
				cout<<"��Ŀ����"<<pro[i][0]<<endl;
				cout<<"��Ŀ�����ˣ�"; 
				for(int j=1;j<=9;j++)            //ѭ�������ǰ��Ŀ��� 
				{
					cout<<" "<<pro[i][j];
				}
				cout<<endl;
			}
		}
		else if(b=='2')            //�Ե�ǰ��Ŀ���в��� 
		{
			bool c;
			cout<<"��ǰ��Ŀ�Ƿ���ɣ����������"<<1<<"��û���������"<<0<<endl;
			cin>>c;
			if(c==1)               //�����Ŀ 
			{
				for(int i=1;i<=9;i++)
				{
					if(stu[i][6]==stu[0][6])
					{
						stu[i][8]=stu[i][8]+stu[i][6];        //����ǰ��Ŀ��ӵ�������Ŀ�� 
						stu[i][6]="";                         //�����ǰ��Ŀ 
					}
				} 
				stu[0][8]=stu[0][8]+stu[0][6];
				stu[0][6]="";
			}
			else if(c==0)        //û����� 
			{
				for(int i=1;i<=9;i++)
				{
					if(stu[i][6]==stu[0][6])
					{
						stu[i][6]="";       //��� 
					}
				}
				stu[0][6]=" ";
			}
			else 
			cout<<"�������"<<endl;
		}
		else if(b=='3')              //�������Ŀ 
		{
			cout<<"��������Ŀ����";
			cin>>xin[h][0];
			cout<<"������е�����Ŀͬѧ��ѧ��(����e����)��"<<endl;
			for(;m!="e";)
			{
				cin>>m;
				for(int j=0;j<=n;j++)
				{
					if(stu[j][0]==m)           //����ѭ���ҵ�ָ��ͬѧ 
					{
						stu[j][6]=xin[h][0];
						xin[h][1]=stu[j][1];
						h++;
						xin[h][0]=xin[h-1][0];
					}
				} 
			}
			cout<<"�½������"<<endl;                     //����½���Ŀ��� 
			cout<<"�½���Ŀ����"<<xin[h][0]<<endl; 
			cout<<"��Ŀ�е�ͬѧ��";
			for(int i=0;i<h;i++)
			{
				cout<<xin[i][1]<<"	";
			}
			cout<<endl;
		}
	}
 } 
int main()
{
	cout << "					��ӭʹ��ɽ�������û����ܹ���ϵͳ" << endl;
	cout << "			Ϊ���ṩ�������ѧ��������Ϣ���ܹ���ϵͳ���ܸ�����Ϊ������" << endl;
	char a = 'a';
	cout << "�������ɶ�ѧ��������Ϣ���й�������\n";
	while (a != 'q')             //ѭ�������ڿ������������ 
	{
		cout<<"****************************************\n****************************************\n";
		cout << "1�����ѧ��������Ϣ\n2��ɾ��ѧ��������Ϣ\n3������ѧ��������Ϣ\n4���޸�ѧ��������Ϣ\n5���鿴ȫ��ѧ��������Ϣ\n6��������Ŀ������\n��������Ҫ��������ţ�����q�˳�ϵͳ����\n";
		cout<<"****************************************\n****************************************\n";
		cin >> a;
		if (a == 'q')
			break;
		else if (a == '1')
		{
			n++;
			tianjia();            //�������ѧ��������Ϣ���� 
		}
		else if (a == '2')
		{
			shanchu();           //����ɾ��ѧ��������Ϣ���� 
		}
		else if (a == '3')
		{
			chazhao();           //���ò���ѧ��������Ϣ���� 
		}
		else if (a == '4')
		{
			xiugai();           //�����޸�ѧ��������Ϣ���� 
		}
		else if (a=='5')
		{
			quanbu();            //���ò鿴ȫ��ѧ��������Ϣ���� 
		}
		else if(a=='6')
		{
			xiangmu();           //������Ŀ�����ܺ��� 
		}
		else
		{
			cout << "�����������������:" << endl;
			continue;
		}
	}
}
    



