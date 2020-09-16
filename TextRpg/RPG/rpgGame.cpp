#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;
//가디언
int guardianChoice = 1;
int guardianHp=100;
int currentGuardianhp;
int guardianDamage;
bool guardianAttack=false;
int G_Skill_1=0;
int G_Skill_2=40;
//창술사
int spearmanChoice = 2;
int spearManHp=80;
int currentSpearmanhp;
int spearManDamage;
bool spearManAttack=false;
int S_Skill_1=20;
int S_Skill_2=40;
//버서커
int berserkerChoice = 3;
int berserkerHp=60;
int currentBerserkerhp;
int berserkerDamage;
bool berserkerAttack=false;
int B_Skill_1=35;
int B_Skill_2=55;

//기타 변수
int choice1;
int choice2;

void fix() //체력이 음수값으로 떨어지지 않게 막는 함수.
{
	if (currentGuardianhp < 0) currentGuardianhp=0;
	if (currentSpearmanhp < 0) currentSpearmanhp=0;
	if (currentBerserkerhp < 0) currentBerserkerhp=0;
	
}

bool Totie() //마지막 라운드 마지막 턴에 비겼을 경우 사용하는 함수 
{
	if (currentGuardianhp != currentSpearmanhp)
	{
		cout << endl;
		cout << "비겼습니다 ㅠㅠ.. 처음으로 돌아갑니다!" << endl;
		cout << endl;
	}
	else if (currentGuardianhp != currentBerserkerhp)
	{
		cout << endl;
		cout << "비겼습니다 ㅠㅠ.. 처음으로 돌아갑니다!" << endl;
		cout << endl;
	}
	else if (currentSpearmanhp != currentBerserkerhp)
	{
		cout << endl;
		cout << "비겼습니다 ㅠㅠ.. 처음으로 돌아갑니다!" << endl;
		cout << endl;
	}
	return 1;
}

