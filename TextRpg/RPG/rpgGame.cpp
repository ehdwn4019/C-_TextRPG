#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;
//�����
int guardianChoice = 1;
int guardianHp=100;
int currentGuardianhp;
int guardianDamage;
bool guardianAttack=false;
int G_Skill_1=0;
int G_Skill_2=40;
//â����
int spearmanChoice = 2;
int spearManHp=80;
int currentSpearmanhp;
int spearManDamage;
bool spearManAttack=false;
int S_Skill_1=20;
int S_Skill_2=40;
//����Ŀ
int berserkerChoice = 3;
int berserkerHp=60;
int currentBerserkerhp;
int berserkerDamage;
bool berserkerAttack=false;
int B_Skill_1=35;
int B_Skill_2=55;

//��Ÿ ����
int choice1;
int choice2;

void fix() //ü���� ���������� �������� �ʰ� ���� �Լ�.
{
	if (currentGuardianhp < 0) currentGuardianhp=0;
	if (currentSpearmanhp < 0) currentSpearmanhp=0;
	if (currentBerserkerhp < 0) currentBerserkerhp=0;
	
}

bool Totie() //������ ���� ������ �Ͽ� ����� ��� ����ϴ� �Լ� 
{
	if (currentGuardianhp != currentSpearmanhp)
	{
		cout << endl;
		cout << "�����ϴ� �Ф�.. ó������ ���ư��ϴ�!" << endl;
		cout << endl;
	}
	else if (currentGuardianhp != currentBerserkerhp)
	{
		cout << endl;
		cout << "�����ϴ� �Ф�.. ó������ ���ư��ϴ�!" << endl;
		cout << endl;
	}
	else if (currentSpearmanhp != currentBerserkerhp)
	{
		cout << endl;
		cout << "�����ϴ� �Ф�.. ó������ ���ư��ϴ�!" << endl;
		cout << endl;
	}
	return 1;
}