int main()
{
	system("title RPG게임");
	system("mode con:lines=40  cols=190");
	tryAgain:
	srand(time(NULL));

	while /*스태이터스*/ (1)
	{


		cout <<"    <턴제 RPG>   "<<endl;

		cout << endl; cout << endl;
		cout << "                                  ■■■■■■                            ■        ■■■■■■                            ■■■           ■■■■■■                           " << endl;
		cout << "                                  ■■■■■■                          ■  ■      ■■■■■■                          ■■    ■■       ■■■■■■                            " << endl;
		cout << "                                  ■■■■■■                        ■ <창> ■    ■■■■■■                          ■■     ■■      ■■■■■■                            " << endl;
		cout << "                                  ■■■■■■                           ■■      ■■■■■■                           ■■     ■■     ■■■■■■                             " << endl;
		cout << "                                     ■■                                ■■        ■■                                ■■ <검> ■■        ■■                                 " << endl;
		cout << "         ●●●●●●           ■■■■■■■■■■■■                 ■■  ■■■■■■■■■■■■                   ■■     ■■ ■■■■■■■■■■■■                       " << endl;
		cout << "      ●●         ●●      ■     ■■■■■■  ■■                  ■■■   ■■■■■■■    ■■                  ■■     ■■  ■   ■■■■■■■  ■■                     " << endl;
		cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                   ■■      ■■■■■■    ■■                  ■■     ■■ ■    ■■■■■■    ■■                    " << endl;
		cout << "      ●●         ●●            ■■■■■■  ■■                    ■■      ■■■■■■    ■■             ■■■■■■■■■■■   ■■■■■■   ■■                     " << endl;
		cout << "        ●●●●●●                ■■■■■■                         ■■      ■■■■■■                        ■■■■■■■■■     ■■■■■■                            " << endl;
		cout << "                                 ■■■■■■                            ■■      ■■■■■■                              ■■               ■■■■■■                        " << endl;
		cout << "                                 ■■   ■■                             ■■      ■■    ■■                              ■■               ■■   ■■                       " << endl;
		cout << "                                 ■■   ■■                             ■■      ■■    ■■                                                 ■■   ■■                      " << endl;
		cout << "                                 ■■   ■■                             ■■      ■■    ■■                                                 ■■   ■■                      " << endl;
		cout << "                                     ①                                               ②                                                          ③                         " << endl;



		           


		Sleep(700);
		cout << "캐릭터를 고르세요! 1번 == 가디언 ,2번 ==창술사 , 3번 == 버서커" << endl;
		cout << "같은 캐릭터를 고르시면 안됩니다!!" << endl;
		cout << "모든캐릭터의 기본 데미지는 10~15 사이의 데미지를 입힙니다." << endl;
		cout << endl;
		cout << "================<가디언 스태이터스>===================" << endl;
		cout << "=================체력 : 100===========================" << endl;
		cout << "=====================<스킬>===========================" << endl;
		cout << "==가드: 공격을 1회 방어해준다.(3Round에 발동)==" << endl;
		cout << "==방패던지기: 50의 데미지를 준다.(5Round에 발동)==" << endl;
		cout << endl; cout << endl;
		cout << "================<창술사 스태이터스>===================" << endl;
		cout << "==================체력 : 80===========================" << endl;
		cout << "=====================<스킬>===========================" << endl;
		cout << "==찌르기: 창으로 찌르며 20의 데미지를 준다.(3Round에 발동)==" << endl;
		cout << "==강타: 40의 데미지로 측면을 공격한다.(5Round에 발동)==" << endl;
		cout << endl; cout << endl;
		cout << "================<버서커 스태이터스>==================" << endl;
		cout << "====================체력 : 60========================" << endl;
		cout << "=====================<스킬>==========================" << endl;
		cout << "==내려찍기: 내려찍는 공격으로 35의 데미지를준다.(3Round에 발동)==" << endl;
		cout << "==급소타격: 크게 휘두르며 55의 데미지를 준다.(5Round에 발동)==" << endl;

		cout << "Player 1 :";
		cin >> choice1;
		cout << "Player 2 :";
		cin >> choice2;

		if ((choice1 == choice2)|| (choice1 < 1 || choice1>3) || (choice2 < 1 || choice2>3)||(choice1<1 ||choice2<1)|| (choice1>3) || (choice2>3))
		{
			cout << endl; cout << endl; cout << endl;
			cout << "   !!!!!잘못눌렀습니다!!!!!" << endl;
			cout << "!!!!!캐릭터를 다시 고르세요!!!!!" << endl;
			Sleep(2500);
			cout << endl; cout << endl;
			continue;
		}
		
		else
		{
			break;
		}

	}//end of while (true) main.


	
		while/*P1 == 1과 P2 == 2*/ (1) //P1 == 1과 P2 == 2 전투 반복
		{
			guardianDamage = rand() % 6 + 10;
			spearManDamage = rand() % 6 + 10;

			if (choice1 == 1 && choice2 == 2) // P1은 가디언 P2는 창술사 ,P1==1과 P2==2 전투 시작.
			{
				//가디언 기본상태
				cout << "                                    <1P>                                                         " << endl;
				cout << "                                  ■■■■■■                                                                   " << endl;
				cout << "                                  ■■■■■■                                                            " << endl;
				cout << "                                  ■■■■■■                                                            " << endl;
				cout << "                                  ■■■■■■                                         " << endl;
				cout << "                                     ■■                                             " << endl;
				cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
				cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
				cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
				cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
				cout << "        ●●●●●●                ■■■■■■                                       " << endl;
				cout << "                                 ■■■■■■                                          " << endl;
				cout << "                                 ■■   ■■                                     " << endl;
				cout << "                                 ■■   ■■                                     " << endl;
				cout << "                                 ■■   ■■                                     " << endl;
				cout << "                                                                                                                               " << endl;
				cout << "                                                                                                                               " << endl;

				//창술사 기본상태
				cout << "                                    <2P>                                                                                       " << endl;
				cout << "                           ■        ■■■■■■                                             " << endl;
				cout << "                         ■  ■      ■■■■■■                                              " << endl;
				cout << "                       ■ <창> ■    ■■■■■■                                             " << endl;
				cout << "                          ■■      ■■■■■■■                                             " << endl;
				cout << "                          ■■         ■■                                                  " << endl;
				cout << "                          ■■  ■■■■■■■■■■■■                                        " << endl;
				cout << "                          ■■■   ■■■■■■■    ■■                                       " << endl;
				cout << "                          ■■      ■■■■■■    ■■                                     " << endl;
				cout << "                          ■■      ■■■■■■    ■■                                     " << endl;
				cout << "                          ■■      ■■■■■■                                            " << endl;
				cout << "                          ■■      ■■■■■■                                            " << endl;
				cout << "                          ■■      ■■    ■■                                           " << endl;
				cout << "                          ■■      ■■    ■■                                           " << endl;
				cout << "                          ■■      ■■    ■■                                           " << endl;
				cout << "                                                                                                                               " << endl;
				cout << "                                                                                                                               " << endl;
				

				
			

				                                            

				

				cout << "전투를 시작 합니다!!" << endl;


				if (!guardianAttack)//첫번째 턴1 , 가디언 공격
				{
					Sleep(2500);//1.5초 딜레이
					cout << endl;
					cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
					cout << "=============  <Round 1-1>  ==============" << endl;
					cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
					Sleep(2500); //1.5초 딜레이

					cout << "                                    <1P>                                                         " << endl;
					cout << "                                  ■■■■■■                                                                   " << endl;
					cout << "                                  ■■■■■■                 ※※※※※※                                             " << endl;
					cout << "                                  ■■■■■■               ※※<Attack>※※                                               " << endl;
					cout << "                                  ■■■■■■                 ※※※※※※                          " << endl;
					cout << "                                     ■■                                             " << endl;
					cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
					cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
					cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
					cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
					cout << "        ●●●●●●                ■■■■■■                                       " << endl;
					cout << "                                 ■■■■■■                                          " << endl;
					cout << "                                 ■■   ■■                                     " << endl;
					cout << "                                 ■■   ■■                                     " << endl;
					cout << "                                 ■■   ■■                                     " << endl;
					cout << "                                    1P                                                                                        " << endl;
					cout << "                                                                                                                               " << endl;


					cout << "가디언이 창술사를 공격합니다" << endl;
					Sleep(2500); //1.5초 딜레이
					currentSpearmanhp = spearManHp -= guardianDamage;//최초 체력에서 상대 데미지를 감소시키고 그 값을 현재 체력에 대입.

					//창술사 맞은상태
					cout << "                                    <2P>                                                                                       " << endl;
					cout << "                          ■        ■■■■■■                                             " << endl;
					cout << "                        ■  ■      ■<■■■■                                              " << endl;
					cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
					cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
					cout << "                         ■■         ■■                                                  " << endl;
					cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
					cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
					cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
					cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
					cout << "                         ■■      ■■■■■■                                            " << endl;
					cout << "                         ■■      ■■■■■■                                            " << endl;
					cout << "                         ■■      ■■    ■■                                           " << endl;
					cout << "                         ■■      ■■    ■■                                           " << endl;
					cout << "                         ■■      ■■    ■■                                           " << endl;
					cout << "                                                                                                                               " << endl;
					cout << "                                                                                                                               " << endl;

					cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
					cout << endl;
					
					guardianAttack = false;

					if (!spearManAttack)//첫번째 턴2,스피어맨 공격
					{
						Sleep(2500);//1.5초 딜레이
						cout << endl;
						cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
						cout << "=============  <Round 1-2>  ==============" << endl;
						cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
						Sleep(2500); //1.5초 딜레이

						//창술사 공격상태
						cout << "                                    <2P>                                                                                       " << endl;
						cout << "                          ■        ■■■■■■                                             " << endl;
						cout << "                        ■  ■      ■■■■■■               ※※※※※※                                " << endl;
						cout << "                      ■ <창> ■    ■■■■■■            ※※<Attack>※※                                 " << endl;
						cout << "                         ■■      ■■■■■■■              ※※※※※※                               " << endl;
						cout << "                         ■■         ■■                                                  " << endl;
						cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
						cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
						cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
						cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
						cout << "                         ■■      ■■■■■■                                            " << endl;
						cout << "                         ■■      ■■■■■■                                            " << endl;
						cout << "                         ■■      ■■    ■■                                           " << endl;
						cout << "                         ■■      ■■    ■■                                           " << endl;
						cout << "                         ■■      ■■    ■■                                           " << endl;
						cout << "                                                                                                                               " << endl;
						cout << "                                                                                                                               " << endl;

						cout << "창술사가 가디언을 공격합니다" << endl;
						Sleep(2500); //1.5초 딜레이
						currentGuardianhp = guardianHp -= spearManDamage;

						//가디언 맞은 상태
						cout << "                                    <1P>                                                                                       " << endl;
						cout << "                                  ■■■■■■                                                                   " << endl;
						cout << "                                  ■<<■■■                                                              " << endl;
						cout << "                                  ■■■■■■                                                              " << endl;
						cout << "                                  ■ㅡㅡ■■■                                           " << endl;
						cout << "                                     ■■                                             " << endl;
						cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
						cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
						cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
						cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
						cout << "        ●●●●●●                ■■■■■■                                       " << endl;
						cout << "                                 ■■■■■■                                          " << endl;
						cout << "                                 ■■   ■■                                     " << endl;
						cout << "                                 ■■   ■■                                     " << endl;
						cout << "                                 ■■   ■■                                     " << endl;
						cout << "                                                                                                                               " << endl;
						cout << "                                                                                                                               " << endl;

						cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
						cout << endl;

						spearManAttack = false;

						if (!guardianAttack)//두번째 턴1 , 가디언 공격
						{
							Sleep(2500);//1.5초 딜레이
							cout << endl;
							cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
							cout << "=============  <Round 2-1>  ==============" << endl;
							cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
							Sleep(2500); //1.5초 딜레이

							cout << "                                    <1P>                                                         " << endl;
							cout << "                                  ■■■■■■                                                                   " << endl;
							cout << "                                  ■■■■■■                 ※※※※※※                                             " << endl;
							cout << "                                  ■■■■■■               ※※<Attack>※※                                               " << endl;
							cout << "                                  ■■■■■■                 ※※※※※※                          " << endl;
							cout << "                                     ■■                                             " << endl;
							cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
							cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
							cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
							cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
							cout << "        ●●●●●●                ■■■■■■                                       " << endl;
							cout << "                                 ■■■■■■                                          " << endl;
							cout << "                                 ■■   ■■                                     " << endl;
							cout << "                                 ■■   ■■                                     " << endl;
							cout << "                                 ■■   ■■                                     " << endl;
							cout << "                                    1P                                                                                        " << endl;
							cout << "                                                                                                                               " << endl;

							cout << "가디언이 창술사를 공격합니다" << endl;
							Sleep(2500); //1.5초 딜레이
							currentSpearmanhp = currentSpearmanhp -= guardianDamage;

							//창술사 맞은상태
							cout << "                                    <2P>                                                                                       " << endl;
							cout << "                          ■        ■■■■■■                                             " << endl;
							cout << "                        ■  ■      ■<■■■■                                              " << endl;
							cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
							cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
							cout << "                         ■■         ■■                                                  " << endl;
							cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
							cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
							cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
							cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
							cout << "                         ■■      ■■■■■■                                            " << endl;
							cout << "                         ■■      ■■■■■■                                            " << endl;
							cout << "                         ■■      ■■    ■■                                           " << endl;
							cout << "                         ■■      ■■    ■■                                           " << endl;
							cout << "                         ■■      ■■    ■■                                           " << endl;
							cout << "                                                                                                                               " << endl;
							cout << "                                                                                                                               " << endl;

							cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
							cout << endl;

							guardianAttack = false;

							if (!spearManAttack)//두번째 턴2 , 스피어맨 공격
							{
								Sleep(2500);//1.5초 딜레이
								cout << endl;
								cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
								cout << "=============  <Round 2-2>  ==============" << endl;
								cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
								Sleep(2500); //1.5초 딜레이

									//창술사 공격상태
								cout << "                                    <2P>                                                                                       " << endl;
								cout << "                          ■        ■■■■■■                                             " << endl;
								cout << "                        ■  ■      ■■■■■■               ※※※※※※                                " << endl;
								cout << "                      ■ <창> ■    ■■■■■■            ※※<Attack>※※                                 " << endl;
								cout << "                         ■■      ■■■■■■■              ※※※※※※                               " << endl;
								cout << "                         ■■         ■■                                                  " << endl;
								cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
								cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
								cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
								cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
								cout << "                         ■■      ■■■■■■                                            " << endl;
								cout << "                         ■■      ■■■■■■                                            " << endl;
								cout << "                         ■■      ■■    ■■                                           " << endl;
								cout << "                         ■■      ■■    ■■                                           " << endl;
								cout << "                         ■■      ■■    ■■                                           " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								cout << "창술사가 가디언을 공격합니다" << endl;
								Sleep(2500); //1.5초 딜레이
								currentGuardianhp = currentGuardianhp -= spearManDamage;

								//가디언 맞은 상태
								cout << "                                    <1P>                                                                                       " << endl;
								cout << "                                  ■■■■■■                                                                   " << endl;
								cout << "                                  ■<<■■■                                                              " << endl;
								cout << "                                  ■■■■■■                                                              " << endl;
								cout << "                                  ■ㅡㅡ■■■                                           " << endl;
								cout << "                                     ■■                                             " << endl;
								cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
								cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
								cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
								cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
								cout << "        ●●●●●●                ■■■■■■                                       " << endl;
								cout << "                                 ■■■■■■                                          " << endl;
								cout << "                                 ■■   ■■                                     " << endl;
								cout << "                                 ■■   ■■                                     " << endl;
								cout << "                                 ■■   ■■                                     " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
								cout << endl;

								spearManAttack = false;
								
								if (!guardianAttack)//세번째 턴1 ,가디언 공격
								{
									Sleep(2500);//1.5초 딜레이
									cout << endl;
									cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
									cout << "=============  <Round 3-1>  ==============" << endl;
									cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
									Sleep(2500); //1.5초 딜레이
									cout << "!!*가디언이 가드스킬을 사용합니다*!!" << endl;
									cout << "!!*      공격을 1회 방어합니다   *!!" << endl;

									//가디언 가드 상태
									cout << "                                    <1P>                                                                                       " << endl;
									cout << "                                  ■■■■■■                                                                   " << endl;
									cout << "                                  ■■■■■■                 !※※※※※※!                                             " << endl;
									cout << "                                  ■■■■■■               !※※<Guard>※※!                                               " << endl;
									cout << "                                  ■■■■■■                 !※※※※※※!                          " << endl;
									cout << "                                     ■■                                             " << endl;
									cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
									cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
									cout << "     ●     <방패>     ● ■■      ■■■■■■  ■                                     " << endl;
									cout << "      ●●         ●●■■■■■■■■■■■■■■                                                    " << endl;
									cout << "        ●●●●●●                ■■■■■■                                       " << endl;
									cout << "                                 ■■■■■■                                          " << endl;
									cout << "                                  ■■   ■■                                     " << endl;
									cout << "                               ■■   ■■                                     " << endl;
									cout << "                             ■■   ■■                                     " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;

									Sleep(2500); //1.5초 딜레이
									cout << "가디언이 1턴 가드상태이(가) 되었습니다." << endl;
									Sleep(2500);//1.5초 딜레이
									currentSpearmanhp = currentSpearmanhp - G_Skill_1;//가디언이 가드 스킬을 사용했으므로 가디언의 현재 체력에 가디언의 가드 스킬값을 빼준다.
									currentGuardianhp = currentGuardianhp + G_Skill_1; //가디언이 가드스킬을 사용했으므로 가디언의 현재 체력에 가디언의 가드 스킬 값을 더해준다. 
									fix();

									//창술사 기본상태
									cout << "                                    <2P>                                                                                       " << endl;
									cout << "                           ■        ■■■■■■                                             " << endl;
									cout << "                         ■  ■      ■■■■■■                                              " << endl;
									cout << "                       ■ <창> ■    ■■■■■■                                             " << endl;
									cout << "                          ■■      ■■■■■■■                                             " << endl;
									cout << "                          ■■         ■■                                                  " << endl;
									cout << "                          ■■  ■■■■■■■■■■■■                                        " << endl;
									cout << "                          ■■■   ■■■■■■■    ■■                                       " << endl;
									cout << "                          ■■      ■■■■■■    ■■                                     " << endl;
									cout << "                          ■■      ■■■■■■    ■■                                     " << endl;
									cout << "                          ■■      ■■■■■■                                            " << endl;
									cout << "                          ■■      ■■■■■■                                            " << endl;
									cout << "                          ■■      ■■    ■■                                           " << endl;
									cout << "                          ■■      ■■    ■■                                           " << endl;
									cout << "                          ■■      ■■    ■■                                           " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;


									cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
									cout << endl;
									
									guardianAttack = false;

									if (currentGuardianhp == 0)
									{
										cout << endl;
										cout << "창술사가 전투에서 승리하였습니다!!" << endl;
										cout << endl;
										cout << "처음으로 돌아갑니다!!" << endl;
										cout << endl;
										Sleep(1700);//1.5초 딜레이
										goto tryAgain;
									}
									else if (currentSpearmanhp == 0)
									{
										cout << endl;
										cout << "가디언이 전투에서 승리하였습니다!!" << endl;
										cout << endl;
										cout << "처음으로 돌아갑니다!!" << endl;
										cout << endl;
										Sleep(2500);//1.5초 딜레이
										goto tryAgain;
									}
									
									if (!spearManAttack)//세번째 턴2 , 스피어맨 공격
									{
										Sleep(2500);//1.5초 딜레이
										cout << endl;
										cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
										cout << "=============  <Round 3-2>  ==============" << endl;
										cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
										Sleep(2500); //1.5초 딜레이


	//창술사 찌르기
										cout << "                                    <2P>                                                                                       " << endl;
										cout << "                                ■■■■■■                                             " << endl;
										cout << "                                  ■■■■■■                                              " << endl;
										cout << "                                    ■■■■■■                                             " << endl;
										cout << "                                     ■■■■■■■                                             " << endl;
										cout << "             ~~~~~~~~~~~                ■■                                                  " << endl;
										cout << "         ~~~~~~~~~~~  ■        ■■  ■■■■■■■■■■■■                                        " << endl;
										cout << "     ~~~~~~~~~~~   ■    ■       ■■■   ■■■■■■■    ■■                                       " << endl;
										cout << " ~~~~~~~~~~~    ■  <창>  ■■■■■■■■ ■     ■■■■■■ ■                                     " << endl;
										cout << "     ~~~~~~~~~~~    ■    ■■■■■■■■■■■■■■■■■■                                       " << endl;
										cout << "         ~~~~~~~~~~~  ■                        ■■■■■■                                            " << endl;
										cout << "             ~~~~~~~~~~~                       ■■■■■■                                            " << endl;
										cout << "                                                    ■■    ■■                                           " << endl;
										cout << "                                                       ■■    ■■                                           " << endl;
										cout << "                                                          ■■    ■■                                           " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "!!*창술사가 찌르기 스킬을 사용합니다*!!" << endl;
										currentGuardianhp = currentGuardianhp - S_Skill_1; //가디언의 현재 체력에서 스피어맨 찌르기 스킬 데미지값을 빼준다.
										Sleep(2500); //1.5초 딜레이

										//가디언 가드 상태
										cout << "                                    <1P>                                                                                       " << endl;
										cout << "                                  ■■■■■■                                                                   " << endl;
										cout << "                                  ■■■■■■                 !※※※※※※!                                             " << endl;
										cout << "                                  ■■■■■■               !※※<Guard>※※!                                               " << endl;
										cout << "                                  ■■■■■■                 !※※※※※※!                          " << endl;
										cout << "                                     ■■                                             " << endl;
										cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
										cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
										cout << "     ●     <방패>     ● ■■      ■■■■■■  ■                                     " << endl;
										cout << "      ●●         ●●■■■■■■■■■■■■■■                                                    " << endl;
										cout << "        ●●●●●●                ■■■■■■                                       " << endl;
										cout << "                                 ■■■■■■                                          " << endl;
										cout << "                                  ■■   ■■                                     " << endl;
										cout << "                               ■■   ■■                                     " << endl;
										cout << "                             ■■   ■■                                     " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "*하지만 가디언의 가드 스킬로 인해 데미지가 무시되었습니다*!!" << endl;
										currentGuardianhp = currentGuardianhp + S_Skill_1; //스피어맨의 데미지가 무시되었으니 스피어맨 찌르기 스킬 데미지 만큼 다시 더해준다.
										fix();



										cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
										cout << endl;
										
										spearManAttack = false;

										if (currentGuardianhp == 0)
										{
											cout << "창술사가 전투에서 승리하였습니다!!" << endl;
											cout << endl;
											cout << "처음으로 돌아갑니다!!" << endl;
											cout << endl;
											Sleep(2500);//1.5초 딜레이
											goto tryAgain;
										}
										else if (currentSpearmanhp == 0)
										{
											cout << endl;
											cout << "가디언이 전투에서 승리하였습니다!!" << endl;
											cout << endl;
											cout << "처음으로 돌아갑니다!!" << endl;
											cout << endl;
											Sleep(2500);//1.5초 딜레이
											goto tryAgain;
										}



										if (!guardianAttack)//네번째 턴1 , 가디언 공격
										{
											Sleep(2500);//1.5초 딜레이
											cout << endl;
											cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
											cout << "=============  <Round 4-1>  ==============" << endl;
											cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
											Sleep(2500); //1.5초 딜레이

											//가디언 공격상태
											cout << "                                    <1P>                                                                                       " << endl;
											cout << "                                  ■■■■■■                                                                   " << endl;
											cout << "                                  ■■■■■■                 ※※※※※※                                             " << endl;
											cout << "                                  ■■■■■■               ※※<Attack>※※                                               " << endl;
											cout << "                                  ■■■■■■                 ※※※※※※                          " << endl;
											cout << "                                     ■■                                             " << endl;
											cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
											cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
											cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
											cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
											cout << "        ●●●●●●                ■■■■■■                                       " << endl;
											cout << "                                 ■■■■■■                                          " << endl;
											cout << "                                 ■■   ■■                                     " << endl;
											cout << "                                 ■■   ■■                                     " << endl;
											cout << "                                 ■■   ■■                                     " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "가디언이 창술사를 공격합니다" << endl;
											Sleep(2500); //1.5초 딜레이
											currentSpearmanhp = currentSpearmanhp -= guardianDamage;
											fix();

											//창술사 맞은상태
											cout << "                                    <2P>                                                                                       " << endl;
											cout << "                          ■        ■■■■■■                                             " << endl;
											cout << "                        ■  ■      ■<■■■■                                              " << endl;
											cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
											cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
											cout << "                         ■■         ■■                                                  " << endl;
											cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
											cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
											cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
											cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
											cout << "                         ■■      ■■■■■■                                            " << endl;
											cout << "                         ■■      ■■■■■■                                            " << endl;
											cout << "                         ■■      ■■    ■■                                           " << endl;
											cout << "                         ■■      ■■    ■■                                           " << endl;
											cout << "                         ■■      ■■    ■■                                           " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
											cout << endl;
											
											guardianAttack = false;
											if (currentGuardianhp == 0)
											{
												cout << endl;
												cout << "창술사가 전투에서 승리하였습니다!!" << endl;
												cout << endl;
												cout << "처음으로 돌아갑니다!!" << endl;
												cout << endl;
												Sleep(2500);//1.5초 딜레이
												goto tryAgain;
											}
											else if (currentSpearmanhp == 0)
											{
												cout << endl;
												cout << "가디언이 전투에서 승리하였습니다!!" << endl;
												cout << endl;
												cout << "처음으로 돌아갑니다!!" << endl;
												cout << endl;
												Sleep(2500);//1.5초 딜레이
												goto tryAgain;
											}


											if (!spearManAttack)//네번째 턴2 , 스피어맨 공격
											{
												Sleep(2500);//1.5초 딜레이
												cout << endl;
												cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
												cout << "=============  <Round 4-2>  ==============" << endl;
												cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
												Sleep(2500); //1.5초 딜레이

												//창술사 공격상태
												cout << "                                    <2P>                                                                                       " << endl;
												cout << "                          ■        ■■■■■■                                             " << endl;
												cout << "                        ■  ■      ■■■■■■               ※※※※※※                                " << endl;
												cout << "                      ■ <창> ■    ■■■■■■            ※※<Attack>※※                                 " << endl;
												cout << "                         ■■      ■■■■■■■              ※※※※※※                               " << endl;
												cout << "                         ■■         ■■                                                  " << endl;
												cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
												cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
												cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
												cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
												cout << "                         ■■      ■■■■■■                                            " << endl;
												cout << "                         ■■      ■■■■■■                                            " << endl;
												cout << "                         ■■      ■■    ■■                                           " << endl;
												cout << "                         ■■      ■■    ■■                                           " << endl;
												cout << "                         ■■      ■■    ■■                                           " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "창술사가 가디언을 공격합니다" << endl;
												Sleep(2500); //1.5초 딜레이
												currentGuardianhp = currentGuardianhp -= spearManDamage;
												fix();

												//가디언 맞은 상태
												cout << "                                    <1P>                                                                                       " << endl;
												cout << "                                  ■■■■■■                                                                   " << endl;
												cout << "                                  ■<<■■■                                                              " << endl;
												cout << "                                  ■■■■■■                                                              " << endl;
												cout << "                                  ■ㅡㅡ■■■                                           " << endl;
												cout << "                                     ■■                                             " << endl;
												cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
												cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
												cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
												cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
												cout << "        ●●●●●●                ■■■■■■                                       " << endl;
												cout << "                                 ■■■■■■                                          " << endl;
												cout << "                                 ■■   ■■                                     " << endl;
												cout << "                                 ■■   ■■                                     " << endl;
												cout << "                                 ■■   ■■                                     " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
												cout << endl;
												
												spearManAttack = false;
												if (currentGuardianhp == 0)
												{
													cout << endl;
													cout << "창술사가 전투에서 승리하였습니다!!" << endl;
													cout << endl;
													cout << "처음으로 돌아갑니다!!" << endl;
													cout << endl;
													Sleep(2500);//1.5초 딜레이
													goto tryAgain;
												}
												else if (currentSpearmanhp == 0)
												{
													cout << endl;
													cout << "가디언이 전투에서 승리하였습니다!!" << endl;
													cout << endl;
													cout << "처음으로 돌아갑니다!!" << endl;
													cout << endl;
													Sleep(2500);//1.5초 딜레이
													goto tryAgain;
												}


												if (!guardianAttack)//마지막 턴1 , 가디언 공격
												{
													Sleep(2500);//1.5초 딜레이
													cout << endl;
													cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
													cout << "=============  <Round 5-1>  ==============" << endl;
													cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
													Sleep(1700);
													cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
													cout << "===========!!Warning!!============" << endl;
													cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
													Sleep(2500); //1.5초 딜레이

													//가디언 방패던지기
													cout << "                                    <1P>                                                                                       " << endl;
													cout << "                                     ■■■■■■                                                                   " << endl;
													cout << "                                    ■■■■■■                                                            " << endl;
													cout << "                                   ■■■■■■                                                            " << endl;
													cout << "                                  ■■■■■■                                         " << endl;
													cout << "        ~~~~~~~~~~~~~~                ■■                                             " << endl;
													cout << "   ~~~~~ ●●●●●● ~~~~~~       ■■■■■■■■■■■■                                        " << endl;
													cout << "   ~~~●●         ●●~~~      ■  ■   ■■■■■■                                           " << endl;
													cout << "   ~ ●     <방패>    ●~ ■■■   ■   ■■■■■■                                       " << endl;
													cout << "   ~~~●●         ●●~~~  ■■■■   ■■■■■■                                                    " << endl;
													cout << "   ~~~~~ ●●●●●●~~~~~~          ■■■■■■                                       " << endl;
													cout << "         ~~~~~~~~~~~~~~          ■■■■■■                                          " << endl;
													cout << "                                   ■■   ■■                                     " << endl;
													cout << "                                       ■■   ■■                                     " << endl;
													cout << "                                           ■■   ■■                                     " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "!!가디언이 방패던지기 스킬을 사용합니다!!" << endl;
													Sleep(2500); //1.5초 딜레이
													currentSpearmanhp = currentSpearmanhp -= G_Skill_2;
													fix();

													//창술사 맞은상태
													cout << "                                    <2P>                                                                                       " << endl;
													cout << "                          ■        ■■■■■■                                             " << endl;
													cout << "                        ■  ■      ■<■■■■                                              " << endl;
													cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
													cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
													cout << "                         ■■         ■■                                                  " << endl;
													cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
													cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
													cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
													cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
													cout << "                         ■■      ■■■■■■                                            " << endl;
													cout << "                         ■■      ■■■■■■                                            " << endl;
													cout << "                         ■■      ■■    ■■                                           " << endl;
													cout << "                         ■■      ■■    ■■                                           " << endl;
													cout << "                         ■■      ■■    ■■                                           " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "!!창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다!!." << endl;
													cout << endl;
													
													guardianAttack = false;
													if (currentGuardianhp == 0)
													{
														cout << endl;
														cout << "창술사가 전투에서 승리하였습니다!!" << endl;
														cout << endl;
														cout << "처음으로 돌아갑니다!!" << endl;
														cout << endl;
														Sleep(2500);//1.5초 딜레이
														goto tryAgain;
													}
													else if (currentSpearmanhp == 0)
													{
														cout << endl;
														cout << "가디언이 전투에서 승리하였습니다!!" << endl;
														cout << endl;
														cout << "처음으로 돌아갑니다!!" << endl;
														cout << endl;
														Sleep(2500);//1.5초 딜레이
														goto tryAgain;
													}


													if (!spearManAttack)//마지막 턴2 , 스피어맨 공격
													{
														Sleep(2500);//1.5초 딜레이
														cout << endl;
														cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
														cout << "=============  <Round 5-2>  ==============" << endl;
														cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
														Sleep(1700);
														cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
														cout << "===========!!Warning!!============" << endl;
														cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
														Sleep(2500); //1.5초 딜레이

														//창술사 강타
														cout << "                                    <2P>                                                                                       " << endl;
														cout << "                      ☆☆                                                                           " << endl;
														cout << "                   ☆☆■☆☆          ■■■■■■                                             " << endl;
														cout << "                ☆☆■   ■☆☆       ■■■■■■                                              " << endl;
														cout << "             ☆☆■ <창>   ■☆☆   ■■■■■■                                             " << endl;
														cout << "                ☆☆ ■■ ☆☆     ■■■■■■■                                             " << endl;
														cout << "                  ■■            ■■                                                  " << endl;
														cout << "               ■■  ■■■■■■■■■■■■                                        " << endl;
														cout << "              ■■■   ■■■■■■■    ■■                                       " << endl;
														cout << "             ■■        ■■■■■■  ■                                     " << endl;
														cout << "            ■■ ■■■■■■■■■■ ■                                     " << endl;
														cout << "           ■■    ■■■■■■                                            " << endl;
														cout << "         ■■    ■■■■■■                                            " << endl;
														cout << "        ■■     ■■    ■■                                           " << endl;
														cout << "       ■■       ■■    ■■                                           " << endl;
														cout << "     ■■          ■■    ■■                                           " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "!!창술사가 강타 스킬을 사용합니다!!" << endl;
														Sleep(2500); //1.5초 딜레이
														currentGuardianhp = currentGuardianhp -= S_Skill_2;
														fix();

														//가디언 맞은 상태
														cout << "                                    <1P>                                                                                       " << endl;
														cout << "                                  ■■■■■■                                                                   " << endl;
														cout << "                                  ■<<■■■                                                              " << endl;
														cout << "                                  ■■■■■■                                                              " << endl;
														cout << "                                  ■ㅡㅡ■■■                                           " << endl;
														cout << "                                     ■■                                             " << endl;
														cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
														cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
														cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
														cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
														cout << "        ●●●●●●                ■■■■■■                                       " << endl;
														cout << "                                 ■■■■■■                                          " << endl;
														cout << "                                 ■■   ■■                                     " << endl;
														cout << "                                 ■■   ■■                                     " << endl;
														cout << "                                 ■■   ■■                                     " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
														cout << endl;
														
														spearManAttack = false;
														if (currentGuardianhp == 0)
														{
															cout << endl;
															cout << "창술사가 전투에서 승리하였습니다!!" << endl;
															cout << endl;
															cout << "처음으로 돌아갑니다!!" << endl;
															cout << endl;
															Sleep(2500);//1.5초 딜레이
															goto tryAgain;
														}
														else if (currentSpearmanhp == 0)
														{
															cout << endl;
															cout << "가디언이 전투에서 승리하였습니다!!" << endl;
															cout << endl;
															cout << "처음으로 돌아갑니다!!" << endl;
															cout << endl;
															Sleep(2500);//1.5초 딜레이
															break;
														}
														else
														{
															Totie();
															Sleep(2500);//1.5초 딜레이
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
			}//P1==1과 P2==2 전투 끝.

			while/*P1 == 1과 P2 == 3*/ (1) //P1 == 1과 P2 == 3 전투 반복
			{

				guardianDamage = rand() % 6 + 10;
				berserkerDamage = rand() % 6 + 10;

				if (choice1 == 1 && choice2 == 3) // P1은 가디언 P2는 버서커 ,P1==1과 P2==3 전투 시작.
				{

					//가디언 기본상태
					cout << "                                    <1P>                                                                                       " << endl;
					cout << "                                  ■■■■■■                                                                   " << endl;
					cout << "                                  ■■■■■■                                                            " << endl;
					cout << "                                  ■■■■■■                                                            " << endl;
					cout << "                                  ■■■■■■                                         " << endl;
					cout << "                                     ■■                                             " << endl;
					cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
					cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
					cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
					cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
					cout << "        ●●●●●●                ■■■■■■                                       " << endl;
					cout << "                                 ■■■■■■                                          " << endl;
					cout << "                                 ■■   ■■                                     " << endl;
					cout << "                                 ■■   ■■                                     " << endl;
					cout << "                                 ■■   ■■                                     " << endl;
					cout << "                                                                                                                               " << endl;
					cout << "                                                                                                                               " << endl;


					//버서커 기본상태
					cout << "                                    <2P>                                                                                       " << endl;
					cout << "             ■■■                ■■■■■■                                " << endl;
					cout << "          ■■    ■■            ■■■■■■                             " << endl;
					cout << "          ■■     ■■           ■■■■■■                                " << endl;
					cout << "          ■■     ■■           ■■■■■■                                " << endl;
					cout << "          ■■ <검> ■■             ■■                                    " << endl;
					cout << "          ■■     ■■      ■■■■■■■■■■■■                           " << endl;
					cout << "          ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
					cout << "          ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
					cout << "       ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
					cout << "        ■■■■■■■■■          ■■■■■■                                  " << endl;
					cout << "              ■■               ■■■■■■                                  " << endl;
					cout << "              ■■               ■■   ■■                                  " << endl;
					cout << "                                ■■   ■■                                  " << endl;
					cout << "                                ■■   ■■                                   " << endl;
					cout << "                                                                                                                               " << endl;
					cout << "                                                                                                                               " << endl;



					cout << "전투를 시작 합니다!!" << endl;


					if (!guardianAttack)//첫번째 턴1 , 가디언 공격
					{
						Sleep(2500);//1.5초 딜레이
						cout << endl;
						cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
						cout << "=============  <Round 1-1>  ==============" << endl;
						cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
						Sleep(2500); //1.5초 딜레이

						//가디언 공격상태
						cout << "                                    <1P>                                                                                       " << endl;
						cout << "                                  ■■■■■■                                                                   " << endl;
						cout << "                                  ■■■■■■                 ※※※※※※                                             " << endl;
						cout << "                                  ■■■■■■               ※※<Attack>※※                                               " << endl;
						cout << "                                  ■■■■■■                 ※※※※※※                          " << endl;
						cout << "                                     ■■                                             " << endl;
						cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
						cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
						cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
						cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
						cout << "        ●●●●●●                ■■■■■■                                       " << endl;
						cout << "                                 ■■■■■■                                          " << endl;
						cout << "                                 ■■   ■■                                     " << endl;
						cout << "                                 ■■   ■■                                     " << endl;
						cout << "                                 ■■   ■■                                     " << endl;
						cout << "                                                                                                                               " << endl;
						cout << "                                                                                                                               " << endl;

						cout << "가디언이 버서커를 공격합니다" << endl;
						Sleep(2500); //1.5초 딜레이
						currentBerserkerhp = berserkerHp -= guardianDamage;//최초 체력에서 상대 데미지를 감소시키고 그 값을 현재 체력에 대입.

						//버서커 맞은상태
						cout << "                                    <2P>                                                                                       " << endl;
						cout << "                ■■■                ■■■■■■                                " << endl;
						cout << "             ■■    ■■            ■<<■■■                             " << endl;
						cout << "             ■■     ■■           ■■■■■■                                " << endl;
						cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
						cout << "             ■■ <검> ■■             ■■                                    " << endl;
						cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
						cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
						cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
						cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
						cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
						cout << "                 ■■               ■■■■■■                                  " << endl;
						cout << "                 ■■               ■■   ■■                                  " << endl;
						cout << "                                   ■■   ■■                                  " << endl;
						cout << "                                   ■■   ■■                                   " << endl;
						cout << "                                                                                                                               " << endl;
						cout << "                                                                                                                               " << endl;

						cout << "버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다." << endl;
						cout << endl;

						guardianAttack = false;

						if (!berserkerAttack)//첫번째 턴2,버서커 공격
						{
							Sleep(2500);//1.5초 딜레이
							cout << endl;
							cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
							cout << "=============  <Round 1-2>  ==============" << endl;
							cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;

							Sleep(2500); //1.5초 딜레이

							//버서커 공격상태
							cout << "                                    <2P>                                                                                       " << endl;
							cout << "              ■■■                ■■■■■■                                " << endl;
							cout << "           ■■    ■■            ■■■■■■             ※※※※※※                   " << endl;
							cout << "           ■■     ■■           ■■■■■■           ※※<Attack>※※                      " << endl;
							cout << "           ■■     ■■           ■■■■■■             ※※※※※※                   " << endl;
							cout << "           ■■ <검> ■■             ■■                                    " << endl;
							cout << "           ■■     ■■      ■■■■■■■■■■■■                           " << endl;
							cout << "           ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
							cout << "           ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
							cout << "        ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
							cout << "         ■■■■■■■■■          ■■■■■■                                  " << endl;
							cout << "               ■■               ■■■■■■                                  " << endl;
							cout << "               ■■               ■■   ■■                                  " << endl;
							cout << "                                 ■■   ■■                                  " << endl;
							cout << "                                 ■■   ■■                                   " << endl;
							cout << "                                                                                                                               " << endl;
							cout << "                                                                                                                               " << endl;

							cout << "버서커가 가디언을 공격합니다" << endl;
							Sleep(2500); //1.5초 딜레이
							currentGuardianhp = guardianHp -= berserkerDamage;

							//가디언 맞은 상태
							cout << "                                    <1P>                                                                                       " << endl;
							cout << "                                  ■■■■■■                                                                   " << endl;
							cout << "                                  ■<<■■■                                                              " << endl;
							cout << "                                  ■■■■■■                                                              " << endl;
							cout << "                                  ■ㅡㅡ■■■                                           " << endl;
							cout << "                                     ■■                                             " << endl;
							cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
							cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
							cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
							cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
							cout << "        ●●●●●●                ■■■■■■                                       " << endl;
							cout << "                                 ■■■■■■                                          " << endl;
							cout << "                                 ■■   ■■                                     " << endl;
							cout << "                                 ■■   ■■                                     " << endl;
							cout << "                                 ■■   ■■                                     " << endl;
							cout << "                                                                                                                               " << endl;
							cout << "                                                                                                                               " << endl;

							cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
							cout << endl;

							berserkerAttack = false;

							if (!guardianAttack)//두번째 턴1 , 가디언 공격
							{
								Sleep(2500);//1.5초 딜레이
								cout << endl;
								cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
								cout << "=============  <Round 2-1>  ==============" << endl;
								cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
								Sleep(2500); //1.5초 딜레이

								//가디언 공격상태
								cout << "                                    <1P>                                                                                       " << endl;
								cout << "                                  ■■■■■■                                                                   " << endl;
								cout << "                                  ■■■■■■                 ※※※※※※                                             " << endl;
								cout << "                                  ■■■■■■               ※※<Attack>※※                                               " << endl;
								cout << "                                  ■■■■■■                 ※※※※※※                          " << endl;
								cout << "                                     ■■                                             " << endl;
								cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
								cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
								cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
								cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
								cout << "        ●●●●●●                ■■■■■■                                       " << endl;
								cout << "                                 ■■■■■■                                          " << endl;
								cout << "                                 ■■   ■■                                     " << endl;
								cout << "                                 ■■   ■■                                     " << endl;
								cout << "                                 ■■   ■■                                     " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								cout << "가디언이 버서커를 공격합니다" << endl;
								Sleep(2500); //1.5초 딜레이
								currentBerserkerhp = currentBerserkerhp -= guardianDamage;

								//버서커 맞은상태
								cout << "                                    <2P>                                                                                       " << endl;
								cout << "                ■■■                ■■■■■■                                " << endl;
								cout << "             ■■    ■■            ■<<■■■                             " << endl;
								cout << "             ■■     ■■           ■■■■■■                                " << endl;
								cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
								cout << "             ■■ <검> ■■             ■■                                    " << endl;
								cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
								cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
								cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
								cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
								cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
								cout << "                 ■■               ■■■■■■                                  " << endl;
								cout << "                 ■■               ■■   ■■                                  " << endl;
								cout << "                                   ■■   ■■                                  " << endl;
								cout << "                                   ■■   ■■                                   " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								cout << "버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다." << endl;
								cout << endl;

								guardianAttack = false;

								if (!berserkerAttack)//두번째 턴2 , 버서커 공격
								{
									Sleep(2500);//1.5초 딜레이
									cout << endl;
									cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
									cout << "=============  <Round 2-2>  ==============" << endl;
									cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
									Sleep(2500); //1.5초 딜레이

									//버서커 공격상태
									cout << "                                    <2P>                                                                                       " << endl;
									cout << "              ■■■                ■■■■■■                                " << endl;
									cout << "           ■■    ■■            ■■■■■■             ※※※※※※                   " << endl;
									cout << "           ■■     ■■           ■■■■■■           ※※<Attack>※※                      " << endl;
									cout << "           ■■     ■■           ■■■■■■             ※※※※※※                   " << endl;
									cout << "           ■■ <검> ■■             ■■                                    " << endl;
									cout << "           ■■     ■■      ■■■■■■■■■■■■                           " << endl;
									cout << "           ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
									cout << "           ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
									cout << "        ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
									cout << "         ■■■■■■■■■          ■■■■■■                                  " << endl;
									cout << "               ■■               ■■■■■■                                  " << endl;
									cout << "               ■■               ■■   ■■                                  " << endl;
									cout << "                                 ■■   ■■                                  " << endl;
									cout << "                                 ■■   ■■                                   " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;


									cout << "버서커가 가디언을 공격합니다" << endl;
									Sleep(2500); //1.5초 딜레이
									currentGuardianhp = currentGuardianhp -= berserkerDamage;

									//가디언 맞은 상태
									cout << "                                    <1P>                                                                                       " << endl;
									cout << "                                  ■■■■■■                                                                   " << endl;
									cout << "                                  ■<<■■■                                                              " << endl;
									cout << "                                  ■■■■■■                                                              " << endl;
									cout << "                                  ■ㅡㅡ■■■                                           " << endl;
									cout << "                                     ■■                                             " << endl;
									cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
									cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
									cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
									cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
									cout << "        ●●●●●●                ■■■■■■                                       " << endl;
									cout << "                                 ■■■■■■                                          " << endl;
									cout << "                                 ■■   ■■                                     " << endl;
									cout << "                                 ■■   ■■                                     " << endl;
									cout << "                                 ■■   ■■                                     " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;


									cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
									cout << endl;

									berserkerAttack = false;




									if (!guardianAttack)//세번째 턴1 ,가디언 공격
									{
										Sleep(2500);//1.5초 딜레이
										cout << endl;
										cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
										cout << "=============  <Round 3-1>  ==============" << endl;
										cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
										Sleep(2500); //1.5초 딜레이
										cout << "!!*가디언이 가드스킬을 사용합니다*!!" << endl;
										cout << "!!*      공격을 1회 방어합니다   *!!" << endl;

										//가디언 가드 상태
										cout << "                                    <1P>                                                                                       " << endl;
										cout << "                                  ■■■■■■                                                                   " << endl;
										cout << "                                  ■■■■■■                 !※※※※※※!                                             " << endl;
										cout << "                                  ■■■■■■               !※※<Guard>※※!                                               " << endl;
										cout << "                                  ■■■■■■                 !※※※※※※!                          " << endl;
										cout << "                                     ■■                                             " << endl;
										cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
										cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
										cout << "     ●     <방패>     ● ■■      ■■■■■■  ■                                     " << endl;
										cout << "      ●●         ●●■■■■■■■■■■■■■■                                                    " << endl;
										cout << "        ●●●●●●                ■■■■■■                                       " << endl;
										cout << "                                 ■■■■■■                                          " << endl;
										cout << "                                  ■■   ■■                                     " << endl;
										cout << "                               ■■   ■■                                     " << endl;
										cout << "                             ■■   ■■                                     " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										Sleep(2500); //1.5초 딜레이
										cout << "가디언이 1턴 가드상태이(가) 되었습니다." << endl;
										Sleep(2500);//1.5초 딜레이
										currentBerserkerhp = currentBerserkerhp - G_Skill_1;//가디언이 가드 스킬을 사용했으므로 가디언의 현재 체력에 가디언의 가드 스킬값을 빼준다.
										currentGuardianhp = currentGuardianhp + G_Skill_1; //가디언이 가드스킬을 사용했으므로 가디언의 현재 체력에 가디언의 가드 스킬 값을 더해준다. 
										fix();

										//버서커 기본상태
										cout << "                                    <2P>                                                                                       " << endl;
										cout << "             ■■■                ■■■■■■                                " << endl;
										cout << "          ■■    ■■            ■■■■■■                             " << endl;
										cout << "          ■■     ■■           ■■■■■■                                " << endl;
										cout << "          ■■     ■■           ■■■■■■                                " << endl;
										cout << "          ■■ <검> ■■             ■■                                    " << endl;
										cout << "          ■■     ■■      ■■■■■■■■■■■■                           " << endl;
										cout << "          ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
										cout << "          ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
										cout << "       ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
										cout << "        ■■■■■■■■■          ■■■■■■                                  " << endl;
										cout << "              ■■               ■■■■■■                                  " << endl;
										cout << "              ■■               ■■   ■■                                  " << endl;
										cout << "                                ■■   ■■                                  " << endl;
										cout << "                                ■■   ■■                                   " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다." << endl;
										cout << endl;
										
										guardianAttack = false;
										if (currentGuardianhp == 0)
										{
											cout << endl;
											cout << "버서커가 전투에서 승리하였습니다!!" << endl;
											cout << endl;
											cout << "처음으로 돌아갑니다!!" << endl;
											cout << endl;
											Sleep(2500);//1.5초 딜레이
											goto tryAgain;
										}
										else if (currentBerserkerhp == 0)
										{
											cout << endl;
											cout << "가디언이 전투에서 승리하였습니다!!" << endl;
											cout << endl;
											cout << "처음으로 돌아갑니다!!" << endl;
											cout << endl;
											Sleep(2500);//1.5초 딜레이
											goto tryAgain;
										}


										if (!berserkerAttack)//세번째 턴2 , 버서커 공격
										{
											Sleep(2500);//1.5초 딜레이
											cout << endl;
											cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
											cout << "=============  <Round 3-2>  ==============" << endl;
											cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
											Sleep(2500); //1.5초 딜레이

											//버서커 내려찍기
											cout << "                                    <2P>                                                                                       " << endl;
											cout << "                                                                                                                             " << endl;
											cout << "                                                                                                                             " << endl;
											cout << "                /  /                 / /                                                " << endl;
											cout << "              /  /       ■■        / /                                                    " << endl;
											cout << "            /  /    ■■      ■■   / /                                                      " << endl;
											cout << "          /  /      ■■      ■■  / /                                                       " << endl;
											cout << "                    ■■      ■■                                                           " << endl;
											cout << "                    ■■ <검> ■■        ■■■■■■                                " << endl;
											cout << "                    ■■      ■■          ■■■■■■                             " << endl;
											cout << "                    ■■      ■■           ■■■■■■                                " << endl;
											cout << "                    ■■      ■■           ■■■■■■                                " << endl;
											cout << "                  ■■■■■■■■■■          ■■                                    " << endl;
											cout << "                  ■■■■■■■■■■ ■■■■■■■■■■■■                           " << endl;
											cout << "                         ■■  ■   ■      ■■■■■■■                            " << endl;
											cout << "                         ■■■   ■         ■■■■■■                               " << endl;
											cout << "                                            ■■■■■■                                " << endl;
											cout << "                                            ■■■■■■                                  " << endl;
											cout << "                                            ■■■■■■                                  " << endl;
											cout << "                                            ■■   ■■                                  " << endl;
											cout << "                                              ■■   ■■                                  " << endl;
											cout << "                                                ■■   ■■                                   " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "!!*버서커가 내려찍기 스킬을 사용합니다*!!" << endl;
											currentGuardianhp = currentGuardianhp - B_Skill_1; //가디언의 현재 체력에서 버서커의 내려찍기 스킬 데미지값을 빼준다.
											Sleep(2500); //1.5초 딜레이

											//가디언 가드 상태
											cout << "                                    <1P>                                                                                       " << endl;
											cout << "                                  ■■■■■■                                                                   " << endl;
											cout << "                                  ■■■■■■                 !※※※※※※!                                             " << endl;
											cout << "                                  ■■■■■■               !※※<Guard>※※!                                               " << endl;
											cout << "                                  ■■■■■■                 !※※※※※※!                          " << endl;
											cout << "                                     ■■                                             " << endl;
											cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
											cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
											cout << "     ●     <방패>     ● ■■      ■■■■■■  ■                                     " << endl;
											cout << "      ●●         ●●■■■■■■■■■■■■■■                                                    " << endl;
											cout << "        ●●●●●●                ■■■■■■                                       " << endl;
											cout << "                                 ■■■■■■                                          " << endl;
											cout << "                                  ■■   ■■                                     " << endl;
											cout << "                               ■■   ■■                                     " << endl;
											cout << "                             ■■   ■■                                     " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "*하지만 가디언의 가드 스킬로 인해 데미지가 무시되었습니다*!!" << endl;
											currentGuardianhp = currentGuardianhp + B_Skill_1; //버서커의 데미지가 무시되었으니 버서커 찌르기 스킬 데미지 만큼 다시 더해준다.
											fix();

											//가디언 기본상태
											cout << "                                    <1P>                                                                                       " << endl;
											cout << "                                  ■■■■■■                                                                   " << endl;
											cout << "                                  ■■■■■■                                                            " << endl;
											cout << "                                  ■■■■■■                                                            " << endl;
											cout << "                                  ■■■■■■                                         " << endl;
											cout << "                                     ■■                                             " << endl;
											cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
											cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
											cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
											cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
											cout << "        ●●●●●●                ■■■■■■                                       " << endl;
											cout << "                                 ■■■■■■                                          " << endl;
											cout << "                                 ■■   ■■                                     " << endl;
											cout << "                                 ■■   ■■                                     " << endl;
											cout << "                                 ■■   ■■                                     " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
											cout << endl;
										
											berserkerAttack = false;
											if (currentGuardianhp == 0)
											{
												cout << "버서커가 전투에서 승리하였습니다!!" << endl;
												cout << endl;
												cout << "처음으로 돌아갑니다!!" << endl;
												cout << endl;
												Sleep(2500);//1.5초 딜레이
												goto tryAgain;
											}
											else if (currentBerserkerhp == 0)
											{
												cout << endl;
												cout << "가디언이 전투에서 승리하였습니다!!" << endl;
												cout << endl;
												cout << "처음으로 돌아갑니다!!" << endl;
												cout << endl;
												Sleep(2500);//1.5초 딜레이
												goto tryAgain;
											}



											if (!guardianAttack)//네번째 턴1 , 가디언 공격
											{
												Sleep(2500);//1.5초 딜레이
												cout << endl;
												cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
												cout << "=============  <Round 4-1>  ==============" << endl;
												cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
												Sleep(2500); //1.5초 딜레이

												//가디언 공격상태
												cout << "                                    <1P>                                                                                       " << endl;
												cout << "                                  ■■■■■■                                                                   " << endl;
												cout << "                                  ■■■■■■                 ※※※※※※                                             " << endl;
												cout << "                                  ■■■■■■               ※※<Attack>※※                                               " << endl;
												cout << "                                  ■■■■■■                 ※※※※※※                          " << endl;
												cout << "                                     ■■                                             " << endl;
												cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
												cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
												cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
												cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
												cout << "        ●●●●●●                ■■■■■■                                       " << endl;
												cout << "                                 ■■■■■■                                          " << endl;
												cout << "                                 ■■   ■■                                     " << endl;
												cout << "                                 ■■   ■■                                     " << endl;
												cout << "                                 ■■   ■■                                     " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "가디언이 버서커를 공격합니다" << endl;
												Sleep(2500); //1.5초 딜레이
												currentBerserkerhp = currentBerserkerhp -= guardianDamage;
												fix();

												//버서커 맞은상태
												cout << "                                    <2P>                                                                                       " << endl;
												cout << "                ■■■                ■■■■■■                                " << endl;
												cout << "             ■■    ■■            ■<<■■■                             " << endl;
												cout << "             ■■     ■■           ■■■■■■                                " << endl;
												cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
												cout << "             ■■ <검> ■■             ■■                                    " << endl;
												cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
												cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
												cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
												cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
												cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
												cout << "                 ■■               ■■■■■■                                  " << endl;
												cout << "                 ■■               ■■   ■■                                  " << endl;
												cout << "                                   ■■   ■■                                  " << endl;
												cout << "                                   ■■   ■■                                   " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다." << endl;
												cout << endl;
												
												guardianAttack = false;
												if (currentGuardianhp == 0)
												{
													cout << endl;
													cout << "버서커 전투에서 승리하였습니다!!" << endl;
													cout << endl;
													cout << "처음으로 돌아갑니다!!" << endl;
													cout << endl;
													Sleep(2500);//1.5초 딜레이
													goto tryAgain;
												}
												else if (currentBerserkerhp == 0)
												{
													cout << endl;
													cout << "가디언이 전투에서 승리하였습니다!!" << endl;
													cout << endl;
													cout << "처음으로 돌아갑니다!!" << endl;
													cout << endl;
													Sleep(2500);//1.5초 딜레이
													goto tryAgain;
												}


												if (!berserkerAttack)//네번째 턴2 , 버서커 공격
												{
													Sleep(2500);//1.5초 딜레이
													cout << endl;
													cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
													cout << "=============  <Round 4-2>  ==============" << endl;
													cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
													Sleep(2500); //1.5초 딜레이

													//버서커 공격상태
													cout << "                                    <2P>                                                                                       " << endl;
													cout << "              ■■■                ■■■■■■                                " << endl;
													cout << "           ■■    ■■            ■■■■■■             ※※※※※※                   " << endl;
													cout << "           ■■     ■■           ■■■■■■           ※※<Attack>※※                      " << endl;
													cout << "           ■■     ■■           ■■■■■■             ※※※※※※                   " << endl;
													cout << "           ■■ <검> ■■             ■■                                    " << endl;
													cout << "           ■■     ■■      ■■■■■■■■■■■■                           " << endl;
													cout << "           ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
													cout << "           ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
													cout << "        ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
													cout << "         ■■■■■■■■■          ■■■■■■                                  " << endl;
													cout << "               ■■               ■■■■■■                                  " << endl;
													cout << "               ■■               ■■   ■■                                  " << endl;
													cout << "                                 ■■   ■■                                  " << endl;
													cout << "                                 ■■   ■■                                   " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "버서커가 가디언을 공격합니다" << endl;
													Sleep(2500); //1.5초 딜레이
													currentGuardianhp = currentGuardianhp -= berserkerDamage;
													fix();

													//가디언 맞은 상태
													cout << "                                    <1P>                                                                                       " << endl;
													cout << "                                  ■■■■■■                                                                   " << endl;
													cout << "                                  ■<<■■■                                                              " << endl;
													cout << "                                  ■■■■■■                                                              " << endl;
													cout << "                                  ■ㅡㅡ■■■                                           " << endl;
													cout << "                                     ■■                                             " << endl;
													cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
													cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
													cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
													cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
													cout << "        ●●●●●●                ■■■■■■                                       " << endl;
													cout << "                                 ■■■■■■                                          " << endl;
													cout << "                                 ■■   ■■                                     " << endl;
													cout << "                                 ■■   ■■                                     " << endl;
													cout << "                                 ■■   ■■                                     " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
													cout << endl;
												
													berserkerAttack = false;
													if (currentGuardianhp == 0)
													{
														cout << endl;
														cout << "버서커가 전투에서 승리하였습니다!!" << endl;
														cout << endl;
														cout << "처음으로 돌아갑니다!!" << endl;
														cout << endl;
														Sleep(2500);//1.5초 딜레이
														goto tryAgain;
													}
													else if (currentBerserkerhp == 0)
													{
														cout << endl;
														cout << "가디언이 전투에서 승리하였습니다!!" << endl;
														cout << endl;
														cout << "처음으로 돌아갑니다!!" << endl;
														cout << endl;
														Sleep(2500);//1.5초 딜레이
														goto tryAgain;
													}


													if (!guardianAttack)//마지막 턴1 , 가디언 공격
													{
														Sleep(2500);//1.5초 딜레이
														cout << endl;
														cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
														cout << "=============  <Round 5-1>  ==============" << endl;
														cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
														Sleep(1700);
														cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
														cout << "===========!!Warning!!============" << endl;
														cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
														Sleep(2500); //1.5초 딜레이

														//가디언 방패던지기
														cout << "                                    <1P>                                                                                       " << endl;
														cout << "                                     ■■■■■■                                                                   " << endl;
														cout << "                                    ■■■■■■                                                            " << endl;
														cout << "                                   ■■■■■■                                                            " << endl;
														cout << "                                  ■■■■■■                                         " << endl;
														cout << "        ~~~~~~~~~~~~~~                ■■                                             " << endl;
														cout << "   ~~~~~ ●●●●●● ~~~~~~       ■■■■■■■■■■■■                                        " << endl;
														cout << "   ~~~●●         ●●~~~      ■  ■   ■■■■■■                                           " << endl;
														cout << "   ~ ●     <방패>    ●~ ■■■   ■   ■■■■■■                                       " << endl;
														cout << "   ~~~●●         ●●~~~  ■■■■   ■■■■■■                                                    " << endl;
														cout << "   ~~~~~ ●●●●●●~~~~~~          ■■■■■■                                       " << endl;
														cout << "         ~~~~~~~~~~~~~~          ■■■■■■                                          " << endl;
														cout << "                                   ■■   ■■                                     " << endl;
														cout << "                                       ■■   ■■                                     " << endl;
														cout << "                                           ■■   ■■                                     " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "!!가디언이 방패던지기 스킬을 사용합니다!!" << endl;
														Sleep(2500); //1.5초 딜레이
														currentBerserkerhp = currentBerserkerhp -= G_Skill_2;
														fix();

														//버서커 맞은상태
														cout << "                                    <2P>                                                                                       " << endl;
														cout << "                ■■■                ■■■■■■                                " << endl;
														cout << "             ■■    ■■            ■<<■■■                             " << endl;
														cout << "             ■■     ■■           ■■■■■■                                " << endl;
														cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
														cout << "             ■■ <검> ■■             ■■                                    " << endl;
														cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
														cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
														cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
														cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
														cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
														cout << "                 ■■               ■■■■■■                                  " << endl;
														cout << "                 ■■               ■■   ■■                                  " << endl;
														cout << "                                   ■■   ■■                                  " << endl;
														cout << "                                   ■■   ■■                                   " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "!!버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다!!." << endl;
														cout << endl;
													
														guardianAttack = false;
														if (currentGuardianhp == 0)
														{
															cout << endl;
															cout << "버서커가 전투에서 승리하였습니다!!" << endl;
															cout << endl;
															cout << "처음으로 돌아갑니다!!" << endl;
															cout << endl;
															Sleep(2500);//1.5초 딜레이
															goto tryAgain;;
														}
														else if (currentBerserkerhp == 0)
														{
															cout << endl;
															cout << "가디언이 전투에서 승리하였습니다!!" << endl;
															cout << endl;
															cout << "처음으로 돌아갑니다!!" << endl;
															cout << endl;
															Sleep(2500);//1.5초 딜레이
															goto tryAgain;
														}


														if (!berserkerAttack)//마지막 턴2 , 버서커 공격
														{
															Sleep(2500);//1.5초 딜레이
															cout << endl;
															cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
															cout << "=============  <Round 5-2>  ==============" << endl;
															cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
															Sleep(1700);
															cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
															cout << "===========!!Warning!!============" << endl;
															cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
															Sleep(2500); //1.5초 딜레이

															//버서커 급소타격
															cout << "                                    <2P>                                                                                       " << endl;
															cout << "                                                 ■■■■■■                                " << endl;
															cout << "                                                    ■■■■■■                             " << endl;
															cout << "                                                   ■■■■■■                                " << endl;
															cout << "                      <<<<<<<<<<<<<<<<<<<<            ■■■■■■                                " << endl;
															cout << "                 <<<<<<<<<<<<<<<<<<<<                         ■■                                                 " << endl;
															cout << "            <<<<<<<<<<<<<<<<<<<<       ■■■■■■  ■■■■■■■■■■■                          " << endl;
															cout << "       <<<<<<<<<<<<<<<<<<<< /■■■■■■■■■■■■■■  ■ ■  ■■■■■■■                             " << endl;
															cout << "  <<<<<<<<<<<<<<<<<<<<      ■       <검>       ■■■■■ ■ ■    ■■■■■■                               " << endl;
															cout << "       <<<<<<<<<<<<<<<<<<<< ＼■■■■■■■■■■■■■ ■ ■        ■■■■■■                                " << endl;
															cout << "             <<<<<<<<<<<<<<<<<<<<      ■■■■■■             ■■■■■■                                  " << endl;
															cout << "                 <<<<<<<<<<<<<<<<<<<<                           ■■■■■■                                  " << endl;
															cout << "                      <<<<<<<<<<<<<<<<<<<<                    ■■   ■■                                  " << endl;
															cout << "                                                                ■■   ■■                                  " << endl;
															cout << "                                                               ■■   ■■                                   " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "!!버서커가 급소타격 스킬을 사용합니다!!" << endl;
															Sleep(2500); //1.5초 딜레이
															currentGuardianhp = currentGuardianhp -= B_Skill_2;
															fix();

															//가디언 맞은 상태
															cout << "                                    <1P>                                                                                       " << endl;
															cout << "                                  ■■■■■■                                                                   " << endl;
															cout << "                                  ■<<■■■                                                              " << endl;
															cout << "                                  ■■■■■■                                                              " << endl;
															cout << "                                  ■ㅡㅡ■■■                                           " << endl;
															cout << "                                     ■■                                             " << endl;
															cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
															cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
															cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
															cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
															cout << "        ●●●●●●                ■■■■■■                                       " << endl;
															cout << "                                 ■■■■■■                                          " << endl;
															cout << "                                 ■■   ■■                                     " << endl;
															cout << "                                 ■■   ■■                                     " << endl;
															cout << "                                 ■■   ■■                                     " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
															cout << endl;
														
															berserkerAttack = false;
															if (currentGuardianhp == 0)
															{
																cout << endl;
																cout << "버서커가 전투에서 승리하였습니다!!" << endl;
																cout << endl;
																cout << "처음으로 돌아갑니다!!" << endl;
																cout << endl;
																Sleep(2500);//1.5초 딜레이
																goto tryAgain;;
															}
															else if (currentBerserkerhp == 0)
															{
																cout << endl;
																cout << "가디언이 전투에서 승리하였습니다!!" << endl;
																cout << endl;
																cout << "처음으로 돌아갑니다!!" << endl;
																cout << endl;
																Sleep(2500);//1.5초 딜레이
																goto tryAgain;;
															}
															else
															{
																Totie();
																Sleep(2500);//1.5초 딜레이
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
				}//P1==1과 P2==3 전투 끝.

				while/*P1 == 2와 P2 == 3*/ (1) //P1 == 2와 P2 == 3 전투 반복
				{

					spearManDamage = rand() % 6 + 10;
					berserkerDamage = rand() % 6 + 10;

					if (choice1 == 2 && choice2 == 3) // P1은 창술사 P2는 버서커 ,P1==2와 P2==3 전투 시작.
					{

						//창술사 기본상태
						cout << "                                    <1P>                                                                                       " << endl;
						cout << "                           ■        ■■■■■■                                             " << endl;
						cout << "                         ■  ■      ■■■■■■                                              " << endl;
						cout << "                       ■ <창> ■    ■■■■■■                                             " << endl;
						cout << "                          ■■      ■■■■■■■                                             " << endl;
						cout << "                          ■■         ■■                                                  " << endl;
						cout << "                          ■■  ■■■■■■■■■■■■                                        " << endl;
						cout << "                          ■■■   ■■■■■■■    ■■                                       " << endl;
						cout << "                          ■■      ■■■■■■    ■■                                     " << endl;
						cout << "                          ■■      ■■■■■■    ■■                                     " << endl;
						cout << "                          ■■      ■■■■■■                                            " << endl;
						cout << "                          ■■      ■■■■■■                                            " << endl;
						cout << "                          ■■      ■■    ■■										      " << endl;
						cout << "                          ■■      ■■    ■■                                           " << endl;
						cout << "                          ■■      ■■    ■■                                           " << endl;
						cout << "                                                                                                                               " << endl;
						cout << "                                                                                                                               " << endl;

						//버서커 기본상태
						cout << "                                    <2P>                                                                                       " << endl;
						cout << "             ■■■                ■■■■■■                                " << endl;
						cout << "          ■■    ■■            ■■■■■■                             " << endl;
						cout << "          ■■     ■■           ■■■■■■                                " << endl;
						cout << "          ■■     ■■           ■■■■■■                                " << endl;
						cout << "          ■■ <검> ■■             ■■                                    " << endl;
						cout << "          ■■     ■■      ■■■■■■■■■■■■                           " << endl;
						cout << "          ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
						cout << "          ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
						cout << "       ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
						cout << "        ■■■■■■■■■          ■■■■■■                                  " << endl;
						cout << "              ■■               ■■■■■■                                  " << endl;
						cout << "              ■■               ■■   ■■                                  " << endl;
						cout << "                                ■■   ■■                                  " << endl;
						cout << "                                ■■   ■■                                   " << endl;
						cout << "                                                                                                                               " << endl;
						cout << "                                                                                                                               " << endl;





						cout << "전투를 시작 합니다!!" << endl;


						if (!spearManAttack)//첫번째 턴1 , 창술사 공격
						{
							Sleep(2500);//1.5초 딜레이
							cout << endl;
							cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
							cout << "=============  <Round 1-1>  ==============" << endl;
							cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
							Sleep(2500); //1.5초 딜레이

							//창술사 공격상태
							cout << "                                    <1P>                                                                                       " << endl;
							cout << "                          ■        ■■■■■■                                             " << endl;
							cout << "                        ■  ■      ■■■■■■               ※※※※※※                                " << endl;
							cout << "                      ■ <창> ■    ■■■■■■            ※※<Attack>※※                                 " << endl;
							cout << "                         ■■      ■■■■■■■              ※※※※※※                               " << endl;
							cout << "                         ■■         ■■                                                  " << endl;
							cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
							cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
							cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
							cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
							cout << "                         ■■      ■■■■■■                                            " << endl;
							cout << "                         ■■      ■■■■■■                                            " << endl;
							cout << "                         ■■      ■■    ■■                                           " << endl;
							cout << "                         ■■      ■■    ■■                                           " << endl;
							cout << "                         ■■      ■■    ■■                                           " << endl;
							cout << "                                                                                                                               " << endl;
							cout << "                                                                                                                               " << endl;

							cout << "창술사가 버서커를 공격합니다" << endl;
							Sleep(2500); //1.5초 딜레이
							currentBerserkerhp = berserkerHp -= spearManDamage;//최초 체력에서 상대 데미지를 감소시키고 그 값을 현재 체력에 대입.

							//버서커 맞은상태
							cout << "                                    <2P>                                                                                       " << endl;
							cout << "                ■■■                ■■■■■■                                " << endl;
							cout << "             ■■    ■■            ■<<■■■                             " << endl;
							cout << "             ■■     ■■           ■■■■■■                                " << endl;
							cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
							cout << "             ■■ <검> ■■             ■■                                    " << endl;
							cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
							cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
							cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
							cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
							cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
							cout << "                 ■■               ■■■■■■                                  " << endl;
							cout << "                 ■■               ■■   ■■                                  " << endl;
							cout << "                                   ■■   ■■                                  " << endl;
							cout << "                                   ■■   ■■                                   " << endl;
							cout << "                                                                                                                               " << endl;
							cout << "                                                                                                                               " << endl;

							cout << "버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다." << endl;
							cout << endl;

							spearManAttack = false;

							if (!berserkerAttack)//첫번째 턴2,버서커 공격
							{
								Sleep(2500);//1.5초 딜레이
								cout << endl;
								cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
								cout << "=============  <Round 1-2>  ==============" << endl;
								cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;

								Sleep(2500); //1.5초 딜레이

								//버서커 공격상태
								cout << "                                    <2P>                                                                                       " << endl;
								cout << "              ■■■                ■■■■■■                                " << endl;
								cout << "           ■■    ■■            ■■■■■■             ※※※※※※                   " << endl;
								cout << "           ■■     ■■           ■■■■■■           ※※<Attack>※※                      " << endl;
								cout << "           ■■     ■■           ■■■■■■             ※※※※※※                   " << endl;
								cout << "           ■■ <검> ■■             ■■                                    " << endl;
								cout << "           ■■     ■■      ■■■■■■■■■■■■                           " << endl;
								cout << "           ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
								cout << "           ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
								cout << "        ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
								cout << "         ■■■■■■■■■          ■■■■■■                                  " << endl;
								cout << "               ■■               ■■■■■■                                  " << endl;
								cout << "               ■■               ■■   ■■                                  " << endl;
								cout << "                                 ■■   ■■                                  " << endl;
								cout << "                                 ■■   ■■                                   " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								cout << "버서커가 창술사 공격합니다" << endl;
								Sleep(2500); //1.5초 딜레이
								currentSpearmanhp = spearManHp -= berserkerDamage;

								//창술사 맞은상태
								cout << "                                    <1P>                                                                                       " << endl;
								cout << "                          ■        ■■■■■■                                             " << endl;
								cout << "                        ■  ■      ■<■■■■                                              " << endl;
								cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
								cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
								cout << "                         ■■         ■■                                                  " << endl;
								cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
								cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
								cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
								cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
								cout << "                         ■■      ■■■■■■                                            " << endl;
								cout << "                         ■■      ■■■■■■                                            " << endl;
								cout << "                         ■■      ■■    ■■                                           " << endl;
								cout << "                         ■■      ■■    ■■                                           " << endl;
								cout << "                         ■■      ■■    ■■                                           " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
								cout << endl;

								berserkerAttack = false;

								if (!spearManAttack)//두번째 턴1 , 창술사 공격
								{
									Sleep(2500);//1.5초 딜레이
									cout << endl;
									cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
									cout << "=============  <Round 2-1>  ==============" << endl;
									cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
									Sleep(2500); //1.5초 딜레이

									//창술사 공격상태
									cout << "                                    <2P>                                                                                       " << endl;
									cout << "                          ■        ■■■■■■                                             " << endl;
									cout << "                        ■  ■      ■■■■■■               ※※※※※※                                " << endl;
									cout << "                      ■ <창> ■    ■■■■■■            ※※<Attack>※※                                 " << endl;
									cout << "                         ■■      ■■■■■■■              ※※※※※※                               " << endl;
									cout << "                         ■■         ■■                                                  " << endl;
									cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
									cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
									cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
									cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
									cout << "                         ■■      ■■■■■■                                            " << endl;
									cout << "                         ■■      ■■■■■■                                            " << endl;
									cout << "                         ■■      ■■    ■■                                           " << endl;
									cout << "                         ■■      ■■    ■■                                           " << endl;
									cout << "                         ■■      ■■    ■■                                           " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;

									cout << "창술사가 버서커를 공격합니다" << endl;
									Sleep(2500); //1.5초 딜레이
									currentBerserkerhp = currentBerserkerhp -= spearManDamage;

									//버서커 맞은상태
									cout << "                                    <1P>                                                                                       " << endl;
									cout << "                ■■■                ■■■■■■                                " << endl;
									cout << "             ■■    ■■            ■<<■■■                             " << endl;
									cout << "             ■■     ■■           ■■■■■■                                " << endl;
									cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
									cout << "             ■■ <검> ■■             ■■                                    " << endl;
									cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
									cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
									cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
									cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
									cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
									cout << "                 ■■               ■■■■■■                                  " << endl;
									cout << "                 ■■               ■■   ■■                                  " << endl;
									cout << "                                   ■■   ■■                                  " << endl;
									cout << "                                   ■■   ■■                                   " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;

									cout << "버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다." << endl;
									cout << endl;

									spearManAttack = false;

									if (!berserkerAttack)//두번째 턴2 , 버서커 공격
									{
										Sleep(2500);//1.5초 딜레이
										cout << endl;
										cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
										cout << "=============  <Round 2-2>  ==============" << endl;
										cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
										Sleep(2500); //1.5초 딜레이

										//버서커 공격상태
										cout << "                                    <2P>                                                                                       " << endl;
										cout << "              ■■■                ■■■■■■                                " << endl;
										cout << "           ■■    ■■            ■■■■■■             ※※※※※※                   " << endl;
										cout << "           ■■     ■■           ■■■■■■           ※※<Attack>※※                      " << endl;
										cout << "           ■■     ■■           ■■■■■■             ※※※※※※                   " << endl;
										cout << "           ■■ <검> ■■             ■■                                    " << endl;
										cout << "           ■■     ■■      ■■■■■■■■■■■■                           " << endl;
										cout << "           ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
										cout << "           ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
										cout << "        ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
										cout << "         ■■■■■■■■■          ■■■■■■                                  " << endl;
										cout << "               ■■               ■■■■■■                                  " << endl;
										cout << "               ■■               ■■   ■■                                  " << endl;
										cout << "                                 ■■   ■■                                  " << endl;
										cout << "                                 ■■   ■■                                   " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "버서커가 창술사를 공격합니다" << endl;
										Sleep(2500); //1.5초 딜레이
										currentSpearmanhp = currentSpearmanhp -= berserkerDamage;

										//창술사 맞은상태
										cout << "                                    <1P>                                                                                       " << endl;
										cout << "                          ■        ■■■■■■                                             " << endl;
										cout << "                        ■  ■      ■<■■■■                                              " << endl;
										cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
										cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
										cout << "                         ■■         ■■                                                  " << endl;
										cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
										cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
										cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
										cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
										cout << "                         ■■      ■■■■■■                                            " << endl;
										cout << "                         ■■      ■■■■■■                                            " << endl;
										cout << "                         ■■      ■■    ■■                                           " << endl;
										cout << "                         ■■      ■■    ■■                                           " << endl;
										cout << "                         ■■      ■■    ■■                                           " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
										cout << endl;

										berserkerAttack = false;




										if (!spearManAttack)//세번째 턴1 ,창술사 공격
										{
											Sleep(2500);//1.5초 딜레이
											cout << endl;
											cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
											cout << "=============  <Round 3-1>  ==============" << endl;
											cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
											Sleep(2500); //1.5초 딜레이

											//창술사 찌르기
											cout << "                                    <1P>                                                                                       " << endl;
											cout << "                                ■■■■■■                                             " << endl;
											cout << "                                  ■■■■■■                                              " << endl;
											cout << "                                    ■■■■■■                                             " << endl;
											cout << "                                     ■■■■■■■                                             " << endl;
											cout << "             ~~~~~~~~~~~                ■■                                                  " << endl;
											cout << "         ~~~~~~~~~~~  ■        ■■  ■■■■■■■■■■■■                                        " << endl;
											cout << "     ~~~~~~~~~~~   ■    ■       ■■■   ■■■■■■■    ■■                                       " << endl;
											cout << " ~~~~~~~~~~~    ■  <창>  ■■■■■■■■ ■     ■■■■■■ ■                                     " << endl;
											cout << "     ~~~~~~~~~~~    ■    ■■■■■■■■■■■■■■■■■■                                       " << endl;
											cout << "         ~~~~~~~~~~~  ■                        ■■■■■■                                            " << endl;
											cout << "             ~~~~~~~~~~~                       ■■■■■■                                            " << endl;
											cout << "                                                    ■■    ■■                                           " << endl;
											cout << "                                                       ■■    ■■                                           " << endl;
											cout << "                                                          ■■    ■■                                           " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "!!*창술사가 찌르기스킬을 사용합니다*!!" << endl;

										    
										
											Sleep(2500);//1.5초 딜레이
											currentBerserkerhp = currentBerserkerhp - S_Skill_1;//창술사의 찌르기 스킬 값만큼 빼준다.
											
											fix();

											//버서커 맞은상태
											cout << "                                    <2P>                                                                                       " << endl;
											cout << "                ■■■                ■■■■■■                                " << endl;
											cout << "             ■■    ■■            ■<<■■■                             " << endl;
											cout << "             ■■     ■■           ■■■■■■                                " << endl;
											cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
											cout << "             ■■ <검> ■■             ■■                                    " << endl;
											cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
											cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
											cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
											cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
											cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
											cout << "                 ■■               ■■■■■■                                  " << endl;
											cout << "                 ■■               ■■   ■■                                  " << endl;
											cout << "                                   ■■   ■■                                  " << endl;
											cout << "                                   ■■   ■■                                   " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다." << endl;
											cout << endl;

											spearManAttack = false;
											if (currentSpearmanhp == 0)
											{
												cout << endl;
												cout << "버서커가 전투에서 승리하였습니다!!" << endl;
												cout << endl;
												cout << "처음으로 돌아갑니다!!" << endl;
												cout << endl;
												Sleep(2500);//1.5초 딜레이
												goto tryAgain;
											}
											else if (currentBerserkerhp == 0)
											{
												cout << endl;
												cout << "창술사가 전투에서 승리하였습니다!!" << endl;
												cout << endl;
												cout << "처음으로 돌아갑니다!!" << endl;
												cout << endl;
												Sleep(2500);//1.5초 딜레이
												goto tryAgain;
											}


											if (!berserkerAttack)//세번째 턴2 , 버서커 공격
											{
												Sleep(2500);//1.5초 딜레이
												cout << endl;
												cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
												cout << "=============  <Round 3-2>  ==============" << endl;
												cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
												Sleep(2500); //1.5초 딜레이

												//버서커 내려찍기
												cout << "                                    <2P>                                                                                       " << endl;
												cout << "                /  /                 / /                                                " << endl;
												cout << "              /  /       ■■        / /                                                    " << endl;
												cout << "            /  /    ■■      ■■   / /                                                      " << endl;
												cout << "          /  /      ■■      ■■  / /                                                       " << endl;
												cout << "                    ■■      ■■                                                           " << endl;
												cout << "                    ■■ <검> ■■        ■■■■■■                                " << endl;
												cout << "                    ■■      ■■          ■■■■■■                             " << endl;
												cout << "                    ■■      ■■           ■■■■■■                                " << endl;
												cout << "                    ■■      ■■           ■■■■■■                                " << endl;
												cout << "                  ■■■■■■■■■■          ■■                                    " << endl;
												cout << "                  ■■■■■■■■■■ ■■■■■■■■■■■■                           " << endl;
												cout << "                         ■■  ■   ■      ■■■■■■■                            " << endl;
												cout << "                         ■■■   ■         ■■■■■■                               " << endl;
												cout << "                                            ■■■■■■                                " << endl;
												cout << "                                            ■■■■■■                                  " << endl;
												cout << "                                            ■■■■■■                                  " << endl;
												cout << "                                            ■■   ■■                                  " << endl;
												cout << "                                              ■■   ■■                                  " << endl;
												cout << "                                                ■■   ■■                                   " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "!!*버서커가 내려찍기 스킬을 사용합니다*!!" << endl;
												currentSpearmanhp = currentSpearmanhp - B_Skill_1; //창술사의 현재 체력에서 버서커의 내려찍기 스킬 데미지값을 빼준다.
												Sleep(2500); //1.5초 딜레이
												
												
												fix();

												//창술사 맞은상태
												cout << "                                    <1P>                                                                                       " << endl;
												cout << "                          ■        ■■■■■■                                             " << endl;
												cout << "                        ■  ■      ■<■■■■                                              " << endl;
												cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
												cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
												cout << "                         ■■         ■■                                                  " << endl;
												cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
												cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
												cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
												cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
												cout << "                         ■■      ■■■■■■                                            " << endl;
												cout << "                         ■■      ■■■■■■                                            " << endl;
												cout << "                         ■■      ■■    ■■                                           " << endl;
												cout << "                         ■■      ■■    ■■                                           " << endl;
												cout << "                         ■■      ■■    ■■                                           " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
												cout << endl;

												berserkerAttack = false;
												if (currentSpearmanhp == 0)
												{
													cout << "버서커가 전투에서 승리하였습니다!!" << endl;
													cout << endl;
													cout << "처음으로 돌아갑니다!!" << endl;
													cout << endl;
													Sleep(2500);//1.5초 딜레이
													goto tryAgain;
												}
												else if (currentBerserkerhp == 0)
												{
													cout << endl;
													cout << "창술사가 전투에서 승리하였습니다!!" << endl;
													cout << endl;
													cout << "처음으로 돌아갑니다!!" << endl;
													cout << endl;
													Sleep(2500);//1.5초 딜레이
													goto tryAgain;
												}



												if (!spearManAttack)//네번째 턴1 , 창술사 공격
												{
													Sleep(2500);//1.5초 딜레이
													cout << endl;
													cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
													cout << "=============  <Round 4-1>  ==============" << endl;
													cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
													Sleep(2500); //1.5초 딜레이

													//창술사 공격상태
													cout << "                                    <1P>                                                                                       " << endl;
													cout << "                          ■        ■■■■■■                                             " << endl;
													cout << "                        ■  ■      ■■■■■■               ※※※※※※                                " << endl;
													cout << "                      ■ <창> ■    ■■■■■■            ※※<Attack>※※                                 " << endl;
													cout << "                         ■■      ■■■■■■■              ※※※※※※                               " << endl;
													cout << "                         ■■         ■■                                                  " << endl;
													cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
													cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
													cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
													cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
													cout << "                         ■■      ■■■■■■                                            " << endl;
													cout << "                         ■■      ■■■■■■                                            " << endl;
													cout << "                         ■■      ■■    ■■                                           " << endl;
													cout << "                         ■■      ■■    ■■                                           " << endl;
													cout << "                         ■■      ■■    ■■                                           " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "창술사가 버서커를 공격합니다" << endl;
													Sleep(2500); //1.5초 딜레이
													currentBerserkerhp = currentBerserkerhp -= spearManDamage;
													fix();

													//버서커 맞은상태
													cout << "                                    <2P>                                                                                       " << endl;
													cout << "                ■■■                ■■■■■■                                " << endl;
													cout << "             ■■    ■■            ■<<■■■                             " << endl;
													cout << "             ■■     ■■           ■■■■■■                                " << endl;
													cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
													cout << "             ■■ <검> ■■             ■■                                    " << endl;
													cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
													cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
													cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
													cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
													cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
													cout << "                 ■■               ■■■■■■                                  " << endl;
													cout << "                 ■■               ■■   ■■                                  " << endl;
													cout << "                                   ■■   ■■                                  " << endl;
													cout << "                                   ■■   ■■                                   " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다." << endl;
													cout << endl;

													spearManAttack = false;
													if (currentSpearmanhp == 0)
													{
														cout << endl;
														cout << "버서커가 전투에서 승리하였습니다!!" << endl;
														cout << endl;
														cout << "처음으로 돌아갑니다!!" << endl;
														cout << endl;
														Sleep(2500);//1.5초 딜레이
														goto tryAgain;
													}
													else if (currentBerserkerhp == 0)
													{
														cout << endl;
														cout << "창술사가 전투에서 승리하였습니다!!" << endl;
														cout << endl;
														cout << "처음으로 돌아갑니다!!" << endl;
														cout << endl;
														Sleep(2500);//1.5초 딜레이
														goto tryAgain;
													}


													if (!berserkerAttack)//네번째 턴2 , 버서커 공격
													{
														Sleep(2500);//1.5초 딜레이
														cout << endl;
														cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
														cout << "=============  <Round 4-2>  ==============" << endl;
														cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
														Sleep(2500); //1.5초 딜레이

														//버서커 공격상태
														cout << "                                    <2P>                                                                                       " << endl;
														cout << "              ■■■                ■■■■■■                                " << endl;
														cout << "           ■■    ■■            ■■■■■■             ※※※※※※                   " << endl;
														cout << "           ■■     ■■           ■■■■■■           ※※<Attack>※※                      " << endl;
														cout << "           ■■     ■■           ■■■■■■             ※※※※※※                   " << endl;
														cout << "           ■■ <검> ■■             ■■                                    " << endl;
														cout << "           ■■     ■■      ■■■■■■■■■■■■                           " << endl;
														cout << "           ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
														cout << "           ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
														cout << "        ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
														cout << "         ■■■■■■■■■          ■■■■■■                                  " << endl;
														cout << "               ■■               ■■■■■■                                  " << endl;
														cout << "               ■■               ■■   ■■                                  " << endl;
														cout << "                                 ■■   ■■                                  " << endl;
														cout << "                                 ■■   ■■                                   " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "버서커가 창술사를 공격합니다" << endl;
														Sleep(2500); //1.5초 딜레이
														currentSpearmanhp = currentSpearmanhp -= berserkerDamage;
														fix();

														//창술사 맞은상태
														cout << "                                    <1P>                                                                                       " << endl;
														cout << "                          ■        ■■■■■■                                             " << endl;
														cout << "                        ■  ■      ■<■■■■                                              " << endl;
														cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
														cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
														cout << "                         ■■         ■■                                                  " << endl;
														cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
														cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
														cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
														cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
														cout << "                         ■■      ■■■■■■                                            " << endl;
														cout << "                         ■■      ■■■■■■                                            " << endl;
														cout << "                         ■■      ■■    ■■                                           " << endl;
														cout << "                         ■■      ■■    ■■                                           " << endl;
														cout << "                         ■■      ■■    ■■                                           " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
														cout << endl;

														berserkerAttack = false;
														if (currentSpearmanhp == 0)
														{
															cout << endl;
															cout << "버서커가 전투에서 승리하였습니다!!" << endl;
															cout << endl;
															cout << "처음으로 돌아갑니다!!" << endl;
															cout << endl;
															Sleep(2500);//1.5초 딜레이
															goto tryAgain;
														}
														else if (currentBerserkerhp == 0)
														{
															cout << endl;
															cout << "창술사가 전투에서 승리하였습니다!!" << endl;
															cout << endl;
															cout << "처음으로 돌아갑니다!!" << endl;
															cout << endl;
															Sleep(2500);//1.5초 딜레이
															goto tryAgain;
														}


														if (!spearManAttack)//마지막 턴1 , 창술사 공격
														{
															Sleep(2500);//1.5초 딜레이
															cout << endl;
															cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
															cout << "=============  <Round 5-1>  ==============" << endl;
															cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
															Sleep(1700);
															cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
															cout << "===========!!Warning!!============" << endl;
															cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
															Sleep(2500); //1.5초 딜레이


	//창술사 강타
															cout << "                                    <1P>                                                                                       " << endl;
															cout << "                      ☆☆                                                                           " << endl;
															cout << "                   ☆☆■☆☆          ■■■■■■                                             " << endl;
															cout << "                ☆☆■   ■☆☆       ■■■■■■                                              " << endl;
															cout << "             ☆☆■ <창>   ■☆☆   ■■■■■■                                             " << endl;
															cout << "                ☆☆ ■■ ☆☆     ■■■■■■■                                             " << endl;
															cout << "                  ■■            ■■                                                  " << endl;
															cout << "               ■■  ■■■■■■■■■■■■                                        " << endl;
															cout << "              ■■■   ■■■■■■■    ■■                                       " << endl;
															cout << "             ■■        ■■■■■■  ■                                     " << endl;
															cout << "            ■■ ■■■■■■■■■■ ■                                     " << endl;
															cout << "           ■■    ■■■■■■                                            " << endl;
															cout << "         ■■    ■■■■■■                                            " << endl;
															cout << "        ■■     ■■    ■■                                           " << endl;
															cout << "       ■■       ■■    ■■                                           " << endl;
															cout << "     ■■          ■■    ■■                                           " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "!!창술사가 강타 스킬을 사용합니다!!" << endl;
															Sleep(2500); //1.5초 딜레이
															currentBerserkerhp = currentBerserkerhp -= S_Skill_2;
															fix();

															//버서커 맞은상태
															cout << "                                    <2P>                                                                                       " << endl;
															cout << "                ■■■                ■■■■■■                                " << endl;
															cout << "             ■■    ■■            ■<<■■■                             " << endl;
															cout << "             ■■     ■■           ■■■■■■                                " << endl;
															cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
															cout << "             ■■ <검> ■■             ■■                                    " << endl;
															cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
															cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
															cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
															cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
															cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
															cout << "                 ■■               ■■■■■■                                  " << endl;
															cout << "                 ■■               ■■   ■■                                  " << endl;
															cout << "                                   ■■   ■■                                  " << endl;
															cout << "                                   ■■   ■■                                   " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "!!버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다!!." << endl;
															cout << endl;

															spearManAttack = false;
															if (currentSpearmanhp == 0)
															{
																cout << endl;
																cout << "버서커가 전투에서 승리하였습니다!!" << endl;
																cout << endl;
																cout << "처음으로 돌아갑니다!!" << endl;
																cout << endl;
																Sleep(2500);//1.5초 딜레이
																goto tryAgain;;
															}
															else if (currentBerserkerhp == 0)
															{
																cout << endl;
																cout << "창술사가 전투에서 승리하였습니다!!" << endl;
																cout << endl;
																cout << "처음으로 돌아갑니다!!" << endl;
																cout << endl;
																Sleep(2500);//1.5초 딜레이
																goto tryAgain;
															}


															if (!berserkerAttack)//마지막 턴2 , 버서커 공격
															{
																Sleep(2500);//1.5초 딜레이
																cout << endl;
																cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																cout << "=============  <Round 5-2>  ==============" << endl;
																cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																Sleep(1700);
																cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
																cout << "===========!!Warning!!============" << endl;
																cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
																Sleep(2500); //1.5초 딜레이

																//버서커 급소타격
																cout << "                                    <2P>                                                                                       " << endl;
																cout << "                                                 ■■■■■■                                " << endl;
																cout << "                                                    ■■■■■■                             " << endl;
																cout << "                                                   ■■■■■■                                " << endl;
																cout << "                      <<<<<<<<<<<<<<<<<<<<            ■■■■■■                                " << endl;
																cout << "                 <<<<<<<<<<<<<<<<<<<<                         ■■                                                 " << endl;
																cout << "            <<<<<<<<<<<<<<<<<<<<       ■■■■■■  ■■■■■■■■■■■                          " << endl;
																cout << "       <<<<<<<<<<<<<<<<<<<< /■■■■■■■■■■■■■■  ■ ■  ■■■■■■■                             " << endl;
																cout << "  <<<<<<<<<<<<<<<<<<<<      ■       <검>       ■■■■■ ■ ■    ■■■■■■                               " << endl;
																cout << "       <<<<<<<<<<<<<<<<<<<< ＼■■■■■■■■■■■■■ ■ ■        ■■■■■■                                " << endl;
																cout << "             <<<<<<<<<<<<<<<<<<<<      ■■■■■■             ■■■■■■                                  " << endl;
																cout << "                 <<<<<<<<<<<<<<<<<<<<                           ■■■■■■                                  " << endl;
																cout << "                      <<<<<<<<<<<<<<<<<<<<                    ■■   ■■                                  " << endl;
																cout << "                                                                ■■   ■■                                  " << endl;
																cout << "                                                               ■■   ■■                                   " << endl;
																cout << "                                                                                                                               " << endl;
																cout << "                                                                                                                               " << endl;

																cout << "!!버서커가 급소타격 스킬을 사용합니다!!" << endl;
																Sleep(2500); //1.5초 딜레이
																currentSpearmanhp = currentSpearmanhp -= B_Skill_2;
																fix();

																//창술사 맞은상태
																cout << "                                    <1P>                                                                                       " << endl;
																cout << "                          ■        ■■■■■■                                             " << endl;
																cout << "                        ■  ■      ■<■■■■                                              " << endl;
																cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
																cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
																cout << "                         ■■         ■■                                                  " << endl;
																cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
																cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
																cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
																cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
																cout << "                         ■■      ■■■■■■                                            " << endl;
																cout << "                         ■■      ■■■■■■                                            " << endl;
																cout << "                         ■■      ■■    ■■                                           " << endl;
																cout << "                         ■■      ■■    ■■                                           " << endl;
																cout << "                         ■■      ■■    ■■                                           " << endl;
																cout << "                                                                                                                               " << endl;
																cout << "                                                                                                                               " << endl;

																cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
																cout << endl;

																berserkerAttack = false;
																if (currentSpearmanhp == 0)
																{
																	cout << endl;
																	cout << "버서커가 전투에서 승리하였습니다!!" << endl;
																	cout << endl;
																	cout << "처음으로 돌아갑니다!!" << endl;
																	cout << endl;
																	Sleep(2500);//1.5초 딜레이
																	goto tryAgain;;
																}
																else if (currentBerserkerhp == 0)
																{
																	cout << endl;
																	cout << "창술사가 전투에서 승리하였습니다!!" << endl;
																	cout << endl;
																	cout << "처음으로 돌아갑니다!!" << endl;
																	cout << endl;
																	Sleep(2500);//1.5초 딜레이
																	goto tryAgain;;
																}
																else
																{
																	Totie();
																	Sleep(2500);//1.5초 딜레이
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
					}//P1==2와 P2==3 전투 끝.

					while/*P1 == 2과 P2 == 1*/ (1) //P1 == 2와 P2 == 1 전투 반복
					{


						spearManDamage = rand() % 6 + 10;
						guardianDamage = rand() % 6 + 10;

						if (choice1 == 2 && choice2 == 1) // P1은 창술사 P2는 가디언 ,P1==2과 P2==1 전투 시작.
						{
							//창술사 기본상태
							cout << "                                    <1P>                                                                                       " << endl;
							cout << "                           ■        ■■■■■■                                             " << endl;
							cout << "                         ■  ■      ■■■■■■                                              " << endl;
							cout << "                       ■ <창> ■    ■■■■■■                                             " << endl;
							cout << "                          ■■      ■■■■■■■                                             " << endl;
							cout << "                          ■■         ■■                                                  " << endl;
							cout << "                          ■■  ■■■■■■■■■■■■                                        " << endl;
							cout << "                          ■■■   ■■■■■■■    ■■                                       " << endl;
							cout << "                          ■■      ■■■■■■    ■■                                     " << endl;
							cout << "                          ■■      ■■■■■■    ■■                                     " << endl;
							cout << "                          ■■      ■■■■■■                                            " << endl;
							cout << "                          ■■      ■■■■■■                                            " << endl;
							cout << "                          ■■      ■■    ■■                                           " << endl;
							cout << "                          ■■      ■■    ■■                                           " << endl;
							cout << "                          ■■      ■■    ■■                                           " << endl;
							cout << "                                                                                                                               " << endl;
							cout << "                                                                                                                               " << endl;

							//가디언 기본상태
							cout << "                                    <1P>                                                                                       " << endl;
							cout << "                                  ■■■■■■                                                                   " << endl;
							cout << "                                  ■■■■■■                                                            " << endl;
							cout << "                                  ■■■■■■                                                            " << endl;
							cout << "                                  ■■■■■■                                         " << endl;
							cout << "                                     ■■                                             " << endl;
							cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
							cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
							cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
							cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
							cout << "        ●●●●●●                ■■■■■■                                       " << endl;
							cout << "                                 ■■■■■■                                          " << endl;
							cout << "                                 ■■   ■■                                     " << endl;
							cout << "                                 ■■   ■■                                     " << endl;
							cout << "                                 ■■   ■■                                     " << endl;
							cout << "                                                                                                                               " << endl;
							cout << "                                                                                                                               " << endl;


							cout << "전투를 시작 합니다!!" << endl;


							if (!spearManAttack)//첫번째 턴1 , 창술사 공격
							{
								Sleep(2500);//1.5초 딜레이
								cout << endl;
								cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
								cout << "=============  <Round 1-1>  ==============" << endl;
								cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
								Sleep(2500); //1.5초 딜레이

								//창술사 공격상태
								cout << "                                    <1P>                                                                                       " << endl;
								cout << "                          ■        ■■■■■■                                             " << endl;
								cout << "                        ■  ■      ■■■■■■               ※※※※※※                                " << endl;
								cout << "                      ■ <창> ■    ■■■■■■            ※※<Attack>※※                                 " << endl;
								cout << "                         ■■      ■■■■■■■              ※※※※※※                               " << endl;
								cout << "                         ■■         ■■                                                  " << endl;
								cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
								cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
								cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
								cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
								cout << "                         ■■      ■■■■■■                                            " << endl;
								cout << "                         ■■      ■■■■■■                                            " << endl;
								cout << "                         ■■      ■■    ■■                                           " << endl;
								cout << "                         ■■      ■■    ■■                                           " << endl;
								cout << "                         ■■      ■■    ■■                                           " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								cout << "창술사가 가디언을 공격합니다" << endl;
								Sleep(2500); //1.5초 딜레이
								currentGuardianhp = guardianHp -= spearManDamage;//최초 체력에서 상대 데미지를 감소시키고 그 값을 현재 체력에 대입.

								//가디언 맞은 상태
								cout << "                                    <2P>                                                                                       " << endl;
								cout << "                                  ■■■■■■                                                                   " << endl;
								cout << "                                  ■<<■■■                                                              " << endl;
								cout << "                                  ■■■■■■                                                              " << endl;
								cout << "                                  ■ㅡㅡ■■■                                           " << endl;
								cout << "                                     ■■                                             " << endl;
								cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
								cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
								cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
								cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
								cout << "        ●●●●●●                ■■■■■■                                       " << endl;
								cout << "                                 ■■■■■■                                          " << endl;
								cout << "                                 ■■   ■■                                     " << endl;
								cout << "                                 ■■   ■■                                     " << endl;
								cout << "                                 ■■   ■■                                     " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
								cout << endl;


								spearManAttack = false;

								if (!guardianAttack)//첫번째 턴2,가디언 공격
								{
									Sleep(2500);//1.5초 딜레이
									cout << endl;
									cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
									cout << "=============  <Round 1-2>  ==============" << endl;
									cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;

									Sleep(2500); //1.5초 딜레이

									//가디언 공격상태
									cout << "                                    <2P>                                                                                       " << endl;
									cout << "                                  ■■■■■■                                                                   " << endl;
									cout << "                                  ■■■■■■                 ※※※※※※                                             " << endl;
									cout << "                                  ■■■■■■               ※※<Attack>※※                                               " << endl;
									cout << "                                  ■■■■■■                 ※※※※※※                          " << endl;
									cout << "                                     ■■                                             " << endl;
									cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
									cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
									cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
									cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
									cout << "        ●●●●●●                ■■■■■■                                       " << endl;
									cout << "                                 ■■■■■■                                          " << endl;
									cout << "                                 ■■   ■■                                     " << endl;
									cout << "                                 ■■   ■■                                     " << endl;
									cout << "                                 ■■   ■■                                     " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;

									cout << "가디언이 창술사를 공격합니다" << endl;
									Sleep(2500); //1.5초 딜레이
									currentSpearmanhp = spearManHp -= guardianDamage;

									//창술사 맞은상태
									cout << "                                    <1P>                                                                                       " << endl;
									cout << "                          ■        ■■■■■■                                             " << endl;
									cout << "                        ■  ■      ■<■■■■                                              " << endl;
									cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
									cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
									cout << "                         ■■         ■■                                                  " << endl;
									cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
									cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
									cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
									cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
									cout << "                         ■■      ■■■■■■                                            " << endl;
									cout << "                         ■■      ■■■■■■                                            " << endl;
									cout << "                         ■■      ■■    ■■                                           " << endl;
									cout << "                         ■■      ■■    ■■                                           " << endl;
									cout << "                         ■■      ■■    ■■                                           " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;

									cout << "창술사 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
									cout << endl;

									guardianAttack = false;

									if (!spearManAttack)//두번째 턴1 , 스피어맨 공격
									{
										Sleep(2500);//1.5초 딜레이
										cout << endl;
										cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
										cout << "=============  <Round 2-1>  ==============" << endl;
										cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
										Sleep(2500); //1.5초 딜레이

										//창술사 공격상태
										cout << "                                    <1P>                                                                                       " << endl;
										cout << "                          ■        ■■■■■■                                             " << endl;
										cout << "                        ■  ■      ■■■■■■               ※※※※※※                                " << endl;
										cout << "                      ■ <창> ■    ■■■■■■            ※※<Attack>※※                                 " << endl;
										cout << "                         ■■      ■■■■■■■              ※※※※※※                               " << endl;
										cout << "                         ■■         ■■                                                  " << endl;
										cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
										cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
										cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
										cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
										cout << "                         ■■      ■■■■■■                                            " << endl;
										cout << "                         ■■      ■■■■■■                                            " << endl;
										cout << "                         ■■      ■■    ■■                                           " << endl;
										cout << "                         ■■      ■■    ■■                                           " << endl;
										cout << "                         ■■      ■■    ■■                                           " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "창술사가 가디언을 공격합니다" << endl;
										Sleep(2500); //1.5초 딜레이
										currentGuardianhp = currentGuardianhp -= spearManDamage;

										//가디언 맞은 상태
										cout << "                                    <2P>                                                                                       " << endl;
										cout << "                                  ■■■■■■                                                                   " << endl;
										cout << "                                  ■<<■■■                                                              " << endl;
										cout << "                                  ■■■■■■                                                              " << endl;
										cout << "                                  ■ㅡㅡ■■■                                           " << endl;
										cout << "                                     ■■                                             " << endl;
										cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
										cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
										cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
										cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
										cout << "        ●●●●●●                ■■■■■■                                       " << endl;
										cout << "                                 ■■■■■■                                          " << endl;
										cout << "                                 ■■   ■■                                     " << endl;
										cout << "                                 ■■   ■■                                     " << endl;
										cout << "                                 ■■   ■■                                     " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;


										cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
										cout << endl;

										spearManAttack = false;

										if (!guardianAttack)//두번째 턴2 , 가디언 공격
										{
											Sleep(2500);//1.5초 딜레이
											cout << endl;
											cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
											cout << "=============  <Round 2-2>  ==============" << endl;
											cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
											Sleep(2500); //1.5초 딜레이

											//가디언 공격상태
											cout << "                                    <2P>                                                                                       " << endl;
											cout << "                                  ■■■■■■                                                                   " << endl;
											cout << "                                  ■■■■■■                 ※※※※※※                                             " << endl;
											cout << "                                  ■■■■■■               ※※<Attack>※※                                               " << endl;
											cout << "                                  ■■■■■■                 ※※※※※※                          " << endl;
											cout << "                                     ■■                                             " << endl;
											cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
											cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
											cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
											cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
											cout << "        ●●●●●●                ■■■■■■                                       " << endl;
											cout << "                                 ■■■■■■                                          " << endl;
											cout << "                                 ■■   ■■                                     " << endl;
											cout << "                                 ■■   ■■                                     " << endl;
											cout << "                                 ■■   ■■                                     " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "가디언이 창술사를 공격합니다" << endl;
											Sleep(2500); //1.5초 딜레이
											currentSpearmanhp = currentSpearmanhp -= guardianDamage;

											//창술사 맞은상태
											cout << "                                    <1P>                                                                                       " << endl;
											cout << "                          ■        ■■■■■■                                             " << endl;
											cout << "                        ■  ■      ■<■■■■                                              " << endl;
											cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
											cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
											cout << "                         ■■         ■■                                                  " << endl;
											cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
											cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
											cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
											cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
											cout << "                         ■■      ■■■■■■                                            " << endl;
											cout << "                         ■■      ■■■■■■                                            " << endl;
											cout << "                         ■■      ■■    ■■                                           " << endl;
											cout << "                         ■■      ■■    ■■                                           " << endl;
											cout << "                         ■■      ■■    ■■                                           " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
											cout << endl;

											guardianAttack = false;




											if (!spearManAttack)//세번째 턴1 ,창술사 공격
											{
												Sleep(2500);//1.5초 딜레이
												cout << endl;
												cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
												cout << "=============  <Round 3-2>  ==============" << endl;
												cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
												Sleep(2500); //1.5초 딜레이

												//창술사 찌르기
												cout << "                                    <1P>                                                                                       " << endl;
												cout << "                                ■■■■■■                                             " << endl;
												cout << "                                  ■■■■■■                                              " << endl;
												cout << "                                    ■■■■■■                                             " << endl;
												cout << "                                     ■■■■■■■                                             " << endl;
												cout << "             ~~~~~~~~~~~                ■■                                                  " << endl;
												cout << "         ~~~~~~~~~~~  ■        ■■  ■■■■■■■■■■■■                                        " << endl;
												cout << "     ~~~~~~~~~~~   ■    ■       ■■■   ■■■■■■■    ■■                                       " << endl;
												cout << " ~~~~~~~~~~~    ■  <창>  ■■■■■■■■ ■     ■■■■■■ ■                                     " << endl;
												cout << "     ~~~~~~~~~~~    ■    ■■■■■■■■■■■■■■■■■■                                       " << endl;
												cout << "         ~~~~~~~~~~~  ■                        ■■■■■■                                            " << endl;
												cout << "             ~~~~~~~~~~~                       ■■■■■■                                            " << endl;
												cout << "                                                    ■■    ■■                                           " << endl;
												cout << "                                                       ■■    ■■                                           " << endl;
												cout << "                                                          ■■    ■■                                           " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "!!*창술사가 찌르기 스킬을 사용합니다*!!" << endl;
												currentGuardianhp = currentGuardianhp - S_Skill_1; //가디언의 현재 체력에서 스피어맨 찌르기 스킬 데미지값을 빼준다.
												Sleep(2500); //1.5초 딜레이
												
												fix();

												//가디언 맞은 상태
												cout << "                                    <2P>                                                                                       " << endl;
												cout << "                                  ■■■■■■                                                                   " << endl;
												cout << "                                  ■<<■■■                                                              " << endl;
												cout << "                                  ■■■■■■                                                              " << endl;
												cout << "                                  ■ㅡㅡ■■■                                           " << endl;
												cout << "                                     ■■                                             " << endl;
												cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
												cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
												cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
												cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
												cout << "        ●●●●●●                ■■■■■■                                       " << endl;
												cout << "                                 ■■■■■■                                          " << endl;
												cout << "                                 ■■   ■■                                     " << endl;
												cout << "                                 ■■   ■■                                     " << endl;
												cout << "                                 ■■   ■■                                     " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;


												cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
												cout << endl;



												spearManAttack = false;
												if (currentGuardianhp == 0)
												{
													cout << endl;
													cout << "창술사가 전투에서 승리하였습니다!!" << endl;
													cout << endl;
													cout << "처음으로 돌아갑니다!!" << endl;
													cout << endl;
													Sleep(2500);//1.5초 딜레이
													goto tryAgain;
												}
												else if (currentSpearmanhp == 0)
												{
													cout << endl;
													cout << "가디언이 전투에서 승리하였습니다!!" << endl;
													cout << endl;
													cout << "처음으로 돌아갑니다!!" << endl;
													cout << endl;
													Sleep(2500);//1.5초 딜레이
													goto tryAgain;
												}


												if (!guardianAttack)//세번째 턴2 , 가디언 공격
												{
													Sleep(2500);//1.5초 딜레이
													cout << endl;
													cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
													cout << "=============  <Round 3-1>  ==============" << endl;
													cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
													Sleep(2500); //1.5초 딜레이
													cout << "!!*가디언이 가드스킬을 사용합니다*!!" << endl;
													cout << "!!*      공격을 1회 방어합니다   *!!" << endl;

													//가디언 가드 상태
													cout << "                                    <2P>                                                                                       " << endl;
													cout << "                                  ■■■■■■                                                                   " << endl;
													cout << "                                  ■■■■■■                 !※※※※※※!                                             " << endl;
													cout << "                                  ■■■■■■               !※※<Guard>※※!                                               " << endl;
													cout << "                                  ■■■■■■                 !※※※※※※!                          " << endl;
													cout << "                                     ■■                                             " << endl;
													cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
													cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
													cout << "     ●     <방패>     ● ■■      ■■■■■■  ■                                     " << endl;
													cout << "      ●●         ●●■■■■■■■■■■■■■■                                                    " << endl;
													cout << "        ●●●●●●                ■■■■■■                                       " << endl;
													cout << "                                 ■■■■■■                                          " << endl;
													cout << "                                  ■■   ■■                                     " << endl;
													cout << "                               ■■   ■■                                     " << endl;
													cout << "                             ■■   ■■                                     " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													Sleep(2500); //1.5초 딜레이
													cout << "가디언이 1턴 가드상태이(가) 되었습니다." << endl;
													Sleep(2500);//1.5초 딜레이
													
													currentSpearmanhp = currentSpearmanhp - G_Skill_1; //가디언이 가드스킬을 사용했으므로 스피어맨의 현재 체력에 가디언의 가드 스킬 값을 빼준다. 
													fix();

													//창술사 기본상태
													cout << "                                    <1P>                                                                                       " << endl;
													cout << "                           ■        ■■■■■■                                             " << endl;
													cout << "                         ■  ■      ■■■■■■                                              " << endl;
													cout << "                       ■ <창> ■    ■■■■■■                                             " << endl;
													cout << "                          ■■      ■■■■■■■                                             " << endl;
													cout << "                          ■■         ■■                                                  " << endl;
													cout << "                          ■■  ■■■■■■■■■■■■                                        " << endl;
													cout << "                          ■■■   ■■■■■■■    ■■                                       " << endl;
													cout << "                          ■■      ■■■■■■    ■■                                     " << endl;
													cout << "                          ■■      ■■■■■■    ■■                                     " << endl;
													cout << "                          ■■      ■■■■■■                                            " << endl;
													cout << "                          ■■      ■■■■■■                                            " << endl;
													cout << "                          ■■      ■■    ■■                                           " << endl;
													cout << "                          ■■      ■■    ■■                                           " << endl;
													cout << "                          ■■      ■■    ■■                                           " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
													cout << endl;
													

													guardianAttack = false;
													if (currentGuardianhp == 0)
													{
														cout << "창술사가 전투에서 승리하였습니다!!" << endl;
														cout << endl;
														cout << "처음으로 돌아갑니다!!" << endl;
														cout << endl;
														Sleep(2500);//1.5초 딜레이
														goto tryAgain;
													}
													else if (currentSpearmanhp == 0)
													{
														cout << endl;
														cout << "가디언이 전투에서 승리하였습니다!!" << endl;
														cout << endl;
														cout << "처음으로 돌아갑니다!!" << endl;
														cout << endl;
														Sleep(2500);//1.5초 딜레이
														goto tryAgain;
													}



													if (!spearManAttack)//네번째 턴1 , 창술사 공격
													{
														Sleep(2500);//1.5초 딜레이
														cout << endl;
														cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
														cout << "=============  <Round 4-1>  ==============" << endl;
														cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
														Sleep(2500); //1.5초 딜레이

														//창술사 공격상태
														cout << "                                    <1P>                                                                                       " << endl;
														cout << "                          ■        ■■■■■■                                             " << endl;
														cout << "                        ■  ■      ■■■■■■               ※※※※※※                                " << endl;
														cout << "                      ■ <창> ■    ■■■■■■            ※※<Attack>※※                                 " << endl;
														cout << "                         ■■      ■■■■■■■              ※※※※※※                               " << endl;
														cout << "                         ■■         ■■                                                  " << endl;
														cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
														cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
														cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
														cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
														cout << "                         ■■      ■■■■■■                                            " << endl;
														cout << "                         ■■      ■■■■■■                                            " << endl;
														cout << "                         ■■      ■■    ■■                                           " << endl;
														cout << "                         ■■      ■■    ■■                                           " << endl;
														cout << "                         ■■      ■■    ■■                                           " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "창술사가 가디언을 공격합니다" << endl;
														Sleep(2500);//1.5초 딜레이


	//가디언 가드 상태
														cout << "                                    <2P>                                                                                       " << endl;
														cout << "                                  ■■■■■■                                                                   " << endl;
														cout << "                                  ■■■■■■                 !※※※※※※!                                             " << endl;
														cout << "                                  ■■■■■■               !※※<Guard>※※!                                               " << endl;
														cout << "                                  ■■■■■■                 !※※※※※※!                          " << endl;
														cout << "                                     ■■                                             " << endl;
														cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
														cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
														cout << "     ●     <방패>     ● ■■      ■■■■■■  ■                                     " << endl;
														cout << "      ●●         ●●■■■■■■■■■■■■■■                                                    " << endl;
														cout << "        ●●●●●●                ■■■■■■                                       " << endl;
														cout << "                                 ■■■■■■                                          " << endl;
														cout << "                                  ■■   ■■                                     " << endl;
														cout << "                               ■■   ■■                                     " << endl;
														cout << "                             ■■   ■■                                     " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;


														cout << "가디언이 1턴 가드상태입니다!!" << endl;
														cout << "*가디언의 가드 스킬로 인해 데미지가 무시되었습니다*!!" << endl;
														Sleep(2500); //1.5초 딜레이
														currentGuardianhp = currentGuardianhp;
														fix();

														//가디언 기본상태
														cout << "                                    <2P>                                                                                       " << endl;
														cout << "                                  ■■■■■■                                                                   " << endl;
														cout << "                                  ■■■■■■                                                            " << endl;
														cout << "                                  ■■■■■■                                                            " << endl;
														cout << "                                  ■■■■■■                                         " << endl;
														cout << "                                     ■■                                             " << endl;
														cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
														cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
														cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
														cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
														cout << "        ●●●●●●                ■■■■■■                                       " << endl;
														cout << "                                 ■■■■■■                                          " << endl;
														cout << "                                 ■■   ■■                                     " << endl;
														cout << "                                 ■■   ■■                                     " << endl;
														cout << "                                 ■■   ■■                                     " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "가디언 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
														cout << endl;

														spearManAttack = false;
														if (currentGuardianhp == 0)
														{
															cout << endl;
															cout << "창술사가 전투에서 승리하였습니다!!" << endl;
															cout << endl;
															cout << "처음으로 돌아갑니다!!" << endl;
															cout << endl;
															Sleep(2500);//1.5초 딜레이
															goto tryAgain;
														}
														else if (currentSpearmanhp == 0)
														{
															cout << endl;
															cout << "가디언이 전투에서 승리하였습니다!!" << endl;
															cout << endl;
															cout << "처음으로 돌아갑니다!!" << endl;
															cout << endl;
															Sleep(2500);//1.5초 딜레이
															goto tryAgain;
														}


														if (!guardianAttack)//네번째 턴2 , 가디언 공격
														{
															Sleep(2500);//1.5초 딜레이
															cout << endl;
															cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
															cout << "=============  <Round 4-2>  ==============" << endl;
															cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
															Sleep(2500); //1.5초 딜레이

															//가디언 공격상태
															cout << "                                    <2P>                                                                                       " << endl;
															cout << "                                  ■■■■■■                                                                   " << endl;
															cout << "                                  ■■■■■■                 ※※※※※※                                             " << endl;
															cout << "                                  ■■■■■■               ※※<Attack>※※                                               " << endl;
															cout << "                                  ■■■■■■                 ※※※※※※                          " << endl;
															cout << "                                     ■■                                             " << endl;
															cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
															cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
															cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
															cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
															cout << "        ●●●●●●                ■■■■■■                                       " << endl;
															cout << "                                 ■■■■■■                                          " << endl;
															cout << "                                 ■■   ■■                                     " << endl;
															cout << "                                 ■■   ■■                                     " << endl;
															cout << "                                 ■■   ■■                                     " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "가디언이 창술사를 공격합니다" << endl;
															Sleep(2500); //1.5초 딜레이
															currentSpearmanhp = currentSpearmanhp -= guardianDamage;
															fix();

															//창술사 맞은상태
															cout << "                                    <1P>                                                                                       " << endl;
															cout << "                          ■        ■■■■■■                                             " << endl;
															cout << "                        ■  ■      ■<■■■■                                              " << endl;
															cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
															cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
															cout << "                         ■■         ■■                                                  " << endl;
															cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
															cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
															cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
															cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
															cout << "                         ■■      ■■■■■■                                            " << endl;
															cout << "                         ■■      ■■■■■■                                            " << endl;
															cout << "                         ■■      ■■    ■■                                           " << endl;
															cout << "                         ■■      ■■    ■■                                           " << endl;
															cout << "                         ■■      ■■    ■■                                           " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
															cout << endl;

															guardianAttack = false;
															if (currentGuardianhp == 0)
															{
																cout << endl;
																cout << "창술사가 전투에서 승리하였습니다!!" << endl;
																cout << endl;
																cout << "처음으로 돌아갑니다!!" << endl;
																cout << endl;
																Sleep(2500);//1.5초 딜레이
																goto tryAgain;
															}
															else if (currentSpearmanhp == 0)
															{
																cout << endl;
																cout << "가디언이 전투에서 승리하였습니다!!" << endl;
																cout << endl;
																cout << "처음으로 돌아갑니다!!" << endl;
																cout << endl;
																Sleep(2500);//1.5초 딜레이
																goto tryAgain;
															}


															if (!spearManAttack)//마지막 턴1 , 창술사 공격
															{
																Sleep(2500);//1.5초 딜레이
																cout << endl;
																cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																cout << "=============  <Round 5-1>  ==============" << endl;
																cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																Sleep(1700);
																cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
																cout << "===========!!Warning!!============" << endl;
																cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
																Sleep(2500); //1.5초 딜레이

																//창술사 강타
																cout << "                                    <1P>                                                                                       " << endl;
																cout << "                      ☆☆                                                                           " << endl;
																cout << "                   ☆☆■☆☆          ■■■■■■                                             " << endl;
																cout << "                ☆☆■   ■☆☆       ■■■■■■                                              " << endl;
																cout << "             ☆☆■ <창>   ■☆☆   ■■■■■■                                             " << endl;
																cout << "                ☆☆ ■■ ☆☆     ■■■■■■■                                             " << endl;
																cout << "                  ■■            ■■                                                  " << endl;
																cout << "               ■■  ■■■■■■■■■■■■                                        " << endl;
																cout << "              ■■■   ■■■■■■■    ■■                                       " << endl;
																cout << "             ■■        ■■■■■■  ■                                     " << endl;
																cout << "            ■■ ■■■■■■■■■■ ■                                     " << endl;
																cout << "           ■■    ■■■■■■                                            " << endl;
																cout << "         ■■    ■■■■■■                                            " << endl;
																cout << "        ■■     ■■    ■■                                           " << endl;
																cout << "       ■■       ■■    ■■                                           " << endl;
																cout << "     ■■          ■■    ■■                                           " << endl;
																cout << "                                                                                                                               " << endl;
																cout << "                                                                                                                               " << endl;

																cout << "!!창술사가 강타 스킬을 사용합니다!!" << endl;
																Sleep(2500); //1.5초 딜레이
																currentGuardianhp = currentGuardianhp -= S_Skill_2;
																fix();

																//가디언 맞은 상태
																cout << "                                    <2P>                                                                                       " << endl;
																cout << "                                  ■■■■■■                                                                   " << endl;
																cout << "                                  ■<<■■■                                                              " << endl;
																cout << "                                  ■■■■■■                                                              " << endl;
																cout << "                                  ■ㅡㅡ■■■                                           " << endl;
																cout << "                                     ■■                                             " << endl;
																cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
																cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
																cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
																cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
																cout << "        ●●●●●●                ■■■■■■                                       " << endl;
																cout << "                                 ■■■■■■                                          " << endl;
																cout << "                                 ■■   ■■                                     " << endl;
																cout << "                                 ■■   ■■                                     " << endl;
																cout << "                                 ■■   ■■                                     " << endl;
																cout << "                                                                                                                               " << endl;
																cout << "                                                                                                                               " << endl;

																cout << "!!가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다!!." << endl;
																cout << endl;

																spearManAttack = false;
																if (currentGuardianhp == 0)
																{
																	cout << endl;
																	cout << "창술사가 전투에서 승리하였습니다!!" << endl;
																	cout << endl;
																	cout << "처음으로 돌아갑니다!!" << endl;
																	cout << endl;
																	Sleep(2500);//1.5초 딜레이
																	goto tryAgain;
																}
																else if (currentSpearmanhp == 0)
																{
																	cout << endl;
																	cout << "가디언이 전투에서 승리하였습니다!!" << endl;
																	cout << endl;
																	cout << "처음으로 돌아갑니다!!" << endl;
																	cout << endl;
																	Sleep(2500);//1.5초 딜레이
																	goto tryAgain;
																}


																if (!guardianAttack)//마지막 턴2 , 가디언 공격
																{
																	Sleep(2500);//1.5초 딜레이
																	cout << endl;
																	cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																	cout << "=============  <Round 5-2>  ==============" << endl;
																	cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																	Sleep(1700);
																	cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
																	cout << "===========!!Warning!!============" << endl;
																	cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
																	Sleep(2500); //1.5초 딜레이

																	//가디언 방패던지기
																	cout << "                                    <2P>                                                                                       " << endl;
																	cout << "                                     ■■■■■■                                                                   " << endl;
																	cout << "                                    ■■■■■■                                                            " << endl;
																	cout << "                                   ■■■■■■                                                            " << endl;
																	cout << "                                  ■■■■■■                                         " << endl;
																	cout << "        ~~~~~~~~~~~~~~                ■■                                             " << endl;
																	cout << "   ~~~~~ ●●●●●● ~~~~~~       ■■■■■■■■■■■■                                        " << endl;
																	cout << "   ~~~●●         ●●~~~      ■  ■   ■■■■■■                                           " << endl;
																	cout << "   ~ ●     <방패>    ●~ ■■■   ■   ■■■■■■                                       " << endl;
																	cout << "   ~~~●●         ●●~~~  ■■■■   ■■■■■■                                                    " << endl;
																	cout << "   ~~~~~ ●●●●●●~~~~~~          ■■■■■■                                       " << endl;
																	cout << "         ~~~~~~~~~~~~~~          ■■■■■■                                          " << endl;
																	cout << "                                   ■■   ■■                                     " << endl;
																	cout << "                                       ■■   ■■                                     " << endl;
																	cout << "                                           ■■   ■■                                     " << endl;
																	cout << "                                                                                                                               " << endl;
																	cout << "                                                                                                                               " << endl;

																	cout << "!!가디언이 방패던지기 스킬을 사용합니다!!" << endl;
																	Sleep(2500); //1.5초 딜레이
																	currentSpearmanhp = currentSpearmanhp -= G_Skill_2;
																	fix();

																	//창술사 맞은상태
																	cout << "                                    <1P>                                                                                       " << endl;
																	cout << "                          ■        ■■■■■■                                             " << endl;
																	cout << "                        ■  ■      ■<■■■■                                              " << endl;
																	cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
																	cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
																	cout << "                         ■■         ■■                                                  " << endl;
																	cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
																	cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
																	cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
																	cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
																	cout << "                         ■■      ■■■■■■                                            " << endl;
																	cout << "                         ■■      ■■■■■■                                            " << endl;
																	cout << "                         ■■      ■■    ■■                                           " << endl;
																	cout << "                         ■■      ■■    ■■                                           " << endl;
																	cout << "                         ■■      ■■    ■■                                           " << endl;
																	cout << "                                                                                                                               " << endl;
																	cout << "                                                                                                                               " << endl;

																	cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
																	cout << endl;

																	guardianAttack = false;
																	if (currentGuardianhp == 0)
																	{
																		cout << endl;
																		cout << "창술사가 전투에서 승리하였습니다!!" << endl;
																		cout << endl;
																		cout << "처음으로 돌아갑니다!!" << endl;
																		cout << endl;
																		Sleep(2500);//1.5초 딜레이
																		goto tryAgain;
																	}
																	else if (currentSpearmanhp == 0)
																	{
																		cout << endl;
																		cout << "가디언이 전투에서 승리하였습니다!!" << endl;
																		cout << endl;
																		cout << "처음으로 돌아갑니다!!" << endl;
																		cout << endl;
																		Sleep(2500);//1.5초 딜레이
																		goto tryAgain;
																	}
																	else
																	{
																		Totie();
																		Sleep(2500);//1.5초 딜레이
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
						}//P1==2와 P2==1 전투 끝.

						while/*P1 == 3 P2 == 1*/ (1) //P1 == 3과 P2 == 1 전투 반복
						{

							berserkerDamage = rand() % 6 + 10;
						    guardianDamage = rand() % 6 + 10;

							if (choice1 == 3 && choice2 == 1) // P1은 버서커 P2는 가디언 ,P1==3과 P2==1 전투 시작.
							{
								//버서커 기본상태
								cout << "                                    <1P>                                                                                       " << endl;
								cout << "             ■■■                ■■■■■■                                " << endl;
								cout << "          ■■    ■■            ■■■■■■                             " << endl;
								cout << "          ■■     ■■           ■■■■■■                                " << endl;
								cout << "          ■■     ■■           ■■■■■■                                " << endl;
								cout << "          ■■ <검> ■■             ■■                                    " << endl;
								cout << "          ■■     ■■      ■■■■■■■■■■■■                           " << endl;
								cout << "          ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
								cout << "          ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
								cout << "       ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
								cout << "        ■■■■■■■■■          ■■■■■■                                  " << endl;
								cout << "              ■■               ■■■■■■                                  " << endl;
								cout << "              ■■               ■■   ■■                                  " << endl;
								cout << "                                ■■   ■■                                  " << endl;
								cout << "                                ■■   ■■                                   " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;

								//가디언 기본상태
								cout << "                                    <2P>                                                                                       " << endl;
								cout << "                                  ■■■■■■                                                                   " << endl;
								cout << "                                  ■■■■■■                                                            " << endl;
								cout << "                                  ■■■■■■                                                            " << endl;
								cout << "                                  ■■■■■■                                         " << endl;
								cout << "                                     ■■                                             " << endl;
								cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
								cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
								cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
								cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
								cout << "        ●●●●●●                ■■■■■■                                       " << endl;
								cout << "                                 ■■■■■■                                          " << endl;
								cout << "                                 ■■   ■■                                     " << endl;
								cout << "                                 ■■   ■■                                     " << endl;
								cout << "                                 ■■   ■■                                     " << endl;
								cout << "                                                                                                                               " << endl;
								cout << "                                                                                                                               " << endl;



								cout << "전투를 시작 합니다!!" << endl;


								if (!berserkerAttack)//첫번째 턴1 , 버서커 공격
								{
									Sleep(2500);//1.5초 딜레이
									cout << endl;
									cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
									cout << "=============  <Round 1-1>  ==============" << endl;
									cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
									Sleep(2500); //1.5초 딜레이

									//버서커 공격상태
									cout << "                                    <1P>                                                                                       " << endl;
									cout << "              ■■■                ■■■■■■                                " << endl;
									cout << "           ■■    ■■            ■■■■■■             ※※※※※※                   " << endl;
									cout << "           ■■     ■■           ■■■■■■           ※※<Attack>※※                      " << endl;
									cout << "           ■■     ■■           ■■■■■■             ※※※※※※                   " << endl;
									cout << "           ■■ <검> ■■             ■■                                    " << endl;
									cout << "           ■■     ■■      ■■■■■■■■■■■■                           " << endl;
									cout << "           ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
									cout << "           ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
									cout << "        ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
									cout << "         ■■■■■■■■■          ■■■■■■                                  " << endl;
									cout << "               ■■               ■■■■■■                                  " << endl;
									cout << "               ■■               ■■   ■■                                  " << endl;
									cout << "                                 ■■   ■■                                  " << endl;
									cout << "                                 ■■   ■■                                   " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;

									cout << "버서커가 가디언을 공격합니다" << endl;
									Sleep(2500); //1.5초 딜레이
									currentGuardianhp = guardianHp -= berserkerDamage;//최초 체력에서 상대 데미지를 감소시키고 그 값을 현재 체력에 대입.

									//가디언 맞은 상태
									cout << "                                    <2P>                                                                                       " << endl;
									cout << "                                  ■■■■■■                                                                   " << endl;
									cout << "                                  ■<<■■■                                                              " << endl;
									cout << "                                  ■■■■■■                                                              " << endl;
									cout << "                                  ■ㅡㅡ■■■                                           " << endl;
									cout << "                                     ■■                                             " << endl;
									cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
									cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
									cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
									cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
									cout << "        ●●●●●●                ■■■■■■                                       " << endl;
									cout << "                                 ■■■■■■                                          " << endl;
									cout << "                                 ■■   ■■                                     " << endl;
									cout << "                                 ■■   ■■                                     " << endl;
									cout << "                                 ■■   ■■                                     " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;

									cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
									cout << endl;

									berserkerAttack = false;

									if (!guardianAttack)//첫번째 턴2,가디언 공격
									{
										Sleep(2500);//1.5초 딜레이
										cout << endl;
										cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
										cout << "=============  <Round 1-2>  ==============" << endl;
										cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;

										Sleep(2500); //1.5초 딜레이

										//가디언 공격상태
										cout << "                                    <2P>                                                                                       " << endl;
										cout << "                                  ■■■■■■                                                                   " << endl;
										cout << "                                  ■■■■■■                 ※※※※※※                                             " << endl;
										cout << "                                  ■■■■■■               ※※<Attack>※※                                               " << endl;
										cout << "                                  ■■■■■■                 ※※※※※※                          " << endl;
										cout << "                                     ■■                                             " << endl;
										cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
										cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
										cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
										cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
										cout << "        ●●●●●●                ■■■■■■                                       " << endl;
										cout << "                                 ■■■■■■                                          " << endl;
										cout << "                                 ■■   ■■                                     " << endl;
										cout << "                                 ■■   ■■                                     " << endl;
										cout << "                                 ■■   ■■                                     " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "가디언이 버서커를 공격합니다" << endl;
										Sleep(2500); //1.5초 딜레이
										currentBerserkerhp = berserkerHp -= guardianDamage;

										//버서커 맞은상태
										cout << "                                    <1P>                                                                                       " << endl;
										cout << "                ■■■                ■■■■■■                                " << endl;
										cout << "             ■■    ■■            ■<<■■■                             " << endl;
										cout << "             ■■     ■■           ■■■■■■                                " << endl;
										cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
										cout << "             ■■ <검> ■■             ■■                                    " << endl;
										cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
										cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
										cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
										cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
										cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
										cout << "                 ■■               ■■■■■■                                  " << endl;
										cout << "                 ■■               ■■   ■■                                  " << endl;
										cout << "                                   ■■   ■■                                  " << endl;
										cout << "                                   ■■   ■■                                   " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다." << endl;
										cout << endl;

										guardianAttack = false;

										if (!berserkerAttack)//두번째 턴1 , 버서커 공격
										{
											Sleep(2500);//1.5초 딜레이
											cout << endl;
											cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
											cout << "=============  <Round 2-1>  ==============" << endl;
											cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
											Sleep(2500); //1.5초 딜레이

											//버서커 공격상태
											cout << "                                    <1P>                                                                                       " << endl;
											cout << "              ■■■                ■■■■■■                                " << endl;
											cout << "           ■■    ■■            ■■■■■■             ※※※※※※                   " << endl;
											cout << "           ■■     ■■           ■■■■■■           ※※<Attack>※※                      " << endl;
											cout << "           ■■     ■■           ■■■■■■             ※※※※※※                   " << endl;
											cout << "           ■■ <검> ■■             ■■                                    " << endl;
											cout << "           ■■     ■■      ■■■■■■■■■■■■                           " << endl;
											cout << "           ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
											cout << "           ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
											cout << "        ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
											cout << "         ■■■■■■■■■          ■■■■■■                                  " << endl;
											cout << "               ■■               ■■■■■■                                  " << endl;
											cout << "               ■■               ■■   ■■                                  " << endl;
											cout << "                                 ■■   ■■                                  " << endl;
											cout << "                                 ■■   ■■                                   " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "버서커가 가디언을 공격합니다" << endl;
											Sleep(2500); //1.5초 딜레이
											currentGuardianhp = currentGuardianhp -= berserkerDamage;

											//가디언 맞은 상태
											cout << "                                    <2P>                                                                                       " << endl;
											cout << "                                  ■■■■■■                                                                   " << endl;
											cout << "                                  ■<<■■■                                                              " << endl;
											cout << "                                  ■■■■■■                                                              " << endl;
											cout << "                                  ■ㅡㅡ■■■                                           " << endl;
											cout << "                                     ■■                                             " << endl;
											cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
											cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
											cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
											cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
											cout << "        ●●●●●●                ■■■■■■                                       " << endl;
											cout << "                                 ■■■■■■                                          " << endl;
											cout << "                                 ■■   ■■                                     " << endl;
											cout << "                                 ■■   ■■                                     " << endl;
											cout << "                                 ■■   ■■                                     " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
											cout << endl;

											berserkerAttack = false;

											if (!guardianAttack)//두번째 턴2 , 가디언 공격
											{
												Sleep(2500);//1.5초 딜레이
												cout << endl;
												cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
												cout << "=============  <Round 2-2>  ==============" << endl;
												cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
												Sleep(2500); //1.5초 딜레이

												//가디언 공격상태
												cout << "                                    <2P>                                                                                       " << endl;
												cout << "                                  ■■■■■■                                                                   " << endl;
												cout << "                                  ■■■■■■                 ※※※※※※                                             " << endl;
												cout << "                                  ■■■■■■               ※※<Attack>※※                                               " << endl;
												cout << "                                  ■■■■■■                 ※※※※※※                          " << endl;
												cout << "                                     ■■                                             " << endl;
												cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
												cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
												cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
												cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
												cout << "        ●●●●●●                ■■■■■■                                       " << endl;
												cout << "                                 ■■■■■■                                          " << endl;
												cout << "                                 ■■   ■■                                     " << endl;
												cout << "                                 ■■   ■■                                     " << endl;
												cout << "                                 ■■   ■■                                     " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "가디언이 버서커를 공격합니다" << endl;
												Sleep(2500); //1.5초 딜레이
												currentBerserkerhp = currentBerserkerhp -= guardianDamage;

												//버서커 맞은상태
												cout << "                                    <1P>                                                                                       " << endl;
												cout << "                ■■■                ■■■■■■                                " << endl;
												cout << "             ■■    ■■            ■<<■■■                             " << endl;
												cout << "             ■■     ■■           ■■■■■■                                " << endl;
												cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
												cout << "             ■■ <검> ■■             ■■                                    " << endl;
												cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
												cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
												cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
												cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
												cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
												cout << "                 ■■               ■■■■■■                                  " << endl;
												cout << "                 ■■               ■■   ■■                                  " << endl;
												cout << "                                   ■■   ■■                                  " << endl;
												cout << "                                   ■■   ■■                                   " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다." << endl;
												cout << endl;

												guardianAttack = false;




												if (!berserkerAttack)//세번째 턴1 ,버서커 공격
												{
													Sleep(2500);//1.5초 딜레이
													cout << endl;
													cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
													cout << "=============  <Round 3-2>  ==============" << endl;
													cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
													Sleep(2500); //1.5초 딜레이

													//버서커 내려찍기
													cout << "                                    <1P>                                                                                       " << endl;
													cout << "                /  /                 / /                                                " << endl;
													cout << "              /  /       ■■        / /                                                    " << endl;
													cout << "            /  /    ■■      ■■   / /                                                      " << endl;
													cout << "          /  /      ■■      ■■  / /                                                       " << endl;
													cout << "                    ■■      ■■                                                           " << endl;
													cout << "                    ■■ <검> ■■        ■■■■■■                                " << endl;
													cout << "                    ■■      ■■          ■■■■■■                             " << endl;
													cout << "                    ■■      ■■           ■■■■■■                                " << endl;
													cout << "                    ■■      ■■           ■■■■■■                                " << endl;
													cout << "                  ■■■■■■■■■■          ■■                                    " << endl;
													cout << "                  ■■■■■■■■■■ ■■■■■■■■■■■■                           " << endl;
													cout << "                         ■■  ■   ■      ■■■■■■■                            " << endl;
													cout << "                         ■■■   ■         ■■■■■■                               " << endl;
													cout << "                                            ■■■■■■                                " << endl;
													cout << "                                            ■■■■■■                                  " << endl;
													cout << "                                            ■■■■■■                                  " << endl;
													cout << "                                            ■■   ■■                                  " << endl;
													cout << "                                              ■■   ■■                                  " << endl;
													cout << "                                                ■■   ■■                                   " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "!!*버서커가 내려찍기 스킬을 사용합니다*!!" << endl;
													currentGuardianhp = currentGuardianhp - B_Skill_1; //가디언의 현재 체력에서 버서커의 내려찍기 스킬 데미지값을 빼준다.
													Sleep(2500); //1.5초 딜레이
													
													fix();

													//가디언 맞은 상태
													cout << "                                    <2P>                                                                                       " << endl;
													cout << "                                  ■■■■■■                                                                   " << endl;
													cout << "                                  ■<<■■■                                                              " << endl;
													cout << "                                  ■■■■■■                                                              " << endl;
													cout << "                                  ■ㅡㅡ■■■                                           " << endl;
													cout << "                                     ■■                                             " << endl;
													cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
													cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
													cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
													cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
													cout << "        ●●●●●●                ■■■■■■                                       " << endl;
													cout << "                                 ■■■■■■                                          " << endl;
													cout << "                                 ■■   ■■                                     " << endl;
													cout << "                                 ■■   ■■                                     " << endl;
													cout << "                                 ■■   ■■                                     " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
													cout << endl;

													berserkerAttack = false;
													if (currentGuardianhp == 0)
													{
														cout << endl;
														cout << "버서커가 전투에서 승리하였습니다!!" << endl;
														cout << endl;
														cout << "처음으로 돌아갑니다!!" << endl;
														cout << endl;
														Sleep(2500);//1.5초 딜레이
														goto tryAgain;
													}
													else if (currentBerserkerhp == 0)
													{
														cout << endl;
														cout << "가디언이 전투에서 승리하였습니다!!" << endl;
														cout << endl;
														cout << "처음으로 돌아갑니다!!" << endl;
														cout << endl;
														Sleep(2500);//1.5초 딜레이
														goto tryAgain;
													}


													if (!guardianAttack)//세번째 턴2 , 가디언 공격
													{
														Sleep(2500);//1.5초 딜레이
														cout << endl;
														cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
														cout << "=============  <Round 3-1>  ==============" << endl;
														cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
														Sleep(2500); //1.5초 딜레이
														cout << "!!*가디언이 가드스킬을 사용합니다*!!" << endl;
														cout << "!!*      공격을 1회 방어합니다   *!!" << endl;

														//가디언 가드 상태
														cout << "                                    <2P>                                                                                       " << endl;
														cout << "                                  ■■■■■■                                                                   " << endl;
														cout << "                                  ■■■■■■                 !※※※※※※!                                             " << endl;
														cout << "                                  ■■■■■■               !※※<Guard>※※!                                               " << endl;
														cout << "                                  ■■■■■■                 !※※※※※※!                          " << endl;
														cout << "                                     ■■                                             " << endl;
														cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
														cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
														cout << "     ●     <방패>     ● ■■      ■■■■■■  ■                                     " << endl;
														cout << "      ●●         ●●■■■■■■■■■■■■■■                                                    " << endl;
														cout << "        ●●●●●●                ■■■■■■                                       " << endl;
														cout << "                                 ■■■■■■                                          " << endl;
														cout << "                                  ■■   ■■                                     " << endl;
														cout << "                               ■■   ■■                                     " << endl;
														cout << "                             ■■   ■■                                     " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														Sleep(2500); //1.5초 딜레이
														cout << "가디언이 1턴 가드상태이(가) 되었습니다." << endl;
														Sleep(2500);//1.5초 딜레이
														currentBerserkerhp = currentBerserkerhp - G_Skill_1;//가디언이 가드 스킬을 사용했으므로 버서커의 현재 체력에 가디언의 가드 스킬값을 빼준다.
														 
														fix();

														//버서커 기본상태
														cout << "                                    <1P>                                                                                       " << endl;
														cout << "             ■■■                ■■■■■■                                " << endl;
														cout << "          ■■    ■■            ■■■■■■                             " << endl;
														cout << "          ■■     ■■           ■■■■■■                                " << endl;
														cout << "          ■■     ■■           ■■■■■■                                " << endl;
														cout << "          ■■ <검> ■■             ■■                                    " << endl;
														cout << "          ■■     ■■      ■■■■■■■■■■■■                           " << endl;
														cout << "          ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
														cout << "          ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
														cout << "       ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
														cout << "        ■■■■■■■■■          ■■■■■■                                  " << endl;
														cout << "              ■■               ■■■■■■                                  " << endl;
														cout << "              ■■               ■■   ■■                                  " << endl;
														cout << "                                ■■   ■■                                  " << endl;
														cout << "                                ■■   ■■                                   " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다." << endl;
														cout << endl;




														guardianAttack = false;
														if (currentGuardianhp == 0)
														{
															cout << "버서커가 전투에서 승리하였습니다!!" << endl;
															cout << endl;
															cout << "처음으로 돌아갑니다!!" << endl;
															cout << endl;
															Sleep(2500);//1.5초 딜레이
															goto tryAgain;
														}
														else if (currentBerserkerhp == 0)
														{
															cout << endl;
															cout << "가디언이 전투에서 승리하였습니다!!" << endl;
															cout << endl;
															cout << "처음으로 돌아갑니다!!" << endl;
															cout << endl;
															Sleep(2500);//1.5초 딜레이
															goto tryAgain;
														}



														if (!berserkerAttack)//네번째 턴1 , 버서커 공격
														{
															Sleep(2500);//1.5초 딜레이
															cout << endl;
															cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
															cout << "=============  <Round 4-1>  ==============" << endl;
															cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
															Sleep(2500); //1.5초 딜레이

															//버서커 공격상태
															cout << "                                    <1P>                                                                                       " << endl;
															cout << "              ■■■                ■■■■■■                                " << endl;
															cout << "           ■■    ■■            ■■■■■■             ※※※※※※                   " << endl;
															cout << "           ■■     ■■           ■■■■■■           ※※<Attack>※※                      " << endl;
															cout << "           ■■     ■■           ■■■■■■             ※※※※※※                   " << endl;
															cout << "           ■■ <검> ■■             ■■                                    " << endl;
															cout << "           ■■     ■■      ■■■■■■■■■■■■                           " << endl;
															cout << "           ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
															cout << "           ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
															cout << "        ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
															cout << "         ■■■■■■■■■          ■■■■■■                                  " << endl;
															cout << "               ■■               ■■■■■■                                  " << endl;
															cout << "               ■■               ■■   ■■                                  " << endl;
															cout << "                                 ■■   ■■                                  " << endl;
															cout << "                                 ■■   ■■                                   " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "버서커가 가디언을 공격합니다" << endl;
															Sleep(2500); //1.5초 딜레이

															//가디언 가드 상태
															cout << "                                    <2P>                                                                                       " << endl;
															cout << "                                  ■■■■■■                                                                   " << endl;
															cout << "                                  ■■■■■■                 !※※※※※※!                                             " << endl;
															cout << "                                  ■■■■■■               !※※<Guard>※※!                                               " << endl;
															cout << "                                  ■■■■■■                 !※※※※※※!                          " << endl;
															cout << "                                     ■■                                             " << endl;
															cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
															cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
															cout << "     ●     <방패>     ● ■■      ■■■■■■  ■                                     " << endl;
															cout << "      ●●         ●●■■■■■■■■■■■■■■                                                    " << endl;
															cout << "        ●●●●●●                ■■■■■■                                       " << endl;
															cout << "                                 ■■■■■■                                          " << endl;
															cout << "                                  ■■   ■■                                     " << endl;
															cout << "                               ■■   ■■                                     " << endl;
															cout << "                             ■■   ■■                                     " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "가디언이 1턴 가드상태입니다!!" << endl;
															cout << "*가디언의 가드 스킬로 인해 데미지가 무시되었습니다*!!" << endl;
															Sleep(2500); //1.5초 딜레이
															currentGuardianhp = currentGuardianhp;
															fix();

															//가디언 기본상태
															cout << "                                    <2P>                                                                                       " << endl;
															cout << "                                  ■■■■■■                                                                   " << endl;
															cout << "                                  ■■■■■■                                                            " << endl;
															cout << "                                  ■■■■■■                                                            " << endl;
															cout << "                                  ■■■■■■                                         " << endl;
															cout << "                                     ■■                                             " << endl;
															cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
															cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
															cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
															cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
															cout << "        ●●●●●●                ■■■■■■                                       " << endl;
															cout << "                                 ■■■■■■                                          " << endl;
															cout << "                                 ■■   ■■                                     " << endl;
															cout << "                                 ■■   ■■                                     " << endl;
															cout << "                                 ■■   ■■                                     " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
															cout << endl;

															berserkerAttack = false;
															if (currentGuardianhp == 0)
															{
																cout << endl;
																cout << "버서커 전투에서 승리하였습니다!!" << endl;
																cout << endl;
																cout << "처음으로 돌아갑니다!!" << endl;
																cout << endl;
																Sleep(2500);//1.5초 딜레이
																goto tryAgain;
															}
															else if (currentBerserkerhp == 0)
															{
																cout << endl;
																cout << "가디언이 전투에서 승리하였습니다!!" << endl;
																cout << endl;
																cout << "처음으로 돌아갑니다!!" << endl;
																cout << endl;
																Sleep(2500);//1.5초 딜레이
																goto tryAgain;
															}


															if (!guardianAttack)//네번째 턴2 , 가디언 공격
															{
																Sleep(2500);//1.5초 딜레이
																cout << endl;
																cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																cout << "=============  <Round 4-2>  ==============" << endl;
																cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																Sleep(2500); //1.5초 딜레이

																//가디언 공격상태
																cout << "                                    <2P>                                                                                       " << endl;
																cout << "                                  ■■■■■■                                                                   " << endl;
																cout << "                                  ■■■■■■                 ※※※※※※                                             " << endl;
																cout << "                                  ■■■■■■               ※※<Attack>※※                                               " << endl;
																cout << "                                  ■■■■■■                 ※※※※※※                          " << endl;
																cout << "                                     ■■                                             " << endl;
																cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
																cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
																cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
																cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
																cout << "        ●●●●●●                ■■■■■■                                       " << endl;
																cout << "                                 ■■■■■■                                          " << endl;
																cout << "                                 ■■   ■■                                     " << endl;
																cout << "                                 ■■   ■■                                     " << endl;
																cout << "                                 ■■   ■■                                     " << endl;
																cout << "                                                                                                                               " << endl;
																cout << "                                                                                                                               " << endl;

																cout << "가디언이 버서커를 공격합니다" << endl;
																Sleep(2500); //1.5초 딜레이
																currentBerserkerhp = currentBerserkerhp -= guardianDamage;
																fix();

																//버서커 맞은상태
																cout << "                                    <1P>                                                                                       " << endl;
																cout << "                ■■■                ■■■■■■                                " << endl;
																cout << "             ■■    ■■            ■<<■■■                             " << endl;
																cout << "             ■■     ■■           ■■■■■■                                " << endl;
																cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
																cout << "             ■■ <검> ■■             ■■                                    " << endl;
																cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
																cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
																cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
																cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
																cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
																cout << "                 ■■               ■■■■■■                                  " << endl;
																cout << "                 ■■               ■■   ■■                                  " << endl;
																cout << "                                   ■■   ■■                                  " << endl;
																cout << "                                   ■■   ■■                                   " << endl;
																cout << "                                                                                                                               " << endl;
																cout << "                                                                                                                               " << endl;

																cout << "버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다." << endl;
																cout << endl;

																guardianAttack = false;
																if (currentGuardianhp == 0)
																{
																	cout << endl;
																	cout << "버서커가 전투에서 승리하였습니다!!" << endl;
																	cout << endl;
																	cout << "처음으로 돌아갑니다!!" << endl;
																	cout << endl;
																	Sleep(2500);//1.5초 딜레이
																	goto tryAgain;
																}
																else if (currentBerserkerhp == 0)
																{
																	cout << endl;
																	cout << "가디언이 전투에서 승리하였습니다!!" << endl;
																	cout << endl;
																	cout << "처음으로 돌아갑니다!!" << endl;
																	cout << endl;
																	Sleep(2500);//1.5초 딜레이
																	goto tryAgain;
																}


																if (!berserkerAttack)//마지막 턴1 , 버서커 공격
																{
																	Sleep(2500);//1.5초 딜레이
																	cout << endl;
																	cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																	cout << "=============  <Round 5-2>  ==============" << endl;
																	cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																	Sleep(1700);
																	cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
																	cout << "===========!!Warning!!============" << endl;
																	cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
																	Sleep(2500); //1.5초 딜레이

																	//버서커 급소타격
																	cout << "                                    <1P>                                                                                       " << endl;
																	cout << "                                                 ■■■■■■                                " << endl;
																	cout << "                                                    ■■■■■■                             " << endl;
																	cout << "                                                   ■■■■■■                                " << endl;
																	cout << "                      <<<<<<<<<<<<<<<<<<<<            ■■■■■■                                " << endl;
																	cout << "                 <<<<<<<<<<<<<<<<<<<<                         ■■                                                 " << endl;
																	cout << "            <<<<<<<<<<<<<<<<<<<<       ■■■■■■  ■■■■■■■■■■■                          " << endl;
																	cout << "       <<<<<<<<<<<<<<<<<<<< /■■■■■■■■■■■■■■  ■ ■  ■■■■■■■                             " << endl;
																	cout << "  <<<<<<<<<<<<<<<<<<<<      ■       <검>       ■■■■■ ■ ■    ■■■■■■                               " << endl;
																	cout << "       <<<<<<<<<<<<<<<<<<<< ＼■■■■■■■■■■■■■ ■ ■        ■■■■■■                                " << endl;
																	cout << "             <<<<<<<<<<<<<<<<<<<<      ■■■■■■             ■■■■■■                                  " << endl;
																	cout << "                 <<<<<<<<<<<<<<<<<<<<                           ■■■■■■                                  " << endl;
																	cout << "                      <<<<<<<<<<<<<<<<<<<<                    ■■   ■■                                  " << endl;
																	cout << "                                                                ■■   ■■                                  " << endl;
																	cout << "                                                               ■■   ■■                                   " << endl;
																	cout << "                                                                                                                               " << endl;
																	cout << "                                                                                                                               " << endl;

																	cout << "!!버서커가 급소타격 스킬을 사용합니다!!" << endl;
																	Sleep(2500); //1.5초 딜레이
																	currentGuardianhp = currentGuardianhp -= B_Skill_2;
																	fix();

																	//가디언 맞은 상태
																	cout << "                                    <2P>                                                                                       " << endl;
																	cout << "                                  ■■■■■■                                                                   " << endl;
																	cout << "                                  ■<<■■■                                                              " << endl;
																	cout << "                                  ■■■■■■                                                              " << endl;
																	cout << "                                  ■ㅡㅡ■■■                                           " << endl;
																	cout << "                                     ■■                                             " << endl;
																	cout << "         ●●●●●●           ■■■■■■■■■■■■                                        " << endl;
																	cout << "      ●●         ●●      ■     ■■■■■■  ■■                                         " << endl;
																	cout << "     ●     <방패>     ● ■■      ■■■■■■  ■■                                     " << endl;
																	cout << "      ●●         ●●            ■■■■■■  ■■                                                  " << endl;
																	cout << "        ●●●●●●                ■■■■■■                                       " << endl;
																	cout << "                                 ■■■■■■                                          " << endl;
																	cout << "                                 ■■   ■■                                     " << endl;
																	cout << "                                 ■■   ■■                                     " << endl;
																	cout << "                                 ■■   ■■                                     " << endl;
																	cout << "                                                                                                                               " << endl;
																	cout << "                                                                                                                               " << endl;

																	cout << "가디언의 체력이 " << currentGuardianhp << "이(가) 되었습니다." << endl;
																	cout << endl;

																	berserkerAttack = false;
																	if (currentGuardianhp == 0)
																	{
																		cout << endl;
																		cout << "버서커가 전투에서 승리하였습니다!!" << endl;
																		cout << endl;
																		cout << "처음으로 돌아갑니다!!" << endl;
																		cout << endl;
																		Sleep(2500);//1.5초 딜레이
																		goto tryAgain;;
																	}
																	else if (currentBerserkerhp == 0)
																	{
																		cout << endl;
																		cout << "가디언이 전투에서 승리하였습니다!!" << endl;
																		cout << endl;
																		cout << "처음으로 돌아갑니다!!" << endl;
																		cout << endl;
																		Sleep(2500);//1.5초 딜레이
																		goto tryAgain;
																	}


																	if (!guardianAttack)//마지막 턴2 , 가디언 공격
																	{
																		Sleep(2500);//1.5초 딜레이
																		cout << endl;
																		cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																		cout << "=============  <Round 5-1>  ==============" << endl;
																		cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																		Sleep(1700);
																		cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
																		cout << "===========!!Warning!!============" << endl;
																		cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
																		Sleep(2500); //1.5초 딜레이

																		//가디언 방패던지기
																		cout << "                                    <2P>                                                                                       " << endl;
																		cout << "                                     ■■■■■■                                                                   " << endl;
																		cout << "                                    ■■■■■■                                                            " << endl;
																		cout << "                                   ■■■■■■                                                            " << endl;
																		cout << "                                  ■■■■■■                                         " << endl;
																		cout << "        ~~~~~~~~~~~~~~                ■■                                             " << endl;
																		cout << "   ~~~~~ ●●●●●● ~~~~~~       ■■■■■■■■■■■■                                        " << endl;
																		cout << "   ~~~●●         ●●~~~      ■  ■   ■■■■■■                                           " << endl;
																		cout << "   ~ ●     <방패>    ●~ ■■■   ■   ■■■■■■                                       " << endl;
																		cout << "   ~~~●●         ●●~~~  ■■■■   ■■■■■■                                                    " << endl;
																		cout << "   ~~~~~ ●●●●●●~~~~~~          ■■■■■■                                       " << endl;
																		cout << "         ~~~~~~~~~~~~~~          ■■■■■■                                          " << endl;
																		cout << "                                   ■■   ■■                                     " << endl;
																		cout << "                                       ■■   ■■                                     " << endl;
																		cout << "                                           ■■   ■■                                     " << endl;
																		cout << "                                                                                                                               " << endl;
																		cout << "                                                                                                                               " << endl;

																		cout << "!!가디언이 방패던지기 스킬을 사용합니다!!" << endl;
																		Sleep(2500); //1.5초 딜레이
																		currentBerserkerhp = currentBerserkerhp -= G_Skill_2;
																		fix();

																		//버서커 맞은상태
																		cout << "                                    <1P>                                                                                       " << endl;
																		cout << "                ■■■                ■■■■■■                                " << endl;
																		cout << "             ■■    ■■            ■<<■■■                             " << endl;
																		cout << "             ■■     ■■           ■■■■■■                                " << endl;
																		cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
																		cout << "             ■■ <검> ■■             ■■                                    " << endl;
																		cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
																		cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
																		cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
																		cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
																		cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
																		cout << "                 ■■               ■■■■■■                                  " << endl;
																		cout << "                 ■■               ■■   ■■                                  " << endl;
																		cout << "                                   ■■   ■■                                  " << endl;
																		cout << "                                   ■■   ■■                                   " << endl;
																		cout << "                                                                                                                               " << endl;
																		cout << "                                                                                                                               " << endl;

																		cout << "!!버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다!!." << endl;
																		cout << endl;

																		guardianAttack = false;
																		if (currentGuardianhp == 0)
																		{
																			cout << endl;
																			cout << "버서커가 전투에서 승리하였습니다!!" << endl;
																			cout << endl;
																			cout << "처음으로 돌아갑니다!!" << endl;
																			cout << endl;
																			Sleep(2500);//1.5초 딜레이
																			goto tryAgain;;
																		}
																		else if (currentBerserkerhp == 0)
																		{
																			cout << endl;
																			cout << "가디언이 전투에서 승리하였습니다!!" << endl;
																			cout << endl;
																			cout << "처음으로 돌아갑니다!!" << endl;
																			cout << endl;
																			Sleep(2500);//1.5초 딜레이
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
							}//P1==3과 P2==1 전투 끝.

							while/*P1 == 3와 P2 == 2*/ (1) //P1 == 3와 P2 == 2 전투 반복
							{

								berserkerDamage = rand() % 6 + 10;
								spearManDamage = rand() % 6 + 10;

								if (choice1 == 3 && choice2 == 2) // P1은 버서커 P2는 창술사 ,P1==3과 P2==2 전투 시작.
								{

									//버서커 기본상태
									cout << "                                    <1P>                                                                                       " << endl;
									cout << "             ■■■                ■■■■■■                                " << endl;
									cout << "          ■■    ■■            ■■■■■■                             " << endl;
									cout << "          ■■     ■■           ■■■■■■                                " << endl;
									cout << "          ■■     ■■           ■■■■■■                                " << endl;
									cout << "          ■■ <검> ■■             ■■                                    " << endl;
									cout << "          ■■     ■■      ■■■■■■■■■■■■                           " << endl;
									cout << "          ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
									cout << "          ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
									cout << "       ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
									cout << "        ■■■■■■■■■          ■■■■■■                                  " << endl;
									cout << "              ■■               ■■■■■■                                  " << endl;
									cout << "              ■■               ■■   ■■                                  " << endl;
									cout << "                                ■■   ■■                                  " << endl;
									cout << "                                ■■   ■■                                   " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;

									//창술사 기본상태
									cout << "                                    <2P>                                                                                       " << endl;
									cout << "                           ■        ■■■■■■                                             " << endl;
									cout << "                         ■  ■      ■■■■■■                                              " << endl;
									cout << "                       ■ <창> ■    ■■■■■■                                             " << endl;
									cout << "                          ■■      ■■■■■■■                                             " << endl;
									cout << "                          ■■         ■■                                                  " << endl;
									cout << "                          ■■  ■■■■■■■■■■■■                                        " << endl;
									cout << "                          ■■■   ■■■■■■■    ■■                                       " << endl;
									cout << "                          ■■      ■■■■■■    ■■                                     " << endl;
									cout << "                          ■■      ■■■■■■    ■■                                     " << endl;
									cout << "                          ■■      ■■■■■■                                            " << endl;
									cout << "                          ■■      ■■■■■■                                            " << endl;
									cout << "                          ■■      ■■    ■■                                           " << endl;
									cout << "                          ■■      ■■    ■■                                           " << endl;
									cout << "                          ■■      ■■    ■■                                           " << endl;
									cout << "                                                                                                                               " << endl;
									cout << "                                                                                                                               " << endl;



									cout << "전투를 시작 합니다!!" << endl;


									if (!berserkerAttack)//첫번째 턴1 , 버서커 공격
									{
										Sleep(2500);//1.5초 딜레이
										cout << endl;
										cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
										cout << "=============  <Round 1-1>  ==============" << endl;
										cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
										Sleep(2500); //1.5초 딜레이

										//버서커 공격상태
										cout << "                                    <1P>                                                                                       " << endl;
										cout << "              ■■■                ■■■■■■                                " << endl;
										cout << "           ■■    ■■            ■■■■■■             ※※※※※※                   " << endl;
										cout << "           ■■     ■■           ■■■■■■           ※※<Attack>※※                      " << endl;
										cout << "           ■■     ■■           ■■■■■■             ※※※※※※                   " << endl;
										cout << "           ■■ <검> ■■             ■■                                    " << endl;
										cout << "           ■■     ■■      ■■■■■■■■■■■■                           " << endl;
										cout << "           ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
										cout << "           ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
										cout << "        ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
										cout << "         ■■■■■■■■■          ■■■■■■                                  " << endl;
										cout << "               ■■               ■■■■■■                                  " << endl;
										cout << "               ■■               ■■   ■■                                  " << endl;
										cout << "                                 ■■   ■■                                  " << endl;
										cout << "                                 ■■   ■■                                   " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "버서커가 창술사를 공격합니다" << endl;
										Sleep(2500); //1.5초 딜레이
										currentSpearmanhp = spearManHp -= berserkerDamage;//최초 체력에서 상대 데미지를 감소시키고 그 값을 현재 체력에 대입.

										//창술사 맞은상태
										cout << "                                    <2P>                                                                                       " << endl;
										cout << "                          ■        ■■■■■■                                             " << endl;
										cout << "                        ■  ■      ■<■■■■                                              " << endl;
										cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
										cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
										cout << "                         ■■         ■■                                                  " << endl;
										cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
										cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
										cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
										cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
										cout << "                         ■■      ■■■■■■                                            " << endl;
										cout << "                         ■■      ■■■■■■                                            " << endl;
										cout << "                         ■■      ■■    ■■                                           " << endl;
										cout << "                         ■■      ■■    ■■                                           " << endl;
										cout << "                         ■■      ■■    ■■                                           " << endl;
										cout << "                                                                                                                               " << endl;
										cout << "                                                                                                                               " << endl;

										cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
										cout << endl;

										berserkerAttack = false;

										if (!spearManAttack)//첫번째 턴2,창술사 공격
										{
											Sleep(2500);//1.5초 딜레이
											cout << endl;
											cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
											cout << "=============  <Round 1-2>  ==============" << endl;
											cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;

											Sleep(2500); //1.5초 딜레이


	//창술사 공격상태
											cout << "                                    <2P>                                                                                       " << endl;
											cout << "                          ■        ■■■■■■                                             " << endl;
											cout << "                        ■  ■      ■■■■■■               ※※※※※※                                " << endl;
											cout << "                      ■ <창> ■    ■■■■■■            ※※<Attack>※※                                 " << endl;
											cout << "                         ■■      ■■■■■■■              ※※※※※※                               " << endl;
											cout << "                         ■■         ■■                                                  " << endl;
											cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
											cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
											cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
											cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
											cout << "                         ■■      ■■■■■■                                            " << endl;
											cout << "                         ■■      ■■■■■■                                            " << endl;
											cout << "                         ■■      ■■    ■■                                           " << endl;
											cout << "                         ■■      ■■    ■■                                           " << endl;
											cout << "                         ■■      ■■    ■■                                           " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;


											cout << "창술사가 버서커를 공격합니다" << endl;
											Sleep(2500); //1.5초 딜레이
											currentBerserkerhp = berserkerHp -= spearManDamage;

											//버서커 맞은상태
											cout << "                                    <1P>                                                                                       " << endl;
											cout << "                ■■■                ■■■■■■                                " << endl;
											cout << "             ■■    ■■            ■<<■■■                             " << endl;
											cout << "             ■■     ■■           ■■■■■■                                " << endl;
											cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
											cout << "             ■■ <검> ■■             ■■                                    " << endl;
											cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
											cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
											cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
											cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
											cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
											cout << "                 ■■               ■■■■■■                                  " << endl;
											cout << "                 ■■               ■■   ■■                                  " << endl;
											cout << "                                   ■■   ■■                                  " << endl;
											cout << "                                   ■■   ■■                                   " << endl;
											cout << "                                                                                                                               " << endl;
											cout << "                                                                                                                               " << endl;

											cout << "버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다." << endl;
											cout << endl;

											spearManAttack = false;

											if (!spearManAttack)//두번째 턴1 , 버서커 공격
											{
												Sleep(2500);//1.5초 딜레이
												cout << endl;
												cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
												cout << "=============  <Round 2-1>  ==============" << endl;
												cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
												Sleep(2500); //1.5초 딜레이

												//버서커 공격상태
												cout << "                                    <1P>                                                                                       " << endl;
												cout << "              ■■■                ■■■■■■                                " << endl;
												cout << "           ■■    ■■            ■■■■■■             ※※※※※※                   " << endl;
												cout << "           ■■     ■■           ■■■■■■           ※※<Attack>※※                      " << endl;
												cout << "           ■■     ■■           ■■■■■■             ※※※※※※                   " << endl;
												cout << "           ■■ <검> ■■             ■■                                    " << endl;
												cout << "           ■■     ■■      ■■■■■■■■■■■■                           " << endl;
												cout << "           ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
												cout << "           ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
												cout << "        ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
												cout << "         ■■■■■■■■■          ■■■■■■                                  " << endl;
												cout << "               ■■               ■■■■■■                                  " << endl;
												cout << "               ■■               ■■   ■■                                  " << endl;
												cout << "                                 ■■   ■■                                  " << endl;
												cout << "                                 ■■   ■■                                   " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "버서커가 창술사를 공격합니다" << endl;
												Sleep(2500); //1.5초 딜레이
												currentSpearmanhp = currentSpearmanhp -= berserkerDamage;

												//창술사 맞은상태
												cout << "                                    <2P>                                                                                       " << endl;
												cout << "                          ■        ■■■■■■                                             " << endl;
												cout << "                        ■  ■      ■<■■■■                                              " << endl;
												cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
												cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
												cout << "                         ■■         ■■                                                  " << endl;
												cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
												cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
												cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
												cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
												cout << "                         ■■      ■■■■■■                                            " << endl;
												cout << "                         ■■      ■■■■■■                                            " << endl;
												cout << "                         ■■      ■■    ■■                                           " << endl;
												cout << "                         ■■      ■■    ■■                                           " << endl;
												cout << "                         ■■      ■■    ■■                                           " << endl;
												cout << "                                                                                                                               " << endl;
												cout << "                                                                                                                               " << endl;

												cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
												cout << endl;

												spearManAttack = false;

												if (!spearManAttack)//두번째 턴2 , 창술사 공격
												{
													Sleep(2500);//1.5초 딜레이
													cout << endl;
													cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
													cout << "=============  <Round 2-2>  ==============" << endl;
													cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
													Sleep(2500); //1.5초 딜레이

													//창술사 공격상태
													cout << "                                    <2P>                                                                                       " << endl;
													cout << "                          ■        ■■■■■■                                             " << endl;
													cout << "                        ■  ■      ■■■■■■               ※※※※※※                                " << endl;
													cout << "                      ■ <창> ■    ■■■■■■            ※※<Attack>※※                                 " << endl;
													cout << "                         ■■      ■■■■■■■              ※※※※※※                               " << endl;
													cout << "                         ■■         ■■                                                  " << endl;
													cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
													cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
													cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
													cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
													cout << "                         ■■      ■■■■■■                                            " << endl;
													cout << "                         ■■      ■■■■■■                                            " << endl;
													cout << "                         ■■      ■■    ■■                                           " << endl;
													cout << "                         ■■      ■■    ■■                                           " << endl;
													cout << "                         ■■      ■■    ■■                                           " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "창술사가 버서커를 공격합니다" << endl;
													Sleep(2500); //1.5초 딜레이
													currentBerserkerhp = currentBerserkerhp -= spearManDamage;

													//버서커 맞은상태
													cout << "                                    <1P>                                                                                       " << endl;
													cout << "                ■■■                ■■■■■■                                " << endl;
													cout << "             ■■    ■■            ■<<■■■                             " << endl;
													cout << "             ■■     ■■           ■■■■■■                                " << endl;
													cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
													cout << "             ■■ <검> ■■             ■■                                    " << endl;
													cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
													cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
													cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
													cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
													cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
													cout << "                 ■■               ■■■■■■                                  " << endl;
													cout << "                 ■■               ■■   ■■                                  " << endl;
													cout << "                                   ■■   ■■                                  " << endl;
													cout << "                                   ■■   ■■                                   " << endl;
													cout << "                                                                                                                               " << endl;
													cout << "                                                                                                                               " << endl;

													cout << "버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다." << endl;
													cout << endl;

													spearManAttack = false;




													if (!berserkerAttack)//세번째 턴1 ,버서커 공격
													{
														Sleep(2500);//1.5초 딜레이
														cout << endl;
														cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
														cout << "=============  <Round 3-2>  ==============" << endl;
														cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
														Sleep(2500); //1.5초 딜레이

														//버서커 내려찍기
														cout << "                                    <1P>                                                                                       " << endl;
														cout << "                /  /                 / /                                                " << endl;
														cout << "              /  /       ■■        / /                                                    " << endl;
														cout << "            /  /    ■■      ■■   / /                                                      " << endl;
														cout << "          /  /      ■■      ■■  / /                                                       " << endl;
														cout << "                    ■■      ■■                                                           " << endl;
														cout << "                    ■■ <검> ■■        ■■■■■■                                " << endl;
														cout << "                    ■■      ■■          ■■■■■■                             " << endl;
														cout << "                    ■■      ■■           ■■■■■■                                " << endl;
														cout << "                    ■■      ■■           ■■■■■■                                " << endl;
														cout << "                  ■■■■■■■■■■          ■■                                    " << endl;
														cout << "                  ■■■■■■■■■■ ■■■■■■■■■■■■                           " << endl;
														cout << "                         ■■  ■   ■      ■■■■■■■                            " << endl;
														cout << "                         ■■■   ■         ■■■■■■                               " << endl;
														cout << "                                            ■■■■■■                                " << endl;
														cout << "                                            ■■■■■■                                  " << endl;
														cout << "                                            ■■■■■■                                  " << endl;
														cout << "                                            ■■   ■■                                  " << endl;
														cout << "                                              ■■   ■■                                  " << endl;
														cout << "                                                ■■   ■■                                   " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "!!*버서커가 내려찍기 스킬을 사용합니다*!!" << endl;
														currentSpearmanhp = currentSpearmanhp - B_Skill_1; //창술사의 현재 체력에서 버서커의 내려찍기 스킬 데미지값을 빼준다.
														Sleep(2500); //1.5초 딜레이


														fix();

														//창술사 맞은상태
														cout << "                                    <2P>                                                                                       " << endl;
														cout << "                          ■        ■■■■■■                                             " << endl;
														cout << "                        ■  ■      ■<■■■■                                              " << endl;
														cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
														cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
														cout << "                         ■■         ■■                                                  " << endl;
														cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
														cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
														cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
														cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
														cout << "                         ■■      ■■■■■■                                            " << endl;
														cout << "                         ■■      ■■■■■■                                            " << endl;
														cout << "                         ■■      ■■    ■■                                           " << endl;
														cout << "                         ■■      ■■    ■■                                           " << endl;
														cout << "                         ■■      ■■    ■■                                           " << endl;
														cout << "                                                                                                                               " << endl;
														cout << "                                                                                                                               " << endl;

														cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
														cout << endl;
														berserkerAttack = false;
														if (currentSpearmanhp == 0)
														{
															cout << endl;
															cout << "버서커가 전투에서 승리하였습니다!!" << endl;
															cout << endl;
															cout << "처음으로 돌아갑니다!!" << endl;
															cout << endl;
															Sleep(2500);//1.5초 딜레이
															goto tryAgain;
														}
														else if (currentBerserkerhp == 0)
														{
															cout << endl;
															cout << "창술사가 전투에서 승리하였습니다!!" << endl;
															cout << endl;
															cout << "처음으로 돌아갑니다!!" << endl;
															cout << endl;
															Sleep(2500);//1.5초 딜레이
															goto tryAgain;
														}


														if (!spearManAttack)//세번째 턴2 , 창술사 공격
														{

															Sleep(2500);//1.5초 딜레이
															cout << endl;
															cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
															cout << "=============  <Round 3-1>  ==============" << endl;
															cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
															Sleep(2500); //1.5초 딜레이

															//창술사 찌르기
															cout << "                                    <2P>                                                                                       " << endl;
															cout << "                                ■■■■■■                                             " << endl;
															cout << "                                  ■■■■■■                                              " << endl;
															cout << "                                    ■■■■■■                                             " << endl;
															cout << "                                     ■■■■■■■                                             " << endl;
															cout << "             ~~~~~~~~~~~                ■■                                                  " << endl;
															cout << "         ~~~~~~~~~~~  ■        ■■  ■■■■■■■■■■■■                                        " << endl;
															cout << "     ~~~~~~~~~~~   ■    ■       ■■■   ■■■■■■■    ■■                                       " << endl;
															cout << " ~~~~~~~~~~~    ■  <창>  ■■■■■■■■ ■     ■■■■■■ ■                                     " << endl;
															cout << "     ~~~~~~~~~~~    ■    ■■■■■■■■■■■■■■■■■■                                       " << endl;
															cout << "         ~~~~~~~~~~~  ■                        ■■■■■■                                            " << endl;
															cout << "             ~~~~~~~~~~~                       ■■■■■■                                            " << endl;
															cout << "                                                    ■■    ■■                                           " << endl;
															cout << "                                                       ■■    ■■                                           " << endl;
															cout << "                                                          ■■    ■■                                           " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "!!*창술사가 찌르기스킬을 사용합니다*!!" << endl;


															Sleep(2500);//1.5초 딜레이
															currentBerserkerhp = currentBerserkerhp - S_Skill_1;//창술사의 찌르기 스킬 값만큼 빼준다.

															fix();

															//버서커 맞은상태
															cout << "                                    <1P>                                                                                       " << endl;
															cout << "                ■■■                ■■■■■■                                " << endl;
															cout << "             ■■    ■■            ■<<■■■                             " << endl;
															cout << "             ■■     ■■           ■■■■■■                                " << endl;
															cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
															cout << "             ■■ <검> ■■             ■■                                    " << endl;
															cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
															cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
															cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
															cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
															cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
															cout << "                 ■■               ■■■■■■                                  " << endl;
															cout << "                 ■■               ■■   ■■                                  " << endl;
															cout << "                                   ■■   ■■                                  " << endl;
															cout << "                                   ■■   ■■                                   " << endl;
															cout << "                                                                                                                               " << endl;
															cout << "                                                                                                                               " << endl;

															cout << "버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다." << endl;
															cout << endl;

															spearManAttack = false;
															if (currentSpearmanhp == 0)
															{
																cout << "버서커가 전투에서 승리하였습니다!!" << endl;
																cout << endl;
																cout << "처음으로 돌아갑니다!!" << endl;
																cout << endl;
																Sleep(2500);//1.5초 딜레이
																goto tryAgain;
															}
															else if (currentBerserkerhp == 0)
															{
																cout << endl;
																cout << "창술사가 전투에서 승리하였습니다!!" << endl;
																cout << endl;
																cout << "처음으로 돌아갑니다!!" << endl;
																cout << endl;
																Sleep(2500);//1.5초 딜레이
																goto tryAgain;
															}



															if (!berserkerAttack)//네번째 턴1 , 버서커 공격
															{
																Sleep(2500);//1.5초 딜레이
																cout << endl;
																cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																cout << "=============  <Round 4-1>  ==============" << endl;
																cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																Sleep(2500); //1.5초 딜레이

																//버서커 공격상태
																cout << "                                    <1P>                                                                                       " << endl;
																cout << "              ■■■                ■■■■■■                                " << endl;
																cout << "           ■■    ■■            ■■■■■■             ※※※※※※                   " << endl;
																cout << "           ■■     ■■           ■■■■■■           ※※<Attack>※※                      " << endl;
																cout << "           ■■     ■■           ■■■■■■             ※※※※※※                   " << endl;
																cout << "           ■■ <검> ■■             ■■                                    " << endl;
																cout << "           ■■     ■■      ■■■■■■■■■■■■                           " << endl;
																cout << "           ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
																cout << "           ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
																cout << "        ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
																cout << "         ■■■■■■■■■          ■■■■■■                                  " << endl;
																cout << "               ■■               ■■■■■■                                  " << endl;
																cout << "               ■■               ■■   ■■                                  " << endl;
																cout << "                                 ■■   ■■                                  " << endl;
																cout << "                                 ■■   ■■                                   " << endl;
																cout << "                                                                                                                               " << endl;
																cout << "                                                                                                                               " << endl;

																cout << "버서커가 창술사를 공격합니다" << endl;
																Sleep(2500); //1.5초 딜레이
																currentSpearmanhp = currentSpearmanhp -= berserkerDamage;
																fix();

																//창술사 맞은상태
																cout << "                                    <2P>                                                                                       " << endl;
																cout << "                          ■        ■■■■■■                                             " << endl;
																cout << "                        ■  ■      ■<■■■■                                              " << endl;
																cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
																cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
																cout << "                         ■■         ■■                                                  " << endl;
																cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
																cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
																cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
																cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
																cout << "                         ■■      ■■■■■■                                            " << endl;
																cout << "                         ■■      ■■■■■■                                            " << endl;
																cout << "                         ■■      ■■    ■■                                           " << endl;
																cout << "                         ■■      ■■    ■■                                           " << endl;
																cout << "                         ■■      ■■    ■■                                           " << endl;
																cout << "                                                                                                                               " << endl;
																cout << "                                                                                                                               " << endl;

																cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
																cout << endl;

																berserkerAttack = false;
																if (currentSpearmanhp == 0)
																{
																	cout << endl;
																	cout << "버서커가 전투에서 승리하였습니다!!" << endl;
																	cout << endl;
																	cout << "처음으로 돌아갑니다!!" << endl;
																	cout << endl;
																	Sleep(2500);//1.5초 딜레이
																	goto tryAgain;
																}
																else if (currentBerserkerhp == 0)
																{
																	cout << endl;
																	cout << "창술사가 전투에서 승리하였습니다!!" << endl;
																	cout << endl;
																	cout << "처음으로 돌아갑니다!!" << endl;
																	cout << endl;
																	Sleep(2500);//1.5초 딜레이
																	goto tryAgain;
																}


																if (!spearManAttack)//네번째 턴2 , 창술사 공격
																{
																	Sleep(2500);//1.5초 딜레이
																	cout << endl;
																	cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																	cout << "=============  <Round 4-2>  ==============" << endl;
																	cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																	Sleep(2500); //1.5초 딜레이

																	//창술사 공격상태
																	cout << "                                    <2P>                                                                                       " << endl;
																	cout << "                          ■        ■■■■■■                                             " << endl;
																	cout << "                        ■  ■      ■■■■■■               ※※※※※※                                " << endl;
																	cout << "                      ■ <창> ■    ■■■■■■            ※※<Attack>※※                                 " << endl;
																	cout << "                         ■■      ■■■■■■■              ※※※※※※                               " << endl;
																	cout << "                         ■■         ■■                                                  " << endl;
																	cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
																	cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
																	cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
																	cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
																	cout << "                         ■■      ■■■■■■                                            " << endl;
																	cout << "                         ■■      ■■■■■■                                            " << endl;
																	cout << "                         ■■      ■■    ■■                                           " << endl;
																	cout << "                         ■■      ■■    ■■                                           " << endl;
																	cout << "                         ■■      ■■    ■■                                           " << endl;
																	cout << "                                                                                                                               " << endl;
																	cout << "                                                                                                                               " << endl;

																	cout << "창술사가 버서커를 공격합니다" << endl;
																	Sleep(2500); //1.5초 딜레이
																	currentBerserkerhp = currentBerserkerhp -= spearManDamage;
																	fix();

																	//버서커 맞은상태
																	cout << "                                    <1P>                                                                                       " << endl;
																	cout << "                ■■■                ■■■■■■                                " << endl;
																	cout << "             ■■    ■■            ■<<■■■                             " << endl;
																	cout << "             ■■     ■■           ■■■■■■                                " << endl;
																	cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
																	cout << "             ■■ <검> ■■             ■■                                    " << endl;
																	cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
																	cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
																	cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
																	cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
																	cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
																	cout << "                 ■■               ■■■■■■                                  " << endl;
																	cout << "                 ■■               ■■   ■■                                  " << endl;
																	cout << "                                   ■■   ■■                                  " << endl;
																	cout << "                                   ■■   ■■                                   " << endl;
																	cout << "                                                                                                                               " << endl;
																	cout << "                                                                                                                               " << endl;

																	cout << "버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다." << endl;
																	cout << endl;

																	spearManAttack = false;
																	if (currentSpearmanhp == 0)
																	{
																		cout << endl;
																		cout << "버서커가 전투에서 승리하였습니다!!" << endl;
																		cout << endl;
																		cout << "처음으로 돌아갑니다!!" << endl;
																		cout << endl;
																		Sleep(2500);//1.5초 딜레이
																		goto tryAgain;
																	}
																	else if (currentBerserkerhp == 0)
																	{
																		cout << endl;
																		cout << "창술사가 전투에서 승리하였습니다!!" << endl;
																		cout << endl;
																		cout << "처음으로 돌아갑니다!!" << endl;
																		cout << endl;
																		Sleep(2500);//1.5초 딜레이
																		goto tryAgain;
																	}


																	if (!berserkerAttack)//마지막 턴1 , 버서커 공격
																	{
																		Sleep(2500);//1.5초 딜레이
																		cout << endl;
																		cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																		cout << "=============  <Round 5-2>  ==============" << endl;
																		cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																		Sleep(1700);
																		cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
																		cout << "===========!!Warning!!============" << endl;
																		cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
																		Sleep(2500); //1.5초 딜레이

																		//버서커 급소타격
																		cout << "                                    <1P>                                                                                       " << endl;
																		cout << "                                                 ■■■■■■                                " << endl;
																		cout << "                                                    ■■■■■■                             " << endl;
																		cout << "                                                   ■■■■■■                                " << endl;
																		cout << "                      <<<<<<<<<<<<<<<<<<<<            ■■■■■■                                " << endl;
																		cout << "                 <<<<<<<<<<<<<<<<<<<<                         ■■                                                 " << endl;
																		cout << "            <<<<<<<<<<<<<<<<<<<<       ■■■■■■  ■■■■■■■■■■■                          " << endl;
																		cout << "       <<<<<<<<<<<<<<<<<<<< /■■■■■■■■■■■■■■  ■ ■  ■■■■■■■                             " << endl;
																		cout << "  <<<<<<<<<<<<<<<<<<<<      ■       <검>       ■■■■■ ■ ■    ■■■■■■                               " << endl;
																		cout << "       <<<<<<<<<<<<<<<<<<<< ＼■■■■■■■■■■■■■ ■ ■        ■■■■■■                                " << endl;
																		cout << "             <<<<<<<<<<<<<<<<<<<<      ■■■■■■             ■■■■■■                                  " << endl;
																		cout << "                 <<<<<<<<<<<<<<<<<<<<                           ■■■■■■                                  " << endl;
																		cout << "                      <<<<<<<<<<<<<<<<<<<<                    ■■   ■■                                  " << endl;
																		cout << "                                                                ■■   ■■                                  " << endl;
																		cout << "                                                               ■■   ■■                                   " << endl;
																		cout << "                                                                                                                               " << endl;
																		cout << "                                                                                                                               " << endl;

																		cout << "!!버서커가 급소타격 스킬을 사용합니다!!" << endl;
																		Sleep(2500); //1.5초 딜레이
																		currentSpearmanhp = currentSpearmanhp -= B_Skill_2;
																		fix();

																		//창술사 맞은상태
																		cout << "                                    <2P>                                                                                       " << endl;
																		cout << "                          ■        ■■■■■■                                             " << endl;
																		cout << "                        ■  ■      ■<■■■■                                              " << endl;
																		cout << "                      ■ <창> ■    ■■■■■■                                             " << endl;
																		cout << "                         ■■      ■ㅡㅡ■■■■                                             " << endl;
																		cout << "                         ■■         ■■                                                  " << endl;
																		cout << "                         ■■  ■■■■■■■■■■■■                                        " << endl;
																		cout << "                         ■■■   ■■■■■■■    ■■                                       " << endl;
																		cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
																		cout << "                         ■■      ■■■■■■    ■■                                     " << endl;
																		cout << "                         ■■      ■■■■■■                                            " << endl;
																		cout << "                         ■■      ■■■■■■                                            " << endl;
																		cout << "                         ■■      ■■    ■■                                           " << endl;
																		cout << "                         ■■      ■■    ■■                                           " << endl;
																		cout << "                         ■■      ■■    ■■                                           " << endl;
																		cout << "                                                                                                                               " << endl;
																		cout << "                                                                                                                               " << endl;

																		cout << "창술사의 체력이 " << currentSpearmanhp << "이(가) 되었습니다." << endl;
																		cout << endl;

																		berserkerAttack = false;
																		if (currentSpearmanhp == 0)
																		{
																			cout << endl;
																			cout << "버서커가 전투에서 승리하였습니다!!" << endl;
																			cout << endl;
																			cout << "처음으로 돌아갑니다!!" << endl;
																			cout << endl;
																			Sleep(2500);//1.5초 딜레이
																			goto tryAgain;;
																		}
																		else if (currentBerserkerhp == 0)
																		{
																			cout << endl;
																			cout << "창술사가 전투에서 승리하였습니다!!" << endl;
																			cout << endl;
																			cout << "처음으로 돌아갑니다!!" << endl;
																			cout << endl;
																			Sleep(2500);//1.5초 딜레이
																			goto tryAgain;
																		}


																		if (!spearManAttack)//마지막 턴2 , 창술사 공격
																		{
																			Sleep(2500);//1.5초 딜레이
																			cout << endl;
																			cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																			cout << "=============  <Round 5-1>  ==============" << endl;
																			cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << endl;
																			Sleep(1700);
																			cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
																			cout << "===========!!Warning!!============" << endl;
																			cout << "★★★★★★★★★★★★★★★★★★★★★" << endl;
																			Sleep(2500); //1.5초 딜레이

																			//창술사 강타
																			cout << "                                    <2P>                                                                                       " << endl;
																			cout << "                      ☆☆                                                                           " << endl;
																			cout << "                   ☆☆■☆☆          ■■■■■■                                             " << endl;
																			cout << "                ☆☆■   ■☆☆       ■■■■■■                                              " << endl;
																			cout << "             ☆☆■ <창>   ■☆☆   ■■■■■■                                             " << endl;
																			cout << "                ☆☆ ■■ ☆☆     ■■■■■■■                                             " << endl;
																			cout << "                  ■■            ■■                                                  " << endl;
																			cout << "               ■■  ■■■■■■■■■■■■                                        " << endl;
																			cout << "              ■■■   ■■■■■■■    ■■                                       " << endl;
																			cout << "             ■■        ■■■■■■  ■                                     " << endl;
																			cout << "            ■■ ■■■■■■■■■■ ■                                     " << endl;
																			cout << "           ■■    ■■■■■■                                            " << endl;
																			cout << "         ■■    ■■■■■■                                            " << endl;
																			cout << "        ■■     ■■    ■■                                           " << endl;
																			cout << "       ■■       ■■    ■■                                           " << endl;
																			cout << "     ■■          ■■    ■■                                           " << endl;
																			cout << "                                                                                                                               " << endl;
																			cout << "                                                                                                                               " << endl;

																			cout << "!!창술사가 강타 스킬을 사용합니다!!" << endl;
																			Sleep(2500); //1.5초 딜레이
																			currentBerserkerhp = currentBerserkerhp -= S_Skill_2;
																			fix();

																			//버서커 맞은상태
																			cout << "                                    <1P>                                                                                       " << endl;
																			cout << "                ■■■                ■■■■■■                                " << endl;
																			cout << "             ■■    ■■            ■<<■■■                             " << endl;
																			cout << "             ■■     ■■           ■■■■■■                                " << endl;
																			cout << "             ■■     ■■           ■ㅡㅡ■■■                                " << endl;
																			cout << "             ■■ <검> ■■             ■■                                    " << endl;
																			cout << "             ■■     ■■      ■■■■■■■■■■■■                           " << endl;
																			cout << "             ■■      ■■     ■   ■■■■■■■  ■■                           " << endl;
																			cout << "             ■■     ■■     ■    ■■■■■■    ■■                           " << endl;
																			cout << "          ■■■■■■■■■■  ■     ■■■■■■   ■■                             " << endl;
																			cout << "           ■■■■■■■■■          ■■■■■■                                  " << endl;
																			cout << "                 ■■               ■■■■■■                                  " << endl;
																			cout << "                 ■■               ■■   ■■                                  " << endl;
																			cout << "                                   ■■   ■■                                  " << endl;
																			cout << "                                   ■■   ■■                                   " << endl;
																			cout << "                                                                                                                               " << endl;
																			cout << "                                                                                                                               " << endl;

																			cout << "!!버서커의 체력이 " << currentBerserkerhp << "이(가) 되었습니다!!." << endl;
																			cout << endl;

																			spearManAttack = false;
																			if (currentSpearmanhp == 0)
																			{
																				cout << endl;
																				cout << "버서커가 전투에서 승리하였습니다!!" << endl;
																				cout << endl;
																				cout << "처음으로 돌아갑니다!!" << endl;
																				cout << endl;
																				Sleep(2500);//1.5초 딜레이
																				goto tryAgain;;
																			}
																			else if (currentBerserkerhp == 0)
																			{
																				cout << endl;
																				cout << "창술사가 전투에서 승리하였습니다!!" << endl;
																				cout << endl;
																				cout << "처음으로 돌아갑니다!!" << endl;
																				cout << endl;
																				Sleep(2500);//1.5초 딜레이
																				goto tryAgain;;
																			}
																			else
																			{
																				Totie();
																				Sleep(2500);//1.5초 딜레이
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
								}//P1==3와 P2==2 전투 끝.

							}//end of while 1,//P1 == 3와 P2 == 2 전투 반복

						}//end of while 1,//P1 == 3와 P2 == 1 전투 반복

					}//end of while 1,//P1 == 2와 P2 == 1 전투 반복

				}//end of while 1,//P1 == 2와 P2 == 3 전투 반복  

			}//end of while 1,//P1 == 1과 P2 == 3 전투 반복  

		}//end of while 1,//P1 == 1과 P2 == 2 전투 반복  

	return 0;
}