int main()
{
	system("title RPG����");
	system("mode con:lines=40  cols=190");
	tryAgain:
	srand(time(NULL));

	while /*�������ͽ�*/ (1)
	{


		cout <<"    <���� RPG>   "<<endl;

		cout << endl; cout << endl;
		cout << "                                  �������                            ��        �������                            ����           �������                           " << endl;
		cout << "                                  �������                          ��  ��      �������                          ���    ���       �������                            " << endl;
		cout << "                                  �������                        �� <â> ��    �������                          ���     ���      �������                            " << endl;
		cout << "                                  �������                           ���      �������                           ���     ���     �������                             " << endl;
		cout << "                                     ���                                ���        ���                                ��� <��> ���        ���                                 " << endl;
		cout << "         �ܡܡܡܡܡ�           �������������                 ���  �������������                   ���     ��� �������������                       " << endl;
		cout << "      �ܡ�         �ܡ�      ��     �������  ���                  ����   ��������    ���                  ���     ���  ��   ��������  ���                     " << endl;
		cout << "     ��     <����>     �� ���      �������  ���                   ���      �������    ���                  ���     ��� ��    �������    ���                    " << endl;
		cout << "      �ܡ�         �ܡ�            �������  ���                    ���      �������    ���             ������������   �������   ���                     " << endl;
		cout << "        �ܡܡܡܡܡ�                �������                         ���      �������                        ����������     �������                            " << endl;
		cout << "                                 �������                            ���      �������                              ���               �������                        " << endl;
		cout << "                                 ���   ���                             ���      ���    ���                              ���               ���   ���                       " << endl;
		cout << "                                 ���   ���                             ���      ���    ���                                                 ���   ���                      " << endl;
		cout << "                                 ���   ���                             ���      ���    ���                                                 ���   ���                      " << endl;
		cout << "                                     ��                                               ��                                                          ��                         " << endl;



		           


		Sleep(700);
		cout << "ĳ���͸� ������! 1�� == ����� ,2�� ==â���� , 3�� == ����Ŀ" << endl;
		cout << "���� ĳ���͸� ���ø� �ȵ˴ϴ�!!" << endl;
		cout << "���ĳ������ �⺻ �������� 10~15 ������ �������� �����ϴ�." << endl;
		cout << endl;
		cout << "================<����� �������ͽ�>===================" << endl;
		cout << "=================ü�� : 100===========================" << endl;
		cout << "=====================<��ų>===========================" << endl;
		cout << "==����: ������ 1ȸ ������ش�.(3Round�� �ߵ�)==" << endl;
		cout << "==���д�����: 50�� �������� �ش�.(5Round�� �ߵ�)==" << endl;
		cout << endl; cout << endl;
		cout << "================<â���� �������ͽ�>===================" << endl;
		cout << "==================ü�� : 80===========================" << endl;
		cout << "=====================<��ų>===========================" << endl;
		cout << "==���: â���� ��� 20�� �������� �ش�.(3Round�� �ߵ�)==" << endl;
		cout << "==��Ÿ: 40�� �������� ������ �����Ѵ�.(5Round�� �ߵ�)==" << endl;
		cout << endl; cout << endl;
		cout << "================<����Ŀ �������ͽ�>==================" << endl;
		cout << "====================ü�� : 60========================" << endl;
		cout << "=====================<��ų>==========================" << endl;
		cout << "==�������: ������� �������� 35�� ���������ش�.(3Round�� �ߵ�)==" << endl;
		cout << "==�޼�Ÿ��: ũ�� �ֵθ��� 55�� �������� �ش�.(5Round�� �ߵ�)==" << endl;

		cout << "Player 1 :";
		cin >> choice1;
		cout << "Player 2 :";
		cin >> choice2;

		if ((choice1 == choice2)|| (choice1 < 1 || choice1>3) || (choice2 < 1 || choice2>3)||(choice1<1 ||choice2<1)|| (choice1>3) || (choice2>3))
		{
			cout << endl; cout << endl; cout << endl;
			cout << "   !!!!!�߸��������ϴ�!!!!!" << endl;
			cout << "!!!!!ĳ���͸� �ٽ� ������!!!!!" << endl;
			Sleep(2500);
			cout << endl; cout << endl;
			continue;
		}
		
		else
		{
			break;
		}

	}//end of while (true) main.


	
		while/*P1 == 1�� P2 == 2*/ (1) //P1 == 1�� P2 == 2 ���� �ݺ�
		{
			guardianDamage = rand() % 6 + 10;
			spearManDamage = rand() % 6 + 10;

			if (choice1 == 1 && choice2 == 2) // P1�� ����� P2�� â���� ,P1==1�� P2==2 ���� ����.
			{
				//����� �⺻����
				cout << "                                    <1P>                                                         " << endl;
				cout << "                                  �������                                                                   " << endl;
				cout << "                                  �������                                                            " << endl;
				cout << "                                  �������                                                            " << endl;
				cout << "                                  �������                                         " << endl;
				cout << "                                     ���                                             " << endl;
				cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
				cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
				cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
				cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
				cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
				cout << "                                 �������                                          " << endl;
				cout << "                                 ���   ���                                     " << endl;
				cout << "                                 ���   ���                                     " << endl;
				cout << "                                 ���   ���                                     " << endl;
				cout << "                                                                                                                               " << endl;
				cout << "                                                                                                                               " << endl;

				//â���� �⺻����
				cout << "                                    <2P>                                                                                       " << endl;
				cout << "                           ��        �������                                             " << endl;
				cout << "                         ��  ��      �������                                              " << endl;
				cout << "                       �� <â> ��    �������                                             " << endl;
				cout << "                          ���      ��������                                             " << endl;
				cout << "                          ���         ���                                                  " << endl;
				cout << "                          ���  �������������                                        " << endl;
				cout << "                          ����   ��������    ���                                       " << endl;
				cout << "                          ���      �������    ���                                     " << endl;
				cout << "                          ���      �������    ���                                     " << endl;
				cout << "                          ���      �������                                            " << endl;
				cout << "                          ���      �������                                            " << endl;
				cout << "                          ���      ���    ���                                           " << endl;
				cout << "                          ���      ���    ���                                           " << endl;
				cout << "                          ���      ���    ���                                           " << endl;
				cout << "                                                                                                                               " << endl;
				cout << "                                                                                                                               " << endl;
				

				
			

				                                            

				

				cout << "������ ���� �մϴ�!!" << endl;


				if (!guardianAttack)//ù��° ��1 , ����� ����
				{
					Sleep(2500);//1.5�� ������
					cout << endl;
					cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
					cout << "=============  <Round 1-1>  ==============" << endl;
					cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
					Sleep(2500); //1.5�� ������

					cout << "                                    <1P>                                                         " << endl;
					cout << "                                  �������                                                                   " << endl;
					cout << "                                  �������                 �ءءءءء�                                             " << endl;
					cout << "                                  �������               �ء�<Attack>�ء�                                               " << endl;
					cout << "                                  �������                 �ءءءءء�                          " << endl;
					cout << "                                     ���                                             " << endl;
					cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
					cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
					cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
					cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
					cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
					cout << "                                 �������                                          " << endl;
					cout << "                                 ���   ���                                     " << endl;
					cout << "                                 ���   ���                                     " << endl;
					cout << "                                 ���   ���                                     " << endl;
					cout << "                                    1P                                                                                        " << endl;
					cout << "                                                                                                                               " << endl;


					cout << "������� â���縦 �����մϴ�" << endl;
					Sleep(2500); //1.5�� ������
					currentSpearmanhp = spearManHp -= guardianDamage;//���� ü�¿��� ��� �������� ���ҽ�Ű�� �� ���� ���� ü�¿� ����.

					//â���� ��������
					cout << "                                    <2P>                                                                                       " << endl;
					cout << "                          ��        �������                                             " << endl;
					cout << "                        ��  ��      ��<�����                                              " << endl;
					cout << "                      �� <â> ��    �������                                             " << endl;
					cout << "                         ���      ��Ѥѡ����                                             " << endl;
					cout << "                         ���         ���                                                  " << endl;
					cout << "                         ���  �������������                                        " << endl;
					cout << "                         ����   ��������    ���                                       " << endl;
					cout << "                         ���      �������    ���                                     " << endl;
					cout << "                         ���      �������    ���                                     " << endl;
					cout << "                         ���      �������                                            " << endl;
					cout << "                         ���      �������                                            " << endl;
					cout << "                         ���      ���    ���                                           " << endl;
					cout << "                         ���      ���    ���                                           " << endl;
					cout << "                         ���      ���    ���                                           " << endl;
					cout << "                                                                                                                               " << endl;
					cout << "                                                                                                                               " << endl;

					cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
					cout << endl;
					
					guardianAttack = false;

					if (!spearManAttack)//ù��° ��2,���Ǿ�� ����
					{
						Sleep(2500);//1.5�� ������
						cout << endl;
						cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
						cout << "=============  <Round 1-2>  ==============" << endl;
						cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
						Sleep(2500); //1.5�� ������

						//â���� ���ݻ���
						cout << "                                    <2P>                                                                                       " << endl;
						cout << "                          ��        �������                                             " << endl;
						cout << "                        ��  ��      �������               �ءءءءء�                                " << endl;
						cout << "                      �� <â> ��    �������            �ء�<Attack>�ء�                                 " << endl;
						cout << "                         ���      ��������              �ءءءءء�                               " << endl;
						cout << "                         ���         ���                                                  " << endl;
						cout << "                         ���  �������������                                        " << endl;
						cout << "                         ����   ��������    ���                                       " << endl;
						cout << "                         ���      �������    ���                                     " << endl;
						cout << "                         ���      �������    ���                                     " << endl;
						cout << "                         ���      �������                                            " << endl;
						cout << "                         ���      �������                                            " << endl;
						cout << "                         ���      ���    ���                                           " << endl;
						cout << "                         ���      ���    ���                                           " << endl;
						cout << "                         ���      ���    ���                                           " << endl;
						cout << "                                                                                                                               " << endl;
						cout << "                                                                                                                               " << endl;

						cout << "â���簡 ������� �����մϴ�" << endl;
						Sleep(2500); //1.5�� ������
						currentGuardianhp = guardianHp -= spearManDamage;

						//����� ���� ����
						cout << "                                    <1P>                                                                                       " << endl;
						cout << "                                  �������                                                                   " << endl;
						cout << "                                  ��<<����                                                              " << endl;
						cout << "                                  �������                                                              " << endl;
						cout << "                                  ��Ѥѡ���                                           " << endl;
						cout << "                                     ���                                             " << endl;
						cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
						cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
						cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
						cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
						cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
						cout << "                                 �������                                          " << endl;
						cout << "                                 ���   ���                                     " << endl;
						cout << "                                 ���   ���                                     " << endl;
						cout << "                                 ���   ���                                     " << endl;
						cout << "                                                                                                                               " << endl;
						cout << "                                                                                                                               " << endl;

						cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
						cout << endl;

						spearManAttack = false;

						if (!guardianAttack)//�ι�° ��1 , ����� ����
						{
							Sleep(2500);//1.5�� ������
							cout << endl;
							cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
							cout << "=============  <Round 2-1>  ==============" << endl;
							cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
							Sleep(2500); //1.5�� ������

							cout << "                                    <1P>                                                         " << endl;
							cout << "                                  �������                                                                   " << endl;
							cout << "                                  �������                 �ءءءءء�                                             " << endl;
							cout << "                                  �������               �ء�<Attack>�ء�                                               " << endl;
							cout << "                                  �������                 �ءءءءء�                          " << endl;
							cout << "                                     ���                                             " << endl;
							cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
							cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
							cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
							cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
							cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
							cout << "                                 �������                                          " << endl;
							cout << "                                 ���   ���                                     " << endl;
							cout << "                                 ���   ���                                     " << endl;
							cout << "                                 ���   ���                                     " << endl;
							cout << "                                    1P                                                                                        " << endl;
							cout << "                                                                                                                               " << endl;

							cout << "������� â���縦 �����մϴ�" << endl;
							Sleep(2500); //1.5�� ������
							currentSpearmanhp = currentSpearmanhp -= guardianDamage;

							//â���� ��������
							cout << "                                    <2P>                                                                                       " << endl;
							cout << "                          ��        �������                                             " << endl;
							cout << "                        ��  ��      ��<�����                                              " << endl;
							cout << "                      �� <â> ��    �������                                             " << endl;
							cout << "                         ���      ��Ѥѡ����                                             " << endl;
							cout << "                         ���         ���                                                  " << endl;
							cout << "                         ���  �������������                                        " << endl;
							cout << "                         ����   ��������    ���                                       " << endl;
							cout << "                         ���      �������    ���                                     " << endl;
							cout << "                         ���      �������    ���                                     " << endl;
							cout << "                         ���      �������                                            " << endl;
							cout << "                         ���      �������                                            " << endl;
							cout << "                         ���      ���    ���                                           " << endl;
							cout << "                         ���      ���    ���                                           " << endl;
							cout << "                         ���      ���    ���                                           " << endl;
							cout << "                                                                                                                               " << endl;
							cout << "                                                                                                                               " << endl;

							cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
							cout << endl;

							guardianAttack = false;

							if (!spearManAttack)//�ι�° ��2 , ���Ǿ�� ����
							{
								Sleep(2500);//1.5�� ������
								cout << endl;
								cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
								cout << "=============  <Round 2-2>  ==============" << endl;
								cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
								Sleep(2500); //1.5�� ������

									//â���� ���ݻ���
								cout << "                                    <2P>                                                                                       " << endl;
								cout << "                          ��        �������                                             " << endl;
								cout << "                        ��  ��      �������               �ءءءءء�                                " << endl;
								cout << "                      �� <â> ��    �������            �ء�<Attack>�ء�                                 " << endl;
								cout << "                         ���      ��������              �ءءءءء�                               " << endl;
								cout << "                         ���         ���                                                  " << endl;
								cout << "                         ���  �������������                                        " << endl;
								cout << "                         ����   ��������    ���                                       " << endl;
								cout << "                         ���      �������    ���                                     " << endl;
								cout << "                         ���      �������    ���                                     " << endl;
								cout << "                         ���      �������                                            " << endl;
								cout << "                         ���      �������                                            " << endl;
								cout << "                         ���      ���    ���                                           " << endl;
								cout << "                         ���      ���    ���                                           " << endl;
								cout << "                         ���      ���    ���                                           " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								cout << "â���簡 ������� �����մϴ�" << endl;
								Sleep(2500); //1.5�� ������
								currentGuardianhp = currentGuardianhp -= spearManDamage;

								//����� ���� ����
								cout << "                                    <1P>                                                                                       " << endl;
								cout << "                                  �������                                                                   " << endl;
								cout << "                                  ��<<����                                                              " << endl;
								cout << "                                  �������                                                              " << endl;
								cout << "                                  ��Ѥѡ���                                           " << endl;
								cout << "                                     ���                                             " << endl;
								cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
								cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
								cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
								cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
								cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
								cout << "                                 �������                                          " << endl;
								cout << "                                 ���   ���                                     " << endl;
								cout << "                                 ���   ���                                     " << endl;
								cout << "                                 ���   ���                                     " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
								cout << endl;

								spearManAttack = false;
								
								if (!guardianAttack)//����° ��1 ,����� ����
								{
									Sleep(2500);//1.5�� ������
									cout << endl;
									cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
									cout << "=============  <Round 3-1>  ==============" << endl;
									cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
									Sleep(2500); //1.5�� ������
									cout << "!!*������� ���彺ų�� ����մϴ�*!!" << endl;
									cout << "!!*      ������ 1ȸ ����մϴ�   *!!" << endl;

									//����� ���� ����
									cout << "                                    <1P>                                                                                       " << endl;
									cout << "                                  �������                                                                   " << endl;
									cout << "                                  �������                 !�ءءءءء�!                                             " << endl;
									cout << "                                  �������               !�ء�<Guard>�ء�!                                               " << endl;
									cout << "                                  �������                 !�ءءءءء�!                          " << endl;
									cout << "                                     ���                                             " << endl;
									cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
									cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
									cout << "     ��     <����>     �� ���      �������  ��                                     " << endl;
									cout << "      �ܡ�         �ܡܡ��������������                                                    " << endl;
									cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
									cout << "                                 �������                                          " << endl;
									cout << "                                  ���   ���                                     " << endl;
									cout << "                               ���   ���                                     " << endl;
									cout << "                             ���   ���                                     " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;

									Sleep(2500); //1.5�� ������
									cout << "������� 1�� ���������(��) �Ǿ����ϴ�." << endl;
									Sleep(2500);//1.5�� ������
									currentSpearmanhp = currentSpearmanhp - G_Skill_1;//������� ���� ��ų�� ��������Ƿ� ������� ���� ü�¿� ������� ���� ��ų���� ���ش�.
									currentGuardianhp = currentGuardianhp + G_Skill_1; //������� ���彺ų�� ��������Ƿ� ������� ���� ü�¿� ������� ���� ��ų ���� �����ش�. 
									fix();

									//â���� �⺻����
									cout << "                                    <2P>                                                                                       " << endl;
									cout << "                           ��        �������                                             " << endl;
									cout << "                         ��  ��      �������                                              " << endl;
									cout << "                       �� <â> ��    �������                                             " << endl;
									cout << "                          ���      ��������                                             " << endl;
									cout << "                          ���         ���                                                  " << endl;
									cout << "                          ���  �������������                                        " << endl;
									cout << "                          ����   ��������    ���                                       " << endl;
									cout << "                          ���      �������    ���                                     " << endl;
									cout << "                          ���      �������    ���                                     " << endl;
									cout << "                          ���      �������                                            " << endl;
									cout << "                          ���      �������                                            " << endl;
									cout << "                          ���      ���    ���                                           " << endl;
									cout << "                          ���      ���    ���                                           " << endl;
									cout << "                          ���      ���    ���                                           " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;


									cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
									cout << endl;
									
									guardianAttack = false;

									if (currentGuardianhp == 0)
									{
										cout << endl;
										cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
										cout << endl;
										cout << "ó������ ���ư��ϴ�!!" << endl;
										cout << endl;
										Sleep(1700);//1.5�� ������
										goto tryAgain;
									}
									else if (currentSpearmanhp == 0)
									{
										cout << endl;
										cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
										cout << endl;
										cout << "ó������ ���ư��ϴ�!!" << endl;
										cout << endl;
										Sleep(2500);//1.5�� ������
										goto tryAgain;
									}
									
									if (!spearManAttack)//����° ��2 , ���Ǿ�� ����
									{
										Sleep(2500);//1.5�� ������
										cout << endl;
										cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
										cout << "=============  <Round 3-2>  ==============" << endl;
										cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
										Sleep(2500); //1.5�� ������


	//â���� ���
										cout << "                                    <2P>                                                                                       " << endl;
										cout << "                                �������                                             " << endl;
										cout << "                                  �������                                              " << endl;
										cout << "                                    �������                                             " << endl;
										cout << "                                     ��������                                             " << endl;
										cout << "             ~~~~~~~~~~~                ���                                                  " << endl;
										cout << "         ~~~~~~~~~~~  ��        ���  �������������                                        " << endl;
										cout << "     ~~~~~~~~~~~   ��    ��       ����   ��������    ���                                       " << endl;
										cout << " ~~~~~~~~~~~    ��  <â>  ��������� ��     ������� ��                                     " << endl;
										cout << "     ~~~~~~~~~~~    ��    �������������������                                       " << endl;
										cout << "         ~~~~~~~~~~~  ��                        �������                                            " << endl;
										cout << "             ~~~~~~~~~~~                       �������                                            " << endl;
										cout << "                                                    ���    ���                                           " << endl;
										cout << "                                                       ���    ���                                           " << endl;
										cout << "                                                          ���    ���                                           " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "!!*â���簡 ��� ��ų�� ����մϴ�*!!" << endl;
										currentGuardianhp = currentGuardianhp - S_Skill_1; //������� ���� ü�¿��� ���Ǿ�� ��� ��ų ���������� ���ش�.
										Sleep(2500); //1.5�� ������

										//����� ���� ����
										cout << "                                    <1P>                                                                                       " << endl;
										cout << "                                  �������                                                                   " << endl;
										cout << "                                  �������                 !�ءءءءء�!                                             " << endl;
										cout << "                                  �������               !�ء�<Guard>�ء�!                                               " << endl;
										cout << "                                  �������                 !�ءءءءء�!                          " << endl;
										cout << "                                     ���                                             " << endl;
										cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
										cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
										cout << "     ��     <����>     �� ���      �������  ��                                     " << endl;
										cout << "      �ܡ�         �ܡܡ��������������                                                    " << endl;
										cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
										cout << "                                 �������                                          " << endl;
										cout << "                                  ���   ���                                     " << endl;
										cout << "                               ���   ���                                     " << endl;
										cout << "                             ���   ���                                     " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "*������ ������� ���� ��ų�� ���� �������� ���õǾ����ϴ�*!!" << endl;
										currentGuardianhp = currentGuardianhp + S_Skill_1; //���Ǿ���� �������� ���õǾ����� ���Ǿ�� ��� ��ų ������ ��ŭ �ٽ� �����ش�.
										fix();



										cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
										cout << endl;
										
										spearManAttack = false;

										if (currentGuardianhp == 0)
										{
											cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
											cout << endl;
											cout << "ó������ ���ư��ϴ�!!" << endl;
											cout << endl;
											Sleep(2500);//1.5�� ������
											goto tryAgain;
										}
										else if (currentSpearmanhp == 0)
										{
											cout << endl;
											cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
											cout << endl;
											cout << "ó������ ���ư��ϴ�!!" << endl;
											cout << endl;
											Sleep(2500);//1.5�� ������
											goto tryAgain;
										}



										if (!guardianAttack)//�׹�° ��1 , ����� ����
										{
											Sleep(2500);//1.5�� ������
											cout << endl;
											cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
											cout << "=============  <Round 4-1>  ==============" << endl;
											cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
											Sleep(2500); //1.5�� ������

											//����� ���ݻ���
											cout << "                                    <1P>                                                                                       " << endl;
											cout << "                                  �������                                                                   " << endl;
											cout << "                                  �������                 �ءءءءء�                                             " << endl;
											cout << "                                  �������               �ء�<Attack>�ء�                                               " << endl;
											cout << "                                  �������                 �ءءءءء�                          " << endl;
											cout << "                                     ���                                             " << endl;
											cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
											cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
											cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
											cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
											cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
											cout << "                                 �������                                          " << endl;
											cout << "                                 ���   ���                                     " << endl;
											cout << "                                 ���   ���                                     " << endl;
											cout << "                                 ���   ���                                     " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "������� â���縦 �����մϴ�" << endl;
											Sleep(2500); //1.5�� ������
											currentSpearmanhp = currentSpearmanhp -= guardianDamage;
											fix();

											//â���� ��������
											cout << "                                    <2P>                                                                                       " << endl;
											cout << "                          ��        �������                                             " << endl;
											cout << "                        ��  ��      ��<�����                                              " << endl;
											cout << "                      �� <â> ��    �������                                             " << endl;
											cout << "                         ���      ��Ѥѡ����                                             " << endl;
											cout << "                         ���         ���                                                  " << endl;
											cout << "                         ���  �������������                                        " << endl;
											cout << "                         ����   ��������    ���                                       " << endl;
											cout << "                         ���      �������    ���                                     " << endl;
											cout << "                         ���      �������    ���                                     " << endl;
											cout << "                         ���      �������                                            " << endl;
											cout << "                         ���      �������                                            " << endl;
											cout << "                         ���      ���    ���                                           " << endl;
											cout << "                         ���      ���    ���                                           " << endl;
											cout << "                         ���      ���    ���                                           " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
											cout << endl;
											
											guardianAttack = false;
											if (currentGuardianhp == 0)
											{
												cout << endl;
												cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
												cout << endl;
												cout << "ó������ ���ư��ϴ�!!" << endl;
												cout << endl;
												Sleep(2500);//1.5�� ������
												goto tryAgain;
											}
											else if (currentSpearmanhp == 0)
											{
												cout << endl;
												cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
												cout << endl;
												cout << "ó������ ���ư��ϴ�!!" << endl;
												cout << endl;
												Sleep(2500);//1.5�� ������
												goto tryAgain;
											}


											if (!spearManAttack)//�׹�° ��2 , ���Ǿ�� ����
											{
												Sleep(2500);//1.5�� ������
												cout << endl;
												cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
												cout << "=============  <Round 4-2>  ==============" << endl;
												cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
												Sleep(2500); //1.5�� ������

												//â���� ���ݻ���
												cout << "                                    <2P>                                                                                       " << endl;
												cout << "                          ��        �������                                             " << endl;
												cout << "                        ��  ��      �������               �ءءءءء�                                " << endl;
												cout << "                      �� <â> ��    �������            �ء�<Attack>�ء�                                 " << endl;
												cout << "                         ���      ��������              �ءءءءء�                               " << endl;
												cout << "                         ���         ���                                                  " << endl;
												cout << "                         ���  �������������                                        " << endl;
												cout << "                         ����   ��������    ���                                       " << endl;
												cout << "                         ���      �������    ���                                     " << endl;
												cout << "                         ���      �������    ���                                     " << endl;
												cout << "                         ���      �������                                            " << endl;
												cout << "                         ���      �������                                            " << endl;
												cout << "                         ���      ���    ���                                           " << endl;
												cout << "                         ���      ���    ���                                           " << endl;
												cout << "                         ���      ���    ���                                           " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "â���簡 ������� �����մϴ�" << endl;
												Sleep(2500); //1.5�� ������
												currentGuardianhp = currentGuardianhp -= spearManDamage;
												fix();

												//����� ���� ����
												cout << "                                    <1P>                                                                                       " << endl;
												cout << "                                  �������                                                                   " << endl;
												cout << "                                  ��<<����                                                              " << endl;
												cout << "                                  �������                                                              " << endl;
												cout << "                                  ��Ѥѡ���                                           " << endl;
												cout << "                                     ���                                             " << endl;
												cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
												cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
												cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
												cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
												cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
												cout << "                                 �������                                          " << endl;
												cout << "                                 ���   ���                                     " << endl;
												cout << "                                 ���   ���                                     " << endl;
												cout << "                                 ���   ���                                     " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
												cout << endl;
												
												spearManAttack = false;
												if (currentGuardianhp == 0)
												{
													cout << endl;
													cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
													cout << endl;
													cout << "ó������ ���ư��ϴ�!!" << endl;
													cout << endl;
													Sleep(2500);//1.5�� ������
													goto tryAgain;
												}
												else if (currentSpearmanhp == 0)
												{
													cout << endl;
													cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
													cout << endl;
													cout << "ó������ ���ư��ϴ�!!" << endl;
													cout << endl;
													Sleep(2500);//1.5�� ������
													goto tryAgain;
												}


												if (!guardianAttack)//������ ��1 , ����� ����
												{
													Sleep(2500);//1.5�� ������
													cout << endl;
													cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
													cout << "=============  <Round 5-1>  ==============" << endl;
													cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
													Sleep(1700);
													cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
													cout << "===========!!Warning!!============" << endl;
													cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
													Sleep(2500); //1.5�� ������

													//����� ���д�����
													cout << "                                    <1P>                                                                                       " << endl;
													cout << "                                     �������                                                                   " << endl;
													cout << "                                    �������                                                            " << endl;
													cout << "                                   �������                                                            " << endl;
													cout << "                                  �������                                         " << endl;
													cout << "        ~~~~~~~~~~~~~~                ���                                             " << endl;
													cout << "   ~~~~~ �ܡܡܡܡܡ� ~~~~~~       �������������                                        " << endl;
													cout << "   ~~~�ܡ�         �ܡ�~~~      ��  ��   �������                                           " << endl;
													cout << "   ~ ��     <����>    ��~ ����   ��   �������                                       " << endl;
													cout << "   ~~~�ܡ�         �ܡ�~~~  �����   �������                                                    " << endl;
													cout << "   ~~~~~ �ܡܡܡܡܡ�~~~~~~          �������                                       " << endl;
													cout << "         ~~~~~~~~~~~~~~          �������                                          " << endl;
													cout << "                                   ���   ���                                     " << endl;
													cout << "                                       ���   ���                                     " << endl;
													cout << "                                           ���   ���                                     " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "!!������� ���д����� ��ų�� ����մϴ�!!" << endl;
													Sleep(2500); //1.5�� ������
													currentSpearmanhp = currentSpearmanhp -= G_Skill_2;
													fix();

													//â���� ��������
													cout << "                                    <2P>                                                                                       " << endl;
													cout << "                          ��        �������                                             " << endl;
													cout << "                        ��  ��      ��<�����                                              " << endl;
													cout << "                      �� <â> ��    �������                                             " << endl;
													cout << "                         ���      ��Ѥѡ����                                             " << endl;
													cout << "                         ���         ���                                                  " << endl;
													cout << "                         ���  �������������                                        " << endl;
													cout << "                         ����   ��������    ���                                       " << endl;
													cout << "                         ���      �������    ���                                     " << endl;
													cout << "                         ���      �������    ���                                     " << endl;
													cout << "                         ���      �������                                            " << endl;
													cout << "                         ���      �������                                            " << endl;
													cout << "                         ���      ���    ���                                           " << endl;
													cout << "                         ���      ���    ���                                           " << endl;
													cout << "                         ���      ���    ���                                           " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "!!â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�!!." << endl;
													cout << endl;
													
													guardianAttack = false;
													if (currentGuardianhp == 0)
													{
														cout << endl;
														cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
														cout << endl;
														cout << "ó������ ���ư��ϴ�!!" << endl;
														cout << endl;
														Sleep(2500);//1.5�� ������
														goto tryAgain;
													}
													else if (currentSpearmanhp == 0)
													{
														cout << endl;
														cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
														cout << endl;
														cout << "ó������ ���ư��ϴ�!!" << endl;
														cout << endl;
														Sleep(2500);//1.5�� ������
														goto tryAgain;
													}


													if (!spearManAttack)//������ ��2 , ���Ǿ�� ����
													{
														Sleep(2500);//1.5�� ������
														cout << endl;
														cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
														cout << "=============  <Round 5-2>  ==============" << endl;
														cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
														Sleep(1700);
														cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
														cout << "===========!!Warning!!============" << endl;
														cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
														Sleep(2500); //1.5�� ������

														//â���� ��Ÿ
														cout << "                                    <2P>                                                                                       " << endl;
														cout << "                      �١�                                                                           " << endl;
														cout << "                   �١١�١�          �������                                             " << endl;
														cout << "                �١١�   ��١�       �������                                              " << endl;
														cout << "             �١١� <â>   ��١�   �������                                             " << endl;
														cout << "                �١� ��� �١�     ��������                                             " << endl;
														cout << "                  ���            ���                                                  " << endl;
														cout << "               ���  �������������                                        " << endl;
														cout << "              ����   ��������    ���                                       " << endl;
														cout << "             ���        �������  ��                                     " << endl;
														cout << "            ��� ����������� ��                                     " << endl;
														cout << "           ���    �������                                            " << endl;
														cout << "         ���    �������                                            " << endl;
														cout << "        ���     ���    ���                                           " << endl;
														cout << "       ���       ���    ���                                           " << endl;
														cout << "     ���          ���    ���                                           " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "!!â���簡 ��Ÿ ��ų�� ����մϴ�!!" << endl;
														Sleep(2500); //1.5�� ������
														currentGuardianhp = currentGuardianhp -= S_Skill_2;
														fix();

														//����� ���� ����
														cout << "                                    <1P>                                                                                       " << endl;
														cout << "                                  �������                                                                   " << endl;
														cout << "                                  ��<<����                                                              " << endl;
														cout << "                                  �������                                                              " << endl;
														cout << "                                  ��Ѥѡ���                                           " << endl;
														cout << "                                     ���                                             " << endl;
														cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
														cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
														cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
														cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
														cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
														cout << "                                 �������                                          " << endl;
														cout << "                                 ���   ���                                     " << endl;
														cout << "                                 ���   ���                                     " << endl;
														cout << "                                 ���   ���                                     " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
														cout << endl;
														
														spearManAttack = false;
														if (currentGuardianhp == 0)
														{
															cout << endl;
															cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
															cout << endl;
															cout << "ó������ ���ư��ϴ�!!" << endl;
															cout << endl;
															Sleep(2500);//1.5�� ������
															goto tryAgain;
														}
														else if (currentSpearmanhp == 0)
														{
															cout << endl;
															cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
															cout << endl;
															cout << "ó������ ���ư��ϴ�!!" << endl;
															cout << endl;
															Sleep(2500);//1.5�� ������
															break;
														}
														else
														{
															Totie();
															Sleep(2500);//1.5�� ������
															goto tryAgain;
														}
														
														
													}
												}

											}
										}
									}

								}
							}
						}


					}


				}
				break;
			}//P1==1�� P2==2 ���� ��.

			while/*P1 == 1�� P2 == 3*/ (1) //P1 == 1�� P2 == 3 ���� �ݺ�
			{

				guardianDamage = rand() % 6 + 10;
				berserkerDamage = rand() % 6 + 10;

				if (choice1 == 1 && choice2 == 3) // P1�� ����� P2�� ����Ŀ ,P1==1�� P2==3 ���� ����.
				{

					//����� �⺻����
					cout << "                                    <1P>                                                                                       " << endl;
					cout << "                                  �������                                                                   " << endl;
					cout << "                                  �������                                                            " << endl;
					cout << "                                  �������                                                            " << endl;
					cout << "                                  �������                                         " << endl;
					cout << "                                     ���                                             " << endl;
					cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
					cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
					cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
					cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
					cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
					cout << "                                 �������                                          " << endl;
					cout << "                                 ���   ���                                     " << endl;
					cout << "                                 ���   ���                                     " << endl;
					cout << "                                 ���   ���                                     " << endl;
					cout << "                                                                                                                               " << endl;
					cout << "                                                                                                                               " << endl;


					//����Ŀ �⺻����
					cout << "                                    <2P>                                                                                       " << endl;
					cout << "             ����                �������                                " << endl;
					cout << "          ���    ���            �������                             " << endl;
					cout << "          ���     ���           �������                                " << endl;
					cout << "          ���     ���           �������                                " << endl;
					cout << "          ��� <��> ���             ���                                    " << endl;
					cout << "          ���     ���      �������������                           " << endl;
					cout << "          ���      ���     ��   ��������  ���                           " << endl;
					cout << "          ���     ���     ��    �������    ���                           " << endl;
					cout << "       �����������  ��     �������   ���                             " << endl;
					cout << "        ����������          �������                                  " << endl;
					cout << "              ���               �������                                  " << endl;
					cout << "              ���               ���   ���                                  " << endl;
					cout << "                                ���   ���                                  " << endl;
					cout << "                                ���   ���                                   " << endl;
					cout << "                                                                                                                               " << endl;
					cout << "                                                                                                                               " << endl;



					cout << "������ ���� �մϴ�!!" << endl;


					if (!guardianAttack)//ù��° ��1 , ����� ����
					{
						Sleep(2500);//1.5�� ������
						cout << endl;
						cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
						cout << "=============  <Round 1-1>  ==============" << endl;
						cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
						Sleep(2500); //1.5�� ������

						//����� ���ݻ���
						cout << "                                    <1P>                                                                                       " << endl;
						cout << "                                  �������                                                                   " << endl;
						cout << "                                  �������                 �ءءءءء�                                             " << endl;
						cout << "                                  �������               �ء�<Attack>�ء�                                               " << endl;
						cout << "                                  �������                 �ءءءءء�                          " << endl;
						cout << "                                     ���                                             " << endl;
						cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
						cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
						cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
						cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
						cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
						cout << "                                 �������                                          " << endl;
						cout << "                                 ���   ���                                     " << endl;
						cout << "                                 ���   ���                                     " << endl;
						cout << "                                 ���   ���                                     " << endl;
						cout << "                                                                                                                               " << endl;
						cout << "                                                                                                                               " << endl;

						cout << "������� ����Ŀ�� �����մϴ�" << endl;
						Sleep(2500); //1.5�� ������
						currentBerserkerhp = berserkerHp -= guardianDamage;//���� ü�¿��� ��� �������� ���ҽ�Ű�� �� ���� ���� ü�¿� ����.

						//����Ŀ ��������
						cout << "                                    <2P>                                                                                       " << endl;
						cout << "                ����                �������                                " << endl;
						cout << "             ���    ���            ��<<����                             " << endl;
						cout << "             ���     ���           �������                                " << endl;
						cout << "             ���     ���           ��Ѥѡ���                                " << endl;
						cout << "             ��� <��> ���             ���                                    " << endl;
						cout << "             ���     ���      �������������                           " << endl;
						cout << "             ���      ���     ��   ��������  ���                           " << endl;
						cout << "             ���     ���     ��    �������    ���                           " << endl;
						cout << "          �����������  ��     �������   ���                             " << endl;
						cout << "           ����������          �������                                  " << endl;
						cout << "                 ���               �������                                  " << endl;
						cout << "                 ���               ���   ���                                  " << endl;
						cout << "                                   ���   ���                                  " << endl;
						cout << "                                   ���   ���                                   " << endl;
						cout << "                                                                                                                               " << endl;
						cout << "                                                                                                                               " << endl;

						cout << "����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�." << endl;
						cout << endl;

						guardianAttack = false;

						if (!berserkerAttack)//ù��° ��2,����Ŀ ����
						{
							Sleep(2500);//1.5�� ������
							cout << endl;
							cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
							cout << "=============  <Round 1-2>  ==============" << endl;
							cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;

							Sleep(2500); //1.5�� ������

							//����Ŀ ���ݻ���
							cout << "                                    <2P>                                                                                       " << endl;
							cout << "              ����                �������                                " << endl;
							cout << "           ���    ���            �������             �ءءءءء�                   " << endl;
							cout << "           ���     ���           �������           �ء�<Attack>�ء�                      " << endl;
							cout << "           ���     ���           �������             �ءءءءء�                   " << endl;
							cout << "           ��� <��> ���             ���                                    " << endl;
							cout << "           ���     ���      �������������                           " << endl;
							cout << "           ���      ���     ��   ��������  ���                           " << endl;
							cout << "           ���     ���     ��    �������    ���                           " << endl;
							cout << "        �����������  ��     �������   ���                             " << endl;
							cout << "         ����������          �������                                  " << endl;
							cout << "               ���               �������                                  " << endl;
							cout << "               ���               ���   ���                                  " << endl;
							cout << "                                 ���   ���                                  " << endl;
							cout << "                                 ���   ���                                   " << endl;
							cout << "                                                                                                                               " << endl;
							cout << "                                                                                                                               " << endl;

							cout << "����Ŀ�� ������� �����մϴ�" << endl;
							Sleep(2500); //1.5�� ������
							currentGuardianhp = guardianHp -= berserkerDamage;

							//����� ���� ����
							cout << "                                    <1P>                                                                                       " << endl;
							cout << "                                  �������                                                                   " << endl;
							cout << "                                  ��<<����                                                              " << endl;
							cout << "                                  �������                                                              " << endl;
							cout << "                                  ��Ѥѡ���                                           " << endl;
							cout << "                                     ���                                             " << endl;
							cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
							cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
							cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
							cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
							cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
							cout << "                                 �������                                          " << endl;
							cout << "                                 ���   ���                                     " << endl;
							cout << "                                 ���   ���                                     " << endl;
							cout << "                                 ���   ���                                     " << endl;
							cout << "                                                                                                                               " << endl;
							cout << "                                                                                                                               " << endl;

							cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
							cout << endl;

							berserkerAttack = false;

							if (!guardianAttack)//�ι�° ��1 , ����� ����
							{
								Sleep(2500);//1.5�� ������
								cout << endl;
								cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
								cout << "=============  <Round 2-1>  ==============" << endl;
								cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
								Sleep(2500); //1.5�� ������

								//����� ���ݻ���
								cout << "                                    <1P>                                                                                       " << endl;
								cout << "                                  �������                                                                   " << endl;
								cout << "                                  �������                 �ءءءءء�                                             " << endl;
								cout << "                                  �������               �ء�<Attack>�ء�                                               " << endl;
								cout << "                                  �������                 �ءءءءء�                          " << endl;
								cout << "                                     ���                                             " << endl;
								cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
								cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
								cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
								cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
								cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
								cout << "                                 �������                                          " << endl;
								cout << "                                 ���   ���                                     " << endl;
								cout << "                                 ���   ���                                     " << endl;
								cout << "                                 ���   ���                                     " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								cout << "������� ����Ŀ�� �����մϴ�" << endl;
								Sleep(2500); //1.5�� ������
								currentBerserkerhp = currentBerserkerhp -= guardianDamage;

								//����Ŀ ��������
								cout << "                                    <2P>                                                                                       " << endl;
								cout << "                ����                �������                                " << endl;
								cout << "             ���    ���            ��<<����                             " << endl;
								cout << "             ���     ���           �������                                " << endl;
								cout << "             ���     ���           ��Ѥѡ���                                " << endl;
								cout << "             ��� <��> ���             ���                                    " << endl;
								cout << "             ���     ���      �������������                           " << endl;
								cout << "             ���      ���     ��   ��������  ���                           " << endl;
								cout << "             ���     ���     ��    �������    ���                           " << endl;
								cout << "          �����������  ��     �������   ���                             " << endl;
								cout << "           ����������          �������                                  " << endl;
								cout << "                 ���               �������                                  " << endl;
								cout << "                 ���               ���   ���                                  " << endl;
								cout << "                                   ���   ���                                  " << endl;
								cout << "                                   ���   ���                                   " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								cout << "����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�." << endl;
								cout << endl;

								guardianAttack = false;

								if (!berserkerAttack)//�ι�° ��2 , ����Ŀ ����
								{
									Sleep(2500);//1.5�� ������
									cout << endl;
									cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
									cout << "=============  <Round 2-2>  ==============" << endl;
									cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
									Sleep(2500); //1.5�� ������

									//����Ŀ ���ݻ���
									cout << "                                    <2P>                                                                                       " << endl;
									cout << "              ����                �������                                " << endl;
									cout << "           ���    ���            �������             �ءءءءء�                   " << endl;
									cout << "           ���     ���           �������           �ء�<Attack>�ء�                      " << endl;
									cout << "           ���     ���           �������             �ءءءءء�                   " << endl;
									cout << "           ��� <��> ���             ���                                    " << endl;
									cout << "           ���     ���      �������������                           " << endl;
									cout << "           ���      ���     ��   ��������  ���                           " << endl;
									cout << "           ���     ���     ��    �������    ���                           " << endl;
									cout << "        �����������  ��     �������   ���                             " << endl;
									cout << "         ����������          �������                                  " << endl;
									cout << "               ���               �������                                  " << endl;
									cout << "               ���               ���   ���                                  " << endl;
									cout << "                                 ���   ���                                  " << endl;
									cout << "                                 ���   ���                                   " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;


									cout << "����Ŀ�� ������� �����մϴ�" << endl;
									Sleep(2500); //1.5�� ������
									currentGuardianhp = currentGuardianhp -= berserkerDamage;

									//����� ���� ����
									cout << "                                    <1P>                                                                                       " << endl;
									cout << "                                  �������                                                                   " << endl;
									cout << "                                  ��<<����                                                              " << endl;
									cout << "                                  �������                                                              " << endl;
									cout << "                                  ��Ѥѡ���                                           " << endl;
									cout << "                                     ���                                             " << endl;
									cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
									cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
									cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
									cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
									cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
									cout << "                                 �������                                          " << endl;
									cout << "                                 ���   ���                                     " << endl;
									cout << "                                 ���   ���                                     " << endl;
									cout << "                                 ���   ���                                     " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;


									cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
									cout << endl;

									berserkerAttack = false;




									if (!guardianAttack)//����° ��1 ,����� ����
									{
										Sleep(2500);//1.5�� ������
										cout << endl;
										cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
										cout << "=============  <Round 3-1>  ==============" << endl;
										cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
										Sleep(2500); //1.5�� ������
										cout << "!!*������� ���彺ų�� ����մϴ�*!!" << endl;
										cout << "!!*      ������ 1ȸ ����մϴ�   *!!" << endl;

										//����� ���� ����
										cout << "                                    <1P>                                                                                       " << endl;
										cout << "                                  �������                                                                   " << endl;
										cout << "                                  �������                 !�ءءءءء�!                                             " << endl;
										cout << "                                  �������               !�ء�<Guard>�ء�!                                               " << endl;
										cout << "                                  �������                 !�ءءءءء�!                          " << endl;
										cout << "                                     ���                                             " << endl;
										cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
										cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
										cout << "     ��     <����>     �� ���      �������  ��                                     " << endl;
										cout << "      �ܡ�         �ܡܡ��������������                                                    " << endl;
										cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
										cout << "                                 �������                                          " << endl;
										cout << "                                  ���   ���                                     " << endl;
										cout << "                               ���   ���                                     " << endl;
										cout << "                             ���   ���                                     " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										Sleep(2500); //1.5�� ������
										cout << "������� 1�� ���������(��) �Ǿ����ϴ�." << endl;
										Sleep(2500);//1.5�� ������
										currentBerserkerhp = currentBerserkerhp - G_Skill_1;//������� ���� ��ų�� ��������Ƿ� ������� ���� ü�¿� ������� ���� ��ų���� ���ش�.
										currentGuardianhp = currentGuardianhp + G_Skill_1; //������� ���彺ų�� ��������Ƿ� ������� ���� ü�¿� ������� ���� ��ų ���� �����ش�. 
										fix();

										//����Ŀ �⺻����
										cout << "                                    <2P>                                                                                       " << endl;
										cout << "             ����                �������                                " << endl;
										cout << "          ���    ���            �������                             " << endl;
										cout << "          ���     ���           �������                                " << endl;
										cout << "          ���     ���           �������                                " << endl;
										cout << "          ��� <��> ���             ���                                    " << endl;
										cout << "          ���     ���      �������������                           " << endl;
										cout << "          ���      ���     ��   ��������  ���                           " << endl;
										cout << "          ���     ���     ��    �������    ���                           " << endl;
										cout << "       �����������  ��     �������   ���                             " << endl;
										cout << "        ����������          �������                                  " << endl;
										cout << "              ���               �������                                  " << endl;
										cout << "              ���               ���   ���                                  " << endl;
										cout << "                                ���   ���                                  " << endl;
										cout << "                                ���   ���                                   " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�." << endl;
										cout << endl;
										
										guardianAttack = false;
										if (currentGuardianhp == 0)
										{
											cout << endl;
											cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
											cout << endl;
											cout << "ó������ ���ư��ϴ�!!" << endl;
											cout << endl;
											Sleep(2500);//1.5�� ������
											goto tryAgain;
										}
										else if (currentBerserkerhp == 0)
										{
											cout << endl;
											cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
											cout << endl;
											cout << "ó������ ���ư��ϴ�!!" << endl;
											cout << endl;
											Sleep(2500);//1.5�� ������
											goto tryAgain;
										}


										if (!berserkerAttack)//����° ��2 , ����Ŀ ����
										{
											Sleep(2500);//1.5�� ������
											cout << endl;
											cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
											cout << "=============  <Round 3-2>  ==============" << endl;
											cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
											Sleep(2500); //1.5�� ������

											//����Ŀ �������
											cout << "                                    <2P>                                                                                       " << endl;
											cout << "                                                                                                                             " << endl;
											cout << "                                                                                                                             " << endl;
											cout << "                /  /                 / /                                                " << endl;
											cout << "              /  /       ���        / /                                                    " << endl;
											cout << "            /  /    ���      ���   / /                                                      " << endl;
											cout << "          /  /      ���      ���  / /                                                       " << endl;
											cout << "                    ���      ���                                                           " << endl;
											cout << "                    ��� <��> ���        �������                                " << endl;
											cout << "                    ���      ���          �������                             " << endl;
											cout << "                    ���      ���           �������                                " << endl;
											cout << "                    ���      ���           �������                                " << endl;
											cout << "                  �����������          ���                                    " << endl;
											cout << "                  ����������� �������������                           " << endl;
											cout << "                         ���  ��   ��      ��������                            " << endl;
											cout << "                         ����   ��         �������                               " << endl;
											cout << "                                            �������                                " << endl;
											cout << "                                            �������                                  " << endl;
											cout << "                                            �������                                  " << endl;
											cout << "                                            ���   ���                                  " << endl;
											cout << "                                              ���   ���                                  " << endl;
											cout << "                                                ���   ���                                   " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "!!*����Ŀ�� ������� ��ų�� ����մϴ�*!!" << endl;
											currentGuardianhp = currentGuardianhp - B_Skill_1; //������� ���� ü�¿��� ����Ŀ�� ������� ��ų ���������� ���ش�.
											Sleep(2500); //1.5�� ������

											//����� ���� ����
											cout << "                                    <1P>                                                                                       " << endl;
											cout << "                                  �������                                                                   " << endl;
											cout << "                                  �������                 !�ءءءءء�!                                             " << endl;
											cout << "                                  �������               !�ء�<Guard>�ء�!                                               " << endl;
											cout << "                                  �������                 !�ءءءءء�!                          " << endl;
											cout << "                                     ���                                             " << endl;
											cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
											cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
											cout << "     ��     <����>     �� ���      �������  ��                                     " << endl;
											cout << "      �ܡ�         �ܡܡ��������������                                                    " << endl;
											cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
											cout << "                                 �������                                          " << endl;
											cout << "                                  ���   ���                                     " << endl;
											cout << "                               ���   ���                                     " << endl;
											cout << "                             ���   ���                                     " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "*������ ������� ���� ��ų�� ���� �������� ���õǾ����ϴ�*!!" << endl;
											currentGuardianhp = currentGuardianhp + B_Skill_1; //����Ŀ�� �������� ���õǾ����� ����Ŀ ��� ��ų ������ ��ŭ �ٽ� �����ش�.
											fix();

											//����� �⺻����
											cout << "                                    <1P>                                                                                       " << endl;
											cout << "                                  �������                                                                   " << endl;
											cout << "                                  �������                                                            " << endl;
											cout << "                                  �������                                                            " << endl;
											cout << "                                  �������                                         " << endl;
											cout << "                                     ���                                             " << endl;
											cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
											cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
											cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
											cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
											cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
											cout << "                                 �������                                          " << endl;
											cout << "                                 ���   ���                                     " << endl;
											cout << "                                 ���   ���                                     " << endl;
											cout << "                                 ���   ���                                     " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
											cout << endl;
										
											berserkerAttack = false;
											if (currentGuardianhp == 0)
											{
												cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
												cout << endl;
												cout << "ó������ ���ư��ϴ�!!" << endl;
												cout << endl;
												Sleep(2500);//1.5�� ������
												goto tryAgain;
											}
											else if (currentBerserkerhp == 0)
											{
												cout << endl;
												cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
												cout << endl;
												cout << "ó������ ���ư��ϴ�!!" << endl;
												cout << endl;
												Sleep(2500);//1.5�� ������
												goto tryAgain;
											}



											if (!guardianAttack)//�׹�° ��1 , ����� ����
											{
												Sleep(2500);//1.5�� ������
												cout << endl;
												cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
												cout << "=============  <Round 4-1>  ==============" << endl;
												cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
												Sleep(2500); //1.5�� ������

												//����� ���ݻ���
												cout << "                                    <1P>                                                                                       " << endl;
												cout << "                                  �������                                                                   " << endl;
												cout << "                                  �������                 �ءءءءء�                                             " << endl;
												cout << "                                  �������               �ء�<Attack>�ء�                                               " << endl;
												cout << "                                  �������                 �ءءءءء�                          " << endl;
												cout << "                                     ���                                             " << endl;
												cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
												cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
												cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
												cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
												cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
												cout << "                                 �������                                          " << endl;
												cout << "                                 ���   ���                                     " << endl;
												cout << "                                 ���   ���                                     " << endl;
												cout << "                                 ���   ���                                     " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "������� ����Ŀ�� �����մϴ�" << endl;
												Sleep(2500); //1.5�� ������
												currentBerserkerhp = currentBerserkerhp -= guardianDamage;
												fix();

												//����Ŀ ��������
												cout << "                                    <2P>                                                                                       " << endl;
												cout << "                ����                �������                                " << endl;
												cout << "             ���    ���            ��<<����                             " << endl;
												cout << "             ���     ���           �������                                " << endl;
												cout << "             ���     ���           ��Ѥѡ���                                " << endl;
												cout << "             ��� <��> ���             ���                                    " << endl;
												cout << "             ���     ���      �������������                           " << endl;
												cout << "             ���      ���     ��   ��������  ���                           " << endl;
												cout << "             ���     ���     ��    �������    ���                           " << endl;
												cout << "          �����������  ��     �������   ���                             " << endl;
												cout << "           ����������          �������                                  " << endl;
												cout << "                 ���               �������                                  " << endl;
												cout << "                 ���               ���   ���                                  " << endl;
												cout << "                                   ���   ���                                  " << endl;
												cout << "                                   ���   ���                                   " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�." << endl;
												cout << endl;
												
												guardianAttack = false;
												if (currentGuardianhp == 0)
												{
													cout << endl;
													cout << "����Ŀ �������� �¸��Ͽ����ϴ�!!" << endl;
													cout << endl;
													cout << "ó������ ���ư��ϴ�!!" << endl;
													cout << endl;
													Sleep(2500);//1.5�� ������
													goto tryAgain;
												}
												else if (currentBerserkerhp == 0)
												{
													cout << endl;
													cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
													cout << endl;
													cout << "ó������ ���ư��ϴ�!!" << endl;
													cout << endl;
													Sleep(2500);//1.5�� ������
													goto tryAgain;
												}


												if (!berserkerAttack)//�׹�° ��2 , ����Ŀ ����
												{
													Sleep(2500);//1.5�� ������
													cout << endl;
													cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
													cout << "=============  <Round 4-2>  ==============" << endl;
													cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
													Sleep(2500); //1.5�� ������

													//����Ŀ ���ݻ���
													cout << "                                    <2P>                                                                                       " << endl;
													cout << "              ����                �������                                " << endl;
													cout << "           ���    ���            �������             �ءءءءء�                   " << endl;
													cout << "           ���     ���           �������           �ء�<Attack>�ء�                      " << endl;
													cout << "           ���     ���           �������             �ءءءءء�                   " << endl;
													cout << "           ��� <��> ���             ���                                    " << endl;
													cout << "           ���     ���      �������������                           " << endl;
													cout << "           ���      ���     ��   ��������  ���                           " << endl;
													cout << "           ���     ���     ��    �������    ���                           " << endl;
													cout << "        �����������  ��     �������   ���                             " << endl;
													cout << "         ����������          �������                                  " << endl;
													cout << "               ���               �������                                  " << endl;
													cout << "               ���               ���   ���                                  " << endl;
													cout << "                                 ���   ���                                  " << endl;
													cout << "                                 ���   ���                                   " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "����Ŀ�� ������� �����մϴ�" << endl;
													Sleep(2500); //1.5�� ������
													currentGuardianhp = currentGuardianhp -= berserkerDamage;
													fix();

													//����� ���� ����
													cout << "                                    <1P>                                                                                       " << endl;
													cout << "                                  �������                                                                   " << endl;
													cout << "                                  ��<<����                                                              " << endl;
													cout << "                                  �������                                                              " << endl;
													cout << "                                  ��Ѥѡ���                                           " << endl;
													cout << "                                     ���                                             " << endl;
													cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
													cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
													cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
													cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
													cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
													cout << "                                 �������                                          " << endl;
													cout << "                                 ���   ���                                     " << endl;
													cout << "                                 ���   ���                                     " << endl;
													cout << "                                 ���   ���                                     " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
													cout << endl;
												
													berserkerAttack = false;
													if (currentGuardianhp == 0)
													{
														cout << endl;
														cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
														cout << endl;
														cout << "ó������ ���ư��ϴ�!!" << endl;
														cout << endl;
														Sleep(2500);//1.5�� ������
														goto tryAgain;
													}
													else if (currentBerserkerhp == 0)
													{
														cout << endl;
														cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
														cout << endl;
														cout << "ó������ ���ư��ϴ�!!" << endl;
														cout << endl;
														Sleep(2500);//1.5�� ������
														goto tryAgain;
													}


													if (!guardianAttack)//������ ��1 , ����� ����
													{
														Sleep(2500);//1.5�� ������
														cout << endl;
														cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
														cout << "=============  <Round 5-1>  ==============" << endl;
														cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
														Sleep(1700);
														cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
														cout << "===========!!Warning!!============" << endl;
														cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
														Sleep(2500); //1.5�� ������

														//����� ���д�����
														cout << "                                    <1P>                                                                                       " << endl;
														cout << "                                     �������                                                                   " << endl;
														cout << "                                    �������                                                            " << endl;
														cout << "                                   �������                                                            " << endl;
														cout << "                                  �������                                         " << endl;
														cout << "        ~~~~~~~~~~~~~~                ���                                             " << endl;
														cout << "   ~~~~~ �ܡܡܡܡܡ� ~~~~~~       �������������                                        " << endl;
														cout << "   ~~~�ܡ�         �ܡ�~~~      ��  ��   �������                                           " << endl;
														cout << "   ~ ��     <����>    ��~ ����   ��   �������                                       " << endl;
														cout << "   ~~~�ܡ�         �ܡ�~~~  �����   �������                                                    " << endl;
														cout << "   ~~~~~ �ܡܡܡܡܡ�~~~~~~          �������                                       " << endl;
														cout << "         ~~~~~~~~~~~~~~          �������                                          " << endl;
														cout << "                                   ���   ���                                     " << endl;
														cout << "                                       ���   ���                                     " << endl;
														cout << "                                           ���   ���                                     " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "!!������� ���д����� ��ų�� ����մϴ�!!" << endl;
														Sleep(2500); //1.5�� ������
														currentBerserkerhp = currentBerserkerhp -= G_Skill_2;
														fix();

														//����Ŀ ��������
														cout << "                                    <2P>                                                                                       " << endl;
														cout << "                ����                �������                                " << endl;
														cout << "             ���    ���            ��<<����                             " << endl;
														cout << "             ���     ���           �������                                " << endl;
														cout << "             ���     ���           ��Ѥѡ���                                " << endl;
														cout << "             ��� <��> ���             ���                                    " << endl;
														cout << "             ���     ���      �������������                           " << endl;
														cout << "             ���      ���     ��   ��������  ���                           " << endl;
														cout << "             ���     ���     ��    �������    ���                           " << endl;
														cout << "          �����������  ��     �������   ���                             " << endl;
														cout << "           ����������          �������                                  " << endl;
														cout << "                 ���               �������                                  " << endl;
														cout << "                 ���               ���   ���                                  " << endl;
														cout << "                                   ���   ���                                  " << endl;
														cout << "                                   ���   ���                                   " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "!!����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�!!." << endl;
														cout << endl;
													
														guardianAttack = false;
														if (currentGuardianhp == 0)
														{
															cout << endl;
															cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
															cout << endl;
															cout << "ó������ ���ư��ϴ�!!" << endl;
															cout << endl;
															Sleep(2500);//1.5�� ������
															goto tryAgain;;
														}
														else if (currentBerserkerhp == 0)
														{
															cout << endl;
															cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
															cout << endl;
															cout << "ó������ ���ư��ϴ�!!" << endl;
															cout << endl;
															Sleep(2500);//1.5�� ������
															goto tryAgain;
														}


														if (!berserkerAttack)//������ ��2 , ����Ŀ ����
														{
															Sleep(2500);//1.5�� ������
															cout << endl;
															cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
															cout << "=============  <Round 5-2>  ==============" << endl;
															cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
															Sleep(1700);
															cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
															cout << "===========!!Warning!!============" << endl;
															cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
															Sleep(2500); //1.5�� ������

															//����Ŀ �޼�Ÿ��
															cout << "                                    <2P>                                                                                       " << endl;
															cout << "                                                 �������                                " << endl;
															cout << "                                                    �������                             " << endl;
															cout << "                                                   �������                                " << endl;
															cout << "                      <<<<<<<<<<<<<<<<<<<<            �������                                " << endl;
															cout << "                 <<<<<<<<<<<<<<<<<<<<                         ���                                                 " << endl;
															cout << "            <<<<<<<<<<<<<<<<<<<<       �������  ������������                          " << endl;
															cout << "       <<<<<<<<<<<<<<<<<<<< /���������������  �� ��  ��������                             " << endl;
															cout << "  <<<<<<<<<<<<<<<<<<<<      ��       <��>       ������ �� ��    �������                               " << endl;
															cout << "       <<<<<<<<<<<<<<<<<<<< ���������������� �� ��        �������                                " << endl;
															cout << "             <<<<<<<<<<<<<<<<<<<<      �������             �������                                  " << endl;
															cout << "                 <<<<<<<<<<<<<<<<<<<<                           �������                                  " << endl;
															cout << "                      <<<<<<<<<<<<<<<<<<<<                    ���   ���                                  " << endl;
															cout << "                                                                ���   ���                                  " << endl;
															cout << "                                                               ���   ���                                   " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "!!����Ŀ�� �޼�Ÿ�� ��ų�� ����մϴ�!!" << endl;
															Sleep(2500); //1.5�� ������
															currentGuardianhp = currentGuardianhp -= B_Skill_2;
															fix();

															//����� ���� ����
															cout << "                                    <1P>                                                                                       " << endl;
															cout << "                                  �������                                                                   " << endl;
															cout << "                                  ��<<����                                                              " << endl;
															cout << "                                  �������                                                              " << endl;
															cout << "                                  ��Ѥѡ���                                           " << endl;
															cout << "                                     ���                                             " << endl;
															cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
															cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
															cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
															cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
															cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
															cout << "                                 �������                                          " << endl;
															cout << "                                 ���   ���                                     " << endl;
															cout << "                                 ���   ���                                     " << endl;
															cout << "                                 ���   ���                                     " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
															cout << endl;
														
															berserkerAttack = false;
															if (currentGuardianhp == 0)
															{
																cout << endl;
																cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
																cout << endl;
																cout << "ó������ ���ư��ϴ�!!" << endl;
																cout << endl;
																Sleep(2500);//1.5�� ������
																goto tryAgain;;
															}
															else if (currentBerserkerhp == 0)
															{
																cout << endl;
																cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
																cout << endl;
																cout << "ó������ ���ư��ϴ�!!" << endl;
																cout << endl;
																Sleep(2500);//1.5�� ������
																goto tryAgain;;
															}
															else
															{
																Totie();
																Sleep(2500);//1.5�� ������
																goto tryAgain;
															}

															
														}
													}

												}
											}
										}

									}
								}
							}


						}


					}
					break;
				}//P1==1�� P2==3 ���� ��.

				while/*P1 == 2�� P2 == 3*/ (1) //P1 == 2�� P2 == 3 ���� �ݺ�
				{

					spearManDamage = rand() % 6 + 10;
					berserkerDamage = rand() % 6 + 10;

					if (choice1 == 2 && choice2 == 3) // P1�� â���� P2�� ����Ŀ ,P1==2�� P2==3 ���� ����.
					{

						//â���� �⺻����
						cout << "                                    <1P>                                                                                       " << endl;
						cout << "                           ��        �������                                             " << endl;
						cout << "                         ��  ��      �������                                              " << endl;
						cout << "                       �� <â> ��    �������                                             " << endl;
						cout << "                          ���      ��������                                             " << endl;
						cout << "                          ���         ���                                                  " << endl;
						cout << "                          ���  �������������                                        " << endl;
						cout << "                          ����   ��������    ���                                       " << endl;
						cout << "                          ���      �������    ���                                     " << endl;
						cout << "                          ���      �������    ���                                     " << endl;
						cout << "                          ���      �������                                            " << endl;
						cout << "                          ���      �������                                            " << endl;
						cout << "                          ���      ���    ���										      " << endl;
						cout << "                          ���      ���    ���                                           " << endl;
						cout << "                          ���      ���    ���                                           " << endl;
						cout << "                                                                                                                               " << endl;
						cout << "                                                                                                                               " << endl;

						//����Ŀ �⺻����
						cout << "                                    <2P>                                                                                       " << endl;
						cout << "             ����                �������                                " << endl;
						cout << "          ���    ���            �������                             " << endl;
						cout << "          ���     ���           �������                                " << endl;
						cout << "          ���     ���           �������                                " << endl;
						cout << "          ��� <��> ���             ���                                    " << endl;
						cout << "          ���     ���      �������������                           " << endl;
						cout << "          ���      ���     ��   ��������  ���                           " << endl;
						cout << "          ���     ���     ��    �������    ���                           " << endl;
						cout << "       �����������  ��     �������   ���                             " << endl;
						cout << "        ����������          �������                                  " << endl;
						cout << "              ���               �������                                  " << endl;
						cout << "              ���               ���   ���                                  " << endl;
						cout << "                                ���   ���                                  " << endl;
						cout << "                                ���   ���                                   " << endl;
						cout << "                                                                                                                               " << endl;
						cout << "                                                                                                                               " << endl;





						cout << "������ ���� �մϴ�!!" << endl;


						if (!spearManAttack)//ù��° ��1 , â���� ����
						{
							Sleep(2500);//1.5�� ������
							cout << endl;
							cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
							cout << "=============  <Round 1-1>  ==============" << endl;
							cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
							Sleep(2500); //1.5�� ������

							//â���� ���ݻ���
							cout << "                                    <1P>                                                                                       " << endl;
							cout << "                          ��        �������                                             " << endl;
							cout << "                        ��  ��      �������               �ءءءءء�                                " << endl;
							cout << "                      �� <â> ��    �������            �ء�<Attack>�ء�                                 " << endl;
							cout << "                         ���      ��������              �ءءءءء�                               " << endl;
							cout << "                         ���         ���                                                  " << endl;
							cout << "                         ���  �������������                                        " << endl;
							cout << "                         ����   ��������    ���                                       " << endl;
							cout << "                         ���      �������    ���                                     " << endl;
							cout << "                         ���      �������    ���                                     " << endl;
							cout << "                         ���      �������                                            " << endl;
							cout << "                         ���      �������                                            " << endl;
							cout << "                         ���      ���    ���                                           " << endl;
							cout << "                         ���      ���    ���                                           " << endl;
							cout << "                         ���      ���    ���                                           " << endl;
							cout << "                                                                                                                               " << endl;
							cout << "                                                                                                                               " << endl;

							cout << "â���簡 ����Ŀ�� �����մϴ�" << endl;
							Sleep(2500); //1.5�� ������
							currentBerserkerhp = berserkerHp -= spearManDamage;//���� ü�¿��� ��� �������� ���ҽ�Ű�� �� ���� ���� ü�¿� ����.

							//����Ŀ ��������
							cout << "                                    <2P>                                                                                       " << endl;
							cout << "                ����                �������                                " << endl;
							cout << "             ���    ���            ��<<����                             " << endl;
							cout << "             ���     ���           �������                                " << endl;
							cout << "             ���     ���           ��Ѥѡ���                                " << endl;
							cout << "             ��� <��> ���             ���                                    " << endl;
							cout << "             ���     ���      �������������                           " << endl;
							cout << "             ���      ���     ��   ��������  ���                           " << endl;
							cout << "             ���     ���     ��    �������    ���                           " << endl;
							cout << "          �����������  ��     �������   ���                             " << endl;
							cout << "           ����������          �������                                  " << endl;
							cout << "                 ���               �������                                  " << endl;
							cout << "                 ���               ���   ���                                  " << endl;
							cout << "                                   ���   ���                                  " << endl;
							cout << "                                   ���   ���                                   " << endl;
							cout << "                                                                                                                               " << endl;
							cout << "                                                                                                                               " << endl;

							cout << "����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�." << endl;
							cout << endl;

							spearManAttack = false;

							if (!berserkerAttack)//ù��° ��2,����Ŀ ����
							{
								Sleep(2500);//1.5�� ������
								cout << endl;
								cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
								cout << "=============  <Round 1-2>  ==============" << endl;
								cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;

								Sleep(2500); //1.5�� ������

								//����Ŀ ���ݻ���
								cout << "                                    <2P>                                                                                       " << endl;
								cout << "              ����                �������                                " << endl;
								cout << "           ���    ���            �������             �ءءءءء�                   " << endl;
								cout << "           ���     ���           �������           �ء�<Attack>�ء�                      " << endl;
								cout << "           ���     ���           �������             �ءءءءء�                   " << endl;
								cout << "           ��� <��> ���             ���                                    " << endl;
								cout << "           ���     ���      �������������                           " << endl;
								cout << "           ���      ���     ��   ��������  ���                           " << endl;
								cout << "           ���     ���     ��    �������    ���                           " << endl;
								cout << "        �����������  ��     �������   ���                             " << endl;
								cout << "         ����������          �������                                  " << endl;
								cout << "               ���               �������                                  " << endl;
								cout << "               ���               ���   ���                                  " << endl;
								cout << "                                 ���   ���                                  " << endl;
								cout << "                                 ���   ���                                   " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								cout << "����Ŀ�� â���� �����մϴ�" << endl;
								Sleep(2500); //1.5�� ������
								currentSpearmanhp = spearManHp -= berserkerDamage;

								//â���� ��������
								cout << "                                    <1P>                                                                                       " << endl;
								cout << "                          ��        �������                                             " << endl;
								cout << "                        ��  ��      ��<�����                                              " << endl;
								cout << "                      �� <â> ��    �������                                             " << endl;
								cout << "                         ���      ��Ѥѡ����                                             " << endl;
								cout << "                         ���         ���                                                  " << endl;
								cout << "                         ���  �������������                                        " << endl;
								cout << "                         ����   ��������    ���                                       " << endl;
								cout << "                         ���      �������    ���                                     " << endl;
								cout << "                         ���      �������    ���                                     " << endl;
								cout << "                         ���      �������                                            " << endl;
								cout << "                         ���      �������                                            " << endl;
								cout << "                         ���      ���    ���                                           " << endl;
								cout << "                         ���      ���    ���                                           " << endl;
								cout << "                         ���      ���    ���                                           " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
								cout << endl;

								berserkerAttack = false;

								if (!spearManAttack)//�ι�° ��1 , â���� ����
								{
									Sleep(2500);//1.5�� ������
									cout << endl;
									cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
									cout << "=============  <Round 2-1>  ==============" << endl;
									cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
									Sleep(2500); //1.5�� ������

									//â���� ���ݻ���
									cout << "                                    <2P>                                                                                       " << endl;
									cout << "                          ��        �������                                             " << endl;
									cout << "                        ��  ��      �������               �ءءءءء�                                " << endl;
									cout << "                      �� <â> ��    �������            �ء�<Attack>�ء�                                 " << endl;
									cout << "                         ���      ��������              �ءءءءء�                               " << endl;
									cout << "                         ���         ���                                                  " << endl;
									cout << "                         ���  �������������                                        " << endl;
									cout << "                         ����   ��������    ���                                       " << endl;
									cout << "                         ���      �������    ���                                     " << endl;
									cout << "                         ���      �������    ���                                     " << endl;
									cout << "                         ���      �������                                            " << endl;
									cout << "                         ���      �������                                            " << endl;
									cout << "                         ���      ���    ���                                           " << endl;
									cout << "                         ���      ���    ���                                           " << endl;
									cout << "                         ���      ���    ���                                           " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;

									cout << "â���簡 ����Ŀ�� �����մϴ�" << endl;
									Sleep(2500); //1.5�� ������
									currentBerserkerhp = currentBerserkerhp -= spearManDamage;

									//����Ŀ ��������
									cout << "                                    <1P>                                                                                       " << endl;
									cout << "                ����                �������                                " << endl;
									cout << "             ���    ���            ��<<����                             " << endl;
									cout << "             ���     ���           �������                                " << endl;
									cout << "             ���     ���           ��Ѥѡ���                                " << endl;
									cout << "             ��� <��> ���             ���                                    " << endl;
									cout << "             ���     ���      �������������                           " << endl;
									cout << "             ���      ���     ��   ��������  ���                           " << endl;
									cout << "             ���     ���     ��    �������    ���                           " << endl;
									cout << "          �����������  ��     �������   ���                             " << endl;
									cout << "           ����������          �������                                  " << endl;
									cout << "                 ���               �������                                  " << endl;
									cout << "                 ���               ���   ���                                  " << endl;
									cout << "                                   ���   ���                                  " << endl;
									cout << "                                   ���   ���                                   " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;

									cout << "����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�." << endl;
									cout << endl;

									spearManAttack = false;

									if (!berserkerAttack)//�ι�° ��2 , ����Ŀ ����
									{
										Sleep(2500);//1.5�� ������
										cout << endl;
										cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
										cout << "=============  <Round 2-2>  ==============" << endl;
										cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
										Sleep(2500); //1.5�� ������

										//����Ŀ ���ݻ���
										cout << "                                    <2P>                                                                                       " << endl;
										cout << "              ����                �������                                " << endl;
										cout << "           ���    ���            �������             �ءءءءء�                   " << endl;
										cout << "           ���     ���           �������           �ء�<Attack>�ء�                      " << endl;
										cout << "           ���     ���           �������             �ءءءءء�                   " << endl;
										cout << "           ��� <��> ���             ���                                    " << endl;
										cout << "           ���     ���      �������������                           " << endl;
										cout << "           ���      ���     ��   ��������  ���                           " << endl;
										cout << "           ���     ���     ��    �������    ���                           " << endl;
										cout << "        �����������  ��     �������   ���                             " << endl;
										cout << "         ����������          �������                                  " << endl;
										cout << "               ���               �������                                  " << endl;
										cout << "               ���               ���   ���                                  " << endl;
										cout << "                                 ���   ���                                  " << endl;
										cout << "                                 ���   ���                                   " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "����Ŀ�� â���縦 �����մϴ�" << endl;
										Sleep(2500); //1.5�� ������
										currentSpearmanhp = currentSpearmanhp -= berserkerDamage;

										//â���� ��������
										cout << "                                    <1P>                                                                                       " << endl;
										cout << "                          ��        �������                                             " << endl;
										cout << "                        ��  ��      ��<�����                                              " << endl;
										cout << "                      �� <â> ��    �������                                             " << endl;
										cout << "                         ���      ��Ѥѡ����                                             " << endl;
										cout << "                         ���         ���                                                  " << endl;
										cout << "                         ���  �������������                                        " << endl;
										cout << "                         ����   ��������    ���                                       " << endl;
										cout << "                         ���      �������    ���                                     " << endl;
										cout << "                         ���      �������    ���                                     " << endl;
										cout << "                         ���      �������                                            " << endl;
										cout << "                         ���      �������                                            " << endl;
										cout << "                         ���      ���    ���                                           " << endl;
										cout << "                         ���      ���    ���                                           " << endl;
										cout << "                         ���      ���    ���                                           " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
										cout << endl;

										berserkerAttack = false;




										if (!spearManAttack)//����° ��1 ,â���� ����
										{
											Sleep(2500);//1.5�� ������
											cout << endl;
											cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
											cout << "=============  <Round 3-1>  ==============" << endl;
											cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
											Sleep(2500); //1.5�� ������

											//â���� ���
											cout << "                                    <1P>                                                                                       " << endl;
											cout << "                                �������                                             " << endl;
											cout << "                                  �������                                              " << endl;
											cout << "                                    �������                                             " << endl;
											cout << "                                     ��������                                             " << endl;
											cout << "             ~~~~~~~~~~~                ���                                                  " << endl;
											cout << "         ~~~~~~~~~~~  ��        ���  �������������                                        " << endl;
											cout << "     ~~~~~~~~~~~   ��    ��       ����   ��������    ���                                       " << endl;
											cout << " ~~~~~~~~~~~    ��  <â>  ��������� ��     ������� ��                                     " << endl;
											cout << "     ~~~~~~~~~~~    ��    �������������������                                       " << endl;
											cout << "         ~~~~~~~~~~~  ��                        �������                                            " << endl;
											cout << "             ~~~~~~~~~~~                       �������                                            " << endl;
											cout << "                                                    ���    ���                                           " << endl;
											cout << "                                                       ���    ���                                           " << endl;
											cout << "                                                          ���    ���                                           " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "!!*â���簡 ��⽺ų�� ����մϴ�*!!" << endl;

										    
										
											Sleep(2500);//1.5�� ������
											currentBerserkerhp = currentBerserkerhp - S_Skill_1;//â������ ��� ��ų ����ŭ ���ش�.
											
											fix();

											//����Ŀ ��������
											cout << "                                    <2P>                                                                                       " << endl;
											cout << "                ����                �������                                " << endl;
											cout << "             ���    ���            ��<<����                             " << endl;
											cout << "             ���     ���           �������                                " << endl;
											cout << "             ���     ���           ��Ѥѡ���                                " << endl;
											cout << "             ��� <��> ���             ���                                    " << endl;
											cout << "             ���     ���      �������������                           " << endl;
											cout << "             ���      ���     ��   ��������  ���                           " << endl;
											cout << "             ���     ���     ��    �������    ���                           " << endl;
											cout << "          �����������  ��     �������   ���                             " << endl;
											cout << "           ����������          �������                                  " << endl;
											cout << "                 ���               �������                                  " << endl;
											cout << "                 ���               ���   ���                                  " << endl;
											cout << "                                   ���   ���                                  " << endl;
											cout << "                                   ���   ���                                   " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�." << endl;
											cout << endl;

											spearManAttack = false;
											if (currentSpearmanhp == 0)
											{
												cout << endl;
												cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
												cout << endl;
												cout << "ó������ ���ư��ϴ�!!" << endl;
												cout << endl;
												Sleep(2500);//1.5�� ������
												goto tryAgain;
											}
											else if (currentBerserkerhp == 0)
											{
												cout << endl;
												cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
												cout << endl;
												cout << "ó������ ���ư��ϴ�!!" << endl;
												cout << endl;
												Sleep(2500);//1.5�� ������
												goto tryAgain;
											}


											if (!berserkerAttack)//����° ��2 , ����Ŀ ����
											{
												Sleep(2500);//1.5�� ������
												cout << endl;
												cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
												cout << "=============  <Round 3-2>  ==============" << endl;
												cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
												Sleep(2500); //1.5�� ������

												//����Ŀ �������
												cout << "                                    <2P>                                                                                       " << endl;
												cout << "                /  /                 / /                                                " << endl;
												cout << "              /  /       ���        / /                                                    " << endl;
												cout << "            /  /    ���      ���   / /                                                      " << endl;
												cout << "          /  /      ���      ���  / /                                                       " << endl;
												cout << "                    ���      ���                                                           " << endl;
												cout << "                    ��� <��> ���        �������                                " << endl;
												cout << "                    ���      ���          �������                             " << endl;
												cout << "                    ���      ���           �������                                " << endl;
												cout << "                    ���      ���           �������                                " << endl;
												cout << "                  �����������          ���                                    " << endl;
												cout << "                  ����������� �������������                           " << endl;
												cout << "                         ���  ��   ��      ��������                            " << endl;
												cout << "                         ����   ��         �������                               " << endl;
												cout << "                                            �������                                " << endl;
												cout << "                                            �������                                  " << endl;
												cout << "                                            �������                                  " << endl;
												cout << "                                            ���   ���                                  " << endl;
												cout << "                                              ���   ���                                  " << endl;
												cout << "                                                ���   ���                                   " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "!!*����Ŀ�� ������� ��ų�� ����մϴ�*!!" << endl;
												currentSpearmanhp = currentSpearmanhp - B_Skill_1; //â������ ���� ü�¿��� ����Ŀ�� ������� ��ų ���������� ���ش�.
												Sleep(2500); //1.5�� ������
												
												
												fix();

												//â���� ��������
												cout << "                                    <1P>                                                                                       " << endl;
												cout << "                          ��        �������                                             " << endl;
												cout << "                        ��  ��      ��<�����                                              " << endl;
												cout << "                      �� <â> ��    �������                                             " << endl;
												cout << "                         ���      ��Ѥѡ����                                             " << endl;
												cout << "                         ���         ���                                                  " << endl;
												cout << "                         ���  �������������                                        " << endl;
												cout << "                         ����   ��������    ���                                       " << endl;
												cout << "                         ���      �������    ���                                     " << endl;
												cout << "                         ���      �������    ���                                     " << endl;
												cout << "                         ���      �������                                            " << endl;
												cout << "                         ���      �������                                            " << endl;
												cout << "                         ���      ���    ���                                           " << endl;
												cout << "                         ���      ���    ���                                           " << endl;
												cout << "                         ���      ���    ���                                           " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
												cout << endl;

												berserkerAttack = false;
												if (currentSpearmanhp == 0)
												{
													cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
													cout << endl;
													cout << "ó������ ���ư��ϴ�!!" << endl;
													cout << endl;
													Sleep(2500);//1.5�� ������
													goto tryAgain;
												}
												else if (currentBerserkerhp == 0)
												{
													cout << endl;
													cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
													cout << endl;
													cout << "ó������ ���ư��ϴ�!!" << endl;
													cout << endl;
													Sleep(2500);//1.5�� ������
													goto tryAgain;
												}



												if (!spearManAttack)//�׹�° ��1 , â���� ����
												{
													Sleep(2500);//1.5�� ������
													cout << endl;
													cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
													cout << "=============  <Round 4-1>  ==============" << endl;
													cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
													Sleep(2500); //1.5�� ������

													//â���� ���ݻ���
													cout << "                                    <1P>                                                                                       " << endl;
													cout << "                          ��        �������                                             " << endl;
													cout << "                        ��  ��      �������               �ءءءءء�                                " << endl;
													cout << "                      �� <â> ��    �������            �ء�<Attack>�ء�                                 " << endl;
													cout << "                         ���      ��������              �ءءءءء�                               " << endl;
													cout << "                         ���         ���                                                  " << endl;
													cout << "                         ���  �������������                                        " << endl;
													cout << "                         ����   ��������    ���                                       " << endl;
													cout << "                         ���      �������    ���                                     " << endl;
													cout << "                         ���      �������    ���                                     " << endl;
													cout << "                         ���      �������                                            " << endl;
													cout << "                         ���      �������                                            " << endl;
													cout << "                         ���      ���    ���                                           " << endl;
													cout << "                         ���      ���    ���                                           " << endl;
													cout << "                         ���      ���    ���                                           " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "â���簡 ����Ŀ�� �����մϴ�" << endl;
													Sleep(2500); //1.5�� ������
													currentBerserkerhp = currentBerserkerhp -= spearManDamage;
													fix();

													//����Ŀ ��������
													cout << "                                    <2P>                                                                                       " << endl;
													cout << "                ����                �������                                " << endl;
													cout << "             ���    ���            ��<<����                             " << endl;
													cout << "             ���     ���           �������                                " << endl;
													cout << "             ���     ���           ��Ѥѡ���                                " << endl;
													cout << "             ��� <��> ���             ���                                    " << endl;
													cout << "             ���     ���      �������������                           " << endl;
													cout << "             ���      ���     ��   ��������  ���                           " << endl;
													cout << "             ���     ���     ��    �������    ���                           " << endl;
													cout << "          �����������  ��     �������   ���                             " << endl;
													cout << "           ����������          �������                                  " << endl;
													cout << "                 ���               �������                                  " << endl;
													cout << "                 ���               ���   ���                                  " << endl;
													cout << "                                   ���   ���                                  " << endl;
													cout << "                                   ���   ���                                   " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�." << endl;
													cout << endl;

													spearManAttack = false;
													if (currentSpearmanhp == 0)
													{
														cout << endl;
														cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
														cout << endl;
														cout << "ó������ ���ư��ϴ�!!" << endl;
														cout << endl;
														Sleep(2500);//1.5�� ������
														goto tryAgain;
													}
													else if (currentBerserkerhp == 0)
													{
														cout << endl;
														cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
														cout << endl;
														cout << "ó������ ���ư��ϴ�!!" << endl;
														cout << endl;
														Sleep(2500);//1.5�� ������
														goto tryAgain;
													}


													if (!berserkerAttack)//�׹�° ��2 , ����Ŀ ����
													{
														Sleep(2500);//1.5�� ������
														cout << endl;
														cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
														cout << "=============  <Round 4-2>  ==============" << endl;
														cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
														Sleep(2500); //1.5�� ������

														//����Ŀ ���ݻ���
														cout << "                                    <2P>                                                                                       " << endl;
														cout << "              ����                �������                                " << endl;
														cout << "           ���    ���            �������             �ءءءءء�                   " << endl;
														cout << "           ���     ���           �������           �ء�<Attack>�ء�                      " << endl;
														cout << "           ���     ���           �������             �ءءءءء�                   " << endl;
														cout << "           ��� <��> ���             ���                                    " << endl;
														cout << "           ���     ���      �������������                           " << endl;
														cout << "           ���      ���     ��   ��������  ���                           " << endl;
														cout << "           ���     ���     ��    �������    ���                           " << endl;
														cout << "        �����������  ��     �������   ���                             " << endl;
														cout << "         ����������          �������                                  " << endl;
														cout << "               ���               �������                                  " << endl;
														cout << "               ���               ���   ���                                  " << endl;
														cout << "                                 ���   ���                                  " << endl;
														cout << "                                 ���   ���                                   " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "����Ŀ�� â���縦 �����մϴ�" << endl;
														Sleep(2500); //1.5�� ������
														currentSpearmanhp = currentSpearmanhp -= berserkerDamage;
														fix();

														//â���� ��������
														cout << "                                    <1P>                                                                                       " << endl;
														cout << "                          ��        �������                                             " << endl;
														cout << "                        ��  ��      ��<�����                                              " << endl;
														cout << "                      �� <â> ��    �������                                             " << endl;
														cout << "                         ���      ��Ѥѡ����                                             " << endl;
														cout << "                         ���         ���                                                  " << endl;
														cout << "                         ���  �������������                                        " << endl;
														cout << "                         ����   ��������    ���                                       " << endl;
														cout << "                         ���      �������    ���                                     " << endl;
														cout << "                         ���      �������    ���                                     " << endl;
														cout << "                         ���      �������                                            " << endl;
														cout << "                         ���      �������                                            " << endl;
														cout << "                         ���      ���    ���                                           " << endl;
														cout << "                         ���      ���    ���                                           " << endl;
														cout << "                         ���      ���    ���                                           " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
														cout << endl;

														berserkerAttack = false;
														if (currentSpearmanhp == 0)
														{
															cout << endl;
															cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
															cout << endl;
															cout << "ó������ ���ư��ϴ�!!" << endl;
															cout << endl;
															Sleep(2500);//1.5�� ������
															goto tryAgain;
														}
														else if (currentBerserkerhp == 0)
														{
															cout << endl;
															cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
															cout << endl;
															cout << "ó������ ���ư��ϴ�!!" << endl;
															cout << endl;
															Sleep(2500);//1.5�� ������
															goto tryAgain;
														}


														if (!spearManAttack)//������ ��1 , â���� ����
														{
															Sleep(2500);//1.5�� ������
															cout << endl;
															cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
															cout << "=============  <Round 5-1>  ==============" << endl;
															cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
															Sleep(1700);
															cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
															cout << "===========!!Warning!!============" << endl;
															cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
															Sleep(2500); //1.5�� ������


	//â���� ��Ÿ
															cout << "                                    <1P>                                                                                       " << endl;
															cout << "                      �١�                                                                           " << endl;
															cout << "                   �١١�١�          �������                                             " << endl;
															cout << "                �١١�   ��١�       �������                                              " << endl;
															cout << "             �١١� <â>   ��١�   �������                                             " << endl;
															cout << "                �١� ��� �١�     ��������                                             " << endl;
															cout << "                  ���            ���                                                  " << endl;
															cout << "               ���  �������������                                        " << endl;
															cout << "              ����   ��������    ���                                       " << endl;
															cout << "             ���        �������  ��                                     " << endl;
															cout << "            ��� ����������� ��                                     " << endl;
															cout << "           ���    �������                                            " << endl;
															cout << "         ���    �������                                            " << endl;
															cout << "        ���     ���    ���                                           " << endl;
															cout << "       ���       ���    ���                                           " << endl;
															cout << "     ���          ���    ���                                           " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "!!â���簡 ��Ÿ ��ų�� ����մϴ�!!" << endl;
															Sleep(2500); //1.5�� ������
															currentBerserkerhp = currentBerserkerhp -= S_Skill_2;
															fix();

															//����Ŀ ��������
															cout << "                                    <2P>                                                                                       " << endl;
															cout << "                ����                �������                                " << endl;
															cout << "             ���    ���            ��<<����                             " << endl;
															cout << "             ���     ���           �������                                " << endl;
															cout << "             ���     ���           ��Ѥѡ���                                " << endl;
															cout << "             ��� <��> ���             ���                                    " << endl;
															cout << "             ���     ���      �������������                           " << endl;
															cout << "             ���      ���     ��   ��������  ���                           " << endl;
															cout << "             ���     ���     ��    �������    ���                           " << endl;
															cout << "          �����������  ��     �������   ���                             " << endl;
															cout << "           ����������          �������                                  " << endl;
															cout << "                 ���               �������                                  " << endl;
															cout << "                 ���               ���   ���                                  " << endl;
															cout << "                                   ���   ���                                  " << endl;
															cout << "                                   ���   ���                                   " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "!!����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�!!." << endl;
															cout << endl;

															spearManAttack = false;
															if (currentSpearmanhp == 0)
															{
																cout << endl;
																cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
																cout << endl;
																cout << "ó������ ���ư��ϴ�!!" << endl;
																cout << endl;
																Sleep(2500);//1.5�� ������
																goto tryAgain;;
															}
															else if (currentBerserkerhp == 0)
															{
																cout << endl;
																cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
																cout << endl;
																cout << "ó������ ���ư��ϴ�!!" << endl;
																cout << endl;
																Sleep(2500);//1.5�� ������
																goto tryAgain;
															}


															if (!berserkerAttack)//������ ��2 , ����Ŀ ����
															{
																Sleep(2500);//1.5�� ������
																cout << endl;
																cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																cout << "=============  <Round 5-2>  ==============" << endl;
																cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																Sleep(1700);
																cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
																cout << "===========!!Warning!!============" << endl;
																cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
																Sleep(2500); //1.5�� ������

																//����Ŀ �޼�Ÿ��
																cout << "                                    <2P>                                                                                       " << endl;
																cout << "                                                 �������                                " << endl;
																cout << "                                                    �������                             " << endl;
																cout << "                                                   �������                                " << endl;
																cout << "                      <<<<<<<<<<<<<<<<<<<<            �������                                " << endl;
																cout << "                 <<<<<<<<<<<<<<<<<<<<                         ���                                                 " << endl;
																cout << "            <<<<<<<<<<<<<<<<<<<<       �������  ������������                          " << endl;
																cout << "       <<<<<<<<<<<<<<<<<<<< /���������������  �� ��  ��������                             " << endl;
																cout << "  <<<<<<<<<<<<<<<<<<<<      ��       <��>       ������ �� ��    �������                               " << endl;
																cout << "       <<<<<<<<<<<<<<<<<<<< ���������������� �� ��        �������                                " << endl;
																cout << "             <<<<<<<<<<<<<<<<<<<<      �������             �������                                  " << endl;
																cout << "                 <<<<<<<<<<<<<<<<<<<<                           �������                                  " << endl;
																cout << "                      <<<<<<<<<<<<<<<<<<<<                    ���   ���                                  " << endl;
																cout << "                                                                ���   ���                                  " << endl;
																cout << "                                                               ���   ���                                   " << endl;
																cout << "                                                                                                                               " << endl;
																cout << "                                                                                                                               " << endl;

																cout << "!!����Ŀ�� �޼�Ÿ�� ��ų�� ����մϴ�!!" << endl;
																Sleep(2500); //1.5�� ������
																currentSpearmanhp = currentSpearmanhp -= B_Skill_2;
																fix();

																//â���� ��������
																cout << "                                    <1P>                                                                                       " << endl;
																cout << "                          ��        �������                                             " << endl;
																cout << "                        ��  ��      ��<�����                                              " << endl;
																cout << "                      �� <â> ��    �������                                             " << endl;
																cout << "                         ���      ��Ѥѡ����                                             " << endl;
																cout << "                         ���         ���                                                  " << endl;
																cout << "                         ���  �������������                                        " << endl;
																cout << "                         ����   ��������    ���                                       " << endl;
																cout << "                         ���      �������    ���                                     " << endl;
																cout << "                         ���      �������    ���                                     " << endl;
																cout << "                         ���      �������                                            " << endl;
																cout << "                         ���      �������                                            " << endl;
																cout << "                         ���      ���    ���                                           " << endl;
																cout << "                         ���      ���    ���                                           " << endl;
																cout << "                         ���      ���    ���                                           " << endl;
																cout << "                                                                                                                               " << endl;
																cout << "                                                                                                                               " << endl;

																cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
																cout << endl;

																berserkerAttack = false;
																if (currentSpearmanhp == 0)
																{
																	cout << endl;
																	cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
																	cout << endl;
																	cout << "ó������ ���ư��ϴ�!!" << endl;
																	cout << endl;
																	Sleep(2500);//1.5�� ������
																	goto tryAgain;;
																}
																else if (currentBerserkerhp == 0)
																{
																	cout << endl;
																	cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
																	cout << endl;
																	cout << "ó������ ���ư��ϴ�!!" << endl;
																	cout << endl;
																	Sleep(2500);//1.5�� ������
																	goto tryAgain;;
																}
																else
																{
																	Totie();
																	Sleep(2500);//1.5�� ������
																	goto tryAgain;
																}


															}
														}

													}
												}
											}

										}
									}
								}


							}


						}
						break;
					}//P1==2�� P2==3 ���� ��.

					while/*P1 == 2�� P2 == 1*/ (1) //P1 == 2�� P2 == 1 ���� �ݺ�
					{


						spearManDamage = rand() % 6 + 10;
						guardianDamage = rand() % 6 + 10;

						if (choice1 == 2 && choice2 == 1) // P1�� â���� P2�� ����� ,P1==2�� P2==1 ���� ����.
						{
							//â���� �⺻����
							cout << "                                    <1P>                                                                                       " << endl;
							cout << "                           ��        �������                                             " << endl;
							cout << "                         ��  ��      �������                                              " << endl;
							cout << "                       �� <â> ��    �������                                             " << endl;
							cout << "                          ���      ��������                                             " << endl;
							cout << "                          ���         ���                                                  " << endl;
							cout << "                          ���  �������������                                        " << endl;
							cout << "                          ����   ��������    ���                                       " << endl;
							cout << "                          ���      �������    ���                                     " << endl;
							cout << "                          ���      �������    ���                                     " << endl;
							cout << "                          ���      �������                                            " << endl;
							cout << "                          ���      �������                                            " << endl;
							cout << "                          ���      ���    ���                                           " << endl;
							cout << "                          ���      ���    ���                                           " << endl;
							cout << "                          ���      ���    ���                                           " << endl;
							cout << "                                                                                                                               " << endl;
							cout << "                                                                                                                               " << endl;

							//����� �⺻����
							cout << "                                    <1P>                                                                                       " << endl;
							cout << "                                  �������                                                                   " << endl;
							cout << "                                  �������                                                            " << endl;
							cout << "                                  �������                                                            " << endl;
							cout << "                                  �������                                         " << endl;
							cout << "                                     ���                                             " << endl;
							cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
							cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
							cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
							cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
							cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
							cout << "                                 �������                                          " << endl;
							cout << "                                 ���   ���                                     " << endl;
							cout << "                                 ���   ���                                     " << endl;
							cout << "                                 ���   ���                                     " << endl;
							cout << "                                                                                                                               " << endl;
							cout << "                                                                                                                               " << endl;


							cout << "������ ���� �մϴ�!!" << endl;


							if (!spearManAttack)//ù��° ��1 , â���� ����
							{
								Sleep(2500);//1.5�� ������
								cout << endl;
								cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
								cout << "=============  <Round 1-1>  ==============" << endl;
								cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
								Sleep(2500); //1.5�� ������

								//â���� ���ݻ���
								cout << "                                    <1P>                                                                                       " << endl;
								cout << "                          ��        �������                                             " << endl;
								cout << "                        ��  ��      �������               �ءءءءء�                                " << endl;
								cout << "                      �� <â> ��    �������            �ء�<Attack>�ء�                                 " << endl;
								cout << "                         ���      ��������              �ءءءءء�                               " << endl;
								cout << "                         ���         ���                                                  " << endl;
								cout << "                         ���  �������������                                        " << endl;
								cout << "                         ����   ��������    ���                                       " << endl;
								cout << "                         ���      �������    ���                                     " << endl;
								cout << "                         ���      �������    ���                                     " << endl;
								cout << "                         ���      �������                                            " << endl;
								cout << "                         ���      �������                                            " << endl;
								cout << "                         ���      ���    ���                                           " << endl;
								cout << "                         ���      ���    ���                                           " << endl;
								cout << "                         ���      ���    ���                                           " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								cout << "â���簡 ������� �����մϴ�" << endl;
								Sleep(2500); //1.5�� ������
								currentGuardianhp = guardianHp -= spearManDamage;//���� ü�¿��� ��� �������� ���ҽ�Ű�� �� ���� ���� ü�¿� ����.

								//����� ���� ����
								cout << "                                    <2P>                                                                                       " << endl;
								cout << "                                  �������                                                                   " << endl;
								cout << "                                  ��<<����                                                              " << endl;
								cout << "                                  �������                                                              " << endl;
								cout << "                                  ��Ѥѡ���                                           " << endl;
								cout << "                                     ���                                             " << endl;
								cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
								cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
								cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
								cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
								cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
								cout << "                                 �������                                          " << endl;
								cout << "                                 ���   ���                                     " << endl;
								cout << "                                 ���   ���                                     " << endl;
								cout << "                                 ���   ���                                     " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
								cout << endl;


								spearManAttack = false;

								if (!guardianAttack)//ù��° ��2,����� ����
								{
									Sleep(2500);//1.5�� ������
									cout << endl;
									cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
									cout << "=============  <Round 1-2>  ==============" << endl;
									cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;

									Sleep(2500); //1.5�� ������

									//����� ���ݻ���
									cout << "                                    <2P>                                                                                       " << endl;
									cout << "                                  �������                                                                   " << endl;
									cout << "                                  �������                 �ءءءءء�                                             " << endl;
									cout << "                                  �������               �ء�<Attack>�ء�                                               " << endl;
									cout << "                                  �������                 �ءءءءء�                          " << endl;
									cout << "                                     ���                                             " << endl;
									cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
									cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
									cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
									cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
									cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
									cout << "                                 �������                                          " << endl;
									cout << "                                 ���   ���                                     " << endl;
									cout << "                                 ���   ���                                     " << endl;
									cout << "                                 ���   ���                                     " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;

									cout << "������� â���縦 �����մϴ�" << endl;
									Sleep(2500); //1.5�� ������
									currentSpearmanhp = spearManHp -= guardianDamage;

									//â���� ��������
									cout << "                                    <1P>                                                                                       " << endl;
									cout << "                          ��        �������                                             " << endl;
									cout << "                        ��  ��      ��<�����                                              " << endl;
									cout << "                      �� <â> ��    �������                                             " << endl;
									cout << "                         ���      ��Ѥѡ����                                             " << endl;
									cout << "                         ���         ���                                                  " << endl;
									cout << "                         ���  �������������                                        " << endl;
									cout << "                         ����   ��������    ���                                       " << endl;
									cout << "                         ���      �������    ���                                     " << endl;
									cout << "                         ���      �������    ���                                     " << endl;
									cout << "                         ���      �������                                            " << endl;
									cout << "                         ���      �������                                            " << endl;
									cout << "                         ���      ���    ���                                           " << endl;
									cout << "                         ���      ���    ���                                           " << endl;
									cout << "                         ���      ���    ���                                           " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;

									cout << "â���� ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
									cout << endl;

									guardianAttack = false;

									if (!spearManAttack)//�ι�° ��1 , ���Ǿ�� ����
									{
										Sleep(2500);//1.5�� ������
										cout << endl;
										cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
										cout << "=============  <Round 2-1>  ==============" << endl;
										cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
										Sleep(2500); //1.5�� ������

										//â���� ���ݻ���
										cout << "                                    <1P>                                                                                       " << endl;
										cout << "                          ��        �������                                             " << endl;
										cout << "                        ��  ��      �������               �ءءءءء�                                " << endl;
										cout << "                      �� <â> ��    �������            �ء�<Attack>�ء�                                 " << endl;
										cout << "                         ���      ��������              �ءءءءء�                               " << endl;
										cout << "                         ���         ���                                                  " << endl;
										cout << "                         ���  �������������                                        " << endl;
										cout << "                         ����   ��������    ���                                       " << endl;
										cout << "                         ���      �������    ���                                     " << endl;
										cout << "                         ���      �������    ���                                     " << endl;
										cout << "                         ���      �������                                            " << endl;
										cout << "                         ���      �������                                            " << endl;
										cout << "                         ���      ���    ���                                           " << endl;
										cout << "                         ���      ���    ���                                           " << endl;
										cout << "                         ���      ���    ���                                           " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "â���簡 ������� �����մϴ�" << endl;
										Sleep(2500); //1.5�� ������
										currentGuardianhp = currentGuardianhp -= spearManDamage;

										//����� ���� ����
										cout << "                                    <2P>                                                                                       " << endl;
										cout << "                                  �������                                                                   " << endl;
										cout << "                                  ��<<����                                                              " << endl;
										cout << "                                  �������                                                              " << endl;
										cout << "                                  ��Ѥѡ���                                           " << endl;
										cout << "                                     ���                                             " << endl;
										cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
										cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
										cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
										cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
										cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
										cout << "                                 �������                                          " << endl;
										cout << "                                 ���   ���                                     " << endl;
										cout << "                                 ���   ���                                     " << endl;
										cout << "                                 ���   ���                                     " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;


										cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
										cout << endl;

										spearManAttack = false;

										if (!guardianAttack)//�ι�° ��2 , ����� ����
										{
											Sleep(2500);//1.5�� ������
											cout << endl;
											cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
											cout << "=============  <Round 2-2>  ==============" << endl;
											cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
											Sleep(2500); //1.5�� ������

											//����� ���ݻ���
											cout << "                                    <2P>                                                                                       " << endl;
											cout << "                                  �������                                                                   " << endl;
											cout << "                                  �������                 �ءءءءء�                                             " << endl;
											cout << "                                  �������               �ء�<Attack>�ء�                                               " << endl;
											cout << "                                  �������                 �ءءءءء�                          " << endl;
											cout << "                                     ���                                             " << endl;
											cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
											cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
											cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
											cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
											cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
											cout << "                                 �������                                          " << endl;
											cout << "                                 ���   ���                                     " << endl;
											cout << "                                 ���   ���                                     " << endl;
											cout << "                                 ���   ���                                     " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "������� â���縦 �����մϴ�" << endl;
											Sleep(2500); //1.5�� ������
											currentSpearmanhp = currentSpearmanhp -= guardianDamage;

											//â���� ��������
											cout << "                                    <1P>                                                                                       " << endl;
											cout << "                          ��        �������                                             " << endl;
											cout << "                        ��  ��      ��<�����                                              " << endl;
											cout << "                      �� <â> ��    �������                                             " << endl;
											cout << "                         ���      ��Ѥѡ����                                             " << endl;
											cout << "                         ���         ���                                                  " << endl;
											cout << "                         ���  �������������                                        " << endl;
											cout << "                         ����   ��������    ���                                       " << endl;
											cout << "                         ���      �������    ���                                     " << endl;
											cout << "                         ���      �������    ���                                     " << endl;
											cout << "                         ���      �������                                            " << endl;
											cout << "                         ���      �������                                            " << endl;
											cout << "                         ���      ���    ���                                           " << endl;
											cout << "                         ���      ���    ���                                           " << endl;
											cout << "                         ���      ���    ���                                           " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
											cout << endl;

											guardianAttack = false;




											if (!spearManAttack)//����° ��1 ,â���� ����
											{
												Sleep(2500);//1.5�� ������
												cout << endl;
												cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
												cout << "=============  <Round 3-2>  ==============" << endl;
												cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
												Sleep(2500); //1.5�� ������

												//â���� ���
												cout << "                                    <1P>                                                                                       " << endl;
												cout << "                                �������                                             " << endl;
												cout << "                                  �������                                              " << endl;
												cout << "                                    �������                                             " << endl;
												cout << "                                     ��������                                             " << endl;
												cout << "             ~~~~~~~~~~~                ���                                                  " << endl;
												cout << "         ~~~~~~~~~~~  ��        ���  �������������                                        " << endl;
												cout << "     ~~~~~~~~~~~   ��    ��       ����   ��������    ���                                       " << endl;
												cout << " ~~~~~~~~~~~    ��  <â>  ��������� ��     ������� ��                                     " << endl;
												cout << "     ~~~~~~~~~~~    ��    �������������������                                       " << endl;
												cout << "         ~~~~~~~~~~~  ��                        �������                                            " << endl;
												cout << "             ~~~~~~~~~~~                       �������                                            " << endl;
												cout << "                                                    ���    ���                                           " << endl;
												cout << "                                                       ���    ���                                           " << endl;
												cout << "                                                          ���    ���                                           " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "!!*â���簡 ��� ��ų�� ����մϴ�*!!" << endl;
												currentGuardianhp = currentGuardianhp - S_Skill_1; //������� ���� ü�¿��� ���Ǿ�� ��� ��ų ���������� ���ش�.
												Sleep(2500); //1.5�� ������
												
												fix();

												//����� ���� ����
												cout << "                                    <2P>                                                                                       " << endl;
												cout << "                                  �������                                                                   " << endl;
												cout << "                                  ��<<����                                                              " << endl;
												cout << "                                  �������                                                              " << endl;
												cout << "                                  ��Ѥѡ���                                           " << endl;
												cout << "                                     ���                                             " << endl;
												cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
												cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
												cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
												cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
												cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
												cout << "                                 �������                                          " << endl;
												cout << "                                 ���   ���                                     " << endl;
												cout << "                                 ���   ���                                     " << endl;
												cout << "                                 ���   ���                                     " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;


												cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
												cout << endl;



												spearManAttack = false;
												if (currentGuardianhp == 0)
												{
													cout << endl;
													cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
													cout << endl;
													cout << "ó������ ���ư��ϴ�!!" << endl;
													cout << endl;
													Sleep(2500);//1.5�� ������
													goto tryAgain;
												}
												else if (currentSpearmanhp == 0)
												{
													cout << endl;
													cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
													cout << endl;
													cout << "ó������ ���ư��ϴ�!!" << endl;
													cout << endl;
													Sleep(2500);//1.5�� ������
													goto tryAgain;
												}


												if (!guardianAttack)//����° ��2 , ����� ����
												{
													Sleep(2500);//1.5�� ������
													cout << endl;
													cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
													cout << "=============  <Round 3-1>  ==============" << endl;
													cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
													Sleep(2500); //1.5�� ������
													cout << "!!*������� ���彺ų�� ����մϴ�*!!" << endl;
													cout << "!!*      ������ 1ȸ ����մϴ�   *!!" << endl;

													//����� ���� ����
													cout << "                                    <2P>                                                                                       " << endl;
													cout << "                                  �������                                                                   " << endl;
													cout << "                                  �������                 !�ءءءءء�!                                             " << endl;
													cout << "                                  �������               !�ء�<Guard>�ء�!                                               " << endl;
													cout << "                                  �������                 !�ءءءءء�!                          " << endl;
													cout << "                                     ���                                             " << endl;
													cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
													cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
													cout << "     ��     <����>     �� ���      �������  ��                                     " << endl;
													cout << "      �ܡ�         �ܡܡ��������������                                                    " << endl;
													cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
													cout << "                                 �������                                          " << endl;
													cout << "                                  ���   ���                                     " << endl;
													cout << "                               ���   ���                                     " << endl;
													cout << "                             ���   ���                                     " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													Sleep(2500); //1.5�� ������
													cout << "������� 1�� ���������(��) �Ǿ����ϴ�." << endl;
													Sleep(2500);//1.5�� ������
													
													currentSpearmanhp = currentSpearmanhp - G_Skill_1; //������� ���彺ų�� ��������Ƿ� ���Ǿ���� ���� ü�¿� ������� ���� ��ų ���� ���ش�. 
													fix();

													//â���� �⺻����
													cout << "                                    <1P>                                                                                       " << endl;
													cout << "                           ��        �������                                             " << endl;
													cout << "                         ��  ��      �������                                              " << endl;
													cout << "                       �� <â> ��    �������                                             " << endl;
													cout << "                          ���      ��������                                             " << endl;
													cout << "                          ���         ���                                                  " << endl;
													cout << "                          ���  �������������                                        " << endl;
													cout << "                          ����   ��������    ���                                       " << endl;
													cout << "                          ���      �������    ���                                     " << endl;
													cout << "                          ���      �������    ���                                     " << endl;
													cout << "                          ���      �������                                            " << endl;
													cout << "                          ���      �������                                            " << endl;
													cout << "                          ���      ���    ���                                           " << endl;
													cout << "                          ���      ���    ���                                           " << endl;
													cout << "                          ���      ���    ���                                           " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
													cout << endl;
													

													guardianAttack = false;
													if (currentGuardianhp == 0)
													{
														cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
														cout << endl;
														cout << "ó������ ���ư��ϴ�!!" << endl;
														cout << endl;
														Sleep(2500);//1.5�� ������
														goto tryAgain;
													}
													else if (currentSpearmanhp == 0)
													{
														cout << endl;
														cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
														cout << endl;
														cout << "ó������ ���ư��ϴ�!!" << endl;
														cout << endl;
														Sleep(2500);//1.5�� ������
														goto tryAgain;
													}



													if (!spearManAttack)//�׹�° ��1 , â���� ����
													{
														Sleep(2500);//1.5�� ������
														cout << endl;
														cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
														cout << "=============  <Round 4-1>  ==============" << endl;
														cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
														Sleep(2500); //1.5�� ������

														//â���� ���ݻ���
														cout << "                                    <1P>                                                                                       " << endl;
														cout << "                          ��        �������                                             " << endl;
														cout << "                        ��  ��      �������               �ءءءءء�                                " << endl;
														cout << "                      �� <â> ��    �������            �ء�<Attack>�ء�                                 " << endl;
														cout << "                         ���      ��������              �ءءءءء�                               " << endl;
														cout << "                         ���         ���                                                  " << endl;
														cout << "                         ���  �������������                                        " << endl;
														cout << "                         ����   ��������    ���                                       " << endl;
														cout << "                         ���      �������    ���                                     " << endl;
														cout << "                         ���      �������    ���                                     " << endl;
														cout << "                         ���      �������                                            " << endl;
														cout << "                         ���      �������                                            " << endl;
														cout << "                         ���      ���    ���                                           " << endl;
														cout << "                         ���      ���    ���                                           " << endl;
														cout << "                         ���      ���    ���                                           " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "â���簡 ������� �����մϴ�" << endl;
														Sleep(2500);//1.5�� ������


	//����� ���� ����
														cout << "                                    <2P>                                                                                       " << endl;
														cout << "                                  �������                                                                   " << endl;
														cout << "                                  �������                 !�ءءءءء�!                                             " << endl;
														cout << "                                  �������               !�ء�<Guard>�ء�!                                               " << endl;
														cout << "                                  �������                 !�ءءءءء�!                          " << endl;
														cout << "                                     ���                                             " << endl;
														cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
														cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
														cout << "     ��     <����>     �� ���      �������  ��                                     " << endl;
														cout << "      �ܡ�         �ܡܡ��������������                                                    " << endl;
														cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
														cout << "                                 �������                                          " << endl;
														cout << "                                  ���   ���                                     " << endl;
														cout << "                               ���   ���                                     " << endl;
														cout << "                             ���   ���                                     " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;


														cout << "������� 1�� ��������Դϴ�!!" << endl;
														cout << "*������� ���� ��ų�� ���� �������� ���õǾ����ϴ�*!!" << endl;
														Sleep(2500); //1.5�� ������
														currentGuardianhp = currentGuardianhp;
														fix();

														//����� �⺻����
														cout << "                                    <2P>                                                                                       " << endl;
														cout << "                                  �������                                                                   " << endl;
														cout << "                                  �������                                                            " << endl;
														cout << "                                  �������                                                            " << endl;
														cout << "                                  �������                                         " << endl;
														cout << "                                     ���                                             " << endl;
														cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
														cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
														cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
														cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
														cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
														cout << "                                 �������                                          " << endl;
														cout << "                                 ���   ���                                     " << endl;
														cout << "                                 ���   ���                                     " << endl;
														cout << "                                 ���   ���                                     " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "����� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
														cout << endl;

														spearManAttack = false;
														if (currentGuardianhp == 0)
														{
															cout << endl;
															cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
															cout << endl;
															cout << "ó������ ���ư��ϴ�!!" << endl;
															cout << endl;
															Sleep(2500);//1.5�� ������
															goto tryAgain;
														}
														else if (currentSpearmanhp == 0)
														{
															cout << endl;
															cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
															cout << endl;
															cout << "ó������ ���ư��ϴ�!!" << endl;
															cout << endl;
															Sleep(2500);//1.5�� ������
															goto tryAgain;
														}


														if (!guardianAttack)//�׹�° ��2 , ����� ����
														{
															Sleep(2500);//1.5�� ������
															cout << endl;
															cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
															cout << "=============  <Round 4-2>  ==============" << endl;
															cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
															Sleep(2500); //1.5�� ������

															//����� ���ݻ���
															cout << "                                    <2P>                                                                                       " << endl;
															cout << "                                  �������                                                                   " << endl;
															cout << "                                  �������                 �ءءءءء�                                             " << endl;
															cout << "                                  �������               �ء�<Attack>�ء�                                               " << endl;
															cout << "                                  �������                 �ءءءءء�                          " << endl;
															cout << "                                     ���                                             " << endl;
															cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
															cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
															cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
															cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
															cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
															cout << "                                 �������                                          " << endl;
															cout << "                                 ���   ���                                     " << endl;
															cout << "                                 ���   ���                                     " << endl;
															cout << "                                 ���   ���                                     " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "������� â���縦 �����մϴ�" << endl;
															Sleep(2500); //1.5�� ������
															currentSpearmanhp = currentSpearmanhp -= guardianDamage;
															fix();

															//â���� ��������
															cout << "                                    <1P>                                                                                       " << endl;
															cout << "                          ��        �������                                             " << endl;
															cout << "                        ��  ��      ��<�����                                              " << endl;
															cout << "                      �� <â> ��    �������                                             " << endl;
															cout << "                         ���      ��Ѥѡ����                                             " << endl;
															cout << "                         ���         ���                                                  " << endl;
															cout << "                         ���  �������������                                        " << endl;
															cout << "                         ����   ��������    ���                                       " << endl;
															cout << "                         ���      �������    ���                                     " << endl;
															cout << "                         ���      �������    ���                                     " << endl;
															cout << "                         ���      �������                                            " << endl;
															cout << "                         ���      �������                                            " << endl;
															cout << "                         ���      ���    ���                                           " << endl;
															cout << "                         ���      ���    ���                                           " << endl;
															cout << "                         ���      ���    ���                                           " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
															cout << endl;

															guardianAttack = false;
															if (currentGuardianhp == 0)
															{
																cout << endl;
																cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
																cout << endl;
																cout << "ó������ ���ư��ϴ�!!" << endl;
																cout << endl;
																Sleep(2500);//1.5�� ������
																goto tryAgain;
															}
															else if (currentSpearmanhp == 0)
															{
																cout << endl;
																cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
																cout << endl;
																cout << "ó������ ���ư��ϴ�!!" << endl;
																cout << endl;
																Sleep(2500);//1.5�� ������
																goto tryAgain;
															}


															if (!spearManAttack)//������ ��1 , â���� ����
															{
																Sleep(2500);//1.5�� ������
																cout << endl;
																cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																cout << "=============  <Round 5-1>  ==============" << endl;
																cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																Sleep(1700);
																cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
																cout << "===========!!Warning!!============" << endl;
																cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
																Sleep(2500); //1.5�� ������

																//â���� ��Ÿ
																cout << "                                    <1P>                                                                                       " << endl;
																cout << "                      �١�                                                                           " << endl;
																cout << "                   �١١�١�          �������                                             " << endl;
																cout << "                �١١�   ��١�       �������                                              " << endl;
																cout << "             �١١� <â>   ��١�   �������                                             " << endl;
																cout << "                �١� ��� �١�     ��������                                             " << endl;
																cout << "                  ���            ���                                                  " << endl;
																cout << "               ���  �������������                                        " << endl;
																cout << "              ����   ��������    ���                                       " << endl;
																cout << "             ���        �������  ��                                     " << endl;
																cout << "            ��� ����������� ��                                     " << endl;
																cout << "           ���    �������                                            " << endl;
																cout << "         ���    �������                                            " << endl;
																cout << "        ���     ���    ���                                           " << endl;
																cout << "       ���       ���    ���                                           " << endl;
																cout << "     ���          ���    ���                                           " << endl;
																cout << "                                                                                                                               " << endl;
																cout << "                                                                                                                               " << endl;

																cout << "!!â���簡 ��Ÿ ��ų�� ����մϴ�!!" << endl;
																Sleep(2500); //1.5�� ������
																currentGuardianhp = currentGuardianhp -= S_Skill_2;
																fix();

																//����� ���� ����
																cout << "                                    <2P>                                                                                       " << endl;
																cout << "                                  �������                                                                   " << endl;
																cout << "                                  ��<<����                                                              " << endl;
																cout << "                                  �������                                                              " << endl;
																cout << "                                  ��Ѥѡ���                                           " << endl;
																cout << "                                     ���                                             " << endl;
																cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
																cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
																cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
																cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
																cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
																cout << "                                 �������                                          " << endl;
																cout << "                                 ���   ���                                     " << endl;
																cout << "                                 ���   ���                                     " << endl;
																cout << "                                 ���   ���                                     " << endl;
																cout << "                                                                                                                               " << endl;
																cout << "                                                                                                                               " << endl;

																cout << "!!������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�!!." << endl;
																cout << endl;

																spearManAttack = false;
																if (currentGuardianhp == 0)
																{
																	cout << endl;
																	cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
																	cout << endl;
																	cout << "ó������ ���ư��ϴ�!!" << endl;
																	cout << endl;
																	Sleep(2500);//1.5�� ������
																	goto tryAgain;
																}
																else if (currentSpearmanhp == 0)
																{
																	cout << endl;
																	cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
																	cout << endl;
																	cout << "ó������ ���ư��ϴ�!!" << endl;
																	cout << endl;
																	Sleep(2500);//1.5�� ������
																	goto tryAgain;
																}


																if (!guardianAttack)//������ ��2 , ����� ����
																{
																	Sleep(2500);//1.5�� ������
																	cout << endl;
																	cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																	cout << "=============  <Round 5-2>  ==============" << endl;
																	cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																	Sleep(1700);
																	cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
																	cout << "===========!!Warning!!============" << endl;
																	cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
																	Sleep(2500); //1.5�� ������

																	//����� ���д�����
																	cout << "                                    <2P>                                                                                       " << endl;
																	cout << "                                     �������                                                                   " << endl;
																	cout << "                                    �������                                                            " << endl;
																	cout << "                                   �������                                                            " << endl;
																	cout << "                                  �������                                         " << endl;
																	cout << "        ~~~~~~~~~~~~~~                ���                                             " << endl;
																	cout << "   ~~~~~ �ܡܡܡܡܡ� ~~~~~~       �������������                                        " << endl;
																	cout << "   ~~~�ܡ�         �ܡ�~~~      ��  ��   �������                                           " << endl;
																	cout << "   ~ ��     <����>    ��~ ����   ��   �������                                       " << endl;
																	cout << "   ~~~�ܡ�         �ܡ�~~~  �����   �������                                                    " << endl;
																	cout << "   ~~~~~ �ܡܡܡܡܡ�~~~~~~          �������                                       " << endl;
																	cout << "         ~~~~~~~~~~~~~~          �������                                          " << endl;
																	cout << "                                   ���   ���                                     " << endl;
																	cout << "                                       ���   ���                                     " << endl;
																	cout << "                                           ���   ���                                     " << endl;
																	cout << "                                                                                                                               " << endl;
																	cout << "                                                                                                                               " << endl;

																	cout << "!!������� ���д����� ��ų�� ����մϴ�!!" << endl;
																	Sleep(2500); //1.5�� ������
																	currentSpearmanhp = currentSpearmanhp -= G_Skill_2;
																	fix();

																	//â���� ��������
																	cout << "                                    <1P>                                                                                       " << endl;
																	cout << "                          ��        �������                                             " << endl;
																	cout << "                        ��  ��      ��<�����                                              " << endl;
																	cout << "                      �� <â> ��    �������                                             " << endl;
																	cout << "                         ���      ��Ѥѡ����                                             " << endl;
																	cout << "                         ���         ���                                                  " << endl;
																	cout << "                         ���  �������������                                        " << endl;
																	cout << "                         ����   ��������    ���                                       " << endl;
																	cout << "                         ���      �������    ���                                     " << endl;
																	cout << "                         ���      �������    ���                                     " << endl;
																	cout << "                         ���      �������                                            " << endl;
																	cout << "                         ���      �������                                            " << endl;
																	cout << "                         ���      ���    ���                                           " << endl;
																	cout << "                         ���      ���    ���                                           " << endl;
																	cout << "                         ���      ���    ���                                           " << endl;
																	cout << "                                                                                                                               " << endl;
																	cout << "                                                                                                                               " << endl;

																	cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
																	cout << endl;

																	guardianAttack = false;
																	if (currentGuardianhp == 0)
																	{
																		cout << endl;
																		cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
																		cout << endl;
																		cout << "ó������ ���ư��ϴ�!!" << endl;
																		cout << endl;
																		Sleep(2500);//1.5�� ������
																		goto tryAgain;
																	}
																	else if (currentSpearmanhp == 0)
																	{
																		cout << endl;
																		cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
																		cout << endl;
																		cout << "ó������ ���ư��ϴ�!!" << endl;
																		cout << endl;
																		Sleep(2500);//1.5�� ������
																		goto tryAgain;
																	}
																	else
																	{
																		Totie();
																		Sleep(2500);//1.5�� ������
																		goto tryAgain;
																	}


																}
															}

														}
													}
												}

											}
										}
									}


								}


							}
							break;
						}//P1==2�� P2==1 ���� ��.

						while/*P1 == 3 P2 == 1*/ (1) //P1 == 3�� P2 == 1 ���� �ݺ�
						{

							berserkerDamage = rand() % 6 + 10;
						    guardianDamage = rand() % 6 + 10;

							if (choice1 == 3 && choice2 == 1) // P1�� ����Ŀ P2�� ����� ,P1==3�� P2==1 ���� ����.
							{
								//����Ŀ �⺻����
								cout << "                                    <1P>                                                                                       " << endl;
								cout << "             ����                �������                                " << endl;
								cout << "          ���    ���            �������                             " << endl;
								cout << "          ���     ���           �������                                " << endl;
								cout << "          ���     ���           �������                                " << endl;
								cout << "          ��� <��> ���             ���                                    " << endl;
								cout << "          ���     ���      �������������                           " << endl;
								cout << "          ���      ���     ��   ��������  ���                           " << endl;
								cout << "          ���     ���     ��    �������    ���                           " << endl;
								cout << "       �����������  ��     �������   ���                             " << endl;
								cout << "        ����������          �������                                  " << endl;
								cout << "              ���               �������                                  " << endl;
								cout << "              ���               ���   ���                                  " << endl;
								cout << "                                ���   ���                                  " << endl;
								cout << "                                ���   ���                                   " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								//����� �⺻����
								cout << "                                    <2P>                                                                                       " << endl;
								cout << "                                  �������                                                                   " << endl;
								cout << "                                  �������                                                            " << endl;
								cout << "                                  �������                                                            " << endl;
								cout << "                                  �������                                         " << endl;
								cout << "                                     ���                                             " << endl;
								cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
								cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
								cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
								cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
								cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
								cout << "                                 �������                                          " << endl;
								cout << "                                 ���   ���                                     " << endl;
								cout << "                                 ���   ���                                     " << endl;
								cout << "                                 ���   ���                                     " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;



								cout << "������ ���� �մϴ�!!" << endl;


								if (!berserkerAttack)//ù��° ��1 , ����Ŀ ����
								{
									Sleep(2500);//1.5�� ������
									cout << endl;
									cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
									cout << "=============  <Round 1-1>  ==============" << endl;
									cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
									Sleep(2500); //1.5�� ������

									//����Ŀ ���ݻ���
									cout << "                                    <1P>                                                                                       " << endl;
									cout << "              ����                �������                                " << endl;
									cout << "           ���    ���            �������             �ءءءءء�                   " << endl;
									cout << "           ���     ���           �������           �ء�<Attack>�ء�                      " << endl;
									cout << "           ���     ���           �������             �ءءءءء�                   " << endl;
									cout << "           ��� <��> ���             ���                                    " << endl;
									cout << "           ���     ���      �������������                           " << endl;
									cout << "           ���      ���     ��   ��������  ���                           " << endl;
									cout << "           ���     ���     ��    �������    ���                           " << endl;
									cout << "        �����������  ��     �������   ���                             " << endl;
									cout << "         ����������          �������                                  " << endl;
									cout << "               ���               �������                                  " << endl;
									cout << "               ���               ���   ���                                  " << endl;
									cout << "                                 ���   ���                                  " << endl;
									cout << "                                 ���   ���                                   " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;

									cout << "����Ŀ�� ������� �����մϴ�" << endl;
									Sleep(2500); //1.5�� ������
									currentGuardianhp = guardianHp -= berserkerDamage;//���� ü�¿��� ��� �������� ���ҽ�Ű�� �� ���� ���� ü�¿� ����.

									//����� ���� ����
									cout << "                                    <2P>                                                                                       " << endl;
									cout << "                                  �������                                                                   " << endl;
									cout << "                                  ��<<����                                                              " << endl;
									cout << "                                  �������                                                              " << endl;
									cout << "                                  ��Ѥѡ���                                           " << endl;
									cout << "                                     ���                                             " << endl;
									cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
									cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
									cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
									cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
									cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
									cout << "                                 �������                                          " << endl;
									cout << "                                 ���   ���                                     " << endl;
									cout << "                                 ���   ���                                     " << endl;
									cout << "                                 ���   ���                                     " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;

									cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
									cout << endl;

									berserkerAttack = false;

									if (!guardianAttack)//ù��° ��2,����� ����
									{
										Sleep(2500);//1.5�� ������
										cout << endl;
										cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
										cout << "=============  <Round 1-2>  ==============" << endl;
										cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;

										Sleep(2500); //1.5�� ������

										//����� ���ݻ���
										cout << "                                    <2P>                                                                                       " << endl;
										cout << "                                  �������                                                                   " << endl;
										cout << "                                  �������                 �ءءءءء�                                             " << endl;
										cout << "                                  �������               �ء�<Attack>�ء�                                               " << endl;
										cout << "                                  �������                 �ءءءءء�                          " << endl;
										cout << "                                     ���                                             " << endl;
										cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
										cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
										cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
										cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
										cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
										cout << "                                 �������                                          " << endl;
										cout << "                                 ���   ���                                     " << endl;
										cout << "                                 ���   ���                                     " << endl;
										cout << "                                 ���   ���                                     " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "������� ����Ŀ�� �����մϴ�" << endl;
										Sleep(2500); //1.5�� ������
										currentBerserkerhp = berserkerHp -= guardianDamage;

										//����Ŀ ��������
										cout << "                                    <1P>                                                                                       " << endl;
										cout << "                ����                �������                                " << endl;
										cout << "             ���    ���            ��<<����                             " << endl;
										cout << "             ���     ���           �������                                " << endl;
										cout << "             ���     ���           ��Ѥѡ���                                " << endl;
										cout << "             ��� <��> ���             ���                                    " << endl;
										cout << "             ���     ���      �������������                           " << endl;
										cout << "             ���      ���     ��   ��������  ���                           " << endl;
										cout << "             ���     ���     ��    �������    ���                           " << endl;
										cout << "          �����������  ��     �������   ���                             " << endl;
										cout << "           ����������          �������                                  " << endl;
										cout << "                 ���               �������                                  " << endl;
										cout << "                 ���               ���   ���                                  " << endl;
										cout << "                                   ���   ���                                  " << endl;
										cout << "                                   ���   ���                                   " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�." << endl;
										cout << endl;

										guardianAttack = false;

										if (!berserkerAttack)//�ι�° ��1 , ����Ŀ ����
										{
											Sleep(2500);//1.5�� ������
											cout << endl;
											cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
											cout << "=============  <Round 2-1>  ==============" << endl;
											cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
											Sleep(2500); //1.5�� ������

											//����Ŀ ���ݻ���
											cout << "                                    <1P>                                                                                       " << endl;
											cout << "              ����                �������                                " << endl;
											cout << "           ���    ���            �������             �ءءءءء�                   " << endl;
											cout << "           ���     ���           �������           �ء�<Attack>�ء�                      " << endl;
											cout << "           ���     ���           �������             �ءءءءء�                   " << endl;
											cout << "           ��� <��> ���             ���                                    " << endl;
											cout << "           ���     ���      �������������                           " << endl;
											cout << "           ���      ���     ��   ��������  ���                           " << endl;
											cout << "           ���     ���     ��    �������    ���                           " << endl;
											cout << "        �����������  ��     �������   ���                             " << endl;
											cout << "         ����������          �������                                  " << endl;
											cout << "               ���               �������                                  " << endl;
											cout << "               ���               ���   ���                                  " << endl;
											cout << "                                 ���   ���                                  " << endl;
											cout << "                                 ���   ���                                   " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "����Ŀ�� ������� �����մϴ�" << endl;
											Sleep(2500); //1.5�� ������
											currentGuardianhp = currentGuardianhp -= berserkerDamage;

											//����� ���� ����
											cout << "                                    <2P>                                                                                       " << endl;
											cout << "                                  �������                                                                   " << endl;
											cout << "                                  ��<<����                                                              " << endl;
											cout << "                                  �������                                                              " << endl;
											cout << "                                  ��Ѥѡ���                                           " << endl;
											cout << "                                     ���                                             " << endl;
											cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
											cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
											cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
											cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
											cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
											cout << "                                 �������                                          " << endl;
											cout << "                                 ���   ���                                     " << endl;
											cout << "                                 ���   ���                                     " << endl;
											cout << "                                 ���   ���                                     " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
											cout << endl;

											berserkerAttack = false;

											if (!guardianAttack)//�ι�° ��2 , ����� ����
											{
												Sleep(2500);//1.5�� ������
												cout << endl;
												cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
												cout << "=============  <Round 2-2>  ==============" << endl;
												cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
												Sleep(2500); //1.5�� ������

												//����� ���ݻ���
												cout << "                                    <2P>                                                                                       " << endl;
												cout << "                                  �������                                                                   " << endl;
												cout << "                                  �������                 �ءءءءء�                                             " << endl;
												cout << "                                  �������               �ء�<Attack>�ء�                                               " << endl;
												cout << "                                  �������                 �ءءءءء�                          " << endl;
												cout << "                                     ���                                             " << endl;
												cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
												cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
												cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
												cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
												cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
												cout << "                                 �������                                          " << endl;
												cout << "                                 ���   ���                                     " << endl;
												cout << "                                 ���   ���                                     " << endl;
												cout << "                                 ���   ���                                     " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "������� ����Ŀ�� �����մϴ�" << endl;
												Sleep(2500); //1.5�� ������
												currentBerserkerhp = currentBerserkerhp -= guardianDamage;

												//����Ŀ ��������
												cout << "                                    <1P>                                                                                       " << endl;
												cout << "                ����                �������                                " << endl;
												cout << "             ���    ���            ��<<����                             " << endl;
												cout << "             ���     ���           �������                                " << endl;
												cout << "             ���     ���           ��Ѥѡ���                                " << endl;
												cout << "             ��� <��> ���             ���                                    " << endl;
												cout << "             ���     ���      �������������                           " << endl;
												cout << "             ���      ���     ��   ��������  ���                           " << endl;
												cout << "             ���     ���     ��    �������    ���                           " << endl;
												cout << "          �����������  ��     �������   ���                             " << endl;
												cout << "           ����������          �������                                  " << endl;
												cout << "                 ���               �������                                  " << endl;
												cout << "                 ���               ���   ���                                  " << endl;
												cout << "                                   ���   ���                                  " << endl;
												cout << "                                   ���   ���                                   " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�." << endl;
												cout << endl;

												guardianAttack = false;




												if (!berserkerAttack)//����° ��1 ,����Ŀ ����
												{
													Sleep(2500);//1.5�� ������
													cout << endl;
													cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
													cout << "=============  <Round 3-2>  ==============" << endl;
													cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
													Sleep(2500); //1.5�� ������

													//����Ŀ �������
													cout << "                                    <1P>                                                                                       " << endl;
													cout << "                /  /                 / /                                                " << endl;
													cout << "              /  /       ���        / /                                                    " << endl;
													cout << "            /  /    ���      ���   / /                                                      " << endl;
													cout << "          /  /      ���      ���  / /                                                       " << endl;
													cout << "                    ���      ���                                                           " << endl;
													cout << "                    ��� <��> ���        �������                                " << endl;
													cout << "                    ���      ���          �������                             " << endl;
													cout << "                    ���      ���           �������                                " << endl;
													cout << "                    ���      ���           �������                                " << endl;
													cout << "                  �����������          ���                                    " << endl;
													cout << "                  ����������� �������������                           " << endl;
													cout << "                         ���  ��   ��      ��������                            " << endl;
													cout << "                         ����   ��         �������                               " << endl;
													cout << "                                            �������                                " << endl;
													cout << "                                            �������                                  " << endl;
													cout << "                                            �������                                  " << endl;
													cout << "                                            ���   ���                                  " << endl;
													cout << "                                              ���   ���                                  " << endl;
													cout << "                                                ���   ���                                   " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "!!*����Ŀ�� ������� ��ų�� ����մϴ�*!!" << endl;
													currentGuardianhp = currentGuardianhp - B_Skill_1; //������� ���� ü�¿��� ����Ŀ�� ������� ��ų ���������� ���ش�.
													Sleep(2500); //1.5�� ������
													
													fix();

													//����� ���� ����
													cout << "                                    <2P>                                                                                       " << endl;
													cout << "                                  �������                                                                   " << endl;
													cout << "                                  ��<<����                                                              " << endl;
													cout << "                                  �������                                                              " << endl;
													cout << "                                  ��Ѥѡ���                                           " << endl;
													cout << "                                     ���                                             " << endl;
													cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
													cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
													cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
													cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
													cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
													cout << "                                 �������                                          " << endl;
													cout << "                                 ���   ���                                     " << endl;
													cout << "                                 ���   ���                                     " << endl;
													cout << "                                 ���   ���                                     " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
													cout << endl;

													berserkerAttack = false;
													if (currentGuardianhp == 0)
													{
														cout << endl;
														cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
														cout << endl;
														cout << "ó������ ���ư��ϴ�!!" << endl;
														cout << endl;
														Sleep(2500);//1.5�� ������
														goto tryAgain;
													}
													else if (currentBerserkerhp == 0)
													{
														cout << endl;
														cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
														cout << endl;
														cout << "ó������ ���ư��ϴ�!!" << endl;
														cout << endl;
														Sleep(2500);//1.5�� ������
														goto tryAgain;
													}


													if (!guardianAttack)//����° ��2 , ����� ����
													{
														Sleep(2500);//1.5�� ������
														cout << endl;
														cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
														cout << "=============  <Round 3-1>  ==============" << endl;
														cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
														Sleep(2500); //1.5�� ������
														cout << "!!*������� ���彺ų�� ����մϴ�*!!" << endl;
														cout << "!!*      ������ 1ȸ ����մϴ�   *!!" << endl;

														//����� ���� ����
														cout << "                                    <2P>                                                                                       " << endl;
														cout << "                                  �������                                                                   " << endl;
														cout << "                                  �������                 !�ءءءءء�!                                             " << endl;
														cout << "                                  �������               !�ء�<Guard>�ء�!                                               " << endl;
														cout << "                                  �������                 !�ءءءءء�!                          " << endl;
														cout << "                                     ���                                             " << endl;
														cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
														cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
														cout << "     ��     <����>     �� ���      �������  ��                                     " << endl;
														cout << "      �ܡ�         �ܡܡ��������������                                                    " << endl;
														cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
														cout << "                                 �������                                          " << endl;
														cout << "                                  ���   ���                                     " << endl;
														cout << "                               ���   ���                                     " << endl;
														cout << "                             ���   ���                                     " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														Sleep(2500); //1.5�� ������
														cout << "������� 1�� ���������(��) �Ǿ����ϴ�." << endl;
														Sleep(2500);//1.5�� ������
														currentBerserkerhp = currentBerserkerhp - G_Skill_1;//������� ���� ��ų�� ��������Ƿ� ����Ŀ�� ���� ü�¿� ������� ���� ��ų���� ���ش�.
														 
														fix();

														//����Ŀ �⺻����
														cout << "                                    <1P>                                                                                       " << endl;
														cout << "             ����                �������                                " << endl;
														cout << "          ���    ���            �������                             " << endl;
														cout << "          ���     ���           �������                                " << endl;
														cout << "          ���     ���           �������                                " << endl;
														cout << "          ��� <��> ���             ���                                    " << endl;
														cout << "          ���     ���      �������������                           " << endl;
														cout << "          ���      ���     ��   ��������  ���                           " << endl;
														cout << "          ���     ���     ��    �������    ���                           " << endl;
														cout << "       �����������  ��     �������   ���                             " << endl;
														cout << "        ����������          �������                                  " << endl;
														cout << "              ���               �������                                  " << endl;
														cout << "              ���               ���   ���                                  " << endl;
														cout << "                                ���   ���                                  " << endl;
														cout << "                                ���   ���                                   " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�." << endl;
														cout << endl;




														guardianAttack = false;
														if (currentGuardianhp == 0)
														{
															cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
															cout << endl;
															cout << "ó������ ���ư��ϴ�!!" << endl;
															cout << endl;
															Sleep(2500);//1.5�� ������
															goto tryAgain;
														}
														else if (currentBerserkerhp == 0)
														{
															cout << endl;
															cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
															cout << endl;
															cout << "ó������ ���ư��ϴ�!!" << endl;
															cout << endl;
															Sleep(2500);//1.5�� ������
															goto tryAgain;
														}



														if (!berserkerAttack)//�׹�° ��1 , ����Ŀ ����
														{
															Sleep(2500);//1.5�� ������
															cout << endl;
															cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
															cout << "=============  <Round 4-1>  ==============" << endl;
															cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
															Sleep(2500); //1.5�� ������

															//����Ŀ ���ݻ���
															cout << "                                    <1P>                                                                                       " << endl;
															cout << "              ����                �������                                " << endl;
															cout << "           ���    ���            �������             �ءءءءء�                   " << endl;
															cout << "           ���     ���           �������           �ء�<Attack>�ء�                      " << endl;
															cout << "           ���     ���           �������             �ءءءءء�                   " << endl;
															cout << "           ��� <��> ���             ���                                    " << endl;
															cout << "           ���     ���      �������������                           " << endl;
															cout << "           ���      ���     ��   ��������  ���                           " << endl;
															cout << "           ���     ���     ��    �������    ���                           " << endl;
															cout << "        �����������  ��     �������   ���                             " << endl;
															cout << "         ����������          �������                                  " << endl;
															cout << "               ���               �������                                  " << endl;
															cout << "               ���               ���   ���                                  " << endl;
															cout << "                                 ���   ���                                  " << endl;
															cout << "                                 ���   ���                                   " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "����Ŀ�� ������� �����մϴ�" << endl;
															Sleep(2500); //1.5�� ������

															//����� ���� ����
															cout << "                                    <2P>                                                                                       " << endl;
															cout << "                                  �������                                                                   " << endl;
															cout << "                                  �������                 !�ءءءءء�!                                             " << endl;
															cout << "                                  �������               !�ء�<Guard>�ء�!                                               " << endl;
															cout << "                                  �������                 !�ءءءءء�!                          " << endl;
															cout << "                                     ���                                             " << endl;
															cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
															cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
															cout << "     ��     <����>     �� ���      �������  ��                                     " << endl;
															cout << "      �ܡ�         �ܡܡ��������������                                                    " << endl;
															cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
															cout << "                                 �������                                          " << endl;
															cout << "                                  ���   ���                                     " << endl;
															cout << "                               ���   ���                                     " << endl;
															cout << "                             ���   ���                                     " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "������� 1�� ��������Դϴ�!!" << endl;
															cout << "*������� ���� ��ų�� ���� �������� ���õǾ����ϴ�*!!" << endl;
															Sleep(2500); //1.5�� ������
															currentGuardianhp = currentGuardianhp;
															fix();

															//����� �⺻����
															cout << "                                    <2P>                                                                                       " << endl;
															cout << "                                  �������                                                                   " << endl;
															cout << "                                  �������                                                            " << endl;
															cout << "                                  �������                                                            " << endl;
															cout << "                                  �������                                         " << endl;
															cout << "                                     ���                                             " << endl;
															cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
															cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
															cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
															cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
															cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
															cout << "                                 �������                                          " << endl;
															cout << "                                 ���   ���                                     " << endl;
															cout << "                                 ���   ���                                     " << endl;
															cout << "                                 ���   ���                                     " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
															cout << endl;

															berserkerAttack = false;
															if (currentGuardianhp == 0)
															{
																cout << endl;
																cout << "����Ŀ �������� �¸��Ͽ����ϴ�!!" << endl;
																cout << endl;
																cout << "ó������ ���ư��ϴ�!!" << endl;
																cout << endl;
																Sleep(2500);//1.5�� ������
																goto tryAgain;
															}
															else if (currentBerserkerhp == 0)
															{
																cout << endl;
																cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
																cout << endl;
																cout << "ó������ ���ư��ϴ�!!" << endl;
																cout << endl;
																Sleep(2500);//1.5�� ������
																goto tryAgain;
															}


															if (!guardianAttack)//�׹�° ��2 , ����� ����
															{
																Sleep(2500);//1.5�� ������
																cout << endl;
																cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																cout << "=============  <Round 4-2>  ==============" << endl;
																cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																Sleep(2500); //1.5�� ������

																//����� ���ݻ���
																cout << "                                    <2P>                                                                                       " << endl;
																cout << "                                  �������                                                                   " << endl;
																cout << "                                  �������                 �ءءءءء�                                             " << endl;
																cout << "                                  �������               �ء�<Attack>�ء�                                               " << endl;
																cout << "                                  �������                 �ءءءءء�                          " << endl;
																cout << "                                     ���                                             " << endl;
																cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
																cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
																cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
																cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
																cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
																cout << "                                 �������                                          " << endl;
																cout << "                                 ���   ���                                     " << endl;
																cout << "                                 ���   ���                                     " << endl;
																cout << "                                 ���   ���                                     " << endl;
																cout << "                                                                                                                               " << endl;
																cout << "                                                                                                                               " << endl;

																cout << "������� ����Ŀ�� �����մϴ�" << endl;
																Sleep(2500); //1.5�� ������
																currentBerserkerhp = currentBerserkerhp -= guardianDamage;
																fix();

																//����Ŀ ��������
																cout << "                                    <1P>                                                                                       " << endl;
																cout << "                ����                �������                                " << endl;
																cout << "             ���    ���            ��<<����                             " << endl;
																cout << "             ���     ���           �������                                " << endl;
																cout << "             ���     ���           ��Ѥѡ���                                " << endl;
																cout << "             ��� <��> ���             ���                                    " << endl;
																cout << "             ���     ���      �������������                           " << endl;
																cout << "             ���      ���     ��   ��������  ���                           " << endl;
																cout << "             ���     ���     ��    �������    ���                           " << endl;
																cout << "          �����������  ��     �������   ���                             " << endl;
																cout << "           ����������          �������                                  " << endl;
																cout << "                 ���               �������                                  " << endl;
																cout << "                 ���               ���   ���                                  " << endl;
																cout << "                                   ���   ���                                  " << endl;
																cout << "                                   ���   ���                                   " << endl;
																cout << "                                                                                                                               " << endl;
																cout << "                                                                                                                               " << endl;

																cout << "����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�." << endl;
																cout << endl;

																guardianAttack = false;
																if (currentGuardianhp == 0)
																{
																	cout << endl;
																	cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
																	cout << endl;
																	cout << "ó������ ���ư��ϴ�!!" << endl;
																	cout << endl;
																	Sleep(2500);//1.5�� ������
																	goto tryAgain;
																}
																else if (currentBerserkerhp == 0)
																{
																	cout << endl;
																	cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
																	cout << endl;
																	cout << "ó������ ���ư��ϴ�!!" << endl;
																	cout << endl;
																	Sleep(2500);//1.5�� ������
																	goto tryAgain;
																}


																if (!berserkerAttack)//������ ��1 , ����Ŀ ����
																{
																	Sleep(2500);//1.5�� ������
																	cout << endl;
																	cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																	cout << "=============  <Round 5-2>  ==============" << endl;
																	cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																	Sleep(1700);
																	cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
																	cout << "===========!!Warning!!============" << endl;
																	cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
																	Sleep(2500); //1.5�� ������

																	//����Ŀ �޼�Ÿ��
																	cout << "                                    <1P>                                                                                       " << endl;
																	cout << "                                                 �������                                " << endl;
																	cout << "                                                    �������                             " << endl;
																	cout << "                                                   �������                                " << endl;
																	cout << "                      <<<<<<<<<<<<<<<<<<<<            �������                                " << endl;
																	cout << "                 <<<<<<<<<<<<<<<<<<<<                         ���                                                 " << endl;
																	cout << "            <<<<<<<<<<<<<<<<<<<<       �������  ������������                          " << endl;
																	cout << "       <<<<<<<<<<<<<<<<<<<< /���������������  �� ��  ��������                             " << endl;
																	cout << "  <<<<<<<<<<<<<<<<<<<<      ��       <��>       ������ �� ��    �������                               " << endl;
																	cout << "       <<<<<<<<<<<<<<<<<<<< ���������������� �� ��        �������                                " << endl;
																	cout << "             <<<<<<<<<<<<<<<<<<<<      �������             �������                                  " << endl;
																	cout << "                 <<<<<<<<<<<<<<<<<<<<                           �������                                  " << endl;
																	cout << "                      <<<<<<<<<<<<<<<<<<<<                    ���   ���                                  " << endl;
																	cout << "                                                                ���   ���                                  " << endl;
																	cout << "                                                               ���   ���                                   " << endl;
																	cout << "                                                                                                                               " << endl;
																	cout << "                                                                                                                               " << endl;

																	cout << "!!����Ŀ�� �޼�Ÿ�� ��ų�� ����մϴ�!!" << endl;
																	Sleep(2500); //1.5�� ������
																	currentGuardianhp = currentGuardianhp -= B_Skill_2;
																	fix();

																	//����� ���� ����
																	cout << "                                    <2P>                                                                                       " << endl;
																	cout << "                                  �������                                                                   " << endl;
																	cout << "                                  ��<<����                                                              " << endl;
																	cout << "                                  �������                                                              " << endl;
																	cout << "                                  ��Ѥѡ���                                           " << endl;
																	cout << "                                     ���                                             " << endl;
																	cout << "         �ܡܡܡܡܡ�           �������������                                        " << endl;
																	cout << "      �ܡ�         �ܡ�      ��     �������  ���                                         " << endl;
																	cout << "     ��     <����>     �� ���      �������  ���                                     " << endl;
																	cout << "      �ܡ�         �ܡ�            �������  ���                                                  " << endl;
																	cout << "        �ܡܡܡܡܡ�                �������                                       " << endl;
																	cout << "                                 �������                                          " << endl;
																	cout << "                                 ���   ���                                     " << endl;
																	cout << "                                 ���   ���                                     " << endl;
																	cout << "                                 ���   ���                                     " << endl;
																	cout << "                                                                                                                               " << endl;
																	cout << "                                                                                                                               " << endl;

																	cout << "������� ü���� " << currentGuardianhp << "��(��) �Ǿ����ϴ�." << endl;
																	cout << endl;

																	berserkerAttack = false;
																	if (currentGuardianhp == 0)
																	{
																		cout << endl;
																		cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
																		cout << endl;
																		cout << "ó������ ���ư��ϴ�!!" << endl;
																		cout << endl;
																		Sleep(2500);//1.5�� ������
																		goto tryAgain;;
																	}
																	else if (currentBerserkerhp == 0)
																	{
																		cout << endl;
																		cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
																		cout << endl;
																		cout << "ó������ ���ư��ϴ�!!" << endl;
																		cout << endl;
																		Sleep(2500);//1.5�� ������
																		goto tryAgain;
																	}


																	if (!guardianAttack)//������ ��2 , ����� ����
																	{
																		Sleep(2500);//1.5�� ������
																		cout << endl;
																		cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																		cout << "=============  <Round 5-1>  ==============" << endl;
																		cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																		Sleep(1700);
																		cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
																		cout << "===========!!Warning!!============" << endl;
																		cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
																		Sleep(2500); //1.5�� ������

																		//����� ���д�����
																		cout << "                                    <2P>                                                                                       " << endl;
																		cout << "                                     �������                                                                   " << endl;
																		cout << "                                    �������                                                            " << endl;
																		cout << "                                   �������                                                            " << endl;
																		cout << "                                  �������                                         " << endl;
																		cout << "        ~~~~~~~~~~~~~~                ���                                             " << endl;
																		cout << "   ~~~~~ �ܡܡܡܡܡ� ~~~~~~       �������������                                        " << endl;
																		cout << "   ~~~�ܡ�         �ܡ�~~~      ��  ��   �������                                           " << endl;
																		cout << "   ~ ��     <����>    ��~ ����   ��   �������                                       " << endl;
																		cout << "   ~~~�ܡ�         �ܡ�~~~  �����   �������                                                    " << endl;
																		cout << "   ~~~~~ �ܡܡܡܡܡ�~~~~~~          �������                                       " << endl;
																		cout << "         ~~~~~~~~~~~~~~          �������                                          " << endl;
																		cout << "                                   ���   ���                                     " << endl;
																		cout << "                                       ���   ���                                     " << endl;
																		cout << "                                           ���   ���                                     " << endl;
																		cout << "                                                                                                                               " << endl;
																		cout << "                                                                                                                               " << endl;

																		cout << "!!������� ���д����� ��ų�� ����մϴ�!!" << endl;
																		Sleep(2500); //1.5�� ������
																		currentBerserkerhp = currentBerserkerhp -= G_Skill_2;
																		fix();

																		//����Ŀ ��������
																		cout << "                                    <1P>                                                                                       " << endl;
																		cout << "                ����                �������                                " << endl;
																		cout << "             ���    ���            ��<<����                             " << endl;
																		cout << "             ���     ���           �������                                " << endl;
																		cout << "             ���     ���           ��Ѥѡ���                                " << endl;
																		cout << "             ��� <��> ���             ���                                    " << endl;
																		cout << "             ���     ���      �������������                           " << endl;
																		cout << "             ���      ���     ��   ��������  ���                           " << endl;
																		cout << "             ���     ���     ��    �������    ���                           " << endl;
																		cout << "          �����������  ��     �������   ���                             " << endl;
																		cout << "           ����������          �������                                  " << endl;
																		cout << "                 ���               �������                                  " << endl;
																		cout << "                 ���               ���   ���                                  " << endl;
																		cout << "                                   ���   ���                                  " << endl;
																		cout << "                                   ���   ���                                   " << endl;
																		cout << "                                                                                                                               " << endl;
																		cout << "                                                                                                                               " << endl;

																		cout << "!!����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�!!." << endl;
																		cout << endl;

																		guardianAttack = false;
																		if (currentGuardianhp == 0)
																		{
																			cout << endl;
																			cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
																			cout << endl;
																			cout << "ó������ ���ư��ϴ�!!" << endl;
																			cout << endl;
																			Sleep(2500);//1.5�� ������
																			goto tryAgain;;
																		}
																		else if (currentBerserkerhp == 0)
																		{
																			cout << endl;
																			cout << "������� �������� �¸��Ͽ����ϴ�!!" << endl;
																			cout << endl;
																			cout << "ó������ ���ư��ϴ�!!" << endl;
																			cout << endl;
																			Sleep(2500);//1.5�� ������
																			goto tryAgain;;
																		}
																		else
																		{
																			Totie();
																			goto tryAgain;
																		}


																	}
																}

															}
														}
													}

												}
											}
										}


									}


								}
								break;
							}//P1==3�� P2==1 ���� ��.

							while/*P1 == 3�� P2 == 2*/ (1) //P1 == 3�� P2 == 2 ���� �ݺ�
							{

								berserkerDamage = rand() % 6 + 10;
								spearManDamage = rand() % 6 + 10;

								if (choice1 == 3 && choice2 == 2) // P1�� ����Ŀ P2�� â���� ,P1==3�� P2==2 ���� ����.
								{

									//����Ŀ �⺻����
									cout << "                                    <1P>                                                                                       " << endl;
									cout << "             ����                �������                                " << endl;
									cout << "          ���    ���            �������                             " << endl;
									cout << "          ���     ���           �������                                " << endl;
									cout << "          ���     ���           �������                                " << endl;
									cout << "          ��� <��> ���             ���                                    " << endl;
									cout << "          ���     ���      �������������                           " << endl;
									cout << "          ���      ���     ��   ��������  ���                           " << endl;
									cout << "          ���     ���     ��    �������    ���                           " << endl;
									cout << "       �����������  ��     �������   ���                             " << endl;
									cout << "        ����������          �������                                  " << endl;
									cout << "              ���               �������                                  " << endl;
									cout << "              ���               ���   ���                                  " << endl;
									cout << "                                ���   ���                                  " << endl;
									cout << "                                ���   ���                                   " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;

									//â���� �⺻����
									cout << "                                    <2P>                                                                                       " << endl;
									cout << "                           ��        �������                                             " << endl;
									cout << "                         ��  ��      �������                                              " << endl;
									cout << "                       �� <â> ��    �������                                             " << endl;
									cout << "                          ���      ��������                                             " << endl;
									cout << "                          ���         ���                                                  " << endl;
									cout << "                          ���  �������������                                        " << endl;
									cout << "                          ����   ��������    ���                                       " << endl;
									cout << "                          ���      �������    ���                                     " << endl;
									cout << "                          ���      �������    ���                                     " << endl;
									cout << "                          ���      �������                                            " << endl;
									cout << "                          ���      �������                                            " << endl;
									cout << "                          ���      ���    ���                                           " << endl;
									cout << "                          ���      ���    ���                                           " << endl;
									cout << "                          ���      ���    ���                                           " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;



									cout << "������ ���� �մϴ�!!" << endl;


									if (!berserkerAttack)//ù��° ��1 , ����Ŀ ����
									{
										Sleep(2500);//1.5�� ������
										cout << endl;
										cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
										cout << "=============  <Round 1-1>  ==============" << endl;
										cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
										Sleep(2500); //1.5�� ������

										//����Ŀ ���ݻ���
										cout << "                                    <1P>                                                                                       " << endl;
										cout << "              ����                �������                                " << endl;
										cout << "           ���    ���            �������             �ءءءءء�                   " << endl;
										cout << "           ���     ���           �������           �ء�<Attack>�ء�                      " << endl;
										cout << "           ���     ���           �������             �ءءءءء�                   " << endl;
										cout << "           ��� <��> ���             ���                                    " << endl;
										cout << "           ���     ���      �������������                           " << endl;
										cout << "           ���      ���     ��   ��������  ���                           " << endl;
										cout << "           ���     ���     ��    �������    ���                           " << endl;
										cout << "        �����������  ��     �������   ���                             " << endl;
										cout << "         ����������          �������                                  " << endl;
										cout << "               ���               �������                                  " << endl;
										cout << "               ���               ���   ���                                  " << endl;
										cout << "                                 ���   ���                                  " << endl;
										cout << "                                 ���   ���                                   " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "����Ŀ�� â���縦 �����մϴ�" << endl;
										Sleep(2500); //1.5�� ������
										currentSpearmanhp = spearManHp -= berserkerDamage;//���� ü�¿��� ��� �������� ���ҽ�Ű�� �� ���� ���� ü�¿� ����.

										//â���� ��������
										cout << "                                    <2P>                                                                                       " << endl;
										cout << "                          ��        �������                                             " << endl;
										cout << "                        ��  ��      ��<�����                                              " << endl;
										cout << "                      �� <â> ��    �������                                             " << endl;
										cout << "                         ���      ��Ѥѡ����                                             " << endl;
										cout << "                         ���         ���                                                  " << endl;
										cout << "                         ���  �������������                                        " << endl;
										cout << "                         ����   ��������    ���                                       " << endl;
										cout << "                         ���      �������    ���                                     " << endl;
										cout << "                         ���      �������    ���                                     " << endl;
										cout << "                         ���      �������                                            " << endl;
										cout << "                         ���      �������                                            " << endl;
										cout << "                         ���      ���    ���                                           " << endl;
										cout << "                         ���      ���    ���                                           " << endl;
										cout << "                         ���      ���    ���                                           " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
										cout << endl;

										berserkerAttack = false;

										if (!spearManAttack)//ù��° ��2,â���� ����
										{
											Sleep(2500);//1.5�� ������
											cout << endl;
											cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
											cout << "=============  <Round 1-2>  ==============" << endl;
											cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;

											Sleep(2500); //1.5�� ������


	//â���� ���ݻ���
											cout << "                                    <2P>                                                                                       " << endl;
											cout << "                          ��        �������                                             " << endl;
											cout << "                        ��  ��      �������               �ءءءءء�                                " << endl;
											cout << "                      �� <â> ��    �������            �ء�<Attack>�ء�                                 " << endl;
											cout << "                         ���      ��������              �ءءءءء�                               " << endl;
											cout << "                         ���         ���                                                  " << endl;
											cout << "                         ���  �������������                                        " << endl;
											cout << "                         ����   ��������    ���                                       " << endl;
											cout << "                         ���      �������    ���                                     " << endl;
											cout << "                         ���      �������    ���                                     " << endl;
											cout << "                         ���      �������                                            " << endl;
											cout << "                         ���      �������                                            " << endl;
											cout << "                         ���      ���    ���                                           " << endl;
											cout << "                         ���      ���    ���                                           " << endl;
											cout << "                         ���      ���    ���                                           " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;


											cout << "â���簡 ����Ŀ�� �����մϴ�" << endl;
											Sleep(2500); //1.5�� ������
											currentBerserkerhp = berserkerHp -= spearManDamage;

											//����Ŀ ��������
											cout << "                                    <1P>                                                                                       " << endl;
											cout << "                ����                �������                                " << endl;
											cout << "             ���    ���            ��<<����                             " << endl;
											cout << "             ���     ���           �������                                " << endl;
											cout << "             ���     ���           ��Ѥѡ���                                " << endl;
											cout << "             ��� <��> ���             ���                                    " << endl;
											cout << "             ���     ���      �������������                           " << endl;
											cout << "             ���      ���     ��   ��������  ���                           " << endl;
											cout << "             ���     ���     ��    �������    ���                           " << endl;
											cout << "          �����������  ��     �������   ���                             " << endl;
											cout << "           ����������          �������                                  " << endl;
											cout << "                 ���               �������                                  " << endl;
											cout << "                 ���               ���   ���                                  " << endl;
											cout << "                                   ���   ���                                  " << endl;
											cout << "                                   ���   ���                                   " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�." << endl;
											cout << endl;

											spearManAttack = false;

											if (!spearManAttack)//�ι�° ��1 , ����Ŀ ����
											{
												Sleep(2500);//1.5�� ������
												cout << endl;
												cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
												cout << "=============  <Round 2-1>  ==============" << endl;
												cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
												Sleep(2500); //1.5�� ������

												//����Ŀ ���ݻ���
												cout << "                                    <1P>                                                                                       " << endl;
												cout << "              ����                �������                                " << endl;
												cout << "           ���    ���            �������             �ءءءءء�                   " << endl;
												cout << "           ���     ���           �������           �ء�<Attack>�ء�                      " << endl;
												cout << "           ���     ���           �������             �ءءءءء�                   " << endl;
												cout << "           ��� <��> ���             ���                                    " << endl;
												cout << "           ���     ���      �������������                           " << endl;
												cout << "           ���      ���     ��   ��������  ���                           " << endl;
												cout << "           ���     ���     ��    �������    ���                           " << endl;
												cout << "        �����������  ��     �������   ���                             " << endl;
												cout << "         ����������          �������                                  " << endl;
												cout << "               ���               �������                                  " << endl;
												cout << "               ���               ���   ���                                  " << endl;
												cout << "                                 ���   ���                                  " << endl;
												cout << "                                 ���   ���                                   " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "����Ŀ�� â���縦 �����մϴ�" << endl;
												Sleep(2500); //1.5�� ������
												currentSpearmanhp = currentSpearmanhp -= berserkerDamage;

												//â���� ��������
												cout << "                                    <2P>                                                                                       " << endl;
												cout << "                          ��        �������                                             " << endl;
												cout << "                        ��  ��      ��<�����                                              " << endl;
												cout << "                      �� <â> ��    �������                                             " << endl;
												cout << "                         ���      ��Ѥѡ����                                             " << endl;
												cout << "                         ���         ���                                                  " << endl;
												cout << "                         ���  �������������                                        " << endl;
												cout << "                         ����   ��������    ���                                       " << endl;
												cout << "                         ���      �������    ���                                     " << endl;
												cout << "                         ���      �������    ���                                     " << endl;
												cout << "                         ���      �������                                            " << endl;
												cout << "                         ���      �������                                            " << endl;
												cout << "                         ���      ���    ���                                           " << endl;
												cout << "                         ���      ���    ���                                           " << endl;
												cout << "                         ���      ���    ���                                           " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
												cout << endl;

												spearManAttack = false;

												if (!spearManAttack)//�ι�° ��2 , â���� ����
												{
													Sleep(2500);//1.5�� ������
													cout << endl;
													cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
													cout << "=============  <Round 2-2>  ==============" << endl;
													cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
													Sleep(2500); //1.5�� ������

													//â���� ���ݻ���
													cout << "                                    <2P>                                                                                       " << endl;
													cout << "                          ��        �������                                             " << endl;
													cout << "                        ��  ��      �������               �ءءءءء�                                " << endl;
													cout << "                      �� <â> ��    �������            �ء�<Attack>�ء�                                 " << endl;
													cout << "                         ���      ��������              �ءءءءء�                               " << endl;
													cout << "                         ���         ���                                                  " << endl;
													cout << "                         ���  �������������                                        " << endl;
													cout << "                         ����   ��������    ���                                       " << endl;
													cout << "                         ���      �������    ���                                     " << endl;
													cout << "                         ���      �������    ���                                     " << endl;
													cout << "                         ���      �������                                            " << endl;
													cout << "                         ���      �������                                            " << endl;
													cout << "                         ���      ���    ���                                           " << endl;
													cout << "                         ���      ���    ���                                           " << endl;
													cout << "                         ���      ���    ���                                           " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "â���簡 ����Ŀ�� �����մϴ�" << endl;
													Sleep(2500); //1.5�� ������
													currentBerserkerhp = currentBerserkerhp -= spearManDamage;

													//����Ŀ ��������
													cout << "                                    <1P>                                                                                       " << endl;
													cout << "                ����                �������                                " << endl;
													cout << "             ���    ���            ��<<����                             " << endl;
													cout << "             ���     ���           �������                                " << endl;
													cout << "             ���     ���           ��Ѥѡ���                                " << endl;
													cout << "             ��� <��> ���             ���                                    " << endl;
													cout << "             ���     ���      �������������                           " << endl;
													cout << "             ���      ���     ��   ��������  ���                           " << endl;
													cout << "             ���     ���     ��    �������    ���                           " << endl;
													cout << "          �����������  ��     �������   ���                             " << endl;
													cout << "           ����������          �������                                  " << endl;
													cout << "                 ���               �������                                  " << endl;
													cout << "                 ���               ���   ���                                  " << endl;
													cout << "                                   ���   ���                                  " << endl;
													cout << "                                   ���   ���                                   " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�." << endl;
													cout << endl;

													spearManAttack = false;




													if (!berserkerAttack)//����° ��1 ,����Ŀ ����
													{
														Sleep(2500);//1.5�� ������
														cout << endl;
														cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
														cout << "=============  <Round 3-2>  ==============" << endl;
														cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
														Sleep(2500); //1.5�� ������

														//����Ŀ �������
														cout << "                                    <1P>                                                                                       " << endl;
														cout << "                /  /                 / /                                                " << endl;
														cout << "              /  /       ���        / /                                                    " << endl;
														cout << "            /  /    ���      ���   / /                                                      " << endl;
														cout << "          /  /      ���      ���  / /                                                       " << endl;
														cout << "                    ���      ���                                                           " << endl;
														cout << "                    ��� <��> ���        �������                                " << endl;
														cout << "                    ���      ���          �������                             " << endl;
														cout << "                    ���      ���           �������                                " << endl;
														cout << "                    ���      ���           �������                                " << endl;
														cout << "                  �����������          ���                                    " << endl;
														cout << "                  ����������� �������������                           " << endl;
														cout << "                         ���  ��   ��      ��������                            " << endl;
														cout << "                         ����   ��         �������                               " << endl;
														cout << "                                            �������                                " << endl;
														cout << "                                            �������                                  " << endl;
														cout << "                                            �������                                  " << endl;
														cout << "                                            ���   ���                                  " << endl;
														cout << "                                              ���   ���                                  " << endl;
														cout << "                                                ���   ���                                   " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "!!*����Ŀ�� ������� ��ų�� ����մϴ�*!!" << endl;
														currentSpearmanhp = currentSpearmanhp - B_Skill_1; //â������ ���� ü�¿��� ����Ŀ�� ������� ��ų ���������� ���ش�.
														Sleep(2500); //1.5�� ������


														fix();

														//â���� ��������
														cout << "                                    <2P>                                                                                       " << endl;
														cout << "                          ��        �������                                             " << endl;
														cout << "                        ��  ��      ��<�����                                              " << endl;
														cout << "                      �� <â> ��    �������                                             " << endl;
														cout << "                         ���      ��Ѥѡ����                                             " << endl;
														cout << "                         ���         ���                                                  " << endl;
														cout << "                         ���  �������������                                        " << endl;
														cout << "                         ����   ��������    ���                                       " << endl;
														cout << "                         ���      �������    ���                                     " << endl;
														cout << "                         ���      �������    ���                                     " << endl;
														cout << "                         ���      �������                                            " << endl;
														cout << "                         ���      �������                                            " << endl;
														cout << "                         ���      ���    ���                                           " << endl;
														cout << "                         ���      ���    ���                                           " << endl;
														cout << "                         ���      ���    ���                                           " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
														cout << endl;
														berserkerAttack = false;
														if (currentSpearmanhp == 0)
														{
															cout << endl;
															cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
															cout << endl;
															cout << "ó������ ���ư��ϴ�!!" << endl;
															cout << endl;
															Sleep(2500);//1.5�� ������
															goto tryAgain;
														}
														else if (currentBerserkerhp == 0)
														{
															cout << endl;
															cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
															cout << endl;
															cout << "ó������ ���ư��ϴ�!!" << endl;
															cout << endl;
															Sleep(2500);//1.5�� ������
															goto tryAgain;
														}


														if (!spearManAttack)//����° ��2 , â���� ����
														{

															Sleep(2500);//1.5�� ������
															cout << endl;
															cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
															cout << "=============  <Round 3-1>  ==============" << endl;
															cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
															Sleep(2500); //1.5�� ������

															//â���� ���
															cout << "                                    <2P>                                                                                       " << endl;
															cout << "                                �������                                             " << endl;
															cout << "                                  �������                                              " << endl;
															cout << "                                    �������                                             " << endl;
															cout << "                                     ��������                                             " << endl;
															cout << "             ~~~~~~~~~~~                ���                                                  " << endl;
															cout << "         ~~~~~~~~~~~  ��        ���  �������������                                        " << endl;
															cout << "     ~~~~~~~~~~~   ��    ��       ����   ��������    ���                                       " << endl;
															cout << " ~~~~~~~~~~~    ��  <â>  ��������� ��     ������� ��                                     " << endl;
															cout << "     ~~~~~~~~~~~    ��    �������������������                                       " << endl;
															cout << "         ~~~~~~~~~~~  ��                        �������                                            " << endl;
															cout << "             ~~~~~~~~~~~                       �������                                            " << endl;
															cout << "                                                    ���    ���                                           " << endl;
															cout << "                                                       ���    ���                                           " << endl;
															cout << "                                                          ���    ���                                           " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "!!*â���簡 ��⽺ų�� ����մϴ�*!!" << endl;


															Sleep(2500);//1.5�� ������
															currentBerserkerhp = currentBerserkerhp - S_Skill_1;//â������ ��� ��ų ����ŭ ���ش�.

															fix();

															//����Ŀ ��������
															cout << "                                    <1P>                                                                                       " << endl;
															cout << "                ����                �������                                " << endl;
															cout << "             ���    ���            ��<<����                             " << endl;
															cout << "             ���     ���           �������                                " << endl;
															cout << "             ���     ���           ��Ѥѡ���                                " << endl;
															cout << "             ��� <��> ���             ���                                    " << endl;
															cout << "             ���     ���      �������������                           " << endl;
															cout << "             ���      ���     ��   ��������  ���                           " << endl;
															cout << "             ���     ���     ��    �������    ���                           " << endl;
															cout << "          �����������  ��     �������   ���                             " << endl;
															cout << "           ����������          �������                                  " << endl;
															cout << "                 ���               �������                                  " << endl;
															cout << "                 ���               ���   ���                                  " << endl;
															cout << "                                   ���   ���                                  " << endl;
															cout << "                                   ���   ���                                   " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�." << endl;
															cout << endl;

															spearManAttack = false;
															if (currentSpearmanhp == 0)
															{
																cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
																cout << endl;
																cout << "ó������ ���ư��ϴ�!!" << endl;
																cout << endl;
																Sleep(2500);//1.5�� ������
																goto tryAgain;
															}
															else if (currentBerserkerhp == 0)
															{
																cout << endl;
																cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
																cout << endl;
																cout << "ó������ ���ư��ϴ�!!" << endl;
																cout << endl;
																Sleep(2500);//1.5�� ������
																goto tryAgain;
															}



															if (!berserkerAttack)//�׹�° ��1 , ����Ŀ ����
															{
																Sleep(2500);//1.5�� ������
																cout << endl;
																cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																cout << "=============  <Round 4-1>  ==============" << endl;
																cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																Sleep(2500); //1.5�� ������

																//����Ŀ ���ݻ���
																cout << "                                    <1P>                                                                                       " << endl;
																cout << "              ����                �������                                " << endl;
																cout << "           ���    ���            �������             �ءءءءء�                   " << endl;
																cout << "           ���     ���           �������           �ء�<Attack>�ء�                      " << endl;
																cout << "           ���     ���           �������             �ءءءءء�                   " << endl;
																cout << "           ��� <��> ���             ���                                    " << endl;
																cout << "           ���     ���      �������������                           " << endl;
																cout << "           ���      ���     ��   ��������  ���                           " << endl;
																cout << "           ���     ���     ��    �������    ���                           " << endl;
																cout << "        �����������  ��     �������   ���                             " << endl;
																cout << "         ����������          �������                                  " << endl;
																cout << "               ���               �������                                  " << endl;
																cout << "               ���               ���   ���                                  " << endl;
																cout << "                                 ���   ���                                  " << endl;
																cout << "                                 ���   ���                                   " << endl;
																cout << "                                                                                                                               " << endl;
																cout << "                                                                                                                               " << endl;

																cout << "����Ŀ�� â���縦 �����մϴ�" << endl;
																Sleep(2500); //1.5�� ������
																currentSpearmanhp = currentSpearmanhp -= berserkerDamage;
																fix();

																//â���� ��������
																cout << "                                    <2P>                                                                                       " << endl;
																cout << "                          ��        �������                                             " << endl;
																cout << "                        ��  ��      ��<�����                                              " << endl;
																cout << "                      �� <â> ��    �������                                             " << endl;
																cout << "                         ���      ��Ѥѡ����                                             " << endl;
																cout << "                         ���         ���                                                  " << endl;
																cout << "                         ���  �������������                                        " << endl;
																cout << "                         ����   ��������    ���                                       " << endl;
																cout << "                         ���      �������    ���                                     " << endl;
																cout << "                         ���      �������    ���                                     " << endl;
																cout << "                         ���      �������                                            " << endl;
																cout << "                         ���      �������                                            " << endl;
																cout << "                         ���      ���    ���                                           " << endl;
																cout << "                         ���      ���    ���                                           " << endl;
																cout << "                         ���      ���    ���                                           " << endl;
																cout << "                                                                                                                               " << endl;
																cout << "                                                                                                                               " << endl;

																cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
																cout << endl;

																berserkerAttack = false;
																if (currentSpearmanhp == 0)
																{
																	cout << endl;
																	cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
																	cout << endl;
																	cout << "ó������ ���ư��ϴ�!!" << endl;
																	cout << endl;
																	Sleep(2500);//1.5�� ������
																	goto tryAgain;
																}
																else if (currentBerserkerhp == 0)
																{
																	cout << endl;
																	cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
																	cout << endl;
																	cout << "ó������ ���ư��ϴ�!!" << endl;
																	cout << endl;
																	Sleep(2500);//1.5�� ������
																	goto tryAgain;
																}


																if (!spearManAttack)//�׹�° ��2 , â���� ����
																{
																	Sleep(2500);//1.5�� ������
																	cout << endl;
																	cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																	cout << "=============  <Round 4-2>  ==============" << endl;
																	cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																	Sleep(2500); //1.5�� ������

																	//â���� ���ݻ���
																	cout << "                                    <2P>                                                                                       " << endl;
																	cout << "                          ��        �������                                             " << endl;
																	cout << "                        ��  ��      �������               �ءءءءء�                                " << endl;
																	cout << "                      �� <â> ��    �������            �ء�<Attack>�ء�                                 " << endl;
																	cout << "                         ���      ��������              �ءءءءء�                               " << endl;
																	cout << "                         ���         ���                                                  " << endl;
																	cout << "                         ���  �������������                                        " << endl;
																	cout << "                         ����   ��������    ���                                       " << endl;
																	cout << "                         ���      �������    ���                                     " << endl;
																	cout << "                         ���      �������    ���                                     " << endl;
																	cout << "                         ���      �������                                            " << endl;
																	cout << "                         ���      �������                                            " << endl;
																	cout << "                         ���      ���    ���                                           " << endl;
																	cout << "                         ���      ���    ���                                           " << endl;
																	cout << "                         ���      ���    ���                                           " << endl;
																	cout << "                                                                                                                               " << endl;
																	cout << "                                                                                                                               " << endl;

																	cout << "â���簡 ����Ŀ�� �����մϴ�" << endl;
																	Sleep(2500); //1.5�� ������
																	currentBerserkerhp = currentBerserkerhp -= spearManDamage;
																	fix();

																	//����Ŀ ��������
																	cout << "                                    <1P>                                                                                       " << endl;
																	cout << "                ����                �������                                " << endl;
																	cout << "             ���    ���            ��<<����                             " << endl;
																	cout << "             ���     ���           �������                                " << endl;
																	cout << "             ���     ���           ��Ѥѡ���                                " << endl;
																	cout << "             ��� <��> ���             ���                                    " << endl;
																	cout << "             ���     ���      �������������                           " << endl;
																	cout << "             ���      ���     ��   ��������  ���                           " << endl;
																	cout << "             ���     ���     ��    �������    ���                           " << endl;
																	cout << "          �����������  ��     �������   ���                             " << endl;
																	cout << "           ����������          �������                                  " << endl;
																	cout << "                 ���               �������                                  " << endl;
																	cout << "                 ���               ���   ���                                  " << endl;
																	cout << "                                   ���   ���                                  " << endl;
																	cout << "                                   ���   ���                                   " << endl;
																	cout << "                                                                                                                               " << endl;
																	cout << "                                                                                                                               " << endl;

																	cout << "����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�." << endl;
																	cout << endl;

																	spearManAttack = false;
																	if (currentSpearmanhp == 0)
																	{
																		cout << endl;
																		cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
																		cout << endl;
																		cout << "ó������ ���ư��ϴ�!!" << endl;
																		cout << endl;
																		Sleep(2500);//1.5�� ������
																		goto tryAgain;
																	}
																	else if (currentBerserkerhp == 0)
																	{
																		cout << endl;
																		cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
																		cout << endl;
																		cout << "ó������ ���ư��ϴ�!!" << endl;
																		cout << endl;
																		Sleep(2500);//1.5�� ������
																		goto tryAgain;
																	}


																	if (!berserkerAttack)//������ ��1 , ����Ŀ ����
																	{
																		Sleep(2500);//1.5�� ������
																		cout << endl;
																		cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																		cout << "=============  <Round 5-2>  ==============" << endl;
																		cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																		Sleep(1700);
																		cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
																		cout << "===========!!Warning!!============" << endl;
																		cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
																		Sleep(2500); //1.5�� ������

																		//����Ŀ �޼�Ÿ��
																		cout << "                                    <1P>                                                                                       " << endl;
																		cout << "                                                 �������                                " << endl;
																		cout << "                                                    �������                             " << endl;
																		cout << "                                                   �������                                " << endl;
																		cout << "                      <<<<<<<<<<<<<<<<<<<<            �������                                " << endl;
																		cout << "                 <<<<<<<<<<<<<<<<<<<<                         ���                                                 " << endl;
																		cout << "            <<<<<<<<<<<<<<<<<<<<       �������  ������������                          " << endl;
																		cout << "       <<<<<<<<<<<<<<<<<<<< /���������������  �� ��  ��������                             " << endl;
																		cout << "  <<<<<<<<<<<<<<<<<<<<      ��       <��>       ������ �� ��    �������                               " << endl;
																		cout << "       <<<<<<<<<<<<<<<<<<<< ���������������� �� ��        �������                                " << endl;
																		cout << "             <<<<<<<<<<<<<<<<<<<<      �������             �������                                  " << endl;
																		cout << "                 <<<<<<<<<<<<<<<<<<<<                           �������                                  " << endl;
																		cout << "                      <<<<<<<<<<<<<<<<<<<<                    ���   ���                                  " << endl;
																		cout << "                                                                ���   ���                                  " << endl;
																		cout << "                                                               ���   ���                                   " << endl;
																		cout << "                                                                                                                               " << endl;
																		cout << "                                                                                                                               " << endl;

																		cout << "!!����Ŀ�� �޼�Ÿ�� ��ų�� ����մϴ�!!" << endl;
																		Sleep(2500); //1.5�� ������
																		currentSpearmanhp = currentSpearmanhp -= B_Skill_2;
																		fix();

																		//â���� ��������
																		cout << "                                    <2P>                                                                                       " << endl;
																		cout << "                          ��        �������                                             " << endl;
																		cout << "                        ��  ��      ��<�����                                              " << endl;
																		cout << "                      �� <â> ��    �������                                             " << endl;
																		cout << "                         ���      ��Ѥѡ����                                             " << endl;
																		cout << "                         ���         ���                                                  " << endl;
																		cout << "                         ���  �������������                                        " << endl;
																		cout << "                         ����   ��������    ���                                       " << endl;
																		cout << "                         ���      �������    ���                                     " << endl;
																		cout << "                         ���      �������    ���                                     " << endl;
																		cout << "                         ���      �������                                            " << endl;
																		cout << "                         ���      �������                                            " << endl;
																		cout << "                         ���      ���    ���                                           " << endl;
																		cout << "                         ���      ���    ���                                           " << endl;
																		cout << "                         ���      ���    ���                                           " << endl;
																		cout << "                                                                                                                               " << endl;
																		cout << "                                                                                                                               " << endl;

																		cout << "â������ ü���� " << currentSpearmanhp << "��(��) �Ǿ����ϴ�." << endl;
																		cout << endl;

																		berserkerAttack = false;
																		if (currentSpearmanhp == 0)
																		{
																			cout << endl;
																			cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
																			cout << endl;
																			cout << "ó������ ���ư��ϴ�!!" << endl;
																			cout << endl;
																			Sleep(2500);//1.5�� ������
																			goto tryAgain;;
																		}
																		else if (currentBerserkerhp == 0)
																		{
																			cout << endl;
																			cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
																			cout << endl;
																			cout << "ó������ ���ư��ϴ�!!" << endl;
																			cout << endl;
																			Sleep(2500);//1.5�� ������
																			goto tryAgain;
																		}


																		if (!spearManAttack)//������ ��2 , â���� ����
																		{
																			Sleep(2500);//1.5�� ������
																			cout << endl;
																			cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																			cout << "=============  <Round 5-1>  ==============" << endl;
																			cout << "�١١١١١١١١١١١١١١١١١١١١�" << endl;
																			Sleep(1700);
																			cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
																			cout << "===========!!Warning!!============" << endl;
																			cout << "�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
																			Sleep(2500); //1.5�� ������

																			//â���� ��Ÿ
																			cout << "                                    <2P>                                                                                       " << endl;
																			cout << "                      �١�                                                                           " << endl;
																			cout << "                   �١١�١�          �������                                             " << endl;
																			cout << "                �١١�   ��١�       �������                                              " << endl;
																			cout << "             �١١� <â>   ��١�   �������                                             " << endl;
																			cout << "                �١� ��� �١�     ��������                                             " << endl;
																			cout << "                  ���            ���                                                  " << endl;
																			cout << "               ���  �������������                                        " << endl;
																			cout << "              ����   ��������    ���                                       " << endl;
																			cout << "             ���        �������  ��                                     " << endl;
																			cout << "            ��� ����������� ��                                     " << endl;
																			cout << "           ���    �������                                            " << endl;
																			cout << "         ���    �������                                            " << endl;
																			cout << "        ���     ���    ���                                           " << endl;
																			cout << "       ���       ���    ���                                           " << endl;
																			cout << "     ���          ���    ���                                           " << endl;
																			cout << "                                                                                                                               " << endl;
																			cout << "                                                                                                                               " << endl;

																			cout << "!!â���簡 ��Ÿ ��ų�� ����մϴ�!!" << endl;
																			Sleep(2500); //1.5�� ������
																			currentBerserkerhp = currentBerserkerhp -= S_Skill_2;
																			fix();

																			//����Ŀ ��������
																			cout << "                                    <1P>                                                                                       " << endl;
																			cout << "                ����                �������                                " << endl;
																			cout << "             ���    ���            ��<<����                             " << endl;
																			cout << "             ���     ���           �������                                " << endl;
																			cout << "             ���     ���           ��Ѥѡ���                                " << endl;
																			cout << "             ��� <��> ���             ���                                    " << endl;
																			cout << "             ���     ���      �������������                           " << endl;
																			cout << "             ���      ���     ��   ��������  ���                           " << endl;
																			cout << "             ���     ���     ��    �������    ���                           " << endl;
																			cout << "          �����������  ��     �������   ���                             " << endl;
																			cout << "           ����������          �������                                  " << endl;
																			cout << "                 ���               �������                                  " << endl;
																			cout << "                 ���               ���   ���                                  " << endl;
																			cout << "                                   ���   ���                                  " << endl;
																			cout << "                                   ���   ���                                   " << endl;
																			cout << "                                                                                                                               " << endl;
																			cout << "                                                                                                                               " << endl;

																			cout << "!!����Ŀ�� ü���� " << currentBerserkerhp << "��(��) �Ǿ����ϴ�!!." << endl;
																			cout << endl;

																			spearManAttack = false;
																			if (currentSpearmanhp == 0)
																			{
																				cout << endl;
																				cout << "����Ŀ�� �������� �¸��Ͽ����ϴ�!!" << endl;
																				cout << endl;
																				cout << "ó������ ���ư��ϴ�!!" << endl;
																				cout << endl;
																				Sleep(2500);//1.5�� ������
																				goto tryAgain;;
																			}
																			else if (currentBerserkerhp == 0)
																			{
																				cout << endl;
																				cout << "â���簡 �������� �¸��Ͽ����ϴ�!!" << endl;
																				cout << endl;
																				cout << "ó������ ���ư��ϴ�!!" << endl;
																				cout << endl;
																				Sleep(2500);//1.5�� ������
																				goto tryAgain;;
																			}
																			else
																			{
																				Totie();
																				Sleep(2500);//1.5�� ������
																				goto tryAgain;
																			}


																		}
																	}

																}
															}
														}

													}
												}
											}


										}


									}
									break;
								}//P1==3�� P2==2 ���� ��.

							}//end of while 1,//P1 == 3�� P2 == 2 ���� �ݺ�

						}//end of while 1,//P1 == 3�� P2 == 1 ���� �ݺ�

					}//end of while 1,//P1 == 2�� P2 == 1 ���� �ݺ�

				}//end of while 1,//P1 == 2�� P2 == 3 ���� �ݺ�  

			}//end of while 1,//P1 == 1�� P2 == 3 ���� �ݺ�  

		}//end of while 1,//P1 == 1�� P2 == 2 ���� �ݺ�  

	return 0;
}


