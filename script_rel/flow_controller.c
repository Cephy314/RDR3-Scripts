#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(512))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 2)
		{
		}
		func_1();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (func_2() == -1)
	{
		while (!func_3(1024))
		{
			BUILTIN::WAIT(0);
		}
	}
	Global_1879534->f_1910 = 0;
	Global_1879534->f_1 = 0;
	Global_1879534->f_2 = 1;
	if (Global_1572887->f_12 == 0)
	{
		func_4();
	}
	Global_1879534->f_1910 = 0;
	bVar0 = false;
	while (!bVar0)
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			bVar0 = true;
		}
		else
		{
			if (Global_1879534->f_2)
			{
				iVar1 = 0;
				while (Global_1879534->f_2 && iVar1 < Global_1879534->f_7300)
				{
					if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar1 /*4*/]), 1))
					{
						Global_1879534->f_2 = 0;
					}
					else
					{
						iVar1++;
					}
					BUILTIN::WAIT(250);
				}
			}
			else
			{
				if (!Global_1879534->f_7301.f_1)
				{
					if (Global_1879534->f_7301)
					{
						if (!&Global_1879534)
						{
							bVar2 = func_5(&Global_0, 2);
							if (!bVar2)
							{
								if (!func_6(196))
								{
									func_7();
								}
							}
						}
					}
				}
				BUILTIN::WAIT(0);
			}
		}
	}
	func_1();
}

void func_1()
{
	func_8();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	return Global_1572887->f_12;
}

bool func_3(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_4()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		(Global_1887078->f_1682[iVar0 /*13*/])->f_8 = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1887078->f_1696[iVar0 /*2*/] = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_1887078->f_1707[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_1887078->f_1682[iVar0 /*13*/] = 0;
		iVar0++;
	}
	((*Global_1055058)[&Global_1225638 /*116*/])->f_15.f_6 = -1;
	Global_1887078->f_1722 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Global_1887078->f_1720 = -1;
}

bool func_5(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_6(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = -1;
	func_9();
	iVar1 = 0;
	if (Global_1879534->f_10 != -1)
	{
		iVar2 = 1;
		iLocal_15 = 0;
		iLocal_14 = Global_1879534->f_10;
	}
	else if (CAM::IS_SCREEN_FADED_OUT() && Global_1572887->f_12 == -1)
	{
		iVar2 = Global_1879534->f_7300;
		Global_1879534->f_6 = 1;
	}
	else if (Global_1879534->f_7 || (Global_1572887->f_12 == -1 && func_10(500)))
	{
		iLocal_14 = 0;
		iLocal_15 = 0;
		iVar2 = Global_1879534->f_7300;
	}
	else
	{
		iVar2 = 1;
	}
	func_11(&iVar2);
	func_12();
	while (iVar1 < iVar2 && !bVar3)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iLocal_14 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iLocal_14 /*4*/]), 1))
			{
				iVar0 = iLocal_14;
				func_13(iVar0, 0);
				if ((Global_1879534->f_6 || Global_1879534->f_11[iVar0]) /* PointerArith */)
				{
					func_13(iVar0, 1);
					if (!Global_1879534->f_7)
					{
						if (&Global_1879534->f_11[iVar0])
						{
							Global_1879534->f_11[iVar0] = 0;
						}
						else
						{
							Global_1879534->f_6 = 0;
						}
					}
				}
				if (Global_1572887->f_12 == -1)
				{
					iVar1++;
				}
			}
			if (Global_1572887->f_12 == 0)
			{
				iVar1++;
			}
		}
		else
		{
			iLocal_15++;
			if (iLocal_15 >= Global_1879534->f_7300)
			{
				Global_1879534->f_7301.f_1 = 1;
				Global_1879534->f_1 = 0;
				return;
			}
		}
		iLocal_14++;
		if (iLocal_14 >= Global_1879534->f_7300)
		{
			if (!Global_1879534->f_1910)
			{
				Global_1879534->f_1 = 0;
			}
			iLocal_15++;
			Global_1879534->f_1910 = 0;
			Global_1879534->f_6 = 0;
			Global_1879534->f_7 = 0;
			iLocal_15 = 0;
			iLocal_14 = 0;
		}
		if (MISC::_0xC43CD2668B204419() - MISC::_0x72904D3D62AF5839()) <= BUILTIN::FLOOR((BUILTIN::TO_FLOAT(MISC::_0xC43CD2668B204419()) * 0.2f))
		{
			bVar3 = true;
		}
	}
}

void func_8()
{
}

void func_9()
{
}

bool func_10(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < &Global_1898438;
}

void func_11(int iParam0)
{
}

void func_12()
{
	Global_1898164->f_164 = func_14(0, 1, 0);
}

void func_13(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = (Global_1879534->f_7301.f_2[iParam0 /*4*/])->f_1;
	iVar1 = iVar0;
	iVar2 = &Global_1879534->f_7222[iParam0 /*2*/];
	iVar3 = (Global_1879534->f_7222[iParam0 /*2*/])->f_1;
	if (iVar0 < iVar2)
	{
		return;
	}
	if (iVar0 > iVar3)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iParam0 /*4*/]), 1))
	{
		return;
	}
	if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iParam0 /*4*/]), 2))
	{
		iLocal_15++;
		return;
	}
	func_15(iParam0, iVar0);
	iVar0 = (Global_1879534->f_7301.f_2[iParam0 /*4*/])->f_1;
	if (&Global_1879534->f_1911[iVar0 /*3*/] == 531432813)
	{
		func_15(iParam0, iVar0);
	}
	if (bParam1)
	{
		while (iVar1 != (Global_1879534->f_7301.f_2[iParam0 /*4*/])->f_1)
		{
			iVar1 = (Global_1879534->f_7301.f_2[iParam0 /*4*/])->f_1;
			func_15(iParam0, (Global_1879534->f_7301.f_2[iParam0 /*4*/])->f_1);
		}
	}
}

int func_14(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_16())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		bVar0 = func_17(&(Global_1898164->f_1[0 /*5*/]));
		if (func_18(bVar0) && func_19(((*Global_1347702)[bVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_20(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

int func_15(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = -1;
	iVar1 = &Global_1879534->f_1911[iParam1 /*3*/];
	bVar2 = (Global_1879534->f_1911[iParam1 /*3*/])->f_2;
	switch (iVar1)
	{
		case 485486536:
			iVar0 = -2;
			break;
		case 1677774865:
			iVar0 = func_21(bVar2);
			break;
		case -1750917831:
			iVar0 = -2;
			break;
		case 2058194871:
			iVar0 = func_22(bVar2);
			break;
		case 1909997983:
			MISC::SET_BIT(Global_1879534->f_7301.f_2[iParam0 /*4*/], 2);
			iVar0 = -1;
			break;
		case -1878191811:
			iVar0 = func_23(bVar2);
			break;
		case -217347738:
			iVar0 = func_24(bVar2);
			break;
		case 531432813:
			iVar0 = -2;
			break;
		case 1144707570:
			iVar0 = func_25(bVar2);
			break;
		case 1984622930:
			iVar0 = func_26(bVar2);
			break;
		case -661286798:
			iVar0 = func_27(bVar2);
			break;
		case -1532130030:
			iVar0 = func_28(bVar2);
			break;
		case 1174602905:
			iVar0 = func_29(bVar2);
			break;
		case 1111033820:
			iVar0 = func_30(bVar2);
			break;
		case 1986927063:
			iVar0 = func_31(bVar2);
			break;
		case -1982716178:
			iVar0 = func_32(bVar2);
			break;
		case -964850613:
			iVar0 = func_33(bVar2);
			break;
		case -1913176419:
			iVar0 = func_34(bVar2);
			break;
		case 1210875743:
			iVar0 = func_35(iParam0, bVar2);
			break;
		case 427205337:
			iVar0 = func_36(iParam0, bVar2);
			break;
		case 712880499:
			iVar0 = func_37(iParam0, bVar2);
			break;
		case -1664179412:
			iVar0 = func_38(iParam0, bVar2);
			break;
		case 770100737:
			iVar0 = func_39(bVar2);
			break;
		case 939785963:
			iVar0 = func_40(bVar2);
			break;
		case -2146402779:
			iVar0 = func_41(bVar2);
			break;
		case -1785731347:
			iVar0 = func_42(bVar2);
			break;
		case -2093459088:
			iVar0 = func_43(iParam0, bVar2);
			break;
		case -868169264:
			iVar0 = func_44(iParam0, bVar2);
			break;
		case 566451265:
			iVar0 = func_45(bVar2);
			break;
		case -115271859:
			iVar0 = func_46(bVar2);
			break;
		case 2021594245:
			iVar0 = func_47(bVar2);
			break;
		case -806419157:
			iVar0 = func_48(bVar2);
			break;
		case -1110793538:
			iVar0 = func_49(bVar2);
			break;
		case 2088328892:
			iVar0 = func_50(bVar2);
			break;
		case -1535636242:
			iVar0 = func_51(bVar2);
			break;
		case 1509183597:
			iVar0 = func_52(bVar2);
			break;
		case 1281917784:
			iVar0 = func_53(iParam0, bVar2);
			break;
		default:
			if (!func_54(iVar1, bVar2, &iVar0))
			{
				iVar0 = -2;
			}
			break;
	}
	if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iParam0 /*4*/]), 2))
	{
		if (iVar0 != -1)
		{
			Global_1879534->f_1 = 1;
			Global_1879534->f_1910 = 1;
		}
		func_55(iParam0, iVar0);
	}
	return iVar0;
}

int func_16()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_17(int iParam0)
{
	if (!func_20(iParam0))
	{
		return -1;
	}
	return func_57(func_56(iParam0));
}

bool func_18(bool bParam0)
{
	return (bParam0 > -1 && bParam0 < 200);
}

bool func_19(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_20(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_21(int iParam0)
{
	int iVar0;

	if (iParam0 < -1 || iParam0 > Global_1879534->f_7300)
	{
		return -2;
	}
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 1))
	{
		return -2;
	}
	MISC::SET_BIT(Global_1879534->f_7301.f_2[iVar0 /*4*/], 1);
	return -2;
}

int func_22(int iParam0)
{
	int iVar0;

	if (iParam0 < -1 || iParam0 > Global_1879534->f_7300)
	{
		return -2;
	}
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 2))
	{
		return -2;
	}
	MISC::SET_BIT(Global_1879534->f_7301.f_2[iVar0 /*4*/], 2);
	if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 1))
	{
		MISC::SET_BIT(Global_1879534->f_7301.f_2[iVar0 /*4*/], 1);
	}
	return -2;
}

int func_23(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 % 1000000);
	if (iVar0 < -2 || iVar0 > 42)
	{
		return -2;
	}
	return iVar0;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[iParam0 /*2*/];
	if (iVar0 <= -1 || iVar0 >= Global_1879534->f_7300)
	{
		return -2;
	}
	if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 1))
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 2))
	{
		return -2;
	}
	iVar1 = (Global_1879534->f_1172[iParam0 /*2*/])->f_1;
	iVar2 = (Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1;
	iVar3 = &Global_1879534->f_7222[iVar0 /*2*/];
	iVar4 = (Global_1879534->f_7222[iVar0 /*2*/])->f_1;
	if (iVar2 < iVar3)
	{
		return -2;
	}
	if (iVar2 > iVar4)
	{
		return -2;
	}
	iVar5 = iVar3;
	iVar6 = -1;
	while (iVar5 <= iVar4)
	{
		if (&Global_1879534->f_1911[iVar5 /*3*/] == 531432813)
		{
			iVar6 = (Global_1879534->f_1911[iVar5 /*3*/])->f_2;
			iVar7 = &Global_1879534->f_211[iVar6 /*4*/];
			if (iVar7 == iVar1)
			{
				(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 = iVar5;
				return -2;
			}
		}
		iVar5++;
	}
	return -2;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = 0;
	if ((Global_1879534->f_211[iParam0 /*4*/])->f_1 == 1)
	{
		iVar1 = 1;
	}
	func_58(iVar0, iVar1);
	return -2;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 2)
	{
		return -2;
	}
	iVar1 = (Global_1879534->f_211[iParam0 /*4*/])->f_1;
	func_59(iVar0, iVar1);
	return -2;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = (Global_1879534->f_211[iParam0 /*4*/])->f_1;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -2;
	}
	bVar2 = false;
	if ((Global_1879534->f_211[iParam0 /*4*/])->f_2 == 1)
	{
		bVar2 = true;
	}
	func_60(iVar0, iVar1, bVar2);
	return -2;
}

int func_28(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = (&Global_1879534->f_211[iParam0 /*4*/] % 1000000);
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	uVar1 = (Global_1879534->f_211[iParam0 /*4*/])->f_1;
	uVar2 = (Global_1879534->f_211[iParam0 /*4*/])->f_2;
	if (func_61(iVar0))
	{
		return uVar1;
	}
	return uVar2;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 2)
	{
		return -2;
	}
	iVar1 = (Global_1879534->f_211[iParam0 /*4*/])->f_1;
	uVar2 = (Global_1879534->f_211[iParam0 /*4*/])->f_2;
	uVar3 = (Global_1879534->f_211[iParam0 /*4*/])->f_3;
	if (func_62(iVar0) == iVar1)
	{
		return uVar2;
	}
	return uVar3;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = (Global_1879534->f_211[iParam0 /*4*/])->f_1;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -2;
	}
	uVar2 = (Global_1879534->f_211[iParam0 /*4*/])->f_2;
	uVar3 = (Global_1879534->f_211[iParam0 /*4*/])->f_3;
	if (func_63(iVar0, iVar1))
	{
		return uVar2;
	}
	return uVar3;
}

int func_31(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == Global_1879534->f_7300)
	{
		return -2;
	}
	uVar1 = (Global_1879534->f_211[iParam0 /*4*/])->f_1;
	uVar2 = (Global_1879534->f_211[iParam0 /*4*/])->f_2;
	if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 2))
	{
		return uVar1;
	}
	return uVar2;
}

int func_32(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 % 1000000);
	if (iVar0 == -1 || iVar0 == 104)
	{
		return -2;
	}
	if (!&Global_1879534->f_7301.f_131[iVar0])
	{
		return -1;
	}
	return -2;
}

int func_33(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 % 1000000);
	if (iVar0 == -1 || iVar0 == 104)
	{
		return -2;
	}
	Global_1879534->f_7301.f_131[iVar0] = 1;
	return -2;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return -2;
	}
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = (Global_1879534->f_211[iParam0 /*4*/])->f_1;
	iVar1 = &Global_1879534->f_211[iParam0 /*4*/];
	if (MISC::IS_BIT_SET(iVar0, 0))
	{
		CLOCK::SET_CLOCK_TIME(func_64(iVar1), CLOCK::GET_CLOCK_MINUTES(), CLOCK::GET_CLOCK_SECONDS());
	}
	if (MISC::IS_BIT_SET(iVar0, 1))
	{
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), func_65(iVar1), CLOCK::GET_CLOCK_SECONDS());
	}
	if (MISC::IS_BIT_SET(iVar0, 2))
	{
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), CLOCK::GET_CLOCK_MINUTES(), func_66(iVar1));
	}
	if (MISC::IS_BIT_SET(iVar0, 3))
	{
		CLOCK::SET_CLOCK_DATE(func_67(iVar1), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
	}
	if (MISC::IS_BIT_SET(iVar0, 4))
	{
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), func_68(iVar1), CLOCK::GET_CLOCK_YEAR());
	}
	if (MISC::IS_BIT_SET(iVar0, 5))
	{
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), func_69(iVar1));
	}
	return -2;
}

int func_35(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam1 == -1)
	{
		return -2;
	}
	if (!func_70())
	{
		return -2;
	}
	iVar0 = (Global_1879534->f_211[iParam1 /*4*/])->f_2;
	iVar1 = (Global_1879534->f_211[iParam1 /*4*/])->f_1;
	iVar2 = &Global_1879534->f_211[iParam1 /*4*/];
	if (!&Global_1879534->f_46[iParam0])
	{
		if (func_71((Global_1879534->f_7301.f_2[iParam0 /*4*/])->f_3))
		{
			Global_1879534->f_112[iParam0] = (Global_1879534->f_7301.f_2[iParam0 /*4*/])->f_3;
		}
		else
		{
			Global_1879534->f_112[iParam0] = func_72();
			func_73(Global_1879534->f_112[iParam0], iVar0, iVar1, iVar2, 0, 0, 0, 0);
			(Global_1879534->f_7301.f_2[iParam0 /*4*/])->f_3 = &Global_1879534->f_112[iParam0];
		}
		Global_1879534->f_46[iParam0] = 1;
	}
	else
	{
		iVar3 = (MISC::GET_GAME_TIMER() - func_74());
		iVar4 = -1;
		if ((Global_1572887->f_12 == -1 && Global_1430242->f_9) && iVar3 >= 5000)
		{
			iVar4 = func_75(1);
		}
		if (func_76(func_72(), &(Global_1879534->f_112[iParam0]), 1) || iVar4 == 0)
		{
			Global_1879534->f_46[iParam0] = 0;
			(Global_1879534->f_7301.f_2[iParam0 /*4*/])->f_3 = -15;
			if (iVar4 == 0)
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
			}
			return -2;
		}
	}
	return -1;
}

int func_36(int iParam0, int iParam1)
{
	if (!func_70())
	{
		return -2;
	}
	if (!&Global_1879534->f_46[iParam0])
	{
		if (iParam1 < 0)
		{
			return -2;
		}
		Global_1879534->f_79[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
		Global_1879534->f_46[iParam0] = 1;
	}
	else if (MISC::GET_GAME_TIMER() > &Global_1879534->f_79[iParam0])
	{
		Global_1879534->f_46[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_37(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_70())
	{
		return -2;
	}
	if (!&Global_1879534->f_46[iParam0])
	{
		if (iParam1 < 0 || iParam1 > 23)
		{
			return -2;
		}
		iVar0 = iParam1;
		iVar1 = func_72();
		if (func_64(iVar1) > iVar0)
		{
			func_73(&iVar1, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_64(iVar1) != iVar0)
		{
			func_77(&iVar1, 0);
			func_78(&iVar1, 0);
			func_79(&iVar1, iVar0);
		}
		Global_1879534->f_112[iParam0] = iVar1;
		Global_1879534->f_46[iParam0] = 1;
	}
	else if (func_80(&(Global_1879534->f_112[iParam0]), 1))
	{
		Global_1879534->f_46[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;

	if (!&Global_1879534->f_46[iParam0])
	{
		iVar0 = iParam1;
		Global_1879534->f_112[iParam0] = iVar0;
		Global_1879534->f_46[iParam0] = 1;
	}
	else if (func_80(&(Global_1879534->f_112[iParam0]), 1))
	{
		Global_1879534->f_46[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_39(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0 /*4*/];
	if (iVar0 < 0 || iVar0 >= 24)
	{
		return -2;
	}
	uVar1 = (Global_1879534->f_211[iParam0 /*4*/])->f_1;
	uVar2 = (Global_1879534->f_211[iParam0 /*4*/])->f_2;
	if (CLOCK::GET_CLOCK_HOURS() >= iVar0)
	{
		return uVar1;
	}
	return uVar2;
}

int func_40(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (func_81())
	{
		switch (iVar0)
		{
			case 49:
				func_40(151);
				break;
			case 18:
				func_40(153);
				func_40(155);
				break;
			case 13:
				func_40(154);
				break;
		}
	}
	if (func_19(((*Global_1347702)[iVar0 /*49*/])->f_12, 2048))
	{
		return -2;
	}
	else if (func_82(iVar0, 0))
	{
		return -2;
	}
	else if (func_83(iVar0))
	{
		return -2;
	}
	return -1;
}

int func_41(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_42(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0 /*4*/];
	if (!func_84(iVar0))
	{
		return -2;
	}
	uVar1 = (Global_1879534->f_211[iParam0 /*4*/])->f_1;
	uVar2 = (Global_1879534->f_211[iParam0 /*4*/])->f_2;
	if (func_85(iVar0))
	{
		return uVar1;
	}
	return uVar2;
}

int func_43(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (!func_85(iVar0))
	{
		if ((!Global_1935630 & 2048 != 0 && !func_20(Global_1572864->f_8)) && !func_14(0, 1, 1))
		{
			if (func_87(iVar0, 0, 1, func_86()))
			{
			}
		}
	}
	else
	{
		if (func_2() == 0)
		{
		}
		return -2;
	}
	return -1;
}

int func_44(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (func_6(32768))
	{
		return -1;
	}
	if (!func_85(iVar0))
	{
		if (func_88(&Global_1935630, 1048576))
		{
			return -1;
		}
		if (!func_88(&Global_1935630, 2048) && !func_14(0, 1, 1))
		{
			if ((func_2() == -1 && func_70()) && func_5(&Global_0, 3))
			{
				return -1;
			}
			if (func_87(iVar0, func_70(), 0, -1))
			{
			}
		}
	}
	else
	{
		return -2;
	}
	return -1;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = &Global_1879534->f_1172[iParam0 /*2*/];
	iVar1 = (Global_1879534->f_1172[iParam0 /*2*/])->f_1;
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar0);
	if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar0))
	{
		return -1;
	}
	SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(iVar0, iVar1);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar0);
	return -2;
}

int func_46(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_47(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_48(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_49(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_50(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_51(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (iParam0 == -1)
	{
		return -2;
	}
	if (Global_1879534->f_1)
	{
		return -1;
	}
	iVar0 = func_75(0);
	if (iVar0 >= &Global_1879534->f_211[iParam0 /*4*/])
	{
		iVar1 = (Global_1879534->f_211[iParam0 /*4*/])->f_1;
		iVar2 = (Global_1879534->f_211[iParam0 /*4*/])->f_2;
		iVar3 = (Global_1879534->f_7301.f_2[iVar1 /*4*/])->f_1;
		iVar4 = &Global_1879534->f_7222[iVar1 /*2*/];
		iVar5 = (Global_1879534->f_7222[iVar1 /*2*/])->f_1;
		if (iVar3 < iVar4)
		{
			return -2;
		}
		if (iVar3 > iVar5)
		{
			return -2;
		}
		iVar6 = iVar4;
		iVar7 = -1;
		while (iVar6 <= iVar5)
		{
			if (&Global_1879534->f_1911[iVar6 /*3*/] == 531432813)
			{
				iVar7 = (Global_1879534->f_1911[iVar6 /*3*/])->f_2;
				iVar8 = &Global_1879534->f_211[iVar7 /*4*/];
				if (iVar8 == iVar2)
				{
					(Global_1879534->f_7301.f_2[iVar1 /*4*/])->f_1 = iVar6;
					return -2;
				}
			}
			iVar6++;
		}
	}
	return -2;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar3;

	if (iParam1 == -1)
	{
		return -2;
	}
	iVar0 = (Global_1879534->f_211[iParam1 /*4*/])->f_3;
	if (func_84(iVar0))
	{
		if (func_85(iVar0))
		{
			return -2;
		}
	}
	Var1 = &Global_1879534->f_211[iParam1 /*4*/];
	Var1.f_1 = (Global_1879534->f_211[iParam1 /*4*/])->f_1;
	iVar3 = (Global_1879534->f_211[iParam1 /*4*/])->f_2;
	if (!&Global_1879534->f_145[iParam0])
	{
		Global_1879534->f_178[iParam0] = (func_89(Var1) + iVar3);
		Global_1879534->f_145[iParam0] = 1;
	}
	else if (func_89(Var1) >= &Global_1879534->f_178[iParam0])
	{
		return -2;
	}
	return -1;
}

int func_54(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case -566605714:
			*iParam2 = func_90(bParam1);
			break;
		case 891989563:
			*iParam2 = func_91(bParam1);
			break;
		case 987244216:
			*iParam2 = func_92(bParam1);
			break;
		case 2055336839:
			*iParam2 = func_93(bParam1);
			break;
		case -1271429659:
			*iParam2 = func_94(bParam1);
			break;
		case -259205396:
			*iParam2 = func_95(bParam1);
			break;
		case -289754349:
			*iParam2 = func_96(bParam1);
			break;
		case -1940826795:
			*iParam2 = func_97(bParam1);
			break;
		case 40566325:
			*iParam2 = func_98(bParam1);
			break;
		case 901529234:
			*iParam2 = func_99(bParam1);
			break;
		case -780657756:
			*iParam2 = func_100(bParam1);
			break;
		case -1628808209:
			*iParam2 = func_101(bParam1);
			break;
		case 1225435693:
			*iParam2 = func_102(bParam1);
			break;
		case 363897013:
			*iParam2 = func_103(bParam1);
			break;
		case -1042325909:
			*iParam2 = func_104(bParam1);
			break;
		case -1472568760:
			*iParam2 = func_105(bParam1);
			break;
		case 2143263185:
			*iParam2 = func_106(bParam1);
			break;
		case -1520384013:
			*iParam2 = func_107();
			break;
		case -401276712:
			*iParam2 = func_108();
			break;
		case 759449782:
			*iParam2 = func_109(bParam1);
			break;
		case 477724652:
			*iParam2 = func_110(bParam1);
			break;
		case -1815455941:
			*iParam2 = func_111(bParam1);
			break;
		case -914010892:
			*iParam2 = func_112(bParam1);
			break;
		case -346691420:
			*iParam2 = func_113(bParam1);
			break;
		case -471968486:
			*iParam2 = func_114(bParam1);
			break;
		case 672918768:
			*iParam2 = func_115(bParam1);
			break;
		case 1181815586:
			*iParam2 = func_116(bParam1);
			break;
		case -755014414:
			*iParam2 = func_117(bParam1);
			break;
		case 644640119:
			*iParam2 = func_118(bParam1);
			break;
		case -915138989:
			*iParam2 = func_119(bParam1);
			break;
		case 1250460476:
			*iParam2 = func_120(bParam1);
			break;
		case -1449067653:
			*iParam2 = func_121(bParam1);
			break;
		case -549926405:
			*iParam2 = func_122(bParam1);
			break;
		case 1015095530:
			*iParam2 = func_123(bParam1);
			break;
		case -1523883609:
			*iParam2 = func_124(bParam1);
			break;
		case -990335083:
			*iParam2 = func_125(bParam1);
			break;
		case -716094127:
			*iParam2 = func_126(bParam1);
			break;
		case -1260617938:
			*iParam2 = func_127(bParam1);
			break;
		case -1063874733:
			*iParam2 = func_128(bParam1);
			break;
		case 1331093620:
			*iParam2 = func_129(bParam1);
			break;
		case 1842360635:
			*iParam2 = func_130(bParam1);
			break;
		case -663280148:
			*iParam2 = func_131(bParam1);
			break;
		case -1360770031:
			*iParam2 = func_132(bParam1);
			break;
		case -486436146:
			*iParam2 = func_133(bParam1);
			break;
		case -1053276381:
			*iParam2 = func_134(bParam1);
			break;
		case -1673286084:
			*iParam2 = func_135(bParam1);
			break;
		case -756450532:
			*iParam2 = func_136(bParam1);
			break;
		case -1289504437:
			*iParam2 = func_137(bParam1);
			break;
		case 26902781:
			*iParam2 = func_138(bParam1);
			break;
		case 147262072:
			*iParam2 = func_139(bParam1);
			break;
		case -2042718100:
			*iParam2 = func_140(bParam1);
			break;
		case -1738949208:
			*iParam2 = func_141(bParam1);
			break;
		case -1536300574:
			*iParam2 = func_142(bParam1);
			break;
		case 47963769:
			*iParam2 = func_143(bParam1);
			break;
		case 630069176:
			*iParam2 = func_144(bParam1);
			break;
		case 634895793:
			*iParam2 = func_145(bParam1);
			break;
		case -1216055267:
			*iParam2 = func_146(bParam1);
			break;
		case 1050963831:
			*iParam2 = func_147(bParam1);
			break;
		case -1535566683:
			*iParam2 = func_148(bParam1);
			break;
		case 433040111:
			*iParam2 = func_149(bParam1);
			break;
		case 1883692561:
			*iParam2 = func_150(bParam1);
			break;
		case 2001493029:
			*iParam2 = func_151(bParam1);
			break;
		case 1978308683:
			*iParam2 = func_152(bParam1);
			break;
		case 99307713:
			*iParam2 = func_153(bParam1);
			break;
		case 111818573:
			*iParam2 = func_154(bParam1);
			break;
		case 1120810236:
			*iParam2 = func_155(bParam1);
			break;
		case -1244116362:
			*iParam2 = func_156(bParam1);
			break;
		case -1729634664:
			*iParam2 = func_157(bParam1);
			break;
		case -1941172569:
			*iParam2 = func_158(bParam1);
			break;
		case -1408274960:
			*iParam2 = func_159(bParam1);
			break;
		case -90803914:
			*iParam2 = func_160(bParam1);
			break;
		case 656468362:
			*iParam2 = func_161(bParam1);
			break;
		case 995574226:
			*iParam2 = func_162(bParam1);
			break;
		case 2121795512:
			*iParam2 = func_163(bParam1);
			break;
		case -1293709741:
			*iParam2 = func_164(bParam1);
			break;
		case 670944580:
			*iParam2 = func_165(bParam1);
			break;
		case 225795806:
			*iParam2 = func_166(bParam1);
			break;
		case 1805087304:
			*iParam2 = func_167(bParam1);
			break;
		case -838803174:
			*iParam2 = func_168(bParam1);
			break;
		case -138866642:
			*iParam2 = func_169(bParam1);
			break;
		case -718595174:
			*iParam2 = func_170(bParam1);
			break;
		case -801023198:
			*iParam2 = func_171(bParam1);
			break;
		case -1120129944:
			*iParam2 = func_172(bParam1);
			break;
		case 794205136:
			*iParam2 = func_173(bParam1);
			break;
		case -1672441969:
			*iParam2 = func_174(bParam1);
			break;
		case 644587471:
			*iParam2 = func_175(bParam1);
			break;
		case -1398429376:
			*iParam2 = func_176();
			break;
		case -683322528:
			*iParam2 = func_177(bParam1);
			break;
		case 1836702732:
			*iParam2 = func_178(bParam1);
			break;
		case 460788415:
			*iParam2 = func_179(bParam1);
			break;
		case -845953794:
			*iParam2 = func_180(bParam1);
			break;
		case 498793617:
			*iParam2 = func_181(bParam1);
			break;
		case -1156263964:
			*iParam2 = func_182(bParam1);
			break;
		case 7411042:
			*iParam2 = func_183(bParam1);
			break;
		case -1598787124:
			*iParam2 = func_184(bParam1);
			break;
		case -1378868385:
			*iParam2 = func_185(bParam1);
			break;
		case 1098008903:
			*iParam2 = func_186(bParam1);
			break;
		case 1371030896:
			*iParam2 = func_187(bParam1);
			break;
		case 1093832731:
			*iParam2 = func_188();
			break;
		case -159886710:
			*iParam2 = func_189();
			break;
		case -1440757252:
			*iParam2 = func_190(bParam1);
			break;
		case 2025667422:
			*iParam2 = func_191(bParam1);
			break;
		case -42848759:
			*iParam2 = func_192(bParam1);
			break;
		case -1083639171:
			*iParam2 = func_193(bParam1);
			break;
		case 69231574:
			*iParam2 = func_194(bParam1);
			break;
		case 203794828:
			*iParam2 = func_195(bParam1);
			break;
		case -2030110303:
			*iParam2 = func_196(bParam1);
			break;
		case -148700515:
			*iParam2 = func_197(bParam1);
			break;
		case 1831856550:
			*iParam2 = func_198(bParam1);
			break;
		case 260291403:
			*iParam2 = func_199(bParam1);
			break;
		case 2128134704:
			*iParam2 = func_200(bParam1);
			break;
		case -644074888:
			*iParam2 = func_201();
			break;
		case 442701271:
			*iParam2 = func_202();
			break;
		case -1525868272:
			*iParam2 = func_203(bParam1);
			break;
		case 170295534:
			*iParam2 = func_204(bParam1);
			break;
		case -612537234:
			*iParam2 = func_205(bParam1);
			break;
		case -157982035:
			*iParam2 = func_206(bParam1);
			break;
		case 2038286720:
			*iParam2 = func_207();
			break;
		case 1475426593:
			*iParam2 = func_208(bParam1);
			break;
		case -2024549018:
			*iParam2 = func_209(bParam1);
			break;
		case -391651599:
			*iParam2 = func_210(bParam1);
			break;
		case 1810366898:
			*iParam2 = func_211(bParam1);
			break;
		case 442105888:
			*iParam2 = func_212(bParam1);
			break;
		case -1829373791:
			*iParam2 = func_213(bParam1);
			break;
		case -508972844:
			*iParam2 = func_214(bParam1);
			break;
		case 1726178855:
			*iParam2 = func_215(bParam1);
			break;
		case -1496733911:
			*iParam2 = func_216(bParam1);
			break;
		case -2049944022:
			*iParam2 = func_217(bParam1);
			break;
		case -976663157:
			*iParam2 = func_218(bParam1);
			break;
		case 1518265781:
			*iParam2 = func_219(bParam1);
			break;
		case -1438979859:
			*iParam2 = func_220(bParam1);
			break;
		case 242535924:
			*iParam2 = func_221(bParam1);
			break;
		default:
			return 0;
	}
	return 1;
}

void func_55(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	switch (iParam0)
	{
		case -1:
		case 32:
			return;
		default:
			break;
	}
	if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iParam0 /*4*/]), 1))
	{
		return;
	}
	if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iParam0 /*4*/]), 2))
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 == -2)
	{
		Global_1879534->f_112[iParam0] = -15;
		Global_1879534->f_46[iParam0] = 0;
		(Global_1879534->f_7301.f_2[iParam0 /*4*/])->f_3 = -15;
		(Global_1879534->f_7301.f_2[iParam0 /*4*/])->f_1++;
		return;
	}
	iVar0 = (Global_1879534->f_7301.f_2[iParam0 /*4*/])->f_1;
	iVar1 = &Global_1879534->f_7222[iParam0 /*2*/];
	iVar2 = (Global_1879534->f_7222[iParam0 /*2*/])->f_1;
	if (iVar0 < iVar1)
	{
		return;
	}
	if (iVar0 > iVar2)
	{
		return;
	}
	iVar3 = iVar1;
	iVar4 = -1;
	while (iVar3 <= iVar2)
	{
		if (&Global_1879534->f_1911[iVar3 /*3*/] == 531432813)
		{
			iVar4 = (Global_1879534->f_1911[iVar3 /*3*/])->f_2;
			iVar5 = &Global_1879534->f_211[iVar4 /*4*/];
			if (iVar5 == iParam1)
			{
				(Global_1879534->f_7301.f_2[iParam0 /*4*/])->f_1 = iVar3;
				return;
			}
		}
		iVar3++;
	}
}

int func_56(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_57(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_58(int iParam0, int iParam1)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return;
	}
	if (&Global_1879534->f_7301.f_131.f_105[iParam0] == iParam1)
	{
		return;
	}
	Global_1879534->f_7301.f_131.f_105[iParam0] = iParam1;
}

void func_59(int iParam0, int iParam1)
{
	if (iParam0 == 2 || iParam0 == -1)
	{
		return;
	}
	if (&Global_1879534->f_7301.f_131.f_107[iParam0] == iParam1)
	{
		return;
	}
	Global_1879534->f_7301.f_131.f_107[iParam0] = iParam1;
}

void func_60(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (iParam0 == 1 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	bVar0 = MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_131.f_110[iParam0]), iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(Global_1879534->f_7301.f_131.f_110[iParam0], iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1879534->f_7301.f_131.f_110[iParam0], iParam1);
	}
}

int func_61(int iParam0)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1879534->f_7301.f_131.f_105[iParam0]);
}

int func_62(int iParam0)
{
	if (iParam0 == 2 || iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1879534->f_7301.f_131.f_107[iParam0]);
}

bool func_63(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 == 1 || iParam0 == -1)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	bVar0 = MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_131.f_110[iParam0]), iParam1);
	return bVar0;
}

int func_64(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_65(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_66(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_67(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_68(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_69(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_222(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_70()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_66(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_65(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_64(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_69(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_68(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_67(iParam0);
	if (iVar5 < 1 || iVar5 > func_223(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_72()
{
	return &Global_1899515;
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_69(*iParam0);
	iVar1 = func_68(*iParam0);
	iVar2 = func_67(*iParam0);
	iVar3 = func_64(*iParam0);
	iVar4 = func_65(*iParam0);
	iVar5 = func_66(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_223(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_223(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_224(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_74()
{
	return &Global_1898438;
}

int func_75(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])
				{
					case 987244216:
						iVar1 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])->f_2;
						if (func_19(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
						{
							iVar0++;
						}
						break;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						if (!bParam0)
						{
							iVar0++;
						}
						else
						{
							iVar2 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])->f_2;
							if (func_84(iVar2) && !func_225(iVar2))
							{
								iVar0++;
							}
						}
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_76(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_71(iParam1) || !func_71(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_77(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_78(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_79(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

bool func_80(int iParam0, bool bParam1)
{
	return func_76(func_72(), iParam0, bParam1);
}

bool func_81()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

int func_82(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_19(((*Global_1347702)[bParam0 /*49*/])->f_12, 2097152))
		{
			if (func_226(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_19(((*Global_1347702)[bParam0 /*49*/])->f_12, 256))
		{
			if (!func_226(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_227(bParam0);
}

int func_83(bool bParam0)
{
	if (func_2() != -1)
	{
		return 0;
	}
	if (!func_18(bParam0))
	{
		return 0;
	}
	return func_226(((*Global_1347702)[bParam0 /*49*/])->f_15, 1);
}

bool func_84(bool bParam0)
{
	return (bParam0 > -1 && bParam0 <= 80);
}

bool func_85(bool bParam0)
{
	if (!(bParam0 > -1 && bParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_226(((*Global_1835011)[bParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[bParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[bParam0 /*74*/])->f_2));
}

int func_86()
{
	return Global_40.f_4283.f_1;
}

int func_87(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!func_228(bParam0))
	{
		return 0;
	}
	if ((func_226(((*Global_1347702)[59 /*49*/])->f_15, 1) && !func_226(((*Global_1347702)[61 /*49*/])->f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return 0;
	}
	if (func_229(PLAYER::PLAYER_ID(), 1, 0))
	{
		if ((!MAP::DOES_BLIP_EXIST(((*Global_1835011)[bParam0 /*74*/])->f_27) && !func_230(bParam0)) && !Global_43890)
		{
			func_232(bParam0, BUILTIN::VDIST2(func_231(bParam0), Global_36), -1, 1, 1);
			func_233((*Global_1835011)[bParam0 /*74*/], 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!func_236(func_234(bParam0), func_235(bParam0), 0, ((*Global_1835011)[bParam0 /*74*/])->f_21, iParam3))
		{
			return 0;
		}
		if (func_75(1) > 1)
		{
			if (((*Global_1835011)[bParam0 /*74*/])->f_73 <= 0)
			{
				((*Global_1835011)[bParam0 /*74*/])->f_73 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - ((*Global_1835011)[bParam0 /*74*/])->f_73) < 60000)
			{
				if (func_237(bParam0, 0, 1))
				{
					return 0;
				}
				if ((bParam0 == 15 && Global_1357549->f_1494 & 32768 != 0) && func_239(Global_35, func_238(bParam0), 50f, 1, 1))
				{
					if (!GRAPHICS::_0xF2FDDCC8C6BAE1B3(((*Global_1835011)[bParam0 /*74*/])->f_72))
					{
						((*Global_1835011)[bParam0 /*74*/])->f_72 = GRAPHICS::CREATE_TRACKED_POINT();
						GRAPHICS::SET_TRACKED_POINT_INFO(((*Global_1835011)[bParam0 /*74*/])->f_72, func_238(bParam0), 5f);
					}
					if (CAM::IS_SCREEN_FADED_IN() && (GRAPHICS::IS_TRACKED_POINT_VISIBLE(((*Global_1835011)[bParam0 /*74*/])->f_72) || CAM::IS_SPHERE_VISIBLE(func_238(bParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = func_240(((*Global_1835011)[bParam0 /*74*/])->f_1);
	if (!func_241(iVar0))
	{
		return 0;
	}
	else if (((*Global_1835011)[bParam0 /*74*/])->f_73 != 0)
	{
		((*Global_1835011)[bParam0 /*74*/])->f_73 = 0;
		func_242(bParam0);
		if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(((*Global_1835011)[bParam0 /*74*/])->f_72))
		{
			GRAPHICS::DESTROY_TRACKED_POINT(((*Global_1835011)[bParam0 /*74*/])->f_72);
		}
	}
	if (bParam1)
	{
		func_243(((*Global_1835011)[bParam0 /*74*/])->f_1);
	}
	else if (!&Global_1879534)
	{
		func_244(4);
	}
	return 1;
}

bool func_88(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_89(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

int func_90(bool bParam0)
{
	if (func_6(32768))
	{
		return -2;
	}
	if (func_84(bParam0))
	{
		func_245(bParam0, -1, 0, 1, 1, 0, 0);
		func_246(bParam0);
	}
	return -2;
}

int func_91(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (func_6(32768))
	{
		return -2;
	}
	bVar0 = bParam0;
	if (func_18(bVar0) && !func_83(bVar0))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		func_247(bVar0, 1, 1, 1, 32);
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		func_248(bVar0, 0, 1);
		iVar1 = 0;
		while (iVar1 < Global_1879534->f_7300)
		{
			if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar1 /*4*/]), 2))
			{
				if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar1 /*4*/]), 1))
				{
					switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar1 /*4*/])->f_1 /*3*/])
					{
						case 987244216:
							if ((Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar1 /*4*/])->f_1 /*3*/])->f_2 == bVar0)
							{
								(Global_1879534->f_7301.f_2[iVar1 /*4*/])->f_1++;
							}
							else
							{
								iVar1++;
							}
							return -2;
					}
				}
			}
		}
	}

int func_92(bool bParam0)
{
	if (func_83(bParam0))
	{
		return -2;
	}
	return -1;
}

int func_93(bool bParam0)
{
	if (func_18(bParam0) && !func_83(bParam0))
	{
		func_249(bParam0, 1, 0, 0, 0, 0, 0);
		if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[bParam0 /*49*/])->f_42, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1347702)[bParam0 /*49*/])->f_42, 32);
		}
		func_247(bParam0, 1, 1, 1, 32);
	}
	return -2;
}

int func_94(bool bParam0)
{
	if (!func_250(bParam0))
	{
		return -2;
	}
	func_251(bParam0);
	return -2;
}

int func_95(bool bParam0)
{
	if (!func_250(bParam0))
	{
		return -2;
	}
	func_252(bParam0);
	return -2;
}

int func_96(bool bParam0)
{
	if (!func_250(bParam0))
	{
		return -2;
	}
	func_253(bParam0, 0);
	return -2;
}

int func_97(bool bParam0)
{
	if (!func_250(bParam0))
	{
		return -2;
	}
	func_254(bParam0, 32, 1);
	func_253(bParam0, 0);
	return -2;
}

int func_98(bool bParam0)
{
	bool bVar0;

	if (!func_250(bParam0))
	{
		return -2;
	}
	bVar0 = bParam0;
	if (func_255() == 4 && (((bVar0 != 0 && bVar0 != 2) && bVar0 != 6) && bVar0 != 3))
	{
		return -2;
	}
	func_256(bParam0);
	return -2;
}

int func_99(bool bParam0)
{
	bool bVar0;

	bVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	if (!func_250(bVar0))
	{
		return -2;
	}
	func_257(bVar0);
	if ((Global_1879534->f_1172[bParam0 /*2*/])->f_1 == 1)
	{
		func_258(bVar0, 0, 0, 1, 0);
	}
	return -2;
}

int func_100(bool bParam0)
{
	if (!func_250(bParam0))
	{
		return -2;
	}
	return -2;
}

int func_101(bool bParam0)
{
	if (!func_250(bParam0))
	{
		return -2;
	}
	return -2;
}

int func_102(bool bParam0)
{
	return -2;
}

int func_103(bool bParam0)
{
	return -2;
}

int func_104(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		func_259(iVar0, &(Global_1879534->f_211[bParam0 /*4*/]), 0, (Global_1879534->f_211[bParam0 /*4*/])->f_1, (Global_1879534->f_211[bParam0 /*4*/])->f_2, 1, 0);
		iVar0++;
	}
	return -2;
}

int func_105(bool bParam0)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	bVar0 = &Global_1879534->f_211[bParam0 /*4*/];
	if (bVar0 != 27 && !func_250(bVar0))
	{
		return -2;
	}
	fVar1 = BUILTIN::TO_FLOAT((Global_1879534->f_211[bParam0 /*4*/])->f_1);
	fVar1 = (fVar1 / 100f);
	fVar2 = BUILTIN::TO_FLOAT((Global_1879534->f_211[bParam0 /*4*/])->f_2);
	fVar2 = (fVar2 / 100f);
	if (bVar0 != 27)
	{
		((*Global_1360165)[bVar0 /*1157*/])->f_138 = fVar1;
		((*Global_1360165)[bVar0 /*1157*/])->f_139 = fVar2;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 27)
		{
			((*Global_1360165)[iVar3 /*1157*/])->f_138 = fVar1;
			((*Global_1360165)[iVar3 /*1157*/])->f_139 = fVar2;
			iVar3++;
		}
	}
	return -2;
}

int func_106(bool bParam0)
{
	if (!func_250(&(Global_1879534->f_211[bParam0 /*4*/])))
	{
		return -2;
	}
	func_260(&(Global_1879534->f_211[bParam0 /*4*/]), (Global_1879534->f_211[bParam0 /*4*/])->f_1);
	return -2;
}

int func_107()
{
	func_261();
	return -2;
}

int func_108()
{
	func_262(32768);
	return -2;
}

int func_109(bool bParam0)
{
	if (!func_250(bParam0))
	{
		return -2;
	}
	func_263(bParam0, 1, 1);
	return -2;
}

int func_110(bool bParam0)
{
	if (!func_250(bParam0))
	{
		return -2;
	}
	func_263(bParam0, 0, 1);
	return -2;
}

int func_111(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	if (!func_250(bVar0))
	{
		return -2;
	}
	iVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	if (!STREAMING::IS_MODEL_VALID(iVar1))
	{
		return -2;
	}
	if (func_264(bVar0, iVar1))
	{
		return -2;
	}
	return -1;
}

int func_112(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	if (!func_250(bVar0))
	{
		return -2;
	}
	iVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	if (!STREAMING::IS_MODEL_VALID(iVar1))
	{
		return -2;
	}
	if (func_265(bVar0, iVar1))
	{
		return -2;
	}
	return -1;
}

int func_113(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	iVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	PERSCHAR::_0x8BC555034A5A5E8C(func_266(iVar0), iVar1);
	if (iVar1 == joaat("CS_LEIGHGRAY"))
	{
		PERSCHAR::_0x2DF89CD2ED1D0BDE(func_266(iVar0), joaat("META_OUTFIT_DEFAULT"));
	}
	else
	{
		PERSCHAR::_0x535A66AAD2BF68F9(func_266(iVar0), PERSCHAR::_0xDC9655D47DEC0353(func_266(iVar0)));
	}
	return -2;
}

int func_114(bool bParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	sVar0 = func_267(&(Global_1879534->f_211[bParam0 /*4*/]));
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return -2;
	}
	if ((Global_1879534->f_211[bParam0 /*4*/])->f_1 > 0)
	{
		bVar1 = true;
	}
	if ((Global_1879534->f_211[bParam0 /*4*/])->f_2 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(sVar0, bVar1, true);
	}
	else
	{
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, bVar1, true);
	}
	return -2;
}

int func_115(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	if (!func_268(iVar0))
	{
		return -2;
	}
	iVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	func_269(iVar1);
	func_270(iVar0);
	return -2;
}

int func_116(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	func_269(bVar0);
	func_270(func_271());
	return -2;
}

int func_117(bool bParam0)
{
	return -2;
}

int func_118(bool bParam0)
{
	return -2;
}

int func_119(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = &Global_1879534->f_211[bParam0 /*4*/];
	iVar1 = (Global_1879534->f_211[bParam0 /*4*/])->f_1;
	iVar2 = (Global_1879534->f_211[bParam0 /*4*/])->f_2;
	iVar3 = (Global_1879534->f_211[bParam0 /*4*/])->f_3;
	func_272(iVar0, iVar2, iVar3, iVar1, 1, 1, 0);
	return -2;
}

int func_120(bool bParam0)
{
	return -2;
}

int func_121(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = &Global_1879534->f_211[bParam0 /*4*/];
	iVar1 = (Global_1879534->f_211[bParam0 /*4*/])->f_1;
	iVar2 = (Global_1879534->f_211[bParam0 /*4*/])->f_2;
	iVar3 = (Global_1879534->f_211[bParam0 /*4*/])->f_3;
	func_273(iVar0, iVar1, 1, iVar2, iVar3);
	return -2;
}

int func_122(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	iVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	func_274(iVar0, iVar1);
	return -2;
}

int func_123(bool bParam0)
{
	if (!func_275(bParam0))
	{
		return -2;
	}
	func_276(bParam0);
	return -2;
}

int func_124(bool bParam0)
{
	if (!func_277(bParam0))
	{
		return -2;
	}
	func_278(bParam0);
	return -2;
}

int func_125(bool bParam0)
{
	bool bVar0;
	var uVar1;

	if (bParam0 == -1)
	{
		return -2;
	}
	bVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	if (!func_277(bVar0))
	{
		return -2;
	}
	uVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	func_279(bVar0, uVar1);
	return -2;
}

int func_126(bool bParam0)
{
	bool bVar0;
	var uVar1;

	if (bParam0 == -1)
	{
		return -2;
	}
	bVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	if (!func_277(bVar0))
	{
		return -2;
	}
	uVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	func_280(bVar0, uVar1);
	return -2;
}

int func_127(bool bParam0)
{
	bool bVar0;
	var uVar1;

	if (bParam0 == -1)
	{
		return -2;
	}
	bVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	if (!func_277(bVar0))
	{
		return -2;
	}
	uVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	func_281(bVar0, uVar1);
	return -2;
}

int func_128(bool bParam0)
{
	if (!func_282(bParam0))
	{
		return -2;
	}
	func_283(bParam0);
	return -2;
}

int func_129(bool bParam0)
{
	if (!func_282(bParam0))
	{
		return -2;
	}
	func_284(bParam0);
	return -2;
}

int func_130(bool bParam0)
{
	bool bVar0;
	var uVar1;

	if (bParam0 == -1)
	{
		return -2;
	}
	bVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	if (!func_282(bVar0))
	{
		return -2;
	}
	uVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	func_285(bVar0, uVar1);
	return -2;
}

int func_131(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;

	if (bParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[bParam0 /*4*/];
	bVar1 = MISC::IS_BIT_SET((Global_1879534->f_211[bParam0 /*4*/])->f_1, 0);
	bVar2 = MISC::IS_BIT_SET((Global_1879534->f_211[bParam0 /*4*/])->f_1, 1);
	bVar3 = MISC::IS_BIT_SET((Global_1879534->f_211[bParam0 /*4*/])->f_1, 2);
	iVar4 = (Global_1879534->f_211[bParam0 /*4*/])->f_2;
	if (!func_286(iVar0, 0))
	{
		return -2;
	}
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return -2;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (bVar1)
	{
		func_287(iVar0);
	}
	if (bVar2)
	{
		func_288(iVar0);
	}
	if (bVar3)
	{
		if (iVar0 == joaat("WEAPON_MELEE_KNIFE"))
		{
		}
		iVar5 = 1;
		if (func_289(iVar0))
		{
			iVar5 = 5;
		}
		bVar6 = false;
		if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || iVar0 == joaat("WEAPON_MELEE_KNIFE")) || iVar0 == joaat("WEAPON_LASSO"))
		{
			bVar6 = true;
		}
		func_290(iVar0, iVar5, 1, 0, bVar6, 752097756, 0, 1, 0, 0);
	}
	if (iVar4 != -1)
	{
		switch (iVar4)
		{
			case 523:
			case 524:
			case 525:
				func_292(iVar4, func_291(iVar0), 0);
				break;
			default:
				func_293(iVar4, 0);
				break;
		}
	}
	return -2;
}

int func_132(bool bParam0)
{
	int iVar0;
	bool bVar1;

	if (bParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	if (!func_294(iVar0))
	{
		return -2;
	}
	bVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1 > 0;
	func_295(iVar0, 1, 0);
	if (bVar1 && func_70())
	{
		func_296(iVar0, 0, 1, 0);
	}
	return -2;
}

int func_133(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	if (!func_286(iVar0, 0))
	{
		return -2;
	}
	iVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	func_290(iVar0, iVar1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	if (func_297(iVar0, 1104960349))
	{
		func_298(iVar0);
	}
	return -2;
}

int func_134(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	if (!func_286(iVar0, 0))
	{
		return -2;
	}
	iVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	func_299(iVar0, iVar1, 1, -142743235, 0);
	return -2;
}

int func_135(bool bParam0)
{
	if (!func_300(bParam0))
	{
		return -2;
	}
	func_301(bParam0);
	return -2;
}

int func_136(bool bParam0)
{
	if (!func_300(bParam0))
	{
		return -2;
	}
	if (!func_70())
	{
		return -2;
	}
	func_302(bParam0);
	return -2;
}

int func_137(bool bParam0)
{
	func_303(bParam0, 1, 0);
	return -2;
}

int func_138(bool bParam0)
{
	func_303(bParam0, 0, 0);
	return -2;
}

int func_139(bool bParam0)
{
	if (!STREAMING::IS_MODEL_A_PED(bParam0))
	{
		return -2;
	}
	if (func_70())
	{
		PED::SET_PED_MODEL_IS_SUPPRESSED(bParam0, true);
	}
	return -2;
}

int func_140(bool bParam0)
{
	if (!STREAMING::IS_MODEL_A_PED(bParam0))
	{
		return -2;
	}
	if (PED::_0x772A1969F649E902(bParam0) && func_304(bParam0))
	{
		return -2;
	}
	if (func_70())
	{
		PED::SET_PED_MODEL_IS_SUPPRESSED(bParam0, false);
	}
	return -2;
}

int func_141(bool bParam0)
{
	func_305(bParam0);
	return -2;
}

int func_142(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	iVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	func_306(iVar0, iVar1, 0);
	return -2;
}

int func_143(bool bParam0)
{
	func_307(bParam0, 1);
	return -2;
}

int func_144(bool bParam0)
{
	func_307(bParam0, 0);
	return -2;
}

int func_145(bool bParam0)
{
	func_308(bParam0, 0);
	if (bParam0 == 24)
	{
		func_308(119, 0);
	}
	return -2;
}

int func_146(bool bParam0)
{
	func_308(bParam0, 1);
	return -2;
}

int func_147(bool bParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	uVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	func_309(iVar0, uVar1);
	return -2;
}

int func_148(bool bParam0)
{
	if (func_310(bParam0))
	{
		if (bParam0 == joaat("PLAYER_THREE"))
		{
			func_311();
		}
		return -2;
	}
	return -1;
}

int func_149(bool bParam0)
{
	if (Global_1347477->f_200 || !func_70())
	{
		return -2;
	}
	Global_40.f_11095.f_11[13] = BUILTIN::TO_FLOAT(bParam0);
	Global_1347477->f_201 = 1;
	return -2;
}

int func_150(bool bParam0)
{
	float fVar0;

	if (Global_1347477->f_200 || !func_70())
	{
		return -2;
	}
	fVar0 = func_312(13);
	fVar0 = (fVar0 + BUILTIN::TO_FLOAT(bParam0));
	Global_40.f_11095.f_11[13] = func_313(fVar0, Global_40.f_11095.f_40, Global_40.f_11095.f_41);
	Global_1347477->f_201 = 1;
	return -2;
}

int func_151(bool bParam0)
{
	Global_40.f_11095.f_40 = BUILTIN::TO_FLOAT(&(Global_1879534->f_1172[bParam0 /*2*/]));
	Global_40.f_11095.f_41 = BUILTIN::TO_FLOAT((Global_1879534->f_1172[bParam0 /*2*/])->f_1);
	return -2;
}

int func_152(bool bParam0)
{
	Global_40.f_11095.f_67 = bParam0;
	if (Global_40.f_11095.f_67 >= 9)
	{
		Global_40.f_11095.f_44 = 0.2f;
		func_314();
	}
	if ((Global_40.f_11095.f_67 == 9 && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !func_315())
	{
		AUDIO::_0xD47D47EFBF103FB8(Global_35, 3);
	}
	return -2;
}

int func_153(bool bParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	uVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	if (iVar0 == 0)
	{
		func_316(uVar1);
	}
	else if (iVar0 == 1)
	{
		func_317(uVar1);
	}
	else if (iVar0 == 2)
	{
		func_318(uVar1);
	}
	return -2;
}

int func_154(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	if (!func_70())
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	iVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	MISC::_0xDD560ABEF5D3784C(&uVar2, &iVar3);
	if (iVar0 == 0 || iVar0 == -1439599467)
	{
		if (iVar3 == 0)
		{
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			if (iVar0 == -1439599467)
			{
				MISC::SET_RANDOM_WEATHER_TYPE(true, true);
			}
		}
		else
		{
			func_319(8);
			if (iVar0 == -1439599467)
			{
				func_319(16);
			}
		}
	}
	else if (iVar1 == 0)
	{
		MISC::_SET_WEATHER_TYPE(iVar0, true, true, false, 0f, false);
	}
	else
	{
		MISC::_SET_WEATHER_TYPE(iVar0, false, true, true, BUILTIN::TO_FLOAT(iVar1), false);
	}
	return -2;
}

int func_155(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = &Global_1879534->f_211[bParam0 /*4*/];
	iVar1 = (Global_1879534->f_211[bParam0 /*4*/])->f_1;
	iVar2 = (Global_1879534->f_211[bParam0 /*4*/])->f_2;
	iVar3 = (Global_1879534->f_211[bParam0 /*4*/])->f_3;
	if (!func_320(iVar0))
	{
		return -2;
	}
	if (!func_321(iVar1))
	{
		return -2;
	}
	if (!func_322(iVar2))
	{
		return -2;
	}
	if (!func_323(iVar3))
	{
		return -2;
	}
	func_324(iVar0, iVar1, 0);
	(Global_40.f_7731[iVar0 /*5*/])->f_1 = iVar2;
	(Global_40.f_7731[iVar0 /*5*/])->f_2 = iVar3;
	func_325(10, 0, 0, 0, 0);
	return -2;
}

int func_156(bool bParam0)
{
	func_326(1);
	return -2;
}

int func_157(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	bVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1 == true;
	if (!func_327(iVar0))
	{
	}
	if (bVar1)
	{
		func_328(iVar0, 0, 0);
	}
	else
	{
		func_328(iVar0, 1, 0);
	}
	return -2;
}

int func_158(bool bParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	uVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	if (!func_329(iVar0, 0))
	{
	}
	func_330(iVar0, uVar1, 0);
	return -2;
}

int func_159(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	bVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1 == true;
	if (!func_329(iVar0, 0))
	{
	}
	func_331(iVar0, bVar1);
	return -2;
}

int func_160(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	char cVar4[64];
	int iVar12;

	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	bVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1 == true;
	iVar2 = func_332(iVar0);
	if (iVar0 <= -1 || iVar0 >= 42)
	{
	}
	iVar3 = func_333(iVar0);
	switch (iVar2)
	{
		case 0:
			StringCopy(&cVar4, "ODR Ambush ", 64);
			break;
		case 2:
			StringCopy(&cVar4, "EXC Ambush ", 64);
			break;
		case 1:
			StringCopy(&cVar4, "INB Ambush ", 64);
			break;
		case 3:
			StringCopy(&cVar4, "SAV Ambush ", 64);
			break;
		case 4:
			StringCopy(&cVar4, "RNC Ambush ", 64);
			break;
		case 5:
			StringCopy(&cVar4, "BND Ambush ", 64);
			break;
	}
	if (bVar1)
	{
		if (!func_334(iVar0, 0))
		{
			iVar12 = 0;
			while (iVar12 < iVar3)
			{
				func_335(iVar2, iVar0, &cVar4, iVar12);
				iVar12++;
			}
		}
	}
	else
	{
		iVar12 = 0;
		while (iVar12 < iVar3)
		{
			func_336(iVar2, iVar0, iVar12);
			iVar12++;
		}
	}
	return -2;
}

int func_161(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return -2;
	}
	if (bParam0 == -1)
	{
		return -2;
	}
	func_337(&(Global_1879534->f_1172[bParam0 /*2*/]));
	func_326(1);
	return -2;
}

int func_162(bool bParam0)
{
	func_338(bParam0, 0);
	return -2;
}

int func_163(bool bParam0)
{
	if (bParam0 != 0)
	{
		func_339(bParam0, 0);
	}
	else
	{
		func_340(0);
	}
	func_341(bParam0);
	return -2;
}

int func_164(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = &Global_1879534->f_211[bParam0 /*4*/];
	iVar1 = (Global_1879534->f_211[bParam0 /*4*/])->f_1;
	iVar2 = (Global_1879534->f_211[bParam0 /*4*/])->f_2;
	if (iVar2 == 0)
	{
		func_342(iVar0, iVar1);
	}
	else
	{
		func_343(iVar0, iVar1);
	}
	return -2;
}

int func_165(bool bParam0)
{
	func_344(bParam0, 1);
	return -2;
}

int func_166(bool bParam0)
{
	func_344(bParam0, 0);
	return -2;
}

int func_167(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	if (iVar0 == -1 || iVar0 == 2)
	{
		return -2;
	}
	iVar1 = (func_62(iVar0) + (Global_1879534->f_1172[bParam0 /*2*/])->f_1);
	func_59(iVar0, iVar1);
	return -2;
}

int func_168(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[bParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 2)
	{
		return -2;
	}
	iVar1 = (Global_1879534->f_211[bParam0 /*4*/])->f_1;
	iVar2 = (Global_1879534->f_211[bParam0 /*4*/])->f_2;
	switch (iVar2)
	{
		case 0:
			if (func_62(iVar0) == iVar1)
			{
				return -2;
			}
			break;
		case 1:
			if (func_62(iVar0) != iVar1)
			{
				return -2;
			}
			break;
		case 2:
			if (func_62(iVar0) < iVar1)
			{
				return -2;
			}
			break;
		case 3:
			if (func_62(iVar0) > iVar1)
			{
				return -2;
			}
			break;
		case 4:
			if (func_62(iVar0) >= iVar1)
			{
				return -2;
			}
			break;
		case 5:
			if (func_62(iVar0) <= iVar1)
			{
				return -2;
			}
			break;
	}
	return -1;
}

int func_169(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1879534->f_1 || Global_1879534->f_1910)
	{
		return -1;
	}
	if (IntToFloat((MISC::GET_GAME_TIMER() - func_74())) <= 5000f)
	{
		return -1;
	}
	if (!func_70())
	{
		return -2;
	}
	if (bParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	iVar1 = func_75(1);
	iVar2 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	switch (iVar2)
	{
		case 0:
			if (iVar1 == iVar0)
			{
				return -2;
			}
			break;
		case 1:
			if (iVar1 != iVar0)
			{
				return -2;
			}
			break;
		case 2:
			if (iVar1 < iVar0)
			{
				return -2;
			}
			break;
		case 3:
			if (iVar1 > iVar0)
			{
				return -2;
			}
			break;
		case 4:
			if (iVar1 >= iVar0)
			{
				return -2;
			}
			break;
		case 5:
			if (iVar1 <= iVar0)
			{
				return -2;
			}
			break;
	}
	return -1;
}

int func_170(bool bParam0)
{
	func_345(bParam0, 1);
	return -2;
}

int func_171(bool bParam0)
{
	func_346(bParam0, 1);
	return -2;
}

int func_172(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = bParam0;
	iVar1 = LAW::_0x76CF93D4B416B288(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"));
	iVar2 = (iVar1 + bVar0);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), iVar2);
	return -2;
}

int func_173(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0 > 0;
	func_347(bVar0);
	return -2;
}

int func_174(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = bParam0 > 0;
	iVar1 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID());
	Global_40.f_11957 = iVar1;
	if (bVar0)
	{
		LAW::_SET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
	}
	return -2;
}

int func_175(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0 > 0;
	if (Global_40.f_11957 == 0 && LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID()) == 0)
	{
		return -2;
	}
	LAW::_SET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
	if (Global_40.f_11957 > 0)
	{
		LAW::_0x0E3BDEED21BEB945(PLAYER::PLAYER_ID(), Global_40.f_11957);
		if (bVar0)
		{
			Global_40.f_11957 = 0;
		}
	}
	return -2;
}

int func_176()
{
	func_348();
	return -2;
}

int func_177(bool bParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;

	if (bParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[bParam0 /*4*/];
	uVar1 = (Global_1879534->f_211[bParam0 /*4*/])->f_1;
	bVar2 = (Global_1879534->f_211[bParam0 /*4*/])->f_2 != false;
	if (bVar2)
	{
		func_349(iVar0, uVar1);
	}
	else
	{
		func_350(iVar0, uVar1);
	}
	return -2;
}

int func_178(bool bParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;

	if (bParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[bParam0 /*4*/];
	uVar1 = (Global_1879534->f_211[bParam0 /*4*/])->f_1;
	bVar2 = (Global_1879534->f_211[bParam0 /*4*/])->f_2 != false;
	if (bVar2)
	{
		func_351(iVar0, uVar1);
	}
	else
	{
		func_352(iVar0, uVar1);
	}
	return -2;
}

int func_179(bool bParam0)
{
	bool bVar0;

	if (bParam0 > 0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
		if (func_85(59))
		{
			func_353();
		}
		else
		{
			func_354();
			func_355();
			INVENTORY::_0xE36D4A38D28D9CFB(1);
		}
		func_302(24);
	}
	else
	{
		func_356(Global_35, joaat("WEAPON_MELEE_TORCH"));
		func_357();
		INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
		if (!func_85(59))
		{
			func_358(1, 0, 1);
			func_359();
		}
		func_301(24);
	}
	return -2;
}

int func_180(bool bParam0)
{
	bool bVar0;

	if (bParam0 > 0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_360(&(Global_40.f_7443), 1);
	}
	else
	{
		func_361(&(Global_40.f_7443), 0);
		func_362(Global_35, -1515874150 /* GXTEntry: "John\'s Off-Hand Holster" */, 0, 99217379, 1, 1, 1, 0, 1, 1);
	}
	return -2;
}

int func_181(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = &Global_1879534->f_211[bParam0 /*4*/];
	bVar1 = (Global_1879534->f_211[bParam0 /*4*/])->f_1 == true;
	iVar2 = (Global_1879534->f_211[bParam0 /*4*/])->f_2;
	if (!func_327(iVar0))
	{
		return -2;
	}
	if (!bVar1)
	{
		func_363(iVar0, 0, 1);
	}
	func_364(iVar0, bVar1, iVar2);
	return -2;
}

int func_182(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	bVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1 == true;
	if (!func_327(iVar0))
	{
		return -2;
	}
	func_363(iVar0, bVar1, 1);
	return -2;
}

int func_183(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	bVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1 == true;
	if (!func_365(iVar0))
	{
		return -2;
	}
	func_366(iVar0, bVar1);
	return -2;
}

int func_184(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = &Global_1879534->f_211[bParam0 /*4*/];
	bVar1 = (Global_1879534->f_211[bParam0 /*4*/])->f_1 == true;
	bVar2 = (Global_1879534->f_211[bParam0 /*4*/])->f_2 == true;
	if (!func_367(iVar0))
	{
		return -2;
	}
	func_368(iVar0, bVar1, bVar2);
	return -2;
}

int func_185(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	bVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1 == true;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (&Global_1879534)
	{
		return -2;
	}
	func_293(iVar0, bVar1);
	return -2;
}

int func_186(bool bParam0)
{
	func_369(bParam0);
	return -2;
}

int func_187(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != 0)
	{
		if (func_2() != -1)
		{
			return -2;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(bVar0, true);
	}
	return -2;
}

int func_188()
{
	if (func_5(&Global_0, 3))
	{
		return -1;
	}
	func_370(&Global_0, 1);
	func_370(&Global_0, 32);
	func_370(&Global_0, 64);
	return -2;
}

int func_189()
{
	if (func_5(&Global_0, 3))
	{
		return -1;
	}
	return -2;
}

int func_190(bool bParam0)
{
	if (func_371(bParam0))
	{
		return -2;
	}
	if (!&Global_1879534 && func_75(1) <= 0)
	{
		return -2;
	}
	return -1;
}

int func_191(bool bParam0)
{
	if (func_372(bParam0))
	{
		func_373(bParam0, 1);
	}
	return -2;
}

int func_192(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (!func_18(bVar0))
	{
		return -2;
	}
	if (func_83(bVar0))
	{
		return -2;
	}
	if (func_88(&Global_1935630, 1048576))
	{
		return -1;
	}
	if (func_6(32768))
	{
		return -1;
	}
	if (!func_83(bVar0))
	{
		if (!func_88(&Global_1935630, 2048) && !func_14(0, 1, 1))
		{
			if (func_2() == -1 && func_5(&Global_0, 3))
			{
				func_374();
				return -1;
			}
			if (func_375(bVar0, 1, 1, 1, 0))
			{
				return -2;
			}
		}
	}
	else
	{
		return -2;
	}
	return -1;
}

int func_193(bool bParam0)
{
	bool bVar0;
	var uVar1;
	var uVar2;

	if (bParam0 == -1)
	{
		return -2;
	}
	bVar0 = &Global_1879534->f_211[bParam0 /*4*/];
	if (!func_18(bVar0))
	{
		return -2;
	}
	uVar1 = (Global_1879534->f_211[bParam0 /*4*/])->f_1;
	uVar2 = (Global_1879534->f_211[bParam0 /*4*/])->f_2;
	if (func_83(bVar0))
	{
		return uVar1;
	}
	return uVar2;
}

int func_194(bool bParam0)
{
	if (func_83(bParam0) || (func_376(bParam0) && (Global_1430242->f_1 + Global_1430242->f_3) == 1))
	{
		return -2;
	}
	return -1;
}

int func_195(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (func_377(bVar0))
	{
		func_378(bVar0);
	}
	return -2;
}

int func_196(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (func_377(bVar0))
	{
		func_379(bVar0);
	}
	return -2;
}

int func_197(bool bParam0)
{
	func_380(bParam0, 1);
	return -2;
}

int func_198(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (!func_381(bVar0))
	{
		return -1;
	}
	return -2;
}

int func_199(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	struct<5> Var13;
	struct<10> Var18;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	bool bVar36;

	iVar0 = -2;
	if (bParam0 == -1)
	{
		return iVar0;
	}
	iVar1 = &Global_1879534->f_1172[bParam0 /*2*/];
	if (iVar1 == 0)
	{
		return iVar0;
	}
	if (!func_382(iVar1, &uVar2))
	{
		return iVar0;
	}
	Var13 = { *((*Global_1887078)[bParam0 /*5*/]) };
	Var18.f_9 = -1591664384;
	bVar36 = false;
	iVar32 = Var13.f_1;
	iVar33 = Var13.f_2;
	switch (Var13)
	{
		case 0:
		default:
			Var13 = 0;
			iVar0 = -1;
			break;
			if (!func_383("ALL COACHES", &iVar32, &iVar33, -1591664384, 0))
			{
				Var13.f_1 = iVar32;
				Var13.f_2 = iVar33;
				iVar0 = -1;
			}
			else
			{
				Var13.f_1 = iVar32;
				Var13.f_2 = iVar33;
				iVar34 = 0;
				while (iVar34 < iVar33)
				{
					if (!func_384(&Var18, iVar34, iVar32, iVar33))
					{
					}
					else if (Var18.f_4 == 0)
					{
					}
					else
					{
						iVar35 = 0;
						while (iVar35 < 10)
						{
							if (&uVar2[iVar35] == 0)
							{
							}
							else if (Var18.f_4 != &uVar2[iVar35])
							{
							}
							else
							{
								bVar36 = true;
							}
							iVar35++;
						}
					}
					iVar34++;
				}
				if (!bVar36)
				{
					Var13 = 1;
				}
				else
				{
					Var13 = 2;
				}
				func_385(iVar32);
				iVar0 = -1;
				Jump @389; //curOff = 321
				if (!Var13.f_4)
				{
					Var13.f_4 = 1;
					Var13.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
				if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Var13.f_3, NETWORK::GET_NETWORK_TIME_ACCURATE())) > 30000)
				{
					Var13 = 0;
					Var13.f_4 = 0;
				}
				iVar0 = -1;
				Jump @389; //curOff = 378
				iVar0 = -2;
			}
			*((*Global_1887078)[bParam0 /*5*/]) = { Var13 };
			return iVar0;
		}

int func_200(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (!func_386(bVar0))
	{
		return -1;
	}
	if (func_387(bVar0))
	{
		return -2;
	}
	if (func_388(bVar0, 0, PLAYER::PLAYER_ID(), 0))
	{
		return -2;
	}
	return -1;
}

int func_201()
{
	if (func_389(255))
	{
		return -1;
	}
	return -2;
}

int func_202()
{
	NETWORK::_0x2C5BD9A43987AA27(1);
	return -2;
}

int func_203(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	iVar1 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	iVar2 = -1;
	iVar3 = -1;
	if (func_390(PLAYER::PLAYER_ID()))
	{
		iVar2 = iVar1;
		iVar3 = iVar0;
		iVar4 = 15;
	}
	else
	{
		iVar2 = iVar0;
		iVar3 = iVar1;
		iVar4 = 16;
	}
	if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar2 /*4*/]), 1))
	{
		func_391(iVar3, iVar2);
		return -2;
	}
	iVar5 = (Global_1879534->f_7301.f_2[iVar2 /*4*/])->f_1;
	iVar6 = &Global_1879534->f_7222[iVar2 /*2*/];
	iVar7 = (Global_1879534->f_7222[iVar2 /*2*/])->f_1;
	if (iVar5 < iVar6)
	{
		func_391(iVar3, iVar2);
		return -2;
	}
	if (iVar5 > iVar7)
	{
		func_391(iVar3, iVar2);
		return -2;
	}
	iVar8 = iVar6;
	iVar9 = -1;
	while (iVar8 <= iVar7)
	{
		if (!&Global_1879534->f_1911[iVar8 /*3*/] == 531432813)
		{
			iVar8++;
		}
		else
		{
			iVar9 = (Global_1879534->f_1911[iVar8 /*3*/])->f_2;
			iVar10 = &Global_1879534->f_211[iVar9 /*4*/];
			if (iVar10 != iVar4)
			{
				iVar8++;
			}
			else
			{
				(Global_1879534->f_7301.f_2[iVar2 /*4*/])->f_1 = iVar8;
				func_391(iVar3, iVar2);
				return -2;
			}
		}
	}
	return -2;
}

int func_204(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (!func_386(bVar0))
	{
		return -1;
	}
	if (func_387(bVar0))
	{
		return -2;
	}
	if (func_388(bVar0, 0, PLAYER::PLAYER_ID(), 0))
	{
		return -2;
	}
	return -1;
}

int func_205(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_2() == 0)
	{
		if (!func_392())
		{
			return -1;
		}
	}
	iVar0 = &Global_1879534->f_211[bParam0 /*4*/];
	iVar1 = (Global_1879534->f_211[bParam0 /*4*/])->f_1;
	iVar2 = (Global_1879534->f_211[bParam0 /*4*/])->f_2;
	iVar3 = (Global_1879534->f_211[bParam0 /*4*/])->f_3;
	if (iVar0 == -1)
	{
		MISC::SET_BIT(&iVar3, 0);
		MISC::SET_BIT(&iVar3, 1);
	}
	else
	{
		if (!MISC::IS_BIT_SET(iVar3, 0))
		{
			if (!Global_1935630 & 2048 != 0 && !func_14(0, 1, 1))
			{
				if (func_87(iVar0, 0, 0, -1))
				{
					MISC::SET_BIT(&iVar3, 0);
				}
			}
		}
		if (!MISC::IS_BIT_SET(iVar3, 1) && MISC::IS_BIT_SET(iVar3, 0))
		{
			if (func_85(iVar0))
			{
				MISC::SET_BIT(&iVar3, 1);
			}
		}
	}
	if (iVar1 == -1)
	{
		MISC::SET_BIT(&iVar3, 2);
		MISC::SET_BIT(&iVar3, 3);
	}
	else
	{
		if (!MISC::IS_BIT_SET(iVar3, 2))
		{
			if (!Global_1935630 & 2048 != 0 && !func_14(0, 1, 1))
			{
				if (func_87(iVar1, 0, 0, -1))
				{
					MISC::SET_BIT(&iVar3, 2);
				}
			}
		}
		if (!MISC::IS_BIT_SET(iVar3, 3) && MISC::IS_BIT_SET(iVar3, 2))
		{
			if (func_85(iVar1))
			{
				MISC::SET_BIT(&iVar3, 3);
			}
		}
	}
	if (iVar2 == -1)
	{
		MISC::SET_BIT(&iVar3, 4);
		MISC::SET_BIT(&iVar3, 5);
	}
	else
	{
		if (!MISC::IS_BIT_SET(iVar3, 4))
		{
			if (!Global_1935630 & 2048 != 0 && !func_14(0, 1, 1))
			{
				if (func_87(iVar2, 0, 0, -1))
				{
					func_236(func_234(iVar2), func_235(iVar2), 0, ((*Global_1835011)[iVar2 /*74*/])->f_21, func_86());
					MISC::SET_BIT(&iVar3, 4);
				}
			}
		}
		if (!MISC::IS_BIT_SET(iVar3, 5) && MISC::IS_BIT_SET(iVar3, 4))
		{
			if (func_85(iVar2))
			{
				MISC::SET_BIT(&iVar3, 5);
			}
		}
	}
	(Global_1879534->f_211[bParam0 /*4*/])->f_3 = iVar3;
	if ((MISC::IS_BIT_SET(iVar3, 1) && MISC::IS_BIT_SET(iVar3, 3)) && MISC::IS_BIT_SET(iVar3, 5))
	{
		return -2;
	}
	return -1;
}

int func_206(bool bParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;

	uVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	bVar1 = false;
	switch (Global_1887078->f_1718)
	{
		case 0:
			Global_1887078->f_1720 = -1;
			iVar2 = func_393(uVar0);
			if (iVar2 == -1)
			{
			}
			else
			{
				Global_1887078->f_1720 = iVar2;
				func_394(1);
			}
			break;
		case 1:
			if (Global_1887078->f_1720 == -1)
			{
				func_394(0);
			}
			else if (func_395(Global_1887078->f_1720))
			{
				bVar1 = true;
			}
			break;
		case 2:
			func_394(0);
			break;
	}
	if (bVar1)
	{
		func_394(0);
		Global_1887078->f_1720 = -1;
		return -2;
	}
	return -1;
}

int func_207()
{
	func_396();
	return -2;
}

int func_208(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (!func_386(bVar0))
	{
		return -1;
	}
	if (func_388(bVar0, 0, PLAYER::PLAYER_ID(), 0))
	{
		return -2;
	}
	return -1;
}

int func_209(bool bParam0)
{
	bool bVar0;

	bVar0 = false;
	if (func_390(PLAYER::PLAYER_ID()))
	{
		bVar0 = &Global_1879534->f_1172[bParam0 /*2*/];
	}
	else
	{
		bVar0 = (Global_1879534->f_1172[bParam0 /*2*/])->f_1;
	}
	if (bVar0 == 0 || !func_386(bVar0))
	{
		return -2;
	}
	if (func_388(bVar0, 0, PLAYER::PLAYER_ID(), 0))
	{
		return -2;
	}
	return -2;
}

int func_210(bool bParam0)
{
	bool bVar0;
	var uVar1;
	var uVar2;

	if (bParam0 == -1)
	{
		return -2;
	}
	bVar0 = &Global_1879534->f_211[bParam0 /*4*/];
	if (!func_84(bVar0))
	{
		return -2;
	}
	uVar1 = (Global_1879534->f_211[bParam0 /*4*/])->f_2;
	uVar2 = (Global_1879534->f_211[bParam0 /*4*/])->f_3;
	if (func_397(((*Global_1835011)[bVar0 /*74*/])->f_1) == (Global_1879534->f_211[bParam0 /*4*/])->f_1)
	{
		return uVar1;
	}
	return uVar2;
}

int func_211(bool bParam0)
{
	bool bVar0;
	var uVar1;
	var uVar2;

	if (bParam0 == -1)
	{
		return -2;
	}
	bVar0 = &Global_1879534->f_211[bParam0 /*4*/];
	if (!func_18(bVar0))
	{
		return -2;
	}
	uVar1 = (Global_1879534->f_211[bParam0 /*4*/])->f_2;
	uVar2 = (Global_1879534->f_211[bParam0 /*4*/])->f_3;
	if (func_397(((*Global_1347702)[bVar0 /*49*/])->f_15) == (Global_1879534->f_211[bParam0 /*4*/])->f_1)
	{
		return uVar1;
	}
	return uVar2;
}

int func_212(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	if (bParam0 == -1)
	{
		return -2;
	}
	bVar0 = &Global_1879534->f_211[bParam0 /*4*/];
	if (!func_18(bVar0))
	{
		return -2;
	}
	iVar1 = (Global_1879534->f_211[bParam0 /*4*/])->f_2;
	iVar2 = (Global_1879534->f_211[bParam0 /*4*/])->f_1;
	uVar3 = (Global_1879534->f_211[bParam0 /*4*/])->f_3;
	iVar4 = func_398(((*Global_1347702)[bVar0 /*49*/])->f_15);
	func_73(&iVar4, 0, 0, iVar1, 0, 0, 0, 0);
	switch (iVar2)
	{
		case 2:
		case 5:
			if (!func_399(iVar4))
			{
				return uVar3;
			}
			break;
		case 3:
		case 4:
			if (func_399(iVar4))
			{
				return uVar3;
			}
			break;
	}
	return -2;
}

int func_213(bool bParam0)
{
	vector3 vVar0;

	if (!func_70())
	{
		return -2;
	}
	if (&Global_1879534)
	{
		return -2;
	}
	vVar0.x = BUILTIN::TO_FLOAT(&(Global_1879534->f_211[bParam0 /*4*/]));
	vVar0.f_1 = BUILTIN::TO_FLOAT((Global_1879534->f_211[bParam0 /*4*/])->f_1);
	vVar0.f_2 = BUILTIN::TO_FLOAT((Global_1879534->f_211[bParam0 /*4*/])->f_2);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vVar0, BUILTIN::TO_FLOAT((Global_1879534->f_211[bParam0 /*4*/])->f_3), true, false, true);
	return -2;
}

int func_214(bool bParam0)
{
	func_400(bParam0);
	return -2;
}

int func_215(bool bParam0)
{
	func_401(bParam0, 0);
	return -2;
}

int func_216(bool bParam0)
{
	func_402(bParam0);
	return -2;
}

int func_217(bool bParam0)
{
	func_403(bParam0);
	return -2;
}

int func_218(bool bParam0)
{
	func_404(bParam0);
	return -2;
}

int func_219(bool bParam0)
{
	func_405(bParam0);
	return -2;
}

int func_220(bool bParam0)
{
	if (!func_406(bParam0))
	{
		return -2;
	}
	func_407(bParam0);
	return -2;
}

int func_221(bool bParam0)
{
	if (!func_406(bParam0))
	{
		return -2;
	}
	func_408(bParam0);
	return -2;
}

int func_222(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_223(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_224(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_409(iParam0, iParam6);
	func_410(iParam0, iParam5);
	func_411(iParam0, iParam4);
	func_79(iParam0, iParam3);
	func_78(iParam0, iParam2);
	func_77(iParam0, iParam1);
}

int func_225(bool bParam0)
{
	switch (bParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_226(int iParam0, bool bParam1)
{
	switch (func_412(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_227(bool bParam0)
{
	int iVar0;

	if (func_83(bParam0))
	{
		return 0;
	}
	if (func_413(bParam0, 0))
	{
		func_414(bParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_414(bParam0);
				Global_40.f_450[iVar0] = bParam0;
				Global_40.f_1094++;
				Global_1430257 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_228(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_415(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_229(int iParam0, bool bParam1, bool bParam2)
{
	if (func_416(iParam0, bParam1, bParam2, 1))
	{
		return 1;
	}
	return 0;
}

bool func_230(bool bParam0)
{
	return func_225(bParam0);
}

Vector3 func_231(bool bParam0)
{
	switch (bParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
		default:
			break;
	}
	return ((*Global_1835011)[bParam0 /*74*/])->f_18;
}

int func_232(bool bParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	char cVar7[16];

	if (func_6(32768))
	{
		return 0;
	}
	iVar0 = func_2();
	if ((bParam4 && func_417(&(((*Global_1835011)[bParam0 /*74*/])->f_29), 512)) && !func_417(&(((*Global_1835011)[bParam0 /*74*/])->f_29), 1024))
	{
		if (func_418())
		{
			return 0;
		}
	}
	if (((*Global_1835011)[bParam0 /*74*/])->f_71)
	{
		return 0;
	}
	if (!func_419(bParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (bParam0 == 19)
		{
			if ((func_226(((*Global_1835011)[20 /*74*/])->f_1, 1) && Global_1879514->f_1 == ((*Global_1835011)[20 /*74*/])->f_1) && (MISC::GET_GAME_TIMER() - func_74()) <= 2000)
			{
				return 0;
			}
		}
		else if (bParam0 == 20)
		{
			if ((func_226(((*Global_1835011)[19 /*74*/])->f_1, 1) && Global_1879514->f_1 == ((*Global_1835011)[19 /*74*/])->f_1) && (MISC::GET_GAME_TIMER() - func_74()) <= 2000)
			{
				return 0;
			}
		}
		else if (bParam0 == 14)
		{
			if (!func_226(((*Global_1347702)[62 /*49*/])->f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1835011)[bParam0 /*74*/])->f_27))
	{
		bVar3 = ((*Global_1835011)[bParam0 /*74*/])->f_70;
		if (func_420(bParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_421((*Global_1835011)[bParam0 /*74*/], 2))
			{
				if (func_422(bParam0))
				{
					((*Global_1835011)[bParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_423(bParam0));
					bVar2 = true;
				}
				else
				{
					((*Global_1835011)[bParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_424(bParam0));
				}
			}
			else if (func_422(bParam0))
			{
				((*Global_1835011)[bParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_AREA(1673015813, func_423(bParam0), func_425(bParam0), func_426(bParam0));
				bVar2 = true;
			}
			else
			{
				((*Global_1835011)[bParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_RADIUS(1673015813, func_427(bParam0), func_428(bParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_422(bParam0))
			{
				((*Global_1835011)[bParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_231(bParam0));
			}
			else
			{
				((*Global_1835011)[bParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_423(bParam0));
				bVar2 = true;
			}
		}
		else if (func_230(bParam0))
		{
			if (bParam0 == 7)
			{
				((*Global_1835011)[bParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_COORD(-1337945352, func_424(bParam0));
			}
			else
			{
				((*Global_1835011)[bParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_424(bParam0));
			}
		}
		else
		{
			((*Global_1835011)[bParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_424(bParam0));
		}
		((*Global_1835011)[bParam0 /*74*/])->f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_422(bParam0))
			{
				func_429(iParam2, 4194304);
			}
			else
			{
				func_430(iParam2, 4194304);
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(((*Global_1835011)[bParam0 /*74*/])->f_27, 63, bParam0);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1835011)[bParam0 /*74*/])->f_27))
	{
		return 0;
	}
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(((*Global_1835011)[bParam0 /*74*/])->f_27, ((*Global_1835011)[bParam0 /*74*/])->f_26, true);
		if (iVar0 != -1)
		{
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(((*Global_1835011)[bParam0 /*74*/])->f_27, &(((*Global_1835011)[bParam0 /*74*/])->f_39));
		}
		if (!func_417(&(((*Global_1835011)[bParam0 /*74*/])->f_29), 1024) && !func_230(bParam0))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1835011)[bParam0 /*74*/])->f_27, 580546400);
			func_431(&(((*Global_1835011)[bParam0 /*74*/])->f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_230(bParam0))
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1835011)[bParam0 /*74*/])->f_27, -1986290853);
	}
	if (bParam3 || func_421((*Global_1835011)[bParam0 /*74*/], 2))
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1835011)[bParam0 /*74*/])->f_27, 724623647);
	}
	else
	{
		MAP::_SET_BLIP_FLASH_STYLE(((*Global_1835011)[bParam0 /*74*/])->f_27, 724623647);
	}
	iVar4 = func_432(Global_40.f_4283);
	if (func_327(iVar4) && func_433(((*Global_1888801)[iVar4 /*35*/])->f_13))
	{
		bVar5 = true;
		bVar6 = func_434(iVar4);
	}
	if (func_435(bParam0, bVar5, iVar4))
	{
		func_436(((*Global_1835011)[bParam0 /*74*/])->f_1, bVar6, bVar5, iVar4);
	}
	if (bParam0 == 7 && !func_437(579))
	{
		func_438(579, ((*Global_1835011)[bParam0 /*74*/])->f_27, 0);
	}
	if (bParam0 == 2)
	{
		return 1;
	}
	if (((((((func_417(&(((*Global_1835011)[bParam0 /*74*/])->f_29), 4096) && !func_417(&(((*Global_1835011)[bParam0 /*74*/])->f_29), 8192)) && IntToFloat(func_74()) >= 10f) && !Global_1935630->f_12) && !Global_16) && !func_439(Global_35, joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))) && !PED::_0x34D6AC1157C8226C(Global_35, joaat("PROP_PLAYER_SLEEP_BED"))) && !PED::_0x34D6AC1157C8226C(Global_35, joaat("WORLD_PLAYER_SLEEP_BEDROLL")))
	{
		if (!func_420(bParam0, iVar0) || (fParam1 >= (func_440(bParam0) * func_440(bParam0)) && !((*Global_1835011)[bParam0 /*74*/])->f_70))
		{
			MemCopy(&cVar7, {((*Global_1835011)[bParam0 /*74*/])->f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_441(&cVar7, 10000, 0, 0, 0, 1);
			func_431(&(((*Global_1835011)[bParam0 /*74*/])->f_29), 8192);
		}
	}
	return 1;
}

void func_233(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

int func_234(bool bParam0)
{
	if (!func_84(bParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[bParam0 /*74*/])->f_30;
}

int func_235(bool bParam0)
{
	if (!func_84(bParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[bParam0 /*74*/])->f_1;
}

int func_236(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	bool bVar0;

	if (func_2() != -1)
	{
		return 1;
	}
	if (iParam2 == 0 && func_14(0, 1, 1))
	{
		return 0;
	}
	if (&Global_1879534)
	{
		return 0;
	}
	if (func_442(iParam0, iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < 27)
	{
		if (func_443(bVar0, &iParam0))
		{
			(Global_40.f_4942[bVar0 /*60*/])->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_254(bVar0, 512, 1);
			}
			else
			{
				func_444(bVar0, 512, 1);
			}
		}
		bVar0++;
	}
	return 1;
}

int func_237(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	iVar0 = func_234(bParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_443(iVar1, &iVar0))
		{
			bVar2 = func_446(func_445(bParam0));
			if (ENTITY::IS_ENTITY_DEAD(bVar2))
			{
			}
			else
			{
				if (bParam1 && func_447(iVar1, 67, 1))
				{
					return 1;
				}
				if (bParam2 && func_447(iVar1, 47, 1))
				{
					return 1;
				}
				if (!PED::_0x5102307CE88798EB(bVar2))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(bVar2);
				}
				if (PED::IS_TRACKED_PED_VISIBLE(bVar2))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

Vector3 func_238(bool bParam0)
{
	return func_424(bParam0);
}

int func_239(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_448(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_240(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;

	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_415(iParam0))
	{
		return -1;
	}
	if (func_2() != -1)
	{
		iVar2 = func_449(iParam0);
		if (iVar2 >= 0)
		{
			func_450(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*((*Global_1898346)[iVar1 /*6*/]) = { Var3 };
			func_451(iVar1, 1);
			func_450(iParam0, 1);
			Global_1898329 = &Global_1898329 + 1;
			if (&Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_449(iParam0);
		if (iVar2 >= 0)
		{
			func_450(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_20(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*((*Global_1898346)[iVar0 /*6*/]) = { Var3 };
					func_451(iVar0, 1);
					func_450(iParam0, 1);
					Global_1898329 = &Global_1898329 + 1;
					if (&Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

int func_241(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return 0;
	}
	return 1;
}

void func_242(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_234(bParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_443(iVar1, &iVar0))
		{
			bVar2 = func_446(func_445(bParam0));
			if (ENTITY::IS_ENTITY_DEAD(bVar2))
			{
			}
			else if (PED::_0x5102307CE88798EB(bVar2))
			{
				PED::_0x3088634CF8C819CF(bVar2);
			}
		}
		iVar1++;
	}
}

void func_243(int iParam0)
{
	func_452(iParam0);
}

void func_244(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_245(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	if (!func_241(iParam1))
	{
		iParam1 = func_449(func_235(bParam0));
		if (!func_241(iParam1))
		{
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1835011)[bParam0 /*74*/])->f_27))
	{
		if ((bParam2 || bParam6) && (!func_420(bParam0, -1) || ((*Global_1835011)[bParam0 /*74*/])->f_70))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1835011)[bParam0 /*74*/])->f_27, 724623647);
		}
		else
		{
			if (func_418())
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1835011)[bParam0 /*74*/])->f_27))
				{
					if (((*Global_1835011)[bParam0 /*74*/])->f_27 == Global_1905944->f_5698)
					{
						func_453(1);
					}
				}
			}
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(((*Global_1835011)[bParam0 /*74*/])->f_27));
			if (func_420(bParam0, -1) && func_454(bParam0))
			{
				func_232(bParam0, fParam5, iParam1, bParam2, 1);
				func_233((*Global_1835011)[bParam0 /*74*/], 2);
			}
		}
	}
	else if ((bParam2 && !func_225(bParam0)) && !Global_43890)
	{
		func_232(bParam0, fParam5, iParam1, bParam2, 1);
	}
	if (func_455(iParam1, 48))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1835011)[bParam0 /*74*/])->f_12));
	}
	if ((SCRIPTS::IS_THREAD_ACTIVE(((*Global_1835011)[bParam0 /*74*/])->f_16, false) && !func_456(bParam0)) && !func_455(iParam1, 1024))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1835011)[bParam0 /*74*/])->f_16, 1);
	}
	if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(((*Global_1835011)[bParam0 /*74*/])->f_72))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(((*Global_1835011)[bParam0 /*74*/])->f_72);
	}
	if (bParam4)
	{
		func_457(((*Global_1835011)[bParam0 /*74*/])->f_1);
	}
	else
	{
		func_430(iParam1, 3831);
	}
	((*Global_1835011)[bParam0 /*74*/])->f_73 = 0;
}

void func_246(bool bParam0)
{
	if (!func_458(bParam0))
	{
		return;
	}
	func_457(((*Global_1835011)[bParam0 /*74*/])->f_1);
}

void func_247(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_18(bParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_459(bParam0);
	}
	if (func_460(((*Global_1347702)[bParam0 /*49*/])->f_13, 256))
	{
		func_461(&(((*Global_1347702)[bParam0 /*49*/])->f_13), 256);
	}
	if (func_19(((*Global_1347702)[bParam0 /*49*/])->f_12, 1024))
	{
		func_462(&(((*Global_1347702)[bParam0 /*49*/])->f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_463(bParam0, 0);
	}
	func_464(bParam0);
	if (iParam3 == 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[bParam0 /*49*/])->f_42, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1347702)[bParam0 /*49*/])->f_42, iParam4);
		}
		else
		{
			((*Global_1347702)[bParam0 /*49*/])->f_43 = 0;
		}
	}
}

void func_248(bool bParam0, int iParam1, int iParam2)
{
	func_465(bParam0, iParam2);
	if (func_466(bParam0))
	{
		func_457(((*Global_1347702)[bParam0 /*49*/])->f_15);
	}
	if (iParam1 == 1)
	{
		if (func_467(((*Global_1347702)[bParam0 /*49*/])->f_15))
		{
			func_468(((*Global_1347702)[bParam0 /*49*/])->f_15, 0, 2);
		}
	}
}

void func_249(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	var uVar0;

	if (!func_18(bParam0))
	{
		return;
	}
	if (func_469())
	{
		func_470(bParam0, 1);
	}
	if (bParam0 == 85)
	{
		MISC::_0xCC3EDC5614B03F61(18);
	}
	else if (bParam0 == 86)
	{
		MISC::_0xCC3EDC5614B03F61(19);
	}
	else if (bParam0 == 87)
	{
		MISC::_0xCC3EDC5614B03F61(20);
	}
	else if (bParam0 == 135)
	{
		MISC::_0xCC3EDC5614B03F61(73);
	}
	else if (bParam0 == 20)
	{
		MISC::_0xCC3EDC5614B03F61(6);
	}
	else if (bParam0 == 19)
	{
		MISC::_0xCC3EDC5614B03F61(7);
	}
	else if (bParam0 == 12)
	{
		MISC::_0xCC3EDC5614B03F61(10);
	}
	else if (bParam0 == 16)
	{
		MISC::_0xCC3EDC5614B03F61(11);
	}
	else if (bParam0 == 17)
	{
		MISC::_0xCC3EDC5614B03F61(13);
	}
	else if (bParam0 == 18)
	{
		MISC::_0xCC3EDC5614B03F61(14);
	}
	else if (bParam0 == 14)
	{
		MISC::_0xCC3EDC5614B03F61(15);
	}
	if (bParam0 == 95)
	{
		if (!func_6(32768))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("SP_ACHIEVEMENTS"), joaat("ACH_FWB")))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(joaat("ACH_FWB_CLEMENS"), 1);
			}
		}
	}
	else if (bParam0 == 102)
	{
		if (!func_469())
		{
			((*Global_1347702)[bParam0 /*49*/])->f_35 = 104;
			((*Global_1347702)[104 /*49*/])->f_48 = ((*Global_1347702)[bParam0 /*49*/])->f_15;
		}
	}
	func_248(bParam0, 0, iParam3);
	if (func_18(((*Global_1347702)[bParam0 /*49*/])->f_35))
	{
		func_471(((*Global_1347702)[bParam0 /*49*/])->f_35);
		if (iParam1 == 1)
		{
			func_82(((*Global_1347702)[bParam0 /*49*/])->f_35, 0);
			if (func_472(bParam0))
			{
				((*Global_1347702)[((*Global_1347702)[bParam0 /*49*/])->f_35 /*49*/])->f_43 = ((*Global_1347702)[bParam0 /*49*/])->f_43;
			}
		}
	}
	else
	{
		func_473();
	}
	if (!func_19(((*Global_1347702)[bParam0 /*49*/])->f_12, 1) && !func_19(((*Global_1347702)[bParam0 /*49*/])->f_12, 33554432))
	{
		if (func_19(((*Global_1347702)[bParam0 /*49*/])->f_12, 262144))
		{
			if (bParam5)
			{
				func_474(bParam0);
			}
			bParam5 = false;
			uVar0 = func_475(((*Global_1347702)[bParam0 /*49*/])->f_15);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uVar0), 2);
			}
			func_462(&(((*Global_1347702)[bParam0 /*49*/])->f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = func_19(((*Global_1347702)[bParam0 /*49*/])->f_12, 4);
	}
	if (!func_6(32768))
	{
		func_476(((*Global_1347702)[bParam0 /*49*/])->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_477(((*Global_1347702)[bParam0 /*49*/])->f_15, bParam6);
	}
	func_478(bParam0);
}

int func_250(bool bParam0)
{
	if (bParam0 <= -1 || bParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

void func_251(bool bParam0)
{
	if (!func_479(bParam0))
	{
		return;
	}
	func_254(bParam0, 2, 1);
	func_480(bParam0);
}

void func_252(bool bParam0)
{
	if (!func_479(bParam0))
	{
		return;
	}
	func_444(bParam0, 32, 1);
	func_254(bParam0, 4, 1);
	func_254(bParam0, 2, 1);
	func_480(bParam0);
}

void func_253(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_479(bParam0))
	{
		return;
	}
	func_444(bParam0, 2, 1);
	bVar0 = true;
	if (((!bParam1 && func_250(bParam0)) && ENTITY::DOES_ENTITY_EXIST(Global_1360165[bParam0 /*1157*/])) && ENTITY::IS_ENTITY_ON_SCREEN(Global_1360165[bParam0 /*1157*/]))
	{
		bVar0 = false;
	}
	func_481(bParam0, 0, 0, bVar0);
}

void func_254(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_250(bParam0))
		{
			return;
		}
	}
	Global_40.f_4942[bParam0 /*60*/] = (Global_40.f_4942[bParam0 /*60*/] || iParam1);
}

int func_255()
{
	return Global_40.f_4283;
}

void func_256(bool bParam0)
{
	func_254(bParam0, 4, 1);
}

void func_257(bool bParam0)
{
	func_444(bParam0, 4, 1);
}

void func_258(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (!func_250(bParam0))
	{
		return;
	}
	if (func_482(bParam0))
	{
		if (!func_483(bParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_447(bParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_484(bParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	bVar1 = func_446(bParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(bVar1) && func_485(bParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar1) && ENTITY::IS_ENTITY_ATTACHED(bVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(bVar1, 1) || TASK::_0x0C3CB2E600C8977D(bVar1, 1)) || PED::IS_PED_ON_MOUNT(bVar1)) || PED::IS_PED_IN_ANY_VEHICLE(bVar1, false))
		{
			PED::_0xF1C03A5352243A30(bVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(bVar1, true, true);
	}
	if (bParam4)
	{
		func_486(bParam0, 2, 1);
	}
	else
	{
		func_487(bParam0);
		func_486(bParam0, 1, 1);
	}
}

void func_259(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;

	if (!func_479(bParam0))
	{
		return;
	}
	bVar0 = ((iParam2 > 0 || iParam3 > 0) || iParam4 > 0);
	if (iParam2 < 0)
	{
		iParam2 = 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = 0;
	}
	if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	iVar1 = func_72();
	if (bVar0)
	{
		func_73(&iVar1, 0, iParam2, iParam3, iParam4, 0, 0, 0);
		if (!func_71(iVar1))
		{
			return;
		}
	}
	if (bParam6)
	{
		if (bVar0)
		{
			((*Global_1360165)[bParam0 /*1157*/])->f_1152 = uParam1;
			((*Global_1360165)[bParam0 /*1157*/])->f_1153 = iVar1;
		}
		return;
	}
	if (bVar0)
	{
		(Global_40.f_4942[bParam0 /*60*/])->f_42 = uParam1;
		(Global_40.f_4942[bParam0 /*60*/])->f_43 = iVar1;
	}
	else
	{
		(Global_40.f_4942[bParam0 /*60*/])->f_44 = uParam1;
		if (bParam5)
		{
			(Global_40.f_4942[bParam0 /*60*/])->f_42 = -1;
			(Global_40.f_4942[bParam0 /*60*/])->f_43 = -15;
		}
	}
}

void func_260(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_479(bParam0))
	{
		return;
	}
	if (!func_488(iParam1))
	{
		return;
	}
	iVar0 = -1;
	bVar1 = false;
	if (func_489(bParam0, iParam1, &iVar0, &bVar1))
	{
		if (bVar1)
		{
			func_490(bParam0, &((Global_40.f_4942[bParam0 /*60*/])->f_8));
		}
		if (iVar0 != -1)
		{
			func_491(bParam0, iVar0);
		}
	}
}

void func_261()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		func_492(iVar0);
		iVar0++;
	}
	func_493();
}

void func_262(int iParam0)
{
	switch (func_2())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 || iParam0);
			break;
	}
}

void func_263(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_479(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_254(bParam0, 32768, 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(PERSCHAR::_0xA00DF706C60173D1(func_494(bParam0, 1)), true);
		if (bParam2)
		{
			((*Global_1360165)[bParam0 /*1157*/])->f_126 = func_495(bParam0);
		}
	}
	else
	{
		func_444(bParam0, 32768, 1);
	}
}

int func_264(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_479(bParam0))
	{
		return 0;
	}
	iVar0 = func_484(bParam0, 0);
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_446(bParam0)) && !ENTITY::_0x88AD6CC10D8D35B2(func_446(bParam0)))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(func_446(bParam0), true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar0);
	}
	if ((Global_40.f_4942[bParam0 /*60*/])->f_6 != iParam1 || (Global_40.f_4942[bParam0 /*60*/])->f_3 == 0)
	{
		func_306(bParam0, func_496(bParam0, Global_40.f_4283, 1, 1), 1);
	}
	(Global_40.f_4942[bParam0 /*60*/])->f_6 = iParam1;
	PERSCHAR::_0x8BC555034A5A5E8C(func_497(bParam0), (Global_40.f_4942[bParam0 /*60*/])->f_6);
	return 1;
}

int func_265(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_479(bParam0))
	{
		return 0;
	}
	iVar0 = func_494(bParam0, 0);
	if (iVar0 == 0)
	{
		return 1;
	}
	iVar1 = func_498(bParam0, 0);
	if (PERSCHAR::_0x800DF3FC913355F3(iVar1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x31C70A716CAE1FEE(iVar1)) && !ENTITY::_0x88AD6CC10D8D35B2(PERSCHAR::_0x31C70A716CAE1FEE(iVar1)))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(iVar1), true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
	}
	(Global_40.f_4942[bParam0 /*60*/])->f_7 = iParam1;
	PERSCHAR::_0x8BC555034A5A5E8C(iVar0, (Global_40.f_4942[bParam0 /*60*/])->f_7);
	return 1;
}

int func_266(bool bParam0)
{
	if (!func_406(bParam0))
	{
		return 0;
	}
	return Global_1895087[bParam0 /*3*/];
}

char* func_267(int iParam0)
{
	switch (iParam0)
	{
		case joaat("AZL_CAMP_COLTER"):
			return "AZL_CAMP_COLTER";
		case joaat("AZL_CAMP_HORSESHOE_OVERLOOK"):
			return "AZL_CAMP_HORSESHOE_OVERLOOK";
		case joaat("AZL_CAMP_CLEMENS_POINT"):
			return "AZL_camp_clemens_point";
		case joaat("AZL_CAMP_SHADY_BELLE"):
			return "AZL_camp_shady_belle";
		case joaat("AZL_CAMP_BEAVER_HOLLOW"):
			return "AZL_camp_beaver_hollow";
		case joaat("AZ_CAMP_DARK_MOOD_ZONE"):
			return "AZ_camp_dark_mood_zone";
		case joaat("AZL_CAMP_PRONGHORN_RANCH"):
			return "AZL_camp_pronghorn_ranch";
		case joaat("AZL_PRONGHORN_RANCH"):
			return "AZL_pronghorn_ranch";
		case joaat("AZL_CAMP_BEECHERS_HOPE"):
			return "AZL_camp_beechers_hope";
		case joaat("AZL_BEECHERS_HOPE"):
			return "AZL_beechers_hope";
		case joaat("AZL_CAMP_LAKAY"):
			return "AZL_Camp_Lakay";
		case joaat("AZL_CAMP_GUARMA"):
			return "AZL_Camp_Guarma";
		case joaat("AZL_BEECHERS_HOPE_FARM_RUNNING"):
			return "AZL_beechers_hope_farm_running";
		default:
			break;
	}
	return "";
}

bool func_268(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

void func_269(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_2() != -1)
	{
		return;
	}
	if (Global_40.f_4283.f_4 == bParam0)
	{
		return;
	}
	Global_40.f_4283.f_4 = bParam0;
	iVar0 = 176656832;
	iVar1 = 176656832;
	switch (Global_40.f_4283)
	{
		case 0:
			iVar0 = 794696385;
			iVar1 = -2137730706;
			break;
		case 1:
			iVar0 = 2091083291;
			iVar1 = -1771575988;
			break;
		case 2:
			iVar0 = -302574837;
			iVar1 = -1205318041;
			break;
		case 3:
			iVar0 = -1916588959;
			iVar1 = 772151702;
			break;
		case 6:
			iVar0 = 1786449168;
			iVar1 = -365550600;
			break;
	}
	iVar2 = 0;
	while (iVar2 < 60)
	{
		if ((Global_40.f_4283.f_6[iVar2 /*5*/])->f_4 == 2)
		{
			func_499(Global_40.f_4283.f_6[iVar2 /*5*/], 1, 0);
		}
		iVar2++;
	}
	if (Global_40.f_4283.f_4 == 0 && iVar0 != 176656832)
	{
		func_272(iVar0, 1137976064, -469960592, -1, 1, 1, 0);
	}
	else if (Global_40.f_4283.f_4 == 2 && iVar1 != 176656832)
	{
		func_272(iVar1, 1137976064, -469960592, -1, 1, 1, 0);
	}
	func_500();
}

void func_270(int iParam0)
{
	int iVar0;
	bool bVar1;
	struct<12> Var2;
	int iVar22;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_40.f_4283 == iParam0)
	{
		iVar0 = func_501(func_432(iParam0));
		if (iVar0 != -1)
		{
			Global_40.f_6 = { (Global_1395601->f_5[iVar0 /*28*/])->f_2 };
		}
		func_272(func_502(iParam0), 1137976064, -1235532919, -1, 1, 1, 0);
		VOLUME::_0x748C5F51A18CB8F0(0);
		VOLUME::_0x748C5F51A18CB8F0(1);
		Global_40.f_4283.f_330 = -15;
		return;
	}
	func_503();
	switch (iParam0)
	{
		case 0:
		case 1:
			func_504("hso_post_caravan");
			func_505(-349064220);
			break;
		case 2:
			func_504("dewclm_post_caravan");
			func_505(1776302352);
			func_506(-349064220);
			break;
		case 3:
			func_505(-523522517);
			func_506(-349064220);
			func_506(1776302352);
			break;
		case 4:
		case 5:
		case 6:
			func_506(-349064220);
			func_506(1776302352);
			func_506(-523522517);
			break;
		case 7:
		case 8:
			func_506(-349064220);
			func_506(1776302352);
			func_506(-523522517);
			func_506(1591451572);
			break;
	}
	Global_1934266->f_66 = 1;
	func_507(func_432(iParam0), 0);
	switch (func_2())
	{
		case -1:
			func_508();
			func_509(iParam0);
			func_510(1, 18);
			func_511(iParam0);
			func_512(iParam0);
			Var2.f_11 = 1;
			iVar22 = 0;
			while (iVar22 < 10)
			{
				MISC::_COPY_MEMORY(Global_40.f_6563.f_274[iVar22 /*20*/], &Var2, 20);
				iVar22++;
			}
			Global_40.f_6563.f_273 = 0;
			func_513(&(Global_1359489->f_25), 1, 1);
			Global_1359453 = 0;
			bVar1 = false;
			while (bVar1 < 27)
			{
				func_444(bVar1, 16384, 1);
				bVar1++;
			}
			func_514(0, 14);
			func_515();
			func_516();
			Global_1357549->f_1497.f_8 |= 1;
			Global_1391438 = 1;
			Global_40.f_4283.f_330 = -15;
			func_272(-285172118, 195285667, -1235532919, -1, 0, 1, 0);
			func_272(func_502(iParam0), 1137976064, -1235532919, -1, 1, 1, 0);
			break;
	}
}

int func_271()
{
	switch (func_2())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

int func_272(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_517(iParam0);
	uVar3 = func_518(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_2 = iParam1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_3 = uVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_72();
				func_73(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_519(iParam0, 1);
			if (func_520(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_499(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_521(1, iParam0);
				}
				else
				{
					func_522(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_273(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_523(iParam0))
	{
		return 0;
	}
	iVar2 = func_524(iParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			if (func_525(((*Global_40.f_11206[iParam0 /*26*/])[iVar0 /*5*/])->f_1, 1) > func_525(iParam3, 1))
			{
				return 1;
			}
			((*Global_40.f_11206[iParam0 /*26*/])[iVar0 /*5*/])->f_2 = iParam2;
			((*Global_40.f_11206[iParam0 /*26*/])[iVar0 /*5*/])->f_1 = iParam3;
			if (iParam4 > 0)
			{
				iVar1 = func_72();
				func_73(&iVar1, 0, 0, iParam4, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			((*Global_40.f_11206[iParam0 /*26*/])[iVar0 /*5*/])->f_4 = iVar1;
			((*Global_40.f_11206[iParam0 /*26*/])[iVar0 /*5*/])->f_3 = iVar2;
			func_526(iParam0, iParam1, 1);
			Global_1935183->f_24 = 1;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == -1600776215)
		{
			(*Global_40.f_11206[iParam0 /*26*/])[iVar0 /*5*/] = iParam1;
			((*Global_40.f_11206[iParam0 /*26*/])[iVar0 /*5*/])->f_2 = iParam2;
			((*Global_40.f_11206[iParam0 /*26*/])[iVar0 /*5*/])->f_1 = iParam3;
			if (iParam4 > 0)
			{
				iVar1 = func_72();
				func_73(&iVar1, 0, 0, iParam4, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			((*Global_40.f_11206[iParam0 /*26*/])[iVar0 /*5*/])->f_4 = iVar1;
			((*Global_40.f_11206[iParam0 /*26*/])[iVar0 /*5*/])->f_3 = iVar2;
			func_526(iParam0, iParam1, 1);
			Global_1935183->f_24 = 1;
			if (func_527(iVar2))
			{
				iVar3 = 0;
				while (iVar3 < 5)
				{
					if (((*Global_40.f_11206[iParam0 /*26*/])[iVar3 /*5*/])->f_3 == iVar2 && Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/] != iParam1)
					{
						if ((Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/] == 557524588 || Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/] == 1792646445) && (iParam1 == 557524588 || iParam1 == 1792646445))
						{
							return 0;
						}
						func_528(iParam0, (*Global_40.f_11206[iParam0 /*26*/])[iVar3 /*5*/]);
					}
					iVar3++;
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_274(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_523(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			func_528(iParam0, (*Global_40.f_11206[iParam0 /*26*/])[iVar0 /*5*/]);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_275(bool bParam0)
{
	return (bParam0 > -1 && bParam0 < 7);
}

void func_276(bool bParam0)
{
	if (!func_275(bParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_7854), bParam0);
}

int func_277(bool bParam0)
{
	if (bParam0 <= -1 || bParam0 > 3)
	{
		return 0;
	}
	return 1;
}

void func_278(bool bParam0)
{
	if (!func_277(bParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_7855), bParam0);
	switch (bParam0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		default:
			break;
	}
}

void func_279(bool bParam0, int iParam1)
{
	int iVar0;

	switch (bParam0)
	{
		case 0:
			iVar0 = iParam1;
			if (!func_529(iVar0))
			{
				return;
			}
			func_530(iVar0);
			break;
		case 1:
			break;
		case 2:
			break;
		default:
			break;
	}
}

void func_280(bool bParam0, int iParam1)
{
	int iVar0;

	switch (bParam0)
	{
		case 0:
			iVar0 = iParam1;
			if (!func_529(iVar0))
			{
				return;
			}
			func_531(iVar0, 0);
			break;
		case 1:
			break;
		case 2:
			break;
		default:
			break;
	}
}

void func_281(bool bParam0, int iParam1)
{
	int iVar0;

	switch (bParam0)
	{
		case 0:
			iVar0 = iParam1;
			if (!func_529(iVar0))
			{
				return;
			}
			func_532(iVar0, 0, 0);
			break;
		case 1:
		case 2:
			break;
		default:
			break;
	}
}

int func_282(bool bParam0)
{
	if (bParam0 <= -1 || bParam0 > 54)
	{
		return 0;
	}
	return 1;
}

void func_283(bool bParam0)
{
	if (!func_282(bParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_7856), bParam0);
}

void func_284(bool bParam0)
{
	if (!func_282(bParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&(Global_40.f_7856), bParam0);
}

void func_285(bool bParam0, var uParam1)
{
	switch (bParam0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 8:
			break;
		case 10:
			break;
		default:
			break;
	}
}

int func_286(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_287(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_533(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

void func_288(int iParam0)
{
	int iVar0;

	if (!func_533(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_VISIBLE(iVar0, true);
}

int func_289(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_THROWN_TOMAHAWK"):
		case joaat("WEAPON_THROWN_DYNAMITE"):
		case joaat("WEAPON_THROWN_THROWING_KNIVES"):
		case joaat("WEAPON_THROWN_MOLOTOV"):
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_290(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!func_534(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_535(iParam0, &bVar0, iParam1))
	{
		return 0;
	}
	func_536(iParam0, bParam2);
	iVar2 = 0;
	if (func_537(iParam0, 0, 0) == 0)
	{
		if (func_538(iParam0))
		{
			iVar5 = func_539(iParam0);
			iVar6 = func_540(iVar5);
			iVar7 = func_541(iVar6) + 1;
			func_542(iVar5);
			if (func_543(38))
			{
				func_293(483, 0);
			}
			else
			{
				func_293(482, 0);
			}
			if (iVar7 == func_544(iVar6))
			{
				func_290(func_545(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_70() && func_546(4))
				{
					if (func_70() && (func_547(38) || func_543(38)))
					{
						func_549(38, func_545(iVar6), 0, 0, func_548(), 0, -1, 0);
						func_550(2);
					}
					else
					{
						func_549(38, func_545(iVar6), 0, 0, func_548(), 0, -1, 0);
						func_550(1);
					}
				}
			}
			else if (func_70() && func_546(4))
			{
				if (func_70() && (func_547(38) || func_543(38)))
				{
					func_549(38, 0, 0, 0, func_548(), 0, -1, 0);
					func_550(2);
				}
				else
				{
					func_549(38, 0, 0, 0, func_548(), 0, -1, 0);
					func_550(1);
				}
			}
			if (func_70() && func_546(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_70() && (func_547(38) || func_543(38)))
					{
						func_551(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_551(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_552(iParam0) == joaat("CLOTHING"))
	{
		if ((!func_297(iParam0, 866047851) && !func_297(iParam0, -1979000645)) && !func_297(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_553(iParam0, 8388608) && !func_554(28))
	{
		func_301(28);
	}
	if (!bVar3)
	{
		if (func_297(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_555(iParam0) == -1447088266)
			{
				iVar1 = func_557(func_556(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_2() == -1)
					{
						func_287(iVar1);
					}
					if (func_558(0) && func_559(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_560(iParam0, bVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_0x5C2EA6C44F515F34(iParam0);
				if (WEAPON::_0x1F7977C9101F807F(iVar1))
				{
					if (func_2() == -1)
					{
						func_287(iParam0);
					}
					if (func_558(0) && func_559(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_560(iVar1, bVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_552(iParam0) == joaat("WEAPON"))
		{
			if (!func_561(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_552(iParam0) == joaat("AMMO") && func_562(iParam0))
		{
			if (!func_563(iParam0, &bVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_297(iParam0, 866047851))
		{
			func_564(iParam0);
		}
		else if (func_297(iParam0, 2000026003))
		{
			func_565(iParam0);
		}
		else if (func_297(iParam0, -103750053))
		{
			func_567(func_566(joaat("CLAWS_COLLECTED")), bVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_567(func_568(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), bVar0);
		}
		else if (func_297(iParam0, -121341956) && !func_297(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != 1993672959)
			{
				if (func_226(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_293(498, 0);
				}
			}
			if (func_297(iParam0, -2017733358) || func_297(iParam0, -1369131378))
			{
				func_569(iParam0);
			}
		}
		else if (func_297(iParam0, -136654233))
		{
			if (func_297(iParam0, -1021472396))
			{
			}
		}
		else if (func_297(iParam0, -1466706512) && func_297(iParam0, 1147021565))
		{
			func_293(484, 0);
		}
		else if (func_297(iParam0, 1147021565) && func_297(iParam0, -524514947))
		{
		}
		else if (func_297(iParam0, 554195525))
		{
		}
		else if (func_297(iParam0, 589988438))
		{
			if (func_570())
			{
				func_571(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_297(iParam0, 787083290) && func_297(iParam0, 949916894))
		{
			func_572(iParam0);
		}
		else if (func_297(iParam0, -1718133314))
		{
			func_573(iParam0);
		}
		else if (func_297(iParam0, -1738650224))
		{
			func_574(iParam0);
		}
		else if (func_297(iParam0, -1112814642) && func_297(iParam0, 949916894))
		{
			func_575(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_297(iParam0, 1841149704))
		{
			func_576();
		}
		else if (func_297(iParam0, 606799272))
		{
			func_577(iParam0, iParam1);
			func_578(iParam0);
		}
		else if (func_297(iParam0, -1112814642) && func_297(iParam0, -1697809989))
		{
			func_579(iParam0, 0, 0, 0);
		}
		else if (func_297(iParam0, -2017733358) || func_297(iParam0, -1369131378))
		{
			func_569(iParam0);
		}
		else if (func_297(iParam0, -1921346699))
		{
			if (func_2() != -1)
			{
				return 0;
			}
			func_580(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_297(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_581(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_290(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_581(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_290(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_581(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_290(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_581(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_290(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_581(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_290(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_581(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_290(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_297(iParam0, -839724752) && func_553(iParam0, 4))
		{
			if (!func_543(42))
			{
				func_582(iParam0);
			}
		}
		else if (func_297(iParam0, 1399091007))
		{
			func_583(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_297(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_290(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				func_301(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_362(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_584(&iVar9, 0))
				{
					func_559(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_2() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_362(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_293(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_585();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_586();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_587();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_588();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_589();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584: /* GXTEntry: "Jack Hall Gang Map 1" */
				func_590(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_591(499813453, 0);
				func_592(1);
				break;
			case 2127812557: /* GXTEntry: "Jack Hall Gang Map 2" */
				func_590(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_591(499813453, 0);
				func_592(2);
				break;
			case 808991383: /* GXTEntry: "Jack Hall Gang Map 3" */
				func_590(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_591(499813453, 0);
				func_592(4);
				break;
			case 1134518629: /* GXTEntry: "High Stakes Treasure Map 1" */
				func_590(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_591(666607663, 0);
				func_593(1);
				break;
			case 902940106: /* GXTEntry: "High Stakes Treasure Map 2" */
				func_590(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_591(666607663, 0);
				func_593(2);
				break;
			case -418174898: /* GXTEntry: "High Stakes Treasure Map 3" */
				func_590(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_591(666607663, 0);
				func_593(4);
				break;
			case -648114971: /* GXTEntry: "The Poisonous Trail Map 1" */
				func_590(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_591(-220219788, 0);
				func_594(1);
				break;
			case 211153747: /* GXTEntry: "The Poisonous Trail Map 2" */
				func_590(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_591(-220219788, 0);
				func_594(2);
				break;
			case -32876996: /* GXTEntry: "The Poisonous Trail Map 3" */
				func_590(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_591(-220219788, 0);
				func_594(4);
				break;
			case 1191437462: /* GXTEntry: "Le Tresor des Morts Map 1" */
				func_590(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_591(218622660, 0);
				func_595(1);
				break;
			case 1119149048: /* GXTEntry: "Le Tresor des Morts Riddle Note" */
				func_590(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_591(218622660, 0);
				func_595(2);
				break;
			case 506073827: /* GXTEntry: "The Elemental Trail Map 1" */
				func_590(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_591(390004462, 0);
				func_596(1);
				break;
			case -1876986168: /* GXTEntry: "The Elemental Trail Map 2" */
				func_590(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_591(390004462, 0);
				func_596(2);
				break;
			case 2142623221: /* GXTEntry: "The Elemental Trail Map 3" */
				func_590(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_591(390004462, 0);
				func_596(4);
				break;
			case 1508215381: /* GXTEntry: "Landmarks of Riches Map 1" */
				func_590(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_591(6410548, 0);
				func_597(1);
				break;
			case -888935280: /* GXTEntry: "Landmarks of Riches Map 2" */
				func_590(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_591(6410548, 0);
				func_597(2);
				break;
			case -1252474566: /* GXTEntry: "Landmarks of Riches Map 3" */
				func_590(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_591(6410548, 0);
				func_597(4);
				break;
			case -1465702449: /* GXTEntry: "Landmarks of Riches Map 4" */
				func_590(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_591(6410548, 0);
				func_597(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_292(242, func_598(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_292(240, func_598(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_292(241, func_598(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_599(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_599(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_599(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_599(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102: /* GXTEntry: "Lamb Heart" */
			case -1939600995: /* GXTEntry: "Prime Rib" */
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
			case -1598782722: /* GXTEntry: "Consomme" */
			case -1505924449: /* GXTEntry: "Fried Catfish" */
			case -1403873319: /* GXTEntry: "Prairie Chicken" */
			case -1335566375: /* GXTEntry: "Lamb Fry" */
			case -1192685521: /* GXTEntry: "Oyster Stew" */
			case 144810727: /* GXTEntry: "Turtle Soup" */
			case 567164682: /* GXTEntry: "Oatmeal" */
			case 1174625611: /* GXTEntry: "Corned Beef Hash" */
			case 1955751248: /* GXTEntry: "Roast Beef" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_599(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_599(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_293(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_293(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_293(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_290(func_600(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_290(func_601(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_554(1))
				{
					func_293(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_293(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_293(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (bVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_602(&iVar10);
		if (!func_603(iVar10, bVar0, iParam5))
		{
			return 0;
		}
		else if (!func_558(0))
		{
			return 1;
		}
		if (func_552(iParam0) == joaat("CLOTHING"))
		{
			func_604(iParam0);
		}
		if (func_297(iParam0, -1979000645))
		{
			func_605(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_558(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_290(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_606(iVar2, 0);
		}
	}
	Var35 = { func_607(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, bVar0);
	}
	func_608(iParam0);
	if (fParam6 > 0f)
	{
		if (func_297(iParam0, -839724752))
		{
			func_609(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_610(iParam0, bVar0, 0, bVar37, 0);
	}
	return 1;
}

int func_291(int iParam0)
{
	var uVar0;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (func_611(iParam0, &uVar0, -1683087938, 0))
	{
		return uVar0;
	}
	return iParam0;
}

void func_292(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_612(iParam0, &iVar0, &iVar1);
	if (!func_613(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_614(iParam0, 1024))
	{
		return;
	}
	func_615(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_293(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_612(iParam0, &iVar0, &iVar1);
	if (!func_613(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_615(iVar0, iVar1);
}

int func_294(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_295(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_294(iParam0))
	{
		return;
	}
	if (func_616(iParam0))
	{
		return;
	}
	if (!func_617(iParam0))
	{
		func_618(iParam0, 1, 0);
	}
	iVar0 = func_619(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_620(iParam0, 512))
		{
			func_325(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_418() && !bParam1) && !func_14(0, 0, 1))
	{
		func_441(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_621(iParam0, 6);
	if (bParam2)
	{
		if (!func_14(0, 0, 1))
		{
			func_510(1, 4);
		}
	}
}

int func_296(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (&Global_1905943)
	{
		return 0;
	}
	Global_1905943 = iParam3;
	if (&Global_1905943)
	{
	}
	if (&Global_1905941 == iParam0)
	{
		return 1;
	}
	if (Global_40.f_7729 == iParam0 && !bParam2)
	{
		Global_1905941 = iParam0;
		return 1;
	}
	if (Global_40.f_7729 != &Global_1905941 && !bParam2)
	{
		return 0;
	}
	if (!func_294(iParam0))
	{
		return 0;
	}
	if (!func_616(iParam0) && !bParam2)
	{
		return 0;
	}
	iVar0 = func_619(iParam0);
	if (iParam0 > 5 && !func_622(iVar0, Global_1946804->f_1))
	{
	}
	Global_1905941 = iParam0;
	func_623(iParam0, 1024);
	DECORATOR::DECOR_SET_BOOL(Global_35, "outfitChanged", false);
	DECORATOR::DECOR_SET_BOOL(Global_35, "playerChangeOutfits", true);
	if (bParam2)
	{
		func_621(iParam0, 32768);
	}
	if (bParam1)
	{
		func_621(iParam0, 8192);
	}
	return 1;
}

int func_297(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_298(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (func_297(iParam0, 1989861793))
	{
		iVar0 = func_624(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_625(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_626(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_627(iVar14, iVar1);
					if (iVar15 != iParam0 && func_286(iVar15, 0))
					{
						if (func_628(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_629(iVar1);
				if (bVar13)
				{
					func_630(iParam0);
				}
				else
				{
					func_293(306, 0);
				}
			}
		}
	}
}

int func_299(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_631(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_610(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_581(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_607(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_537(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_537(iParam0, 0, 0) - iParam1) < 0)
		{
			func_299(iParam0, func_537(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_552(iParam0) == joaat("WEAPON"))
	{
		if (!func_632(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_633(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_558(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_610(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_634(iParam0, iParam1);
	return 1;
}

int func_300(bool bParam0)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_301(bool bParam0)
{
	if (!func_300(bParam0))
	{
		return;
	}
	func_635(bParam0);
	func_636(bParam0);
}

void func_302(bool bParam0)
{
	if (!func_300(bParam0))
	{
		return;
	}
	func_637(bParam0);
	func_638(bParam0);
}

void func_303(bool bParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (bParam0)
	{
		case 1497516462:
			func_506(1497516462);
			func_505(2016141805);
			func_505(1010885152);
			func_505(-502324015);
			break;
		case 2016141805:
			func_505(1497516462);
			func_506(2016141805);
			func_505(1010885152);
			func_505(-502324015);
			break;
		case 1010885152:
			func_505(1497516462);
			func_505(2016141805);
			func_506(1010885152);
			func_505(-502324015);
			break;
		case -502324015:
			func_505(1497516462);
			func_505(2016141805);
			func_505(1010885152);
			func_506(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_505(-538889627);
			func_505(-538880323);
			func_505(-1056767524);
			func_506(bParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_639();
			func_506(bParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_640();
			func_506(bParam0);
			break;
		case 2019386373:
			func_505(-664252410);
			func_505(2109952320);
			func_506(2019386373);
			break;
		case -664252410:
			func_505(2019386373);
			func_505(2109952320);
			func_506(-664252410);
			break;
		case 2109952320:
			func_505(2019386373);
			func_505(-664252410);
			func_506(2109952320);
			break;
		case -1674179981:
			func_505(-1835851517);
			func_505(-1838352012);
			func_506(-1674179981);
			break;
		case -1835851517:
			func_505(-1674179981);
			func_505(-1838352012);
			func_506(-1835851517);
			break;
		case -1838352012:
			func_505(-1674179981);
			func_505(-1835851517);
			func_506(-1838352012);
			break;
		case -1717960576:
			func_505(210001842);
			func_506(-1717960576);
			break;
		case 210001842:
			func_505(-1717960576);
			func_506(210001842);
			break;
		case -150493654:
			func_505(-1271608261);
			func_505(1846061697);
			func_505(-1145519186);
			func_506(-150493654);
			break;
		case -1271608261:
			func_505(-150493654);
			func_505(1846061697);
			func_505(-1145519186);
			func_506(-1271608261);
			break;
		case 1846061697:
			func_505(-150493654);
			func_505(-1271608261);
			func_505(-1145519186);
			func_506(1846061697);
			break;
		case -1145519186:
			func_505(-150493654);
			func_505(-1271608261);
			func_505(1846061697);
			func_506(-1145519186);
			break;
		case 1766284049:
			func_505(280705402);
			func_505(1926308480);
			func_506(1766284049);
			break;
		case 280705402:
			func_505(1766284049);
			func_505(1926308480);
			func_506(280705402);
			break;
		case 1926308480:
			func_505(1766284049);
			func_505(280705402);
			func_506(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_505(439465264);
				func_506(1609506757);
			}
			else
			{
				func_505(1609506757);
				func_505(439465264);
			}
			break;
		case 439465264:
			if (func_641(1609506757))
			{
				if (bParam1)
				{
					func_506(439465264);
				}
				else
				{
					func_505(439465264);
				}
			}
			break;
		case 1822001510:
			func_505(-1612662716);
			func_506(1822001510);
			break;
		case -1612662716:
			func_505(1822001510);
			func_506(-1612662716);
			break;
		case 1306158345:
			func_505(1952610440);
			func_505(-223469678);
			func_505(-404698347);
			func_505(1517904467);
			func_506(1306158345);
			break;
		case 1952610440:
			func_505(1306158345);
			func_505(-223469678);
			func_505(-404698347);
			func_505(1517904467);
			func_506(1952610440);
			break;
		case -223469678:
			func_505(1306158345);
			func_505(1952610440);
			func_505(-404698347);
			func_505(1517904467);
			func_506(-223469678);
			break;
		case -404698347:
			func_505(1306158345);
			func_505(1952610440);
			func_505(-223469678);
			func_505(1517904467);
			func_506(-404698347);
			break;
		case 1517904467:
			func_505(1306158345);
			func_505(1952610440);
			func_505(-223469678);
			func_505(-404698347);
			func_506(1517904467);
			break;
		case 1376646519:
			func_505(931649776);
			func_505(-434590080);
			func_505(1743048395);
			func_505(449774763);
			func_506(1376646519);
			break;
		case 931649776:
			func_505(1376646519);
			func_505(-434590080);
			func_505(1743048395);
			func_505(449774763);
			func_506(931649776);
			break;
		case -434590080:
			func_505(1376646519);
			func_505(931649776);
			func_505(1743048395);
			func_505(449774763);
			func_506(-434590080);
			break;
		case 1743048395:
			func_505(1376646519);
			func_505(931649776);
			func_505(-434590080);
			func_505(449774763);
			func_506(1743048395);
			break;
		case 449774763:
			func_505(1376646519);
			func_505(931649776);
			func_505(-434590080);
			func_505(1743048395);
			func_506(449774763);
			break;
		case -1414537028:
			func_505(38162571);
			func_505(1350391819);
			func_505(54073871);
			func_506(-1414537028);
			break;
		case 38162571:
			func_505(-1414537028);
			func_505(1350391819);
			func_505(54073871);
			func_506(38162571);
			break;
		case 1350391819:
			func_505(-1414537028);
			func_505(38162571);
			func_505(54073871);
			func_506(1350391819);
			break;
		case 54073871:
			func_505(-1414537028);
			func_505(38162571);
			func_505(1350391819);
			func_506(54073871);
			break;
		case 198200492:
			func_506(198200492);
			func_505(-1124061431);
			func_505(52706132);
			func_505(-259123672);
			break;
		case -1124061431:
			func_505(198200492);
			func_506(-1124061431);
			func_505(52706132);
			func_505(-259123672);
			break;
		case 52706132:
			func_505(198200492);
			func_505(-1124061431);
			func_506(52706132);
			func_505(-259123672);
			break;
		case -259123672:
			func_505(198200492);
			func_505(-1124061431);
			func_505(52706132);
			func_506(-259123672);
			break;
		case -919512195:
			func_506(-919512195);
			func_505(-1925798111);
			func_505(420709909);
			func_505(1703426636);
			break;
		case -1925798111:
			func_506(-1925798111);
			func_505(-919512195);
			func_505(420709909);
			func_505(1703426636);
			break;
		case 420709909:
			func_506(420709909);
			func_505(-919512195);
			func_505(-1925798111);
			func_505(1703426636);
			break;
		case 1703426636:
			func_506(1703426636);
			func_505(-919512195);
			func_505(-1925798111);
			func_505(420709909);
			break;
		case -1223121209:
			func_506(-1223121209);
			func_505(630808005);
			break;
		case 630808005:
			func_506(630808005);
			func_505(-1223121209);
			break;
		case 1453909576:
			func_506(1453909576);
			func_505(1643531967);
			break;
		case 1643531967:
			func_506(1643531967);
			func_505(1453909576);
			break;
		case 0:
			func_506(0);
			func_505(473295046);
			func_505(-1738165526);
			break;
		case 473295046:
			func_506(473295046);
			func_505(0);
			func_505(-1738165526);
			break;
		case -1738165526:
			func_506(-1738165526);
			func_505(0);
			func_505(473295046);
			break;
		case 932909855:
			func_506(932909855);
			func_505(2051822093);
			break;
		case 2051822093:
			func_506(2051822093);
			func_505(932909855);
			break;
		case 405586984:
			func_506(405586984);
			func_505(1509509592);
			func_505(-959357075);
			func_505(-1311865656);
			break;
		case 1509509592:
			func_506(1509509592);
			func_505(405586984);
			func_505(-959357075);
			func_505(-1311865656);
			break;
		case -959357075:
			func_506(-959357075);
			func_505(1509509592);
			func_505(405586984);
			func_505(-1311865656);
			break;
		case -1311865656:
			func_506(-1311865656);
			func_505(1509509592);
			func_505(-959357075);
			func_505(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_506(-524145696);
			}
			else
			{
				func_505(-524145696);
			}
			func_505(1626481264);
			func_505(282809459);
			break;
		case 282809459:
			func_506(282809459);
			func_505(1626481264);
			func_505(-524145696);
			break;
		case 1626481264:
			func_506(1626481264);
			func_505(-524145696);
			func_505(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_506(885203519);
			}
			else
			{
				func_505(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_506(-1080627546);
			}
			else
			{
				func_505(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_641(bParam0))
				{
					func_506(bParam0);
				}
			}
			else if (func_641(bParam0))
			{
				func_505(bParam0);
			}
			break;
	}
}

int func_304(bool bParam0)
{
	if (!func_642(bParam0))
	{
		return 0;
	}
	if (!func_81())
	{
		return 1;
	}
	return 0;
}

void func_305(bool bParam0)
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < 27)
	{
		if (func_643(bVar0, bParam0))
		{
			func_306(bVar0, bParam0, 0);
		}
		bVar0++;
	}
}

void func_306(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_250(bParam0))
	{
		return;
	}
	if (!func_643(bParam0, bParam1))
	{
		return;
	}
	(Global_40.f_4942[bParam0 /*60*/])->f_3 = bParam1;
	if (bParam2)
	{
		func_486(bParam0, 25, 1);
	}
}

void func_307(bool bParam0, int iParam1)
{
	if (!func_644(bParam0))
	{
		return;
	}
	(Global_40.f_7100[bParam0 /*8*/])->f_7 = iParam1;
}

void func_308(bool bParam0, bool bParam1)
{
	if (!func_645(bParam0))
	{
		return;
	}
	(Global_17503.f_42[bParam0 /*8*/])->f_7 = !bParam1;
}

void func_309(int iParam0, var uParam1)
{
	(Global_17503.f_42[iParam0 /*8*/])->f_5 = uParam1;
}

int func_310(bool bParam0)
{
	if (bParam0 == joaat("PLAYER_THREE"))
	{
		Global_40.f_7729 = 61;
		Global_1905941 = 61;
	}
	Global_1935630->f_2 = bParam0;
	func_646(bParam0, 999);
	return 1;
}

void func_311()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 153)
	{
		Global_20709.f_1630[iVar0] = -15;
		func_342(iVar0, 8);
		func_342(iVar0, 256);
		func_342(iVar0, 128);
		iVar0++;
	}
}

float func_312(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

float func_313(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_314()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xFECA17CF3343694B(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_315()
{
	if (func_2() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return 1;
	}
	return 0;
}

void func_316(var uParam0)
{
	if (func_647())
	{
		return;
	}
	Global_40.f_11095.f_48 = uParam0;
}

void func_317(var uParam0)
{
	if (func_647())
	{
		return;
	}
	Global_40.f_11095.f_47 = uParam0;
}

void func_318(var uParam0)
{
	if (func_647())
	{
		return;
	}
	Global_40.f_11095.f_46 = uParam0;
}

void func_319(int iParam0)
{
	Global_1934765->f_67 = (Global_1934765->f_67 || iParam0);
}

int func_320(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_321(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 10)
	{
		return 0;
	}
	return 1;
}

bool func_322(int iParam0)
{
	return iParam0 != 0;
}

int func_323(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return 1;
}

void func_324(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_320(iParam0))
	{
		return;
	}
	if (!func_321(iParam1))
	{
		return;
	}
	if (&Global_40.f_7731[iParam0 /*5*/] == iParam1)
	{
		return;
	}
	Global_40.f_7731[iParam0 /*5*/] = iParam1;
	if (!bParam2)
	{
		bVar2 = (&Global_40.f_7731[iParam0 /*5*/] < 7 && func_648(iParam0));
		(Global_40.f_7731[iParam0 /*5*/])->f_3 = func_72();
		func_649(iParam0, &iVar0, &iVar1, bVar2);
		func_73(&((Global_40.f_7731[iParam0 /*5*/])->f_3), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_325(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_650(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = bParam3;
	func_651(Var0);
}

void func_326(bool bParam0)
{
	if ((!func_226(func_652(4), 1) || func_467(func_652(33))) || func_467(func_652(34)))
	{
		return;
	}
	func_653(bParam0);
	func_654(bParam0);
	func_655(0);
}

bool func_327(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_328(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_656(iParam0))
	{
		return;
	}
	iVar0 = 8388864;
	if (bParam1)
	{
		if (!func_657(iParam0))
		{
			func_658(iParam0, iVar0);
		}
	}
	else if (func_657(iParam0))
	{
		func_659(iParam0, iVar0);
	}
}

int func_329(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return 0;
	}
	return 1;
}

void func_330(int iParam0, var uParam1, int iParam2)
{
	if (func_329(iParam0, 0))
	{
		(Global_40.f_9571[iParam0 /*10*/])->f_1 = uParam1;
	}
}

void func_331(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_329(iParam0, 0))
	{
		return;
	}
	iVar0 = func_660(iParam0);
	if (bParam1)
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, iVar0);
	}
	else
	{
		PLAYER::_0xCDDD4B74660E2335(PLAYER::PLAYER_ID(), 0, iVar0);
	}
}

int func_332(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (iParam0 >= 0)
	{
		if (iParam0 <= 10)
		{
			iVar0 = 0;
		}
		else if (iParam0 <= 17)
		{
			iVar0 = 2;
		}
		else if (iParam0 <= 23)
		{
			iVar0 = 1;
		}
		else if (iParam0 <= 28)
		{
			iVar0 = 3;
		}
		else if (iParam0 <= 30)
		{
			iVar0 = 4;
		}
		else if (iParam0 <= 33)
		{
			iVar0 = 5;
		}
	}
	return iVar0;
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 38:
			return 1;
		case 0:
			return 5;
		case 6:
		case 42:
			return 3;
		case 9:
		case 10:
		case 37:
			return 4;
		case 1:
		case 2:
		case 36:
			return 2;
		case 41:
			return 2;
		case 40:
			return 1;
		case 13:
			return 2;
		case 14:
			return 3;
		case 16:
			return 2;
		case 11:
			return 6;
		case 17:
		case 39:
			return 5;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 1;
		case 21:
			return 4;
		case 27:
			return 2;
		case 33:
			return 2;
		case 43:
			return 4;
		default:
			break;
	}
	return 1;
}

int func_334(int iParam0, bool bParam1)
{
	if (func_661(iParam0, bParam1))
	{
		return 1;
	}
	if ((Global_40.f_9632[iParam0 /*4*/])->f_1 == 0)
	{
		return 0;
	}
	if (!bParam1)
	{
		return (Global_40.f_9632[iParam0 /*4*/])->f_1 > 0;
	}
	if (func_662(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_335(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;

	if (iParam3 < 0)
	{
		iVar3 = &Global_1392135->f_26[iParam0];
	}
	else
	{
		iVar3 = iParam3;
	}
	if (iParam1 == 20 && &Global_1392135->f_26[iParam0] == 0)
	{
		vVar0 = { 2492.525f, 1326.504f, 112.8341f };
	}
	else if (iParam1 == 43 && &Global_1392135->f_26[iParam0] == 1)
	{
		vVar0 = { func_663(iParam1, iVar3) };
	}
	else
	{
		vVar0 = { func_663(iParam1, iVar3) };
	}
	StringIntConCat(sParam2, iParam1, 64);
	if (iParam3 >= 0)
	{
		bVar4 = true;
	}
	else
	{
		bVar4 = true;
	}
	if (bVar4)
	{
		func_664(vVar0, 256);
		if (iParam1 == 20 && iVar3 == 0)
		{
			func_665(vVar0, 115f, sParam2, 1, 0, 256, 0, -1082130432 /* Float: -1f */);
		}
		else if (iParam1 == 43 && &Global_1392135->f_26[iParam0] == 1)
		{
			func_665(vVar0, 130f, sParam2, 1, 0, 256, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			func_665(vVar0, func_666(iParam1, iParam0, iVar3), sParam2, 1, 0, 256, 0, -1082130432 /* Float: -1f */);
		}
	}
}

void func_336(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;

	if (iParam2 < 0)
	{
		iVar3 = &Global_1392135->f_33[iParam0];
	}
	else
	{
		iVar3 = iParam2;
	}
	vVar0 = { func_663(iParam1, iVar3) };
	if (func_667(vVar0, 0, 256, 0))
	{
		func_664(vVar0, 256);
	}
}

void func_337(int iParam0)
{
	int iVar0;

	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_72();
	func_73(&iVar0, func_66(iParam0), func_65(iParam0), func_64(iParam0), func_67(iParam0), 0, 0, 1);
	CLOCK::SET_CLOCK_TIME(func_64(iVar0), func_65(iVar0), func_66(iVar0));
	CLOCK::SET_CLOCK_DATE(func_67(iVar0), func_68(iVar0), func_69(iVar0));
	func_668(CLOCK::GET_CLOCK_HOURS());
}

void func_338(bool bParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (func_2() != -1)
	{
		return;
	}
	if (func_669(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_670())
	{
		iVar1 = 0;
	}
	func_671(bParam0, iVar1);
}

void func_339(bool bParam0, bool bParam1)
{
	if (!func_672(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		(Global_40.f_9479[bParam0 /*4*/])->f_1 = -1;
		(Global_40.f_9479[bParam0 /*4*/])->f_2 = -1;
		(Global_40.f_9479[bParam0 /*4*/])->f_3 = -1;
	}
	Global_40.f_9479[bParam0 /*4*/] = -1;
}

void func_340(bool bParam0)
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < 14)
	{
		func_339(bVar0, bParam0);
		bVar0++;
	}
}

void func_341(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!func_672(bParam0))
	{
		return;
	}
	switch (&Global_40.f_9479[bParam0 /*4*/])
	{
		case -1:
			if (func_673(0) > 0)
			{
				if (func_674((Global_40.f_9479[bParam0 /*4*/])->f_1))
				{
					Global_40.f_9536[(Global_40.f_9479[bParam0 /*4*/])->f_1] = 1;
				}
				else
				{
					iVar0 = func_675();
					if (func_674(iVar0))
					{
						(Global_40.f_9479[bParam0 /*4*/])->f_1 = iVar0;
						Global_40.f_9536[iVar0] = 1;
					}
				}
				if (func_674((Global_40.f_9479[bParam0 /*4*/])->f_2))
				{
					Global_40.f_9536[(Global_40.f_9479[bParam0 /*4*/])->f_2] = 1;
				}
				else
				{
					iVar1 = func_675();
					if (func_674(iVar1))
					{
						(Global_40.f_9479[bParam0 /*4*/])->f_2 = iVar1;
						Global_40.f_9536[iVar1] = 1;
					}
				}
			}
			if (func_83(42))
			{
				(Global_40.f_9479[bParam0 /*4*/])->f_3 = 14;
			}
			else
			{
				(Global_40.f_9479[bParam0 /*4*/])->f_3 = bParam0;
			}
			Global_40.f_9479[bParam0 /*4*/] = 0;
			break;
		case 0:
		case 1:
		case 2:
			break;
	}
}

void func_342(int iParam0, int iParam1)
{
	if (!func_676(iParam0))
	{
	}
	else
	{
		Global_20709.f_2246[iParam0] = (&Global_20709.f_2246[iParam0] - (Global_20709.f_2246[iParam0] && iParam1));
	}
}

void func_343(int iParam0, int iParam1)
{
	if (!func_676(iParam0))
	{
	}
	else
	{
		Global_20709.f_2246[iParam0] = (Global_20709.f_2246[iParam0] || iParam1);
	}
}

void func_344(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_677(iVar0, bParam0) != bParam1)
		{
			func_678(iVar0, bParam0, bParam1);
		}
		iVar0++;
	}
}

void func_345(bool bParam0, int iParam1)
{
	if (!func_679(bParam0))
	{
		return;
	}
	Global_40.f_11029[bParam0 /*5*/] = (Global_40.f_11029[bParam0 /*5*/] || iParam1);
}

void func_346(bool bParam0, int iParam1)
{
	if (!func_679(bParam0))
	{
		return;
	}
	Global_40.f_11029[bParam0 /*5*/] = (&Global_40.f_11029[bParam0 /*5*/] - (Global_40.f_11029[bParam0 /*5*/] && iParam1));
}

int func_347(bool bParam0)
{
	if (!bParam0 && func_641(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_348()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_680(iVar0);
		iVar0++;
	}
}

void func_349(int iParam0, var uParam1)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = func_681(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_NEW(iVar0, true);
}

void func_350(int iParam0, var uParam1)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = func_681(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_NEW(iVar0, false);
}

void func_351(int iParam0, var uParam1)
{
	int iVar0;

	return;
	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = func_681(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

void func_352(int iParam0, var uParam1)
{
	int iVar0;

	return;
	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = func_681(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, false);
}

void func_353()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<12> Var3;
	int iVar17;

	if (INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	func_682(1);
	Var3.f_9 = -1591664384;
	if (func_383("ALL", &iVar0, &iVar1, -1591664384, 0))
	{
		INVENTORY::_0xE36D4A38D28D9CFB(1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_384(&Var3, iVar2, iVar0, iVar1))
			{
			}
			else if (!func_286(Var3.f_4, 0))
			{
			}
			else if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(Var3.f_4))
			{
			}
			else if (func_297(Var3.f_4, 173360570) && Var3.f_9 != -1360128126)
			{
				func_603(Var3.f_4, Var3.f_11, 752097756);
				INVENTORY::_0x3E4E811480B3AE79(1, &Var3, Var3.f_11, -142743235);
			}
			else
			{
				iVar17 = func_552(Var3.f_4);
				switch (iVar17)
				{
					case joaat("PROVISION"):
					case joaat("PRECIOUS_METAL"):
					case joaat("GOLD"):
					case joaat("CONSUMABLE"):
						if ((((iVar17 == joaat("CONSUMABLE") && ((Var3.f_4 == joaat("CONSUMABLE_AGED_PIRATE_RUM") || Var3.f_4 == joaat("CONSUMABLE_GINSENG_ELIXIER")) || Var3.f_4 == joaat("CONSUMABLE_VALERIAN_ROOT"))) || (iVar17 == joaat("PROVISION") && func_683(Var3.f_4))) || func_624(Var3.f_4, -949239683) == -1337515701) || func_297(Var3.f_4, -651046900))
						{
							func_603(Var3.f_4, Var3.f_11, 752097756);
						}
						if (Var3.f_9 != -1360128126)
						{
							INVENTORY::_0x3E4E811480B3AE79(1, &Var3, Var3.f_11, -142743235);
						}
						break;
					case joaat("WEAPON_MOD"):
					case joaat("WEAPON"):
					case joaat("AMMO"):
					case joaat("WEAPON_DECORATION"):
						break;
					case joaat("CLOTHING"):
						if (Var3.f_4 == joaat("KIT_BANDANA"))
						{
							func_603(Var3.f_4, Var3.f_11, 752097756);
							func_684(Var3.f_4, 1, 1, 0);
							INVENTORY::_0x3E4E811480B3AE79(1, &Var3, Var3.f_11, -142743235);
						}
						break;
					case joaat("UPGRADE"):
						if (((Var3.f_4 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE") || Var3.f_4 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER")) || Var3.f_4 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP")) || Var3.f_4 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
						{
							func_603(Var3.f_4, Var3.f_11, 752097756);
							INVENTORY::_0x3E4E811480B3AE79(1, &Var3, Var3.f_11, -142743235);
						}
						break;
					case joaat("HORSE_EQUIPMENT"):
						if (!func_685(Var3.f_4, 0))
						{
						}
						break;
					case joaat("HORSE"):
					case joaat("KIT"):
					case joaat("COMPONENT"):
					case joaat("DOCUMENT"):
						func_603(Var3.f_4, Var3.f_11, 752097756);
						INVENTORY::_0x3E4E811480B3AE79(1, &Var3, Var3.f_11, -142743235);
						break;
					default:
						break;
				}
			}
			iVar2++;
		}
		func_385(iVar0);
	}
	else
	{
		INVENTORY::_0xE36D4A38D28D9CFB(1);
	}
	func_687(func_686(1), 0, 0, 0, 1);
	func_688(1116, 0, 0f, 1, 0, 0, 1, 752097756);
	func_603(joaat("UPGRADE_UPG_COOKING_SPIT"), 1, 752097756);
	func_603(joaat("WEAPON_FISHINGROD"), 1, 752097756);
	func_603(joaat("WEAPON_KIT_CAMERA"), 1, 752097756);
	func_603(joaat("WEAPON_KIT_BINOCULARS"), 1, 752097756);
	func_603(joaat("WEAPON_MELEE_DAVY_LANTERN"), 1, 752097756);
	func_603(joaat("DOCUMENT_PLAYER_JOURNAL"), 1, 752097756);
	func_603(joaat("KIT_CAMP"), 1, 752097756);
	func_603(joaat("CONSUMABLE_APPLE"), 1, 752097756);
	func_603(joaat("CONSUMABLE_CHEWING_TOBACCO"), 1, 752097756);
	func_603(joaat("CONSUMABLE_POTENT_MEDICINE"), 1, 752097756);
	func_603(joaat("CONSUMABLE_STRING_MEAT_COOKED"), 2, 752097756);
	func_603(joaat("PROVISION_MARYS_RING"), 1, 752097756);
	func_603(joaat("CONSUMABLE_BAKED_BEANS_CAN"), 1, 752097756);
	func_603(joaat("CONSUMABLE_CORNEDBEEF_CAN"), 1, 752097756);
	func_603(joaat("CONSUMABLE_SALMON_CAN"), 1, 752097756);
}

void func_354()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1170789519))
	{
		return;
	}
	func_689(1, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(1170789519, true);
}

void func_355()
{
	int iVar0;

	iVar0 = MONEY::_MONEY_GET_CASH_BALANCE();
	Global_40.f_7861 = iVar0;
	if (iVar0 > 0)
	{
		MONEY::_MONEY_DECREMENT_CASH_BALANCE(iVar0);
	}
}

void func_356(int iParam0, int iParam1)
{
	if (!WEAPON::IS_WEAPON_VALID(iParam1))
	{
		return;
	}
	if (iParam1 == joaat("WEAPON_UNARMED"))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0, false))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iParam1, true, -142743235);
	}
}

void func_357()
{
	int iVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_690(Global_35, &iVar0);
	Var30 = { func_691(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_682(0);
	func_692(7);
	func_684(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_693() == 1160113249)
	{
		func_684(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_684(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_694(Global_35, &iVar0);
}

void func_358(bool bParam0, bool bParam1, bool bParam2)
{
	func_695(bParam0, bParam1, bParam2);
	UNLOCK::_UNLOCK_SET_UNLOCKED(1170789519, false);
}

void func_359()
{
	if (Global_40.f_7861 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(Global_40.f_7861, 752097756);
	}
}

void func_360(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 95)
	{
		func_696((*uParam0)[iVar0 /*3*/]);
		MISC::_COPY_MEMORY((*uParam0)[iVar0 /*3*/], Global_40.f_7157[iVar0 /*3*/], 3);
		if (bParam1)
		{
			func_697(iVar0, 1, 0);
		}
		iVar0++;
	}
}

void func_361(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 95)
	{
		if ((func_620(iVar0, 2) == 0 || func_620(iVar0, 4) == 0) || bParam1)
		{
			MISC::_COPY_MEMORY(Global_40.f_7157[iVar0 /*3*/], (*uParam0)[iVar0 /*3*/], 3);
		}
		iVar0++;
	}
}

int func_362(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_698(iParam1, 1, 0) };
		iParam3 = func_699(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_701(iParam1, iParam2, func_700(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_702(1, (func_2() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_700(iParam3, 1) /*11*/])
			{
				func_325(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_703(32768) && iParam1 != &Global_1946804->f_57[func_700(iParam3, 1) /*11*/])
			{
				func_704();
				func_325(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_325(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_705(iParam3);
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		func_325(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_706(0);
			func_707(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_325(19, 0, iVar5, bParam0, 0);
	}
	return 1;
}

void func_363(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_327(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_658(iParam0, 16777216);
		func_364(iParam0, 1, 350);
		if (bParam2)
		{
			((*Global_1888801)[iParam0 /*35*/])->f_31 = 1;
		}
	}
	else
	{
		func_659(iParam0, 16777216);
		func_364(iParam0, 0, 350);
	}
}

void func_364(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!func_327(iParam0))
	{
		return;
	}
	if (func_708(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1888801)[iParam0 /*35*/])->f_5))
	{
		iVar0 = ((*Global_1888801)[iParam0 /*35*/])->f_5;
	}
	else
	{
		iVar0 = func_709(iParam0);
	}
	bVar1 = func_710(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_711(iParam0);
		if (iParam2 > iVar2 || !func_71(func_712(iParam0)))
		{
			func_713(iParam0, func_72());
			func_714(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_658(iParam0, 33554432);
			if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
			{
				if (iParam0 == 38)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_659(iParam0, 33554432);
		func_713(iParam0, -15);
		if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_715(iParam0);
}

bool func_365(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_366(int iParam0, bool bParam1)
{
	if (!func_365(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_716(iParam0, 2);
	}
	else
	{
		func_717(iParam0, 1);
		func_717(iParam0, 2);
	}
	func_718(iParam0, bParam1);
}

bool func_367(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_368(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_367(iParam0))
	{
		return;
	}
	func_719(iParam0, 8);
	if (bParam1)
	{
		if (bParam2)
		{
			func_720(iParam0, 8);
		}
		func_720(iParam0, 2);
		func_721(iParam0, 1);
	}
	else
	{
		func_719(iParam0, 2);
		func_721(iParam0, 0);
	}
}

void func_369(bool bParam0)
{
	bool bVar0;

	bVar0 = func_722(bParam0, 0);
	if (!func_386(bVar0))
	{
		return;
	}
	else if (func_387(bVar0))
	{
		return;
	}
	if (!func_388(bVar0, 0, 255, 0))
	{
		return;
	}
	if (bVar0 == 173210050)
	{
	}
}

void func_370(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_371(bool bParam0)
{
	if (!func_723(bParam0))
	{
		return 0;
	}
	return (Global_32073.f_4[bParam0 /*4*/])->f_3;
}

int func_372(bool bParam0)
{
	if (!func_723(bParam0))
	{
		return 0;
	}
	return &(Global_1327590->f_23[bParam0 /*17*/]);
}

void func_373(bool bParam0, bool bParam1)
{
	if (!func_723(bParam0))
	{
		return;
	}
	if (bParam1)
	{
	}
	(Global_32073.f_4[bParam0 /*4*/])->f_3 = bParam1;
}

void func_374()
{
	func_724();
	if (!func_725())
	{
		func_726(&Global_0);
		return;
	}
	if (func_2() == -1)
	{
		if ((IntToFloat((MISC::GET_GAME_TIMER() - Global_0.f_6)) + (func_727(Global_36, Global_0.f_3) * 1000f)) > 300000f)
		{
			if (!func_728() && !func_5(&Global_0, 3))
			{
				func_510(0, -1);
			}
		}
		if (func_5(&Global_0, 1024))
		{
			func_729(0, 0);
			Global_0.f_6 = MISC::GET_GAME_TIMER();
			Global_0.f_3 = { Global_36 };
			func_730(&Global_0, 1024);
		}
	}
	if (func_5(&Global_0, 3))
	{
		func_731();
	}
	else if (func_5(&Global_0, 8))
	{
		func_732();
	}
}

int func_375(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_18(bParam0))
	{
		return 1;
	}
	if (!func_413(bParam0, 0))
	{
		if (iParam1 == 0)
		{
			return 1;
		}
		func_82(bParam0, 0);
	}
	if (bParam2)
	{
		if (!func_460(((*Global_1347702)[bParam0 /*49*/])->f_13, 1024))
		{
			func_733(&(((*Global_1347702)[bParam0 /*49*/])->f_13), 1024);
		}
	}
	if (bParam4 && !func_460(((*Global_1347702)[bParam0 /*49*/])->f_13, 8192))
	{
		func_733(&(((*Global_1347702)[bParam0 /*49*/])->f_13), 8192);
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[bParam0 /*49*/])->f_42, false))
	{
		if (func_460(((*Global_1347702)[bParam0 /*49*/])->f_13, 64))
		{
			return 1;
		}
		return 0;
	}
	if (!func_466(bParam0))
	{
		func_240(((*Global_1347702)[bParam0 /*49*/])->f_15);
	}
	else if (bParam3 && !func_734(((*Global_1347702)[bParam0 /*49*/])->f_15))
	{
		func_243(((*Global_1347702)[bParam0 /*49*/])->f_15);
	}
	if (!func_460(((*Global_1347702)[bParam0 /*49*/])->f_13, 256))
	{
		func_733(&(((*Global_1347702)[bParam0 /*49*/])->f_13), 256);
	}
	return 0;
}

int func_376(bool bParam0)
{
	int iVar0;

	if (!func_18(bParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 /*3*/])
				{
					case 987244216:
						if ((Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 /*3*/])->f_2 == bParam0)
						{
							return 1;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_377(bool bParam0)
{
	if (bParam0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_378(bool bParam0)
{
	if (!func_377(bParam0))
	{
		return;
	}
	if (!func_735(bParam0))
	{
	}
	(Global_32073.f_2697.f_6[bParam0 /*6*/])->f_4 = 1;
}

void func_379(bool bParam0)
{
	if (!func_377(bParam0))
	{
		return;
	}
	if (!func_735(bParam0))
	{
	}
	(Global_32073.f_2697.f_6[bParam0 /*6*/])->f_4 = 0;
}

int func_380(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_736(bParam0))
	{
		return 0;
	}
	if (!func_70())
	{
		return 0;
	}
	if (!func_737(bParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == joaat("SP_ACHIEVEMENTS") && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, bParam1);
	return 1;
}

bool func_381(bool bParam0)
{
	return (Global_40.f_9052.f_21 && bParam0) != 0;
}

int func_382(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar1 = *uParam1;
	if (iVar1 <= 0 || iVar1 < 10)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		(*uParam1)[iVar0] = 0;
		iVar0++;
	}
	switch (iParam0)
	{
		case 1:
		default:
			return 0;
			(*uParam1)[0] = -1681889993;
			(*uParam1)[1] = -2057422733;
			(*uParam1)[2] = 760481884;
		case 2:
			(*uParam1)[0] = 638908691;
			(*uParam1)[1] = 1576102103;
			(*uParam1)[2] = 758515553;
			(*uParam1)[3] = 1917915546;
			(*uParam1)[4] = 1345375574;
			(*uParam1)[5] = -1798154596;
			(*uParam1)[6] = -1567755757;
			break;
		case 3:
			(*uParam1)[0] = 1308761581;
			(*uParam1)[1] = 1321349125;
			(*uParam1)[2] = 768224827;
			(*uParam1)[3] = 587503812;
			(*uParam1)[4] = 676766568;
			(*uParam1)[5] = 1065505215;
			(*uParam1)[6] = 1420655637;
			(*uParam1)[7] = -917145366;
			break;
		case 4:
			(*uParam1)[0] = 1602853476;
			(*uParam1)[1] = 2039892152;
			(*uParam1)[2] = -333402913;
			(*uParam1)[3] = 181006258;
			(*uParam1)[4] = 1122100657;
			(*uParam1)[5] = 2143378475;
			(*uParam1)[6] = -1387254140;
			(*uParam1)[7] = 1710104509;
			(*uParam1)[8] = -1819018488;
			(*uParam1)[9] = 1186423120;
			break;
		case 5:
			(*uParam1)[0] = -1143783035;
			(*uParam1)[1] = -714135711;
			(*uParam1)[2] = -1012628532;
			(*uParam1)[3] = -1020429873;
			(*uParam1)[4] = 2055709994;
			break;
		case 6:
			(*uParam1)[0] = -714135711;
			(*uParam1)[1] = -1012628532;
			break;
		case 7:
			(*uParam1)[0] = -1020429873;
			break;
		case 8:
			(*uParam1)[0] = 2055709994;
			break;
		case 9:
			(*uParam1)[0] = 1814087305;
			break;
		case 10:
			(*uParam1)[0] = 0;
			break;
	}
	return 1;
}

int func_383(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_738(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_384(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_385(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_386(bool bParam0)
{
	return bParam0 != 0;
}

int func_387(bool bParam0)
{
	int iVar0;

	if (!func_386(bParam0))
	{
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(bParam0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224423)
	{
		if ((Global_1224423->f_1[iVar0 /*22*/])->f_4 == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_388(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;

	return func_739(bParam0, &uVar0, iParam1, iParam2, iParam3);
}

int func_389(int iParam0)
{
	if (Global_1225381->f_1 >= 3)
	{
		return 1;
	}
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	if (iParam0 == 255)
	{
		return 1;
	}
	if (func_740(29, iParam0))
	{
		return 1;
	}
	if (func_741(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_390(int iParam0)
{
	int iVar0;

	iVar0 = func_742(iParam0);
	if (iVar0 < 0)
	{
		return 1;
	}
	return func_743(Global_1132154->f_12.f_3719.f_772[iVar0 /*4*/], 1);
}

void func_391(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = false;
	if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iParam1 /*4*/]), 1))
	{
		MISC::CLEAR_BIT(Global_1879534->f_7301.f_2[iParam1 /*4*/], 1);
		bVar0 = true;
	}
	if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iParam0 /*4*/]), 1))
	{
		MISC::SET_BIT(Global_1879534->f_7301.f_2[iParam0 /*4*/], 1);
		bVar0 = true;
	}
	if (bVar0)
	{
	}
}

int func_392()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (NETWORK::_0xBAFFDE5F953720D9())
	{
		return 0;
	}
	if (!func_744())
	{
		return 0;
	}
	if (!func_745())
	{
		return 0;
	}
	if (!func_746())
	{
		return 0;
	}
	if (func_747())
	{
		return 0;
	}
	return 1;
}

int func_393(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_1887078->f_1696[iVar0 /*2*/] != -1)
		{
		}
		else
		{
			Global_1887078->f_1719++;
			Global_1887078->f_1696[iVar0 /*2*/] = Global_1887078->f_1719;
			(Global_1887078->f_1696[iVar0 /*2*/])->f_1 = uParam0;
			iVar1 = Global_1887078->f_1719;
		}
		else
		{
			iVar0++;
		}
	}
	return iVar1;
}

void func_394(int iParam0)
{
	Global_1887078->f_1718 = iParam0;
}

int func_395(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_1887078->f_1707[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_396()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (func_2() != -1)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = (Global_40.f_450 - 1);
	while (iVar1 >= 0)
	{
		bVar2 = &Global_40.f_450[iVar1];
		if (func_18(bVar2))
		{
			if (func_19(((*Global_1347702)[bVar2 /*49*/])->f_12, 2097152))
			{
				func_247(bVar2, 1, 1, 1, 32);
				func_248(bVar2, 1, 1);
				if (func_748(bVar2, 4))
				{
					func_749(bVar2, 1);
				}
			}
		}
		iVar1 = (iVar1 + -1);
	}
	func_299(-2114196387 /* GXTEntry: "Bluewater Marsh Coach Tip" */, 1, 1, -142743235, 0);
	func_299(1824375265 /* GXTEntry: "Bluewater Marsh Coach Tip" */, 1, 1, -142743235, 0);
	func_299(-826084296 /* GXTEntry: "Bounty Poster - Wilson J. McDaniels" */, 1, 1, -142743235, 0);
	func_750(67);
	if (!func_751(57))
	{
		if (func_226(((*Global_1347702)[102 /*49*/])->f_15, 1))
		{
			if (!func_226(((*Global_1347702)[103 /*49*/])->f_15, 1))
			{
				func_82(104, 0);
			}
		}
	}
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (!func_751(22))
		{
			func_750(22);
			func_299(joaat("DOCUMENT_BOUNTY_POSTER_CHAIN_GANG"), 5, 1, -142743235, 0);
			func_82(30, 0);
		}
	}
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (func_226(((*Global_1347702)[28 /*49*/])->f_15, 1))
		{
			if (!func_226(((*Global_1347702)[29 /*49*/])->f_15, 1))
			{
				func_752(29);
				func_752(28);
				func_299(joaat("DOCUMENT_CALLOWAY_NOTE"), 1, 1, -142743235, 0);
				func_82(28, 0);
				if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_753(27), func_754(27)))
				{
					func_755(27);
				}
				func_478(27);
			}
		}
		else if (!func_226(((*Global_1347702)[85 /*49*/])->f_15, 1) && func_226(((*Global_1347702)[84 /*49*/])->f_15, 1))
		{
			func_752(85);
			func_752(84);
			func_82(84, 0);
		}
	}
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (!func_751(50))
		{
			bVar3 = false;
			if (func_83(89))
			{
				bVar3 = true;
			}
			func_750(50);
			func_82(89, 0);
			if (bVar3)
			{
				func_756(((*Global_1347702)[89 /*49*/])->f_15, 1);
			}
		}
	}
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (func_226(((*Global_1347702)[124 /*49*/])->f_15, 1))
		{
			if (!func_226(((*Global_1347702)[125 /*49*/])->f_15, 1))
			{
				func_752(125);
				func_752(124);
				func_82(124, 0);
				func_299(-654032793 /* GXTEntry: "Pollution Evidence" */, 1, 1, -142743235, 0);
				if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_753(123), func_754(123)))
				{
					func_755(123);
				}
				func_478(123);
			}
		}
	}
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (func_226(((*Global_1347702)[143 /*49*/])->f_15, 1) && !func_226(((*Global_1347702)[144 /*49*/])->f_15, 1))
		{
			func_752(144);
			func_752(143);
			func_82(143, 0);
		}
	}
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (func_81())
		{
			if (func_226(((*Global_1347702)[151 /*49*/])->f_15, 1) && !func_226(((*Global_1347702)[152 /*49*/])->f_15, 1))
			{
				func_752(152);
				func_752(151);
				func_82(151, 0);
			}
		}
	}
}

int func_397(int iParam0)
{
	if (!func_20(iParam0))
	{
		return -1;
	}
	return func_757(iParam0);
}

int func_398(int iParam0)
{
	if (!func_20(iParam0))
	{
		return -15;
	}
	return func_758(iParam0);
}

bool func_399(int iParam0)
{
	return &Global_1899515 > iParam0;
}

void func_400(bool bParam0)
{
	struct<2> Var0;

	if (bParam0 < 0)
	{
		bParam0 = false;
	}
	Global_40.f_4283.f_324 = bParam0;
	Var0 = { func_759(joaat("CAMP_FUNDS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, bParam0, true);
}

void func_401(bool bParam0, bool bParam1)
{
	if (bParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_324 + bParam0) < 0)
	{
		return;
	}
	func_400((Global_40.f_4283.f_324 + bParam0));
	if (bParam1)
	{
		func_380(9, bParam0);
	}
}

void func_402(bool bParam0)
{
	bool bVar0;

	if (bParam0 <= 0)
	{
		return;
	}
	bVar0 = (Global_40.f_4283.f_324 - bParam0);
	if (bVar0 < 0)
	{
		bVar0 = false;
	}
	func_400(bVar0);
}

void func_403(bool bParam0)
{
	struct<2> Var0;

	if (bParam0 < 0)
	{
		bParam0 = false;
	}
	Global_40.f_4283.f_325 = bParam0;
	Var0 = { func_759(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, bParam0, true);
}

void func_404(bool bParam0)
{
	if (bParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + bParam0) < 0)
	{
		return;
	}
	func_403((Global_40.f_4283.f_325 + bParam0));
}

void func_405(bool bParam0)
{
	bool bVar0;

	if (bParam0 <= 0)
	{
		return;
	}
	bVar0 = (Global_40.f_4283.f_325 - bParam0);
	if (bVar0 < 0)
	{
		bVar0 = false;
	}
	func_403(bVar0);
}

bool func_406(bool bParam0)
{
	return (bParam0 > -1 && bParam0 < 954);
}

int func_407(bool bParam0)
{
	bool bVar0;

	if (!func_406(bParam0))
	{
		return 0;
	}
	if (!func_760(func_266(bParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_761(bParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(func_761(bParam0))))
		{
			return 1;
		}
	}
	bVar0 = PERSCHAR::_0x31C70A716CAE1FEE(func_761(bParam0));
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
		}
	}
	PERSCHAR::_0x7B204F88F6C3D287(func_761(bParam0));
	return 1;
}

int func_408(bool bParam0)
{
	if (!func_406(bParam0))
	{
		return 0;
	}
	if (!func_760(func_266(bParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_761(bParam0)))
	{
		return 0;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_761(bParam0));
	return 1;
}

void func_409(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_410(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_411(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_68(*iParam0);
	iVar1 = func_69(*iParam0);
	if (iParam1 < 1 || iParam1 > func_223(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

int func_412(int iParam0)
{
	if (!func_20(iParam0))
	{
		return -1;
	}
	return func_762(iParam0);
}

int func_413(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_2() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == bParam0)
		{
			if (!bParam1 || ((*Global_1347702)[iVar0 /*49*/])->f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_414(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (((*Global_1347702)[bParam0 /*49*/])->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_250(&(((*Global_1347702)[bParam0 /*49*/])->f_29[iVar1])))
			{
				func_764(&iVar0, func_763(&(((*Global_1347702)[bParam0 /*49*/])->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_733(&(((*Global_1347702)[bParam0 /*49*/])->f_13), 2);
		}
		else if (((*Global_1347702)[bParam0 /*49*/])->f_12 & 1 != 0)
		{
			if (func_236(iVar0, ((*Global_1347702)[bParam0 /*49*/])->f_15, 1, ((*Global_1347702)[bParam0 /*49*/])->f_27, func_86()))
			{
				func_733(&(((*Global_1347702)[bParam0 /*49*/])->f_13), 2);
			}
		}
		else
		{
			func_733(&(((*Global_1347702)[bParam0 /*49*/])->f_13), 2);
		}
	}
}

bool func_415(int iParam0)
{
	return func_412(iParam0) == 0;
}

int func_416(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_765(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_417(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_418()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

int func_419(bool bParam0)
{
	if (func_2() == 0)
	{
		return 1;
	}
	switch (bParam0)
	{
		case 18:
			return func_226(((*Global_1347702)[21 /*49*/])->f_15, 1);
		case 44:
			return func_226(((*Global_1347702)[83 /*49*/])->f_15, 1);
	}
	return 1;
}

int func_420(bool bParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return 0;
	}
	if (func_422(bParam0))
	{
		switch (bParam0)
		{
			case 14:
			case 34:
				return 0;
		}
	}
	switch (bParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return 1;
	}
	return 0;
}

bool func_421(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

int func_422(bool bParam0)
{
	switch (bParam0)
	{
		case 14:
		case 34:
			return !func_766((*Global_1835011)[bParam0 /*74*/]);
	}
	return 0;
}

Vector3 func_423(bool bParam0)
{
	switch (bParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return ((*Global_1835011)[bParam0 /*74*/])->f_18;
}

Vector3 func_424(bool bParam0)
{
	if (func_422(bParam0))
	{
		return func_423(bParam0);
	}
	return ((*Global_1835011)[bParam0 /*74*/])->f_18;
}

Vector3 func_425(bool bParam0)
{
	switch (bParam0)
	{
		case 14:
			return 7.5f, 8f, 5f;
		default:
			break;
	}
	return 5f, 5f, 5f;
}

int func_426(bool bParam0)
{
	switch (bParam0)
	{
		case 14:
			return 19;
		default:
			break;
	}
	return 0;
}

Vector3 func_427(bool bParam0)
{
	switch (bParam0)
	{
		case 12:
			return -1541.14f, -305.74f, ((*Global_1835011)[bParam0 /*74*/])->f_18.f_2;
		case 39:
			return 4432.49f, -3404.77f, ((*Global_1835011)[bParam0 /*74*/])->f_18.f_2;
		case 8:
			return 891.27f, 1279.39f, 234.14f;
		case 27:
			return 2604.742f, -1212.295f, 52.3389f;
		case 29:
			return 2715.245f, -1356.552f, ((*Global_1835011)[bParam0 /*74*/])->f_18.f_2;
		case 41:
			return 1332.632f, -7248.313f, 55.5522f;
	}
	return ((*Global_1835011)[bParam0 /*74*/])->f_18;
}

float func_428(bool bParam0)
{
	switch (bParam0)
	{
		case 12:
			return 45f;
		case 8:
			return 54f;
		case 27:
			return 35f;
		case 41:
			return 50f;
		case 54:
			return 17.5f;
		default:
			break;
	}
	return 25f;
}

void func_429(int iParam0, int iParam1)
{
	if (!func_241(iParam0))
	{
		return;
	}
	((*Global_1898346)[iParam0 /*6*/])->f_1 = (((*Global_1898346)[iParam0 /*6*/])->f_1 || iParam1);
}

void func_430(int iParam0, int iParam1)
{
	if (!func_241(iParam0))
	{
		return;
	}
	((*Global_1898346)[iParam0 /*6*/])->f_1 = (((*Global_1898346)[iParam0 /*6*/])->f_1 - (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1));
}

void func_431(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_432(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

int func_433(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

bool func_434(int iParam0)
{
	if (!func_767(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_768(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_769(iParam0)) < BUILTIN::VDIST(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_769(iParam0), false) <= func_770();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15, false) <= func_770();
	}
	return func_771();
}

int func_435(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0 == 18)
	{
		return 0;
	}
	if (bParam0 == 71)
	{
		return 0;
	}
	if ((bParam1 && MAP::DOES_BLIP_EXIST(((*Global_1835011)[bParam0 /*74*/])->f_27)) && ((*Global_1835011)[bParam0 /*74*/])->f_21 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_436(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_20(iParam0))
	{
		return;
	}
	switch (func_772(iParam0))
	{
		case 1:
			bVar0 = func_17(iParam0);
			if (func_773(bVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_420(bVar0, -1) && !((*Global_1835011)[bVar0 /*74*/])->f_70) && ((*Global_1835011)[bVar0 /*74*/])->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_420(bVar0, -1) && !((*Global_1835011)[bVar0 /*74*/])->f_70) && ((*Global_1835011)[bVar0 /*74*/])->f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if (((*Global_1835011)[bVar0 /*74*/])->f_28 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1835011)[bVar0 /*74*/])->f_27, iVar2);
				if (!func_230(bVar0))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[bVar0 /*74*/])->f_27, -1986290853);
				}
				if (func_421((*Global_1835011)[bVar0 /*74*/], 2))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[bVar0 /*74*/])->f_27, 724623647);
				}
				((*Global_1835011)[bVar0 /*74*/])->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_17(iParam0);
			if (func_774(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_775(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					case 2103462781:
						iVar2 = -1032930804;
						break;
					case -1485222547:
						iVar2 = 13700166;
						break;
					case 1673015813:
						iVar2 = -592708248;
						break;
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_775(iVar1);
			}
			if (((*Global_1347702)[iVar1 /*49*/])->f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1347702)[iVar1 /*49*/])->f_37, iVar2);
				func_776(iVar1);
				((*Global_1347702)[iVar1 /*49*/])->f_38 = iVar2;
			}
			break;
	}
}

bool func_437(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_2() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_438(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_612(iParam0, &iVar0, &iVar1);
	if (!func_613(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_614(iParam0, 1024))
	{
		return;
	}
	func_615(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 3;
}

bool func_439(bool bParam0, int iParam1)
{
	return PED::_0x34D6AC1157C8226C(bParam0, iParam1);
}

float func_440(bool bParam0)
{
	return (func_428(bParam0) / 2f);
}

var func_441(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_442(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_443(iVar0, &iParam0))
		{
			if ((Global_40.f_4942[iVar0 /*60*/])->f_59 != 0 && (Global_40.f_4942[iVar0 /*60*/])->f_59 != iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_443(bool bParam0, int iParam1)
{
	var uVar0;

	if (!func_250(bParam0))
	{
		return false;
	}
	uVar0 = func_763(bParam0);
	return (*iParam1 && uVar0) != 0;
}

void func_444(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_250(bParam0))
		{
			return;
		}
	}
	Global_40.f_4942[bParam0 /*60*/] = (&Global_40.f_4942[bParam0 /*60*/] - (Global_40.f_4942[bParam0 /*60*/] && iParam1));
}

int func_445(bool bParam0)
{
	if (!func_84(bParam0))
	{
		return 1;
	}
	switch (bParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

int func_446(bool bParam0)
{
	if (!func_479(bParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[bParam0 /*1157*/]))
	{
		(*Global_1360165)[bParam0 /*1157*/] = 0;
	}
	return Global_1360165[bParam0 /*1157*/];
}

bool func_447(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_479(bParam0))
		{
			return false;
		}
	}
	func_777(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[bParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

float func_448(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_449(int iParam0)
{
	int iVar0;

	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_450(int iParam0, bool bParam1)
{
	if (!func_20(iParam0))
	{
		return;
	}
	if (!func_415(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_778(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_778(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_772(iParam0), func_17(iParam0), func_779(iParam0), func_778(iParam0), Global_36);
		}
	}
	func_780(iParam0, 1);
	bParam1 = bParam1;
}

void func_451(int iParam0, bool bParam1)
{
	if (((*Global_1898346)[iParam0 /*6*/])->f_2 == 0 || bParam1)
	{
		((*Global_1898346)[iParam0 /*6*/])->f_2 = func_56(Global_1898330[iParam0]);
		func_781(((*Global_1898346)[iParam0 /*6*/])->f_2, &(((*Global_1898346)[iParam0 /*6*/])->f_4), &(((*Global_1898346)[iParam0 /*6*/])->f_5), &(((*Global_1898346)[iParam0 /*6*/])->f_3));
	}
}

void func_452(int iParam0)
{
	if (!func_20(iParam0))
	{
		return;
	}
	if (!func_782(iParam0))
	{
		return;
	}
	func_780(iParam0, 2);
}

void func_453(int iParam0)
{
	func_783(1);
}

bool func_454(bool bParam0)
{
	return ((*Global_1835011)[bParam0 /*74*/])->f_63 & 64512 != 0;
}

bool func_455(int iParam0, int iParam1)
{
	return (func_241(iParam0) && (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1) != 0);
}

int func_456(bool bParam0)
{
	if (!(bParam0 > -1 && bParam0 <= 80))
	{
		return 0;
	}
	return func_467(((*Global_1835011)[bParam0 /*74*/])->f_1);
}

void func_457(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;

	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_20(iParam0))
	{
		return;
	}
	if (func_782(iParam0))
	{
		func_468(iParam0, 0, 2);
	}
	iVar0 = func_449(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1898329 > 1)
	{
		(*Global_1898330)[iVar1] = Global_1898330[(&Global_1898329 - 1)];
		*((*Global_1898346)[iVar1 /*6*/]) = { *((*Global_1898346)[(&Global_1898329 - 1) /*6*/]) };
		(*Global_1898330)[(&Global_1898329 - 1)] = -1;
		*((*Global_1898346)[(&Global_1898329 - 1) /*6*/]) = { Var2 };
	}
	else
	{
		(*Global_1898330)[iVar1] = -1;
		*((*Global_1898346)[iVar1 /*6*/]) = { Var2 };
	}
	Global_1898329 = (&Global_1898329 - 1);
	if (&Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

int func_458(bool bParam0)
{
	if (!(bParam0 > -1 && bParam0 <= 80))
	{
		return 0;
	}
	return func_782(((*Global_1835011)[bParam0 /*74*/])->f_1);
}

void func_459(bool bParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1347702)[bParam0 /*49*/])->f_41))
	{
		func_784(((*Global_1347702)[bParam0 /*49*/])->f_41);
		if (bParam0 == 91 || bParam0 == 129)
		{
			PATHFIND::_0xD17672447692478E(((*Global_1347702)[bParam0 /*49*/])->f_41, 0);
		}
		VOLUME::_DELETE_VOLUME(((*Global_1347702)[bParam0 /*49*/])->f_41);
	}
}

bool func_460(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_461(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_462(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_463(bool bParam0, bool bParam1)
{
	if (!func_18(bParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[bParam0 /*49*/])->f_37))
	{
		func_785(&(((*Global_1347702)[bParam0 /*49*/])->f_14));
		func_461(&(((*Global_1347702)[bParam0 /*49*/])->f_13), 16);
		func_786(bParam0);
		if ((!func_787(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43890) || bParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			_NAMESPACE71::_0x2F901291EF177B02(((*Global_1347702)[bParam0 /*49*/])->f_40, 0);
			func_461(&(((*Global_1347702)[bParam0 /*49*/])->f_13), 4096);
			func_788(&(((*Global_1347702)[bParam0 /*49*/])->f_37));
		}
		else
		{
			func_789(bParam0, 16384);
			func_791(bParam0, 1, func_790(bParam0));
		}
	}
}

void func_464(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_792(bParam0, &iVar1, &iVar0))
	{
		if (func_793(iVar1, iVar0, 1))
		{
			func_274(iVar1, iVar0);
		}
	}
}

void func_465(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == bParam0)
		{
			func_461(&(((*Global_1347702)[bParam0 /*49*/])->f_13), 2);
			VOLUME::_0x748C5F51A18CB8F0(0);
			func_247(bParam0, 1, 1, iParam1, 32);
			VOLUME::_0x748C5F51A18CB8F0(1);
			iVar1 = (Global_40.f_1094 - 1);
			if (iVar0 < iVar1)
			{
				if (func_18(&(Global_40.f_450[iVar1])))
				{
					Global_40.f_450[iVar0] = &Global_40.f_450[iVar1];
					Global_40.f_450[iVar1] = -1;
				}
			}
			else
			{
				Global_40.f_450[iVar0] = -1;
			}
			Global_40.f_1094 = (Global_40.f_1094 - 1);
			return;
		}
		iVar0++;
	}
}

int func_466(bool bParam0)
{
	if (func_2() != -1)
	{
		return 0;
	}
	if (!func_18(bParam0))
	{
		return 0;
	}
	return func_782(((*Global_1347702)[bParam0 /*49*/])->f_15);
}

bool func_467(int iParam0)
{
	int iVar0;

	iVar0 = func_412(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_468(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_20(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_467(iParam0) && !func_782(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_778(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_467(iParam0))
	{
		iParam2 = -1;
	}
	if (func_762(iParam0) == 3 || (func_762(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_778(iParam0))))
	{
		func_794(func_772(iParam0), func_778(iParam0), iParam2);
		if ((!func_20(Global_1572864->f_8) && !func_14(0, 1, 0)) && !func_88(&Global_1935630, 32768))
		{
			iVar0 = func_795(iParam0);
			if (iVar0 != -1)
			{
				func_796(0);
			}
			else if (func_772(iParam0) == 8)
			{
				iVar0 = func_797();
				if (iVar0 != -1)
				{
					func_796(0);
				}
			}
		}
	}
	func_780(iParam0, 0);
	if (func_798(0) == iParam0)
	{
		func_799(1);
		func_347(0);
		func_244(1);
	}
	func_800(iParam0, 1);
	func_801(iParam0);
}

int func_469()
{
	if (func_2() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return 1;
	}
	return 0;
}

void func_470(bool bParam0, int iParam1)
{
	Global_40.f_490.f_402[bParam0] = (Global_40.f_490.f_402[bParam0] || iParam1);
}

void func_471(bool bParam0)
{
	func_473();
	if (!func_18(bParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[bParam0 /*49*/];
}

int func_472(bool bParam0)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[bParam0 /*49*/])->f_43))
	{
		return 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[((*Global_1347702)[bParam0 /*49*/])->f_35 /*49*/])->f_43))
	{
		return 0;
	}
	else if (((*Global_1347702)[bParam0 /*49*/])->f_28 != ((*Global_1347702)[((*Global_1347702)[bParam0 /*49*/])->f_35 /*49*/])->f_28)
	{
		return 0;
	}
	else if (Global_1347702[bParam0 /*49*/] != Global_1347702[((*Global_1347702)[bParam0 /*49*/])->f_35 /*49*/])
	{
		return 0;
	}
	else if (!func_802(bParam0))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(((*Global_1347702)[bParam0 /*49*/])->f_43, false, false), func_790(((*Global_1347702)[bParam0 /*49*/])->f_35));
	if (fVar0 > (7.5f * 7.5f))
	{
		return 0;
	}
	return 1;
}

void func_473()
{
	int iVar0;
	bool bVar1;

	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (func_803(iVar0))
	{
		bVar1 = false;
		while (bVar1 < &Global_1347702)
		{
			if (func_18(bVar1) && Global_1347702[bVar1 /*49*/] == iVar0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[bVar1 /*49*/])->f_37))
				{
					func_463(bVar1, 0);
					func_804(bVar1, func_790(bVar1), 0, 0);
				}
			}
			bVar1++;
		}
	}
}

void func_474(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_19(((*Global_1347702)[bParam0 /*49*/])->f_12, 4))
	{
		iVar0 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar1 = joaat("HUD_TOASTS");
	}
	else
	{
		iVar2 = func_805(bParam0, 1);
		iVar0 = iVar2;
		iVar1 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_19(((*Global_1347702)[bParam0 /*49*/])->f_12, 67108864))
	{
		func_806("MISSION_COMPLETE", &(((*Global_1347702)[bParam0 /*49*/])->f_3), iVar1, iVar0, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, func_754(bParam0));
		func_807("MISSION_COMPLETE", &(((*Global_1347702)[bParam0 /*49*/])->f_3), iVar1, iVar0, joaat("PLAYER_MENU"), "MISSION_COMPLETE_DETAILS", joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
}

var func_475(int iParam0)
{
	char[] cVar0[8];

	if (!func_20(iParam0))
	{
		return cVar0;
	}
	switch (func_772(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_808(iParam0) /*74*/])->f_8;
			break;
		case 8:
			cVar0 = ((*Global_1347702)[func_17(iParam0) /*49*/])->f_3;
			break;
		case 11:
			if (iParam0 == func_809(0, 10, 11, joaat("CABR01")))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_476(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;

	if (!func_20(iParam0))
	{
		return;
	}
	if (func_412(iParam0) == 4)
	{
		func_810(iParam0, func_72());
		if (!func_762(iParam0) == 5 && !func_762(iParam0) == 6)
		{
			if (bParam3)
			{
				func_780(iParam0, 6);
			}
			else
			{
				func_780(iParam0, 5);
			}
			func_801(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_799(1);
	}
	iVar0 = func_772(iParam0);
	bVar1 = func_2() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_811(0, 2);
		if (!bVar1 && bParam1)
		{
			func_812();
		}
	}
	else
	{
		func_347(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_813(iParam0);
	}
	else
	{
		Var2 = { func_759(joaat("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_6(32768))
		{
			Var4 = { func_759(joaat("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_762(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_17(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[76 /*74*/])->f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_17(iParam0) /*74*/])->f_8), true);
						}
					}
					else if ((func_17(iParam0) != 95 && func_17(iParam0) != 82) && !func_19(((*Global_1347702)[func_17(iParam0) /*49*/])->f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1347702)[func_17(iParam0) /*49*/])->f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_17(iParam0) /*74*/])->f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_815(func_17(iParam0), iVar6, func_814());
	}
	else if (iVar0 == 8)
	{
		func_816(func_17(iParam0), iVar6, func_814(), func_469());
	}
	if (!func_762(iParam0) == 5 && !func_762(iParam0) == 6)
	{
		iVar9 = func_817(iParam0, &iVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_272(iVar9, iVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_818(func_17(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_819((iVar10 - 20), 0, iVar10);
					iVar11 = func_819((iVar11 - 10), 0, iVar11);
				}
				func_820(1);
				func_821(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_821(45, 0, 1);
				break;
			case 8:
				iVar10 = func_822(func_17(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_819((iVar10 - 20), 0, iVar10);
					iVar11 = func_819((iVar11 - 10), 0, iVar11);
				}
				func_821(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				if (func_823(func_17(iParam0)))
				{
					func_824(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_821(120, 0, 1);
				break;
			case 2:
				func_821(120, 0, 1);
				break;
			case 6:
				func_821(func_825(func_779(iParam0)), 0, 1);
				break;
			case 5:
				func_821(120, 0, 1);
				break;
		}
	}
	func_800(iParam0, 1);
	func_810(iParam0, func_72());
	func_801(iParam0);
	if ((!func_762(iParam0) == 0 && bParam1) && func_2() == -1)
	{
		iVar12 = func_795(iParam0);
		if (iVar12 != -1)
		{
			func_796(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_797();
			if (iVar12 != -1)
			{
				func_796(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (func_17(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (func_18(func_17(iParam0)) && func_19(((*Global_1347702)[func_17(iParam0) /*49*/])->f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_17(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_728();
				}
				break;
			case 8:
				if (func_17(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_728();
				}
				break;
		}
	}
	if (!func_762(iParam0) == 5 && !func_762(iParam0) == 6)
	{
		if (bParam3)
		{
			func_780(iParam0, 6);
		}
		else
		{
			func_780(iParam0, 5);
		}
		func_801(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_17(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						func_826();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_290(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(-1267972061 /* GXTEntry: "Horse Ointment Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(-1267972061 /* GXTEntry: "Horse Ointment Pamphlet" */);
						func_290(1619534881 /* GXTEntry: "Fire Arrow Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(1619534881 /* GXTEntry: "Fire Arrow Pamphlet" */);
						func_290(-755457379 /* GXTEntry: "Improved Arrow Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(-755457379 /* GXTEntry: "Improved Arrow Pamphlet" */);
						func_290(1015404643 /* GXTEntry: "Small Game Arrow Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(1015404643 /* GXTEntry: "Small Game Arrow Pamphlet" */);
						func_290(-1724192342 /* GXTEntry: "Improved Tomahawk Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(-1724192342 /* GXTEntry: "Improved Tomahawk Pamphlet" */);
						func_290(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_290(-566881549 /* GXTEntry: "Split Point Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(-566881549 /* GXTEntry: "Split Point Pamphlet" */);
						func_290(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_290(147796381 /* GXTEntry: "Express Explosive Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(147796381 /* GXTEntry: "Express Explosive Pamphlet" */);
						func_290(-378547623 /* GXTEntry: "Potent Herbivore Bait Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(-378547623 /* GXTEntry: "Potent Herbivore Bait Pamphlet" */);
						func_290(829545206 /* GXTEntry: "Potent Predator Bait Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(829545206 /* GXTEntry: "Potent Predator Bait Pamphlet" */);
						func_290(891318243 /* GXTEntry: "Cover Scent Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(891318243 /* GXTEntry: "Cover Scent Pamphlet" */);
						func_290(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_827();
						func_828(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						func_829();
						func_830();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_831(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131);
						break;
					case 15:
						func_290(1030791766 /* GXTEntry: "Legendary Animal Map" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							func_293(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							func_293(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_832(304805134, 1, 1);
						if (!func_226(((*Global_1347702)[21 /*49*/])->f_15, 1))
						{
							func_476(((*Global_1347702)[21 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[21 /*49*/])->f_3)), iVar14);
						}
						break;
					case 20:
						func_833();
						break;
					case 26:
						func_834();
						break;
					case 17:
						func_835(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (func_81())
						{
							func_288(joaat("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_836(-514575035, -1))
						{
							iVar15 = func_72();
							func_73(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_837(-514575035, iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_81())
						{
							func_288(joaat("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (func_81())
						{
							func_288(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_838();
						break;
					case 37:
						func_839();
						if (func_840())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), iVar14);
						}
						break;
					case 38:
						func_841();
						break;
					case 43:
						func_842();
						break;
					case 44:
						if (!func_226(((*Global_1347702)[82 /*49*/])->f_15, 1))
						{
							func_476(((*Global_1347702)[82 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[82 /*49*/])->f_3)), iVar14);
						}
						if (!func_226(((*Global_1347702)[83 /*49*/])->f_15, 1))
						{
							func_476(((*Global_1347702)[83 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[83 /*49*/])->f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						func_843();
						break;
					case 59:
						func_844();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_845();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						func_846();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SURV_ROOT"), true);
							func_293(451, 0);
						}
						if (!func_847(joaat("TAXIDERMY_ORDER_05")))
						{
							if (func_847(joaat("TAXIDERMY_ORDER_04")))
							{
								iVar16 = func_72();
								func_73(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_837(1937177603, iVar16, 1);
							}
						}
						if (func_848(4))
						{
							if (!func_581(684296857 /* GXTEntry: "Invitation from Jeremy Gill" */, 1, 0))
							{
								iVar17 = func_72();
								func_73(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_837(-1439688706, iVar17, 1);
							}
						}
						func_290(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_849(89200);
						func_849(2300);
						func_849(2300);
						break;
					case 68:
						func_850();
						break;
					case 76:
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[108 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[69 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[70 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[7 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[22 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[23 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[65 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[7 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[8 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[36 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[48 /*74*/])->f_8)), iVar14);
						func_851();
						func_849(-139100);
						break;
					case 69:
						if (func_226(((*Global_1347702)[9 /*49*/])->f_15, 1))
						{
							func_849(-6000);
						}
						break;
					case 70:
						func_849(23400);
						func_849(1900);
						func_849(-15000);
						break;
					case 71:
						func_849(-5500);
						break;
				}
				break;
			case 8:
				switch (func_17(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_BEAUG"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DORKINS"));
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALDEN_CARRUTHERS"));
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DOCTOR"));
						break;
					case 58:
						func_852();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WROBEL"));
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_853();
						break;
					case 66:
						func_854();
						func_855();
						break;
					case 67:
						if (!func_856(6))
						{
							func_256(6);
						}
						if (!func_856(3))
						{
							func_256(3);
						}
						if (func_81())
						{
							func_288(joaat("WEAPON_PISTOL_M1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_RINGMASTER"));
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_TIGERHANDLER"));
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MASON"));
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALGIE_DAVISON"));
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MISS_MARJORIE"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WARVET"));
						break;
					case 9:
						if (func_226(((*Global_1835011)[69 /*74*/])->f_1, 1))
						{
							func_857(0);
							func_849(40500);
						}
						else
						{
							func_857(0);
							func_849(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_17(iParam0))
				{
					case 0:
						switch (func_779(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_858(iParam0);
		func_859();
		switch (iVar0)
		{
			case 1:
				switch (func_17(iParam0))
				{
					case 4:
						func_860(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_860(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						func_860(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_860(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_860(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_860(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_860(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_397(iParam0);
						func_860(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_860(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_860(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_581(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_290(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_860(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_860(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_860(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (func_397(iParam0) == 0)
						{
							func_860(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							func_860(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_19(((*Global_1347702)[func_17(iParam0) /*49*/])->f_12, 536870912))
				{
					func_380(11, 1);
				}
				switch (func_17(iParam0))
				{
					case 109:
						func_860(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						func_380(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_860(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_860(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_860(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_860(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_809(0, 10, 11, joaat("CABR01")))
				{
					func_860(iParam0, func_397(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_809(0, 7, 11, joaat("CACR02")))
				{
					func_860(iParam0, func_861(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_809(0, 8, 11, joaat("CACR03")))
				{
					func_860(iParam0, func_861(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_809(0, 11, 11, joaat("CACR01")))
				{
					func_860(iParam0, func_861(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_809(0, 12, 11, joaat("CACR04")))
				{
					func_860(iParam0, func_861(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_762(iParam0) == 0)
			{
				if (func_778(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(func_778(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_794(func_772(iParam0), func_778(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_17(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_862(func_475(Global_1879514->f_1));
						if (iVar0 == 8 && func_17(iParam0) == 58)
						{
							Global_1879514->f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (func_18(func_17(iParam0)) && func_19(((*Global_1347702)[func_17(iParam0) /*49*/])->f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_510(bParam2, iVar20);
		}
	}
	func_244(1);
	if ((bVar13 || func_728()) && (func_772(iParam0) == 1 || func_772(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_477(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (STATS::_0x01F4D242765C6B24(func_778(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_794(func_772(iParam0), func_778(iParam0), iVar0);
		if (func_6(32768))
		{
			iVar1 = func_772(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_809(0, 10, 11, joaat("CABR01"))))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_863();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_782(iParam0))
	{
		func_468(iParam0, 0, 2);
	}
	else if (func_467(iParam0))
	{
		if (!func_762(iParam0) == 5 && !func_762(iParam0) == 6)
		{
			if (bParam1)
			{
				func_780(iParam0, 6);
			}
			else
			{
				func_780(iParam0, 5);
			}
			func_801(iParam0);
		}
	}
	switch (func_772(iParam0))
	{
		case 1:
			switch (func_17(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514->f_12 = 1;
					break;
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
		case 8:
			switch (func_17(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514->f_12 = 1;
					break;
				case 9:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
	}
}

void func_478(bool bParam0)
{
	int iVar0;
	vector3 vVar1[24];
	char[] cVar4[8];
	bool bVar5;
	bool bVar6;

	if (((*Global_1347702)[bParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_753(bParam0);
	if (iVar0 == 1)
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_754(bParam0)))
		{
			UILOG::_UILOG_MARK_MISSION_COMPLETED(func_754(bParam0));
		}
		func_864(bParam0, 4);
		func_864(bParam0, 8);
		return;
	}
	else if (func_19(((*Global_1347702)[bParam0 /*49*/])->f_12, 4))
	{
		func_865(Global_1347702[bParam0 /*49*/]);
		func_755(bParam0);
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_754(bParam0)))
		{
			StringCopy(&cVar1, "", 24);
			cVar4 = func_866(0, &cVar1, 0, 0, -1, -1);
			func_867(bParam0, &cVar1, cVar4, -1082130432 /* Float: -1f */);
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar0, func_754(bParam0), MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE"), MISC::GET_HASH_KEY("hud_toasts"));
		}
		func_864(bParam0, 4);
		func_864(bParam0, 8);
		return;
	}
	bVar5 = false;
	if (func_748(bParam0, 8))
	{
		bVar5 = true;
	}
	bVar6 = false;
	if (func_748(bParam0, 16))
	{
		bVar6 = true;
	}
	func_865(Global_1347702[bParam0 /*49*/]);
	func_755(bParam0);
	MemCopy(&cVar1, {((*Global_1347702)[bParam0 /*49*/])->f_1}, 3);
	StringConCat(&cVar1, "_obj", 24);
	if (func_748(bParam0, 64))
	{
		StringConCat(&cVar1, "3", 24);
	}
	else if (func_748(bParam0, 32))
	{
		StringConCat(&cVar1, "2", 24);
	}
	if (HUD::DOES_TEXT_LABEL_EXIST(&cVar1))
	{
		cVar4 = func_866(0, &cVar1, 0, 0, -1, -1);
		func_867(bParam0, &cVar1, cVar4, -1082130432 /* Float: -1f */);
		if (func_748(bParam0, 16) || bVar6)
		{
			func_868(bParam0, 1);
		}
		if (func_748(bParam0, 8) || bVar5)
		{
			func_869(bParam0, 1);
		}
	}
	else
	{
		StringCopy(&cVar1, "", 24);
		cVar4 = func_866(0, &cVar1, 0, 0, -1, -1);
		func_867(bParam0, &cVar1, cVar4, -1082130432 /* Float: -1f */);
		func_869(bParam0, 1);
		if (func_748(bParam0, 16) || bVar6)
		{
			func_868(bParam0, 1);
		}
	}
}

bool func_479(bool bParam0)
{
	return bParam0 > -1;
}

void func_480(bool bParam0)
{
	int iVar0;

	if (!func_479(bParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(((*Global_1360165)[bParam0 /*1157*/])->f_1))
	{
		iVar0 = func_497(bParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[bParam0 /*1157*/])->f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
			PERSCHAR::_0xFCC6DB8DBE709BC8(((*Global_1360165)[bParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[bParam0 /*1157*/])->f_1 = 0;
		}
	}
}

void func_481(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_250(bParam0) && MISC::_IS_BASE_A_PERSISTENT_CHARACTER(((*Global_1360165)[bParam0 /*1157*/])->f_1))
	{
		func_258(bParam0, bParam1, bParam2, bParam3, 0);
	}
}

bool func_482(bool bParam0)
{
	return func_870(bParam0, 16, 1);
}

bool func_483(bool bParam0)
{
	if (!func_250(bParam0))
	{
		return false;
	}
	if (!func_482(bParam0))
	{
		return false;
	}
	return ((*Global_1360165)[bParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_484(bool bParam0, bool bParam1)
{
	if (!func_250(bParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[bParam0 /*1157*/])->f_1))
		{
			func_480(bParam0);
		}
	}
	return ((*Global_1360165)[bParam0 /*1157*/])->f_1;
}

float func_485(bool bParam0)
{
	if (!func_479(bParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[bParam0 /*1157*/])->f_134;
}

void func_486(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_479(bParam0))
		{
			return;
		}
	}
	func_777(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[bParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_487(bool bParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = func_446(bParam0);
	iVar1 = func_484(bParam0, 0);
	func_871(bParam0, bVar0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

bool func_488(int iParam0)
{
	return iParam0 != 0;
}

int func_489(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	*bParam3 = 0;
	*iParam2 = 0;
	if (func_872(bParam0, iParam1))
	{
		*bParam3 = 1;
	}
	if (func_873(bParam0, iParam1, iParam2))
	{
		return 1;
	}
	*iParam2 = -1;
	return *bParam3;
}

void func_490(bool bParam0, var uParam1)
{
	bool bVar0;

	bVar0 = func_446(bParam0);
	if ((func_874(bVar0, 0) && func_875(bParam0, *uParam1)) && PED::_0x7C8AA850617651D9(bVar0, *uParam1))
	{
		func_876(bParam0, *uParam1);
	}
	if ((!func_874(bVar0, 0) || !func_875(bParam0, *uParam1)) || !PED::_0x7C8AA850617651D9(bVar0, *uParam1))
	{
		func_877(uParam1);
	}
}

void func_491(bool bParam0, int iParam1)
{
	int iVar0;

	func_490(bParam0, (Global_40.f_4942[bParam0 /*60*/])->f_11[iParam1 /*3*/]);
	if (func_488(&((Global_40.f_4942[bParam0 /*60*/])->f_11[iParam1 /*3*/])))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < iParam1)
		{
		}
		else if (iVar0 < 9 && func_488(&((Global_40.f_4942[bParam0 /*60*/])->f_11[iVar0 + 1 /*3*/])))
		{
			(Global_40.f_4942[bParam0 /*60*/])->f_11[iVar0 /*3*/] = &(Global_40.f_4942[bParam0 /*60*/])->f_11[iVar0 + 1 /*3*/];
			((Global_40.f_4942[bParam0 /*60*/])->f_11[iVar0 /*3*/])->f_1 = ((Global_40.f_4942[bParam0 /*60*/])->f_11[iVar0 + 1 /*3*/])->f_1;
			((Global_40.f_4942[bParam0 /*60*/])->f_11[iVar0 /*3*/])->f_2 = ((Global_40.f_4942[bParam0 /*60*/])->f_11[iVar0 + 1 /*3*/])->f_2;
			func_879(bParam0, iVar0, func_878(bParam0, iVar0 + 1));
			func_877((Global_40.f_4942[bParam0 /*60*/])->f_11[iVar0 + 1 /*3*/]);
			func_879(bParam0, iVar0 + 1, 0);
		}
		iVar0++;
	}
}

void func_492(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!func_479(bParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		iVar0 = &(Global_40.f_4942[bParam0 /*60*/])->f_11[iVar1 /*3*/];
		if (func_488(iVar0))
		{
			func_490(bParam0, (Global_40.f_4942[bParam0 /*60*/])->f_11[iVar1 /*3*/]);
		}
		iVar1++;
	}
	iVar0 = (Global_40.f_4942[bParam0 /*60*/])->f_8;
	if (func_488(iVar0))
	{
		func_490(bParam0, &((Global_40.f_4942[bParam0 /*60*/])->f_8));
	}
}

void func_493()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_488(&(Global_40.f_4237[iVar0 /*3*/])))
		{
			func_880(Global_40.f_4237[iVar0 /*3*/]);
		}
		iVar0++;
	}
}

int func_494(bool bParam0, bool bParam1)
{
	if (!func_479(bParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[bParam0 /*1157*/])->f_127 != 0)
	{
		return ((*Global_1360165)[bParam0 /*1157*/])->f_127;
	}
	switch (bParam0)
	{
		case 3:
			return joaat("PERSCHAR_COMP_HORSE_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_HORSE_CHARLES");
		case 0:
			return joaat("PERSCHAR_COMP_HORSE_DUTCH");
		case 5:
			return joaat("PERSCHAR_COMP_HORSE_HOSEA");
		case 2:
			return joaat("PERSCHAR_COMP_HORSE_JAVIER");
		case 1:
			return joaat("PERSCHAR_COMP_HORSE_JOHN");
		case 9:
			return joaat("PERSCHAR_COMP_HORSE_LENNY");
		case 6:
			return joaat("PERSCHAR_COMP_HORSE_MICAH");
		case 11:
			return joaat("PERSCHAR_COMP_HORSE_SADIE");
		case 8:
			return joaat("PERSCHAR_COMP_HORSE_SEAN");
		case 23:
			return joaat("PERSCHAR_COMP_HORSE_TRELAWNEY");
		case 20:
			return joaat("PERSCHAR_COMP_HORSE_KAREN");
		case 4:
			return joaat("PERSCHAR_COMP_HORSE_UNCLE");
		case 10:
			return joaat("PERSCHAR_COMP_HORSE_ODRISCOLL");
		case 26:
			return joaat("PERSCHAR_COMP_HORSE_EAGLE_FLIES");
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		((*Global_1360165)[bParam0 /*1157*/])->f_127 = func_881(bParam0);
		return ((*Global_1360165)[bParam0 /*1157*/])->f_127;
	}
	return 0;
}

int func_495(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!func_479(bParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[bParam0 /*1157*/])->f_126))
	{
		iVar0 = func_494(bParam0, 1);
		iVar1 = PERSCHAR::_0xA00DF706C60173D1(iVar0);
		if ((Global_40.f_4942[bParam0 /*60*/])->f_7 != 0 && iVar1 != (Global_40.f_4942[bParam0 /*60*/])->f_7)
		{
			PERSCHAR::_0x8BC555034A5A5E8C(iVar0, (Global_40.f_4942[bParam0 /*60*/])->f_7);
		}
		((*Global_1360165)[bParam0 /*1157*/])->f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
		PERSCHAR::_0xFCC6DB8DBE709BC8(((*Global_1360165)[bParam0 /*1157*/])->f_126);
	}
	return ((*Global_1360165)[bParam0 /*1157*/])->f_126;
}

bool func_496(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_479(bParam0))
	{
		return false;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (bParam0)
			{
				case 1:
					if (func_226(((*Global_1835011)[4 /*74*/])->f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (bParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_882(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_226(((*Global_1347702)[63 /*49*/])->f_15, 1) || func_467(((*Global_1347702)[63 /*49*/])->f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_882(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_226(((*Global_1835011)[14 /*74*/])->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_870(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (bParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_882(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_226(((*Global_1347702)[134 /*49*/])->f_15, 1) || func_467(((*Global_1347702)[134 /*49*/])->f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			Jump @3468; //curOff = 2293
			switch (bParam0)
			{
				case 2:
					if (func_226(((*Global_1835011)[38 /*74*/])->f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			Jump @3468; //curOff = 2367
			switch (bParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_882(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			Jump @3468; //curOff = 3140
			switch (bParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_883(747937920, 1) && !func_226(((*Global_1347702)[1 /*49*/])->f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			Jump @3468; //curOff = 3303
			switch (bParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_446(bParam0)))
			{
				iVar10 = 0;
				while (iVar10 < iVar7)
				{
					if (&iVar1[iVar10] == (Global_40.f_4942[bParam0 /*60*/])->f_3)
					{
						bVar9 = true;
						bVar8 = (Global_40.f_4942[bParam0 /*60*/])->f_3;
					}
					iVar10++;
				}
			}
			if (!bVar9)
			{
				iVar11 = 0;
				if (iVar7 > 0 && bParam2)
				{
					iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
				}
				bVar8 = &iVar1[iVar11];
			}
			if (!func_643(bParam0, bVar8))
			{
				bVar8 = (Global_40.f_4942[bParam0 /*60*/])->f_3;
			}
			return bVar8;
		}

int func_497(bool bParam0)
{
	switch (bParam0)
	{
		case 1:
			return joaat("PERSCHAR_COMP_JOHN");
		case 0:
			return joaat("PERSCHAR_COMP_DUTCH");
		case 6:
			return joaat("PERSCHAR_COMP_MICAH");
		case 3:
			return joaat("PERSCHAR_COMP_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_CHARLES");
		case 4:
			return joaat("PERSCHAR_COMP_UNCLE");
		case 2:
			return joaat("PERSCHAR_COMP_JAVIER");
		case 5:
			return joaat("PERSCHAR_COMP_HOSEA");
		case 8:
			return joaat("PERSCHAR_COMP_SEAN");
		case 9:
			return joaat("PERSCHAR_COMP_LENNY");
		case 13:
			return joaat("PERSCHAR_COMP_ABIGAIL");
		case 14:
			return joaat("PERSCHAR_COMP_JACK");
		case 15:
			return joaat("PERSCHAR_COMP_MARYBETH");
		case 16:
			return joaat("PERSCHAR_COMP_MOLLY");
		case 17:
			return joaat("PERSCHAR_COMP_PEARSON");
		case 18:
			return joaat("PERSCHAR_COMP_STRAUSS");
		case 19:
			return joaat("PERSCHAR_COMP_GRIMSHAW");
		case 20:
			return joaat("PERSCHAR_COMP_KAREN");
		case 21:
			return joaat("PERSCHAR_COMP_SWANSON");
		case 22:
			return joaat("PERSCHAR_COMP_TILLY");
		case 23:
			return joaat("PERSCHAR_COMP_TRELAWNY");
		case 10:
			return joaat("PERSCHAR_COMP_KIERAN");
		case 24:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_1");
		case 25:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_2");
		case 26:
			return joaat("PERSCHAR_COMP_EAGLEFLIES");
		case 11:
			return joaat("PERSCHAR_COMP_SADIE");
		case 12:
			return joaat("PERSCHAR_COMP_DOG");
	}
	return 0;
}

int func_498(bool bParam0, bool bParam1)
{
	if (!func_479(bParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[bParam0 /*1157*/])->f_126) && bParam1)
	{
		((*Global_1360165)[bParam0 /*1157*/])->f_126 = func_495(bParam0);
	}
	return ((*Global_1360165)[bParam0 /*1157*/])->f_126;
}

void func_499(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_519(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_521(2, *uParam0);
		}
		else
		{
			func_522(2, *uParam0);
		}
	}
	func_884(uParam0);
}

void func_500()
{
	Global_1357549 = 0;
	func_885(1);
}

int func_501(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_502(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -850999370;
		case 1:
			return -807742826;
		case 2:
			return 866755445;
		case 3:
			return 2082303678;
		case 4:
			return 1349313303;
		case 5:
			return 1267596926;
		case 6:
			return 676394410;
		case 7:
			return -1190705999;
		case 8:
			return -1802212639;
		default:
			break;
	}
	return 176656832;
}

void func_503()
{
	func_505(1591451572);
	func_505(-349064220);
	func_505(1776302352);
	func_505(-523522517);
}

void func_504(char* sParam0)
{
	if (PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x527B97C203BB8606(sParam0);
	}
}

void func_505(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_886(bParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_506(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_886(bParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_507(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_2() == 0)
	{
		return;
	}
	if (func_6(128))
	{
		return;
	}
	if (!func_887(iParam0))
	{
		return;
	}
	if (func_710(iParam0, 32))
	{
		return;
	}
	func_658(iParam0, 32);
	func_888(Global_1935630, 8192);
	func_567(func_568(joaat("DISCOVERED"), joaat("AREAS")), 1);
	switch (func_889(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_567(func_568(joaat("DISCOVERED"), joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_567(func_568(joaat("DISCOVERED"), joaat("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			func_567(func_568(joaat("DISCOVERED"), joaat("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			func_567(func_568(joaat("DISCOVERED"), joaat("PLAINS_AREAS")), 1);
			break;
		case 8:
			func_567(func_568(joaat("DISCOVERED"), joaat("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_567(func_568(joaat("DISCOVERED"), joaat("NEW_AUSTIN_AREAS")), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_0xD8C7162AB2E2AF45(1822876181);
			break;
		case 1:
			MAP::_0xD8C7162AB2E2AF45(1092217275);
			break;
		case 2:
			MAP::_0xD8C7162AB2E2AF45(1855549007);
			MAP::_0xD8C7162AB2E2AF45(1542246539);
			break;
		case 6:
			MAP::_0xD8C7162AB2E2AF45(-237206861);
			break;
		case 7:
			MAP::_0xD8C7162AB2E2AF45(276890716);
			break;
		case 9:
			MAP::_0xD8C7162AB2E2AF45(-353968602);
			break;
		case 10:
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			break;
		case 11:
			MAP::_0xD8C7162AB2E2AF45(-496244122);
			break;
		case 12:
			MAP::_0xD8C7162AB2E2AF45(-678676588);
			break;
		case 15:
			MAP::_0xD8C7162AB2E2AF45(-732274047);
			break;
		case 16:
			MAP::_0xD8C7162AB2E2AF45(-12216052);
			break;
		case 17:
			MAP::_0xD8C7162AB2E2AF45(-1456731677);
			break;
		case 21:
			MAP::_0xD8C7162AB2E2AF45(-2086563810);
			break;
		case 22:
			MAP::_0xD8C7162AB2E2AF45(221661572);
			break;
		case 24:
			MAP::_0xD8C7162AB2E2AF45(222265732);
			break;
		case 25:
			MAP::_0xD8C7162AB2E2AF45(-1484929764);
			break;
		case 26:
			MAP::_0xD8C7162AB2E2AF45(1104975149);
			break;
		case 27:
			MAP::_0xD8C7162AB2E2AF45(235472255);
			break;
		case 28:
			MAP::_0xD8C7162AB2E2AF45(-1337880478);
			break;
		case 29:
			MAP::_0xD8C7162AB2E2AF45(-1813267128);
			break;
		case 30:
			MAP::_0xD8C7162AB2E2AF45(-1941572412);
			break;
		case 31:
			MAP::_0xD8C7162AB2E2AF45(1006072805);
			break;
		case 121:
			MAP::_0xD8C7162AB2E2AF45(929640770);
			break;
		case 122:
			MAP::_0xD8C7162AB2E2AF45(1603579970);
			break;
		case 124:
			MAP::_0xD8C7162AB2E2AF45(-1332669948);
			break;
		case 123:
			MAP::_0xD8C7162AB2E2AF45(-1807212021);
			break;
		case 34:
			MAP::_0xD8C7162AB2E2AF45(-1347759053);
			break;
		case 36:
			MAP::_0xD8C7162AB2E2AF45(-918096609);
			break;
		case 114:
			MAP::_0xD8C7162AB2E2AF45(1728445882);
			break;
		case 37:
			MAP::_0xD8C7162AB2E2AF45(-507075109);
			break;
		case 40:
			MAP::_0xD8C7162AB2E2AF45(462373845);
			break;
		case 42:
			MAP::_0xD8C7162AB2E2AF45(-1727895786);
			break;
		case 43:
			MAP::_0xD8C7162AB2E2AF45(1826504111);
			break;
		case 44:
			MAP::_0xD8C7162AB2E2AF45(1714554710);
			break;
		case 45:
			MAP::_0xD8C7162AB2E2AF45(-91026072);
			break;
		case 54:
			MAP::_0xD8C7162AB2E2AF45(893855320);
			break;
		case 55:
			MAP::_0xD8C7162AB2E2AF45(326709244);
			break;
		case 49:
			MAP::_0xD8C7162AB2E2AF45(653799702);
			break;
		case 62:
			MAP::_0xD8C7162AB2E2AF45(415864829);
			break;
		case 64:
			MAP::_0xD8C7162AB2E2AF45(-1836330842);
			break;
		case 65:
			MAP::_0xD8C7162AB2E2AF45(648073069);
			break;
		case 66:
			MAP::_0xD8C7162AB2E2AF45(770074951);
			break;
		case 68:
			MAP::_0xD8C7162AB2E2AF45(-1276637644);
			break;
		case 71:
			MAP::_0xD8C7162AB2E2AF45(-431488293);
			break;
		case 72:
			MAP::_0xD8C7162AB2E2AF45(-1101810198);
			break;
		case 74:
			MAP::_0xD8C7162AB2E2AF45(-1344767066);
			break;
		case 77:
			MAP::_0xD8C7162AB2E2AF45(1472232821);
			break;
		case 79:
			MAP::_0xD8C7162AB2E2AF45(-1368676121);
			break;
		case 63:
			MAP::_0xD8C7162AB2E2AF45(-33677540);
			break;
		case 80:
			MAP::_0xD8C7162AB2E2AF45(1602161184);
			MAP::_0xD8C7162AB2E2AF45(-443207523);
			MAP::_0xD8C7162AB2E2AF45(-683043834);
			break;
		case 82:
			MAP::_0xD8C7162AB2E2AF45(147256338);
			MAP::_0xD8C7162AB2E2AF45(-134804027);
			MAP::_0xD8C7162AB2E2AF45(2027689141);
			break;
		case 83:
			MAP::_0xD8C7162AB2E2AF45(-161135375);
			break;
		case 85:
			MAP::_0xD8C7162AB2E2AF45(1625008147);
			break;
		case 86:
			MAP::_0xD8C7162AB2E2AF45(121074776);
			break;
		case 87:
			MAP::_0xD8C7162AB2E2AF45(1876184276);
			break;
		case 89:
			MAP::_0xD8C7162AB2E2AF45(458479023);
			break;
		case 91:
			MAP::_0xD8C7162AB2E2AF45(85299473);
			break;
		case 96:
			MAP::_0xD8C7162AB2E2AF45(-1150244084);
			break;
		case 98:
			MAP::_0xD8C7162AB2E2AF45(759314201);
			break;
		case 99:
			MAP::_0xD8C7162AB2E2AF45(2063457042);
			break;
		case 100:
			MAP::_0xD8C7162AB2E2AF45(1877776161);
			break;
		case 102:
			MAP::_0xD8C7162AB2E2AF45(2143316225);
			break;
		case 104:
			MAP::_0xD8C7162AB2E2AF45(-1623232489);
			MAP::_0xD8C7162AB2E2AF45(-1393093729);
			break;
		case 106:
			MAP::_0xD8C7162AB2E2AF45(1354284392);
			break;
		case 107:
			MAP::_0xD8C7162AB2E2AF45(-1430883057);
			break;
		case 109:
			MAP::_0xD8C7162AB2E2AF45(820139809);
			break;
		case 112:
			MAP::_0xD8C7162AB2E2AF45(1561007383);
			MAP::_0xD8C7162AB2E2AF45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_658(iParam0, 64);
	}
}

void func_508()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		iVar1 = func_890(iVar0);
		if (iVar1 != -1)
		{
			if (func_891(iVar1) != -1 && iVar1 != func_86())
			{
				if (iVar0 == Global_1934051->f_33 && func_433(iVar0))
				{
					func_892(iVar0, 7148155);
					func_893(&(Global_1934051->f_33), 0);
				}
				iVar2 = func_894(iVar1, 19);
				if (iVar2 != -1)
				{
					if (iVar0 == &Global_1914319->f_15936[iVar2 /*6*/] && func_433(iVar0))
					{
						if ((Global_1914319->f_15936[iVar2 /*6*/])->f_5)
						{
							(Global_1914319->f_15936[iVar2 /*6*/])->f_5 = 0;
						}
						func_893(Global_1914319->f_15936[iVar2 /*6*/], 0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_509(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_86();
	if (func_327(iVar0))
	{
		iVar1 = func_501(iVar0);
		if (func_895(iVar1))
		{
			Global_40.f_9384[iVar1 /*2*/] = (&Global_40.f_9384[iVar1 /*2*/] - Global_40.f_9384[iVar1 /*2*/] & 1);
		}
	}
	iVar2 = func_432(iParam0);
	iVar3 = func_501(iVar2);
	if (func_895(iVar3))
	{
		Global_40.f_9384[iVar3 /*2*/] |= 1;
		Global_40.f_6 = { (Global_1395601->f_5[iVar3 /*28*/])->f_2 };
		VOLUME::_0x748C5F51A18CB8F0(0);
		VOLUME::_0x748C5F51A18CB8F0(1);
	}
}

void func_510(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_370(&Global_0, 8);
	}
	if (!func_70() || func_2() != -1)
	{
		return;
	}
	func_370(&Global_0, 1);
}

void func_511(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_432(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_896(iParam0);
	func_897(iParam0);
	func_500();
	if (iVar0 == 9)
	{
		func_303(-524145696, 0, 0);
	}
}

void func_512(int iParam0)
{
	func_898();
	switch (iParam0)
	{
		case 0:
			func_899(-1303.82f, 2431.232f, 307.1254f, 254.7021f, 2);
			func_899(-1331.61f, 2479.874f, 308.7661f, 343.4772f, 1);
			func_899(-1367.155f, 2401.237f, 305.9231f, 182.5857f, 0);
			break;
		case 1:
			func_899(-40.4062f, 24.7958f, 92.5989f, 345.8244f, 2);
			func_899(-46.6053f, 49.3195f, 89.4332f, 32.7929f, 2);
			func_899(-89.1265f, 74.3389f, 88.5412f, 341.7615f, 1);
			func_899(-117.2523f, 26.8954f, 84.9916f, 71.3425f, 1);
			func_899(-92.892f, 50.1228f, 87.8695f, 45.8778f, 1);
			func_899(-13.6112f, -0.4862f, 101.6951f, 255.2034f, 2);
			func_899(-32.3882f, -18.9331f, 103.6418f, 237.7177f, 3);
			func_899(-19.8908f, -62.5598f, 103.873f, 267.298f, 3);
			func_899(-33.2324f, -103.5739f, 101.7936f, 255.1129f, 3);
			func_899(-69.4097f, -128.0305f, 97.0682f, 221.4977f, 3);
			func_899(-79.3456f, -103.7585f, 91.473f, 66.6098f, 3);
			func_899(-134.3901f, -69.9172f, 90.3402f, 108.8014f, 0);
			func_899(-163.3076f, -54.9202f, 89.2085f, 130.3788f, 0);
			func_899(-7.8651f, 34.202f, 96.8284f, 252.726f, 2);
			break;
		case 2:
			func_899(773.3724f, -1152.694f, 46.0144f, 287.6862f, 1);
			func_899(678.071f, -1106.928f, 50.6427f, 308.8809f, 1);
			func_899(694.5107f, -1273.256f, 42.5974f, 276.0894f, 3);
			func_899(624.2226f, -1093.59f, 44.0105f, 324.7204f, 1);
			func_899(695.23f, -1204.24f, 44.84f, -75.427f, 0);
			break;
		case 3:
			func_899(1814.452f, -1812.884f, 47.3854f, 46.0618f, 0);
			func_899(1844.125f, -1770.289f, 44.872f, 354.3456f, 0);
			func_899(1774.591f, -1878.943f, 45.1128f, 1.1527f, 0);
			func_899(1751.868f, -1959.416f, 47.0387f, 100.6328f, 3);
			func_899(1818.659f, -2009.734f, 43.2796f, 94.403f, 3);
			break;
		case 6:
			func_899(2372.828f, 1302.302f, 108.3737f, 193.8477f, 2);
			func_899(2299.087f, 1370.095f, 100.6253f, 148.7151f, 1);
			func_899(2325.401f, 1301.158f, 95.0156f, 220.5325f, 2);
			break;
	}
}

void func_513(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

void func_514(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_745())
	{
		if (func_900(255))
		{
			if (!func_901(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_327(Global_1894899->f_2) && func_902(Global_1894899->f_2))
		{
			func_903(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_904(16);
			}
		}
		else if (func_327(Global_1894899->f_2) && !func_710(Global_1894899->f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
		}
		Global_1894899->f_7 = 0;
		func_905(16);
		func_906();
		if (bVar0)
		{
			func_905(1);
		}
	}
}

void func_515()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1674))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1357549->f_1674))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1357549->f_1674, true, false);
		}
		if (ENTITY::IS_ENTITY_DEAD(Global_1357549->f_1674) == 0)
		{
			VEHICLE::DELETE_VEHICLE(&(Global_1357549->f_1674));
		}
	}
}

void func_516()
{
	func_907(32);
}

int func_517(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_908(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_909(iVar6);
	}
	return iVar5;
}

int func_518(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_910(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_519(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_911(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
}

int func_520(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 0;
		case 7:
			return 0;
		case 9:
			return 1;
		case 10:
			return 0;
		case 11:
			return 1;
		case 8:
			return 1;
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_521(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483 /*3*/] = iParam0;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_522(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] = iParam0;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

int func_523(int iParam0)
{
	if (iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_524(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_912(iParam0, 1);
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar1 = func_912(func_913(iVar3), 1);
		iVar2 = func_912(func_914(iVar3), 1);
		if (iVar0 >= iVar1)
		{
			if (iVar0 <= iVar2)
			{
				return iVar3;
			}
		}
		iVar3++;
	}
	return 0;
}

int func_525(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2120502580:
			return 5;
		case -1784359682:
			return 1;
		case -518918701:
			return 3;
		case 820723243:
			return 0;
		case 977356591:
			return 4;
		case 1461274691:
			return 6;
		case 1710500858:
			return 2;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_526(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_523(iParam0))
	{
		return;
	}
	func_915(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		MISC::SET_BIT((*Global_1935183->f_73[iParam0 /*7*/])[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT((*Global_1935183->f_73[iParam0 /*7*/])[iVar0], iVar1);
	}
}

int func_527(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_528(int iParam0, var uParam1)
{
	if (!func_523(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_526(iParam0, *uParam1, 0);
	func_916(uParam1);
	Global_1935183->f_24 = 1;
}

bool func_529(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

void func_530(int iParam0)
{
	if (!func_529(iParam0))
	{
		return;
	}
	else if (!func_20(((*Global_1392626)[iParam0 /*32*/])->f_3))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_40.f_9052, iParam0))
	{
		func_917(iParam0);
		MISC::SET_BIT(&(Global_40.f_9052), iParam0);
	}
	if (func_412(((*Global_1392626)[iParam0 /*32*/])->f_3) == 3)
	{
		func_468(((*Global_1392626)[iParam0 /*32*/])->f_3, 0, 2);
	}
}

void func_531(int iParam0, int iParam1)
{
	if (!func_529(iParam0))
	{
		return;
	}
	else if (!func_20(((*Global_1392626)[iParam0 /*32*/])->f_3))
	{
		return;
	}
	if (func_467(((*Global_1392626)[iParam0 /*32*/])->f_3) || func_782(((*Global_1392626)[iParam0 /*32*/])->f_3))
	{
		func_468(((*Global_1392626)[iParam0 /*32*/])->f_3, 0, 2);
	}
	if (iParam1 == 0)
	{
		MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
		func_917(iParam0);
	}
}

void func_532(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_529(iParam0))
	{
		return;
	}
	else if (!func_20(((*Global_1392626)[iParam0 /*32*/])->f_3))
	{
		return;
	}
	if (!func_381(1))
	{
		func_918(1);
	}
	func_917(iParam0);
	if (iParam0 == 0)
	{
		MISC::_0xCC3EDC5614B03F61(29);
	}
	else if (iParam0 == 6)
	{
		MISC::_0xCC3EDC5614B03F61(28);
	}
	else if (iParam0 == 3)
	{
		MISC::_0xCC3EDC5614B03F61(30);
	}
	MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
	if (iParam0 == 2)
	{
		Global_40.f_9422[2 /*7*/] = func_72();
		func_73(Global_40.f_9422[2 /*7*/], 0, 0, 0, 3, 0, 0, 0);
	}
	func_476(((*Global_1392626)[iParam0 /*32*/])->f_3, bParam2, bParam1, 0, 1);
	if (((*Global_1392626)[iParam0 /*32*/])->f_7 != -1)
	{
		func_530(((*Global_1392626)[iParam0 /*32*/])->f_7);
	}
}

bool func_533(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_534(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_2() == -1)
	{
		if (func_919(iParam0) && func_920(iParam0))
		{
			func_921(iParam0, iParam1, 1, &bParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return 0;
	}
	return 1;
}

int func_535(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_922(iParam0, iParam1);
	Var0 = { func_698(iParam0, 0, 1) };
	iVar5 = func_923(iParam0, &Var0, 0, 0);
	iVar6 = func_924(iParam0, 0);
	if ((iVar5 > 1 && !func_728()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_297(iParam0, -2051813666))
		{
			func_293(583, 1);
		}
		else
		{
			func_293(582, 0);
		}
	}
	if (func_925(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_536(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_624(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

int func_537(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_552(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_631(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_926(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_738(bParam2), iParam0, 0);
	return iVar2;
}

bool func_538(int iParam0)
{
	if (func_2() != -1)
	{
		return false;
	}
	return func_539(iParam0) != 0;
}

int func_539(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_927())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_928(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_540(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_541(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_927())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_540(iVar0))
		{
			if (func_581(func_928(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_542(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_929(48);
	func_510(0, -1);
}

int func_543(int iParam0)
{
	if (func_2() != -1)
	{
		return 0;
	}
	return func_226(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_544(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_545(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_546(int iParam0)
{
	if (func_2() != -1)
	{
		return 0;
	}
	return func_226(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_547(bool bParam0)
{
	if (func_2() != -1)
	{
		return 0;
	}
	if (!func_18(bParam0))
	{
		return 0;
	}
	return func_467(((*Global_1347702)[bParam0 /*49*/])->f_15);
}

int func_548()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_581(func_930(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_549(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_70() && (func_547(38) || func_543(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = joaat("COL_CC_INTRO");
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = joaat("COL_CC_INTRO_PRE");
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_70() && (func_547(39) || func_543(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_RC_DEBORAH");
				iVar13 = joaat("COL_DB_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = joaat("COL_DB_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = joaat("DINO_BONES");
			break;
		case 43:
			if (iParam3 == joaat("EXOTIC_STAGE_01"))
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_02"))
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_03"))
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_04"))
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_05"))
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_931(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_70() && (func_547(41) || func_543(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = joaat("BLIP_RC_JEREMY_GILL");
			iVar13 = joaat("COL_LF_INTRO");
			break;
		case 49:
			if (func_70() && (func_547(49) || func_543(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_SCM_FRANCES");
				iVar13 = joaat("COL_RC_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = joaat("COL_RC_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = joaat("ROCK_CARVINGS");
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_931(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_932(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_933(iParam0, iVar13, iVar14))
	{
	}
	if (func_934(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_935(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_936(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_937(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_938(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_550(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_551(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_70() && (func_547(38) || func_543(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = joaat("COL_CC_INTRO");
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = joaat("DINO_BONES");
			if (func_70() && (func_547(39) || func_543(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = joaat("BLIP_RC_DEBORAH");
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = joaat("COL_DB_INTRO");
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO");
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = joaat("BLIP_RC_JEREMY_GILL");
			iVar6 = joaat("COL_LF_INTRO");
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = joaat("ROCK_CARVINGS");
			if (func_70() && (func_547(49) || func_543(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = joaat("BLIP_SCM_FRANCES");
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = joaat("COL_RC_INTRO");
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = joaat("TAXIDERMY");
			iVar4 = joaat("BLIP_RC_HOBBS");
			iVar6 = joaat("COL_TX_INTRO");
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_70() && (func_547(38) || func_543(38)))
		{
			iVar6 = joaat("COL_CC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_CC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_807(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_807(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_806(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_939(func_545(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_807(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_807(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_70() && (func_547(39) || func_543(39)))
		{
			iVar6 = joaat("COL_DB_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_DB_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_807(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_807(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_70() && (func_547(49) || func_543(49)))
		{
			iVar6 = joaat("COL_RC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_RC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_807(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_807(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_807(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_807(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_552(int iParam0)
{
	vector3 vVar0;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_553(int iParam0, int iParam1)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_554(bool bParam0)
{
	if (!func_300(bParam0))
	{
		return 0;
	}
	return func_940(bParam0);
}

int func_555(int iParam0)
{
	struct<2> Var0;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_556(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_HATCHET"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			iVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			iVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_286(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_941(iVar0) || func_942(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_557(int iParam0, bool bParam1)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

int func_558(bool bParam0)
{
	if (func_2() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_738(bParam0));
}

int func_559(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_698(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_943((375 + iVar28), 1);
			if (func_944(iParam0, &Var0, iVar5, 0))
			{
				if (func_945(iParam0, &Var6, iVar5))
				{
					Var29 = { func_946(iParam0, Var0, iVar5, 0) };
					func_947(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_558(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_560(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_948(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

int func_560(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_562(iParam0))
	{
		return 0;
	}
	if (!func_558(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_561(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_557(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_2() == -1)
		{
			func_287(iVar0);
			if (iParam1 == 1248274121)
			{
				func_949(iVar0);
			}
		}
		if (!func_925(iParam0, &uVar1, 1, 0, 0))
		{
			func_921(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_950(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_559(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_559(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_559(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_315())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_951(iVar0))
				{
					func_559(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_559(iVar0, WEAPON::_0xD3750CCC00635FC2(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_952(Global_35, 2, 0, 1);
				if ((((func_533(iVar7) && !Global_43890) && iVar7 != iVar0) && !func_581(joaat("UPGRADE_OFFHAND_HOLSTER"), 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_533(iVar7) && func_581(joaat("UPGRADE_OFFHAND_HOLSTER"), 1, 0))
				{
					if (!func_559(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_559(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_559(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_293(480, 1);
	}
	return 1;
}

bool func_562(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_563(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_562(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_533(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == joaat("WEAPON_BOW"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_581(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_292(func_953(iParam0), func_598(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_2() == -1)
		{
			if (func_226(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_293(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_558(0))
	{
		if (func_560(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_603(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_564(int iParam0)
{
	var uVar0;

	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_840()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_954(Global_35, iParam0, &uVar0))
		{
			func_362(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_589();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_589();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_589();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_587();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_585();
			break;
	}
}

void func_565(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_585();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_586();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_587();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_588();
			break;
		case joaat("PROVISION_TRINKET_LION_PAW"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_MOOSE_ANTLER"):
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_OWL_FEATHER"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_589();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_955();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_314();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_566(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_567(var uParam0, bool bParam1, bool bParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, bParam2);
}

struct<2> func_568(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_569(int iParam0)
{
	bool bVar0;

	bVar0 = func_297(iParam0, -2017733358);
	if (func_956() < 3)
	{
		if (bVar0)
		{
			if (func_958(func_957(iParam0), iParam0))
			{
				func_292(79, func_598(func_957(iParam0)), 1);
			}
			else
			{
				func_292(78, func_598(func_957(iParam0)), 1);
			}
		}
		else
		{
			func_292(80, func_598(func_959(iParam0)), 1);
		}
	}
}

int func_570()
{
	if (((((func_960(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_960(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_960(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_960(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_960(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_960(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return 1;
	}
	return 0;
}

int func_571(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_961(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_962(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_963(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_572(int iParam0)
{
	switch (iParam0)
	{
		case -625427311: /* GXTEntry: "Letter from Ms. Hobbs" */
			func_549(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_551(51, 0, 0, 0, 0, -1, 0);
			func_964(8192);
			break;
		case 581047644: /* GXTEntry: "Invitation from Ms. Hobbs" */
			func_549(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_551(51, 0, 0, 0, 0, -1, 0);
			func_964(524288);
			break;
		case -644199619: /* GXTEntry: "Invitation from Deborah MacGuiness" */
			func_549(39, 0, 0, 0, 0, 0, 1, 0);
			func_551(39, 0, 0, 0, 0, -1, 0);
			func_965(16);
			break;
		case 684296857: /* GXTEntry: "Invitation from Jeremy Gill" */
			func_549(41, 0, 0, 0, 0, 0, 1, 0);
			func_551(41, 0, 0, 0, 0, -1, 0);
			func_966(8);
			break;
		case 466137807: /* GXTEntry: "Invitation from Francis Sinclair" */
			func_549(49, 0, 0, 0, 0, 0, 1, 0);
			func_551(49, 0, 0, 0, 0, -1, 0);
			func_967(16);
			break;
		case -1087522507: /* GXTEntry: "Exotic Collector\'s List" */
			func_549(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_968(1), 0, -1, 0);
			func_969(1);
			break;
		case -405829000: /* GXTEntry: "Exotic Collector\'s List" */
			func_549(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_968(2), 0, -1, 0);
			func_969(2);
			break;
		case 378660860: /* GXTEntry: "Exotic Collector\'s List" */
			func_549(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_968(4), 0, -1, 0);
			func_969(4);
			break;
		case 1566111097: /* GXTEntry: "Exotic Collector\'s List" */
			func_549(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_968(8), 0, -1, 0);
			func_969(8);
			break;
		case 1276007140: /* GXTEntry: "Exotic Collector\'s List" */
			func_549(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_968(16), 0, -1, 0);
			func_969(16);
			break;
	}
}

void func_573(int iParam0)
{
	if (func_970() == 1)
	{
		if (func_543(39))
		{
			func_293(342, 0);
		}
		else
		{
			func_293(343, 0);
			func_965(1);
		}
	}
	if (func_970() >= 30)
	{
		func_293(344, 0);
	}
	func_549(39, 0, 0, 0, 0, 0, -1, 0);
	func_551(39, 0, 0, func_970(), 30, 1, 0);
}

void func_574(int iParam0)
{
	if (func_971() == 1)
	{
		if (func_543(49))
		{
			func_293(409, 0);
		}
		else
		{
			func_293(410, 0);
			func_967(1);
		}
	}
	if (func_971() >= 10)
	{
		func_293(411, 0);
	}
	func_549(49, 0, 0, 0, 0, 0, -1, 0);
	func_551(49, 0, 0, func_971(), 10, 1, 0);
}

void func_575(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 1369162587: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			func_293(437, 0);
			func_293(440, 0);
			func_972(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_549(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_551(51, 0, 0, sVar0, func_931(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_964(1);
			func_303(-748969569, 0, 0);
			break;
		case 1610047510: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_972(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_549(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_551(51, 0, 0, sVar0, func_931(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_964(8);
			break;
		case 1317879106: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_972(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_549(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_551(51, 0, 0, sVar0, func_931(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_964(64);
			break;
		case 1062444751: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_972(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_549(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_551(51, 0, 0, sVar0, func_931(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_964(512);
			break;
		case 754186760: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			func_293(438, 0);
			func_972(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_549(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_551(51, 0, 0, sVar0, func_931(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_964(32768);
			break;
		default:
			func_293(439, 0);
			break;
	}
}

void func_576()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), true);
	}
}

void func_577(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_2() == -1)
	{
		if (!func_543(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_293(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_293(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_293(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_293(400, 0);
			}
		}
		else if (func_297(iParam0, 412399755))
		{
			func_973(joaat("EXOTIC_STAGE_01"));
			if (func_974() == 0)
			{
				func_510(0, 10);
				iVar1 = func_975(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_976(iParam0) < func_977(iParam0))
					{
						func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_551(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_543(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_293(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_293(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_293(401, 0);
			}
		}
		else if (func_297(iParam0, 709057512))
		{
			func_973(joaat("EXOTIC_STAGE_02"));
			if (func_974() == 1)
			{
				func_510(0, 10);
				iVar1 = func_975(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_976(iParam0) < func_977(iParam0))
					{
						func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_551(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_543(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_293(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_293(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_293(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_293(398, 0);
			}
		}
		else if (func_297(iParam0, -1478961327))
		{
			func_973(joaat("EXOTIC_STAGE_03"));
			if (func_974() == 2)
			{
				func_510(0, 10);
				iVar1 = func_975(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_978(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_979(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_929(48);
					}
					if (func_976(iParam0) < func_977(iParam0))
					{
						func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_551(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_976(iParam0) < func_977(iParam0))
					{
						func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_551(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_543(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_293(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_293(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_293(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_293(406, 0);
			}
		}
		else if (func_297(iParam0, -1238404098))
		{
			func_973(joaat("EXOTIC_STAGE_04"));
			if (func_974() == 3)
			{
				func_510(0, 10);
				iVar1 = func_975(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_976(iParam0) < func_977(iParam0))
					{
						func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_551(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_543(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_293(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_293(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_293(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_293(403, 0);
			}
		}
		else if (func_297(iParam0, 1160548794))
		{
			func_973(joaat("EXOTIC_STAGE_05"));
			if (func_974() == 4)
			{
				func_510(0, 10);
				iVar1 = func_975(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_976(iParam0) < func_977(iParam0))
					{
						func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_551(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_578(int iParam0)
{
	int iVar0;

	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_978(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_979(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_929(48);
		}
	}
}

void func_579(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_581(func_980(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_981(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_982(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_580(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_2() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_571(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_571(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493: /* GXTEntry: "$5.00" */
			func_571(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627: /* GXTEntry: "$10.00" */
			func_571(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_571(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_571(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_571(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COIN"):
			func_571(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_571(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_571(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_571(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_571(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_571(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_983())
			{
				func_571(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_571(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_571(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970: /* GXTEntry: "$50.00" */
			func_571(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1027115192: /* GXTEntry: "$100.00" */
			func_571(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1064332555: /* GXTEntry: "$200.00" */
			func_571(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1954478446: /* GXTEntry: "$45.00" */
			func_571(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -518592739: /* GXTEntry: "$50.00" */
			func_571(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -2010073778: /* GXTEntry: "$70.00" */
			func_571(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -700133011: /* GXTEntry: "$100.00" */
			func_571(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1415414735: /* GXTEntry: "$120.00" */
			func_571(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 2045548742: /* GXTEntry: "$150.00" */
			func_571(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 830381058: /* GXTEntry: "$350.00" */
			func_571(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_581(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_286(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_552(iParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("AMMO"))
	{
		if (!func_984(iParam0, 1))
		{
			return false;
		}
	}
	return func_537(iParam0, 0, bParam2) >= iParam1;
}

void func_582(int iParam0)
{
	if (func_543(41))
	{
		func_293(363, 0);
	}
	else
	{
		func_293(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_01"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_02"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_03"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_04"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_05"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_06"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_07"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_08"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_09"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_10"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_11"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_12"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_13"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_14"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_583(int iParam0, int iParam1)
{
	var uVar0;

	func_988(iParam0, iParam1, &uVar0);
}

int func_584(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_952(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_952(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_383("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_384(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_385(iVar0);
						if (*iParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_585()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_586()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_587()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_588()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_589()
{
	func_989();
	func_990();
	func_991();
}

void func_590(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	switch (iParam1)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_03"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_04"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_07"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_08"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_09"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_10"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_11"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_12"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_13"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_14"):
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_15"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_17"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_18"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_19"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_20"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_21"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_22"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_23"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_24"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_591(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_807(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_592(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_593(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_594(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_595(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_596(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_597(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_598(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_599(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_612(iParam0, &iVar0, &iVar1);
	if (!func_613(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_614(iParam0, 1024))
	{
		return;
	}
	func_615(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_600()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_927())
	{
		return func_601();
	}
	iVar4 = (func_927() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_927())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_992(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_928(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_601()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_927());
	return func_928(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_602(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

int func_603(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (bParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_698(iParam0, 0, 1) };
	Var5 = { func_946(iParam0, Var0, Var0.f_4, 0) };
	return func_993(iParam0, &Var5, &Var0, bParam1, iParam2, 0);
}

void func_604(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_2() != -1)
	{
		return;
	}
	switch (func_555(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && func_994(81053684, 0) <= 0)
			{
				func_325(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_325(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_995(iParam0);
			if (func_294(iVar0))
			{
				func_295(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_325(30, iParam0, 0, 0, 0);
			}
			if (func_693() == -2125499975 || func_693() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935: /* GXTEntry: "The Summer Gunslinger" */
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case 1661121390: /* GXTEntry: "The Gunslinger" */
						func_325(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_693() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_325(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_996(-525676072, 0))
			{
				if (func_997(-525676072, &iVar1))
				{
					func_325(33, iVar1, 0, 0, 0);
				}
			}
			func_325(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_998(99217379))
		{
			func_362(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_301(24);
		if (func_584(&iVar2, 0))
		{
			func_559(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_605(int iParam0)
{
	if (func_297(iParam0, 943695443))
	{
		func_999(0, iParam0);
	}
	else if (func_297(iParam0, -2096528786))
	{
		func_999(1, iParam0);
	}
	else if (func_297(iParam0, -1094167013))
	{
		func_999(2, iParam0);
	}
	else if (func_297(iParam0, 1936654645))
	{
		func_999(3, iParam0);
	}
	else if (func_297(iParam0, 1306489306))
	{
		func_999(4, iParam0);
	}
	else if (func_297(iParam0, 435762317))
	{
		func_999(5, iParam0);
	}
	else if (func_297(iParam0, 1259363210))
	{
		func_999(6, iParam0);
	}
	else if (func_297(iParam0, 881398259))
	{
		func_999(7, iParam0);
	}
	else if (func_297(iParam0, -541549214))
	{
		func_999(8, iParam0);
	}
	else if (func_297(iParam0, 130796156))
	{
		func_999(-1, iParam0);
	}
}

int func_606(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_1000(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_1001(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_607(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_286(iParam0, 0))
	{
		return Var0;
	}
	if (func_297(iParam0, -305066475))
	{
		if (func_2() == -1)
		{
			if (func_297(iParam0, -537818634))
			{
				return func_759(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_759(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_297(iParam0, -537818634))
	{
		return func_759(joaat("MEDICINE_ITEMS"));
	}
	if (func_297(iParam0, 2084895747))
	{
		return func_759(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_608(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_2() == -1)
			{
				if (func_226(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_293(109, 1);
				}
			}
			break;
	}
}

void func_609(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1003(func_1002(0));
	func_1005(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1004(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_610(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (iParam0 == joaat("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!func_286(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (bParam1 == 0)
	{
		return;
	}
	if (!func_1006())
	{
		func_1007(iParam0, bParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(bParam1);
	StringCopy(&cVar2, func_1008(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1008(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_553(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_552(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION"))
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1009(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = joaat("COLOR_GREYMID");
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar12 = joaat("COLOR_YELLOWDARK");
		}
	}
	sVar15 = func_1010(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_598(iParam0)), iVar1), iVar12);
	if (((((bParam1 == 1 || func_297(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_598(iParam0));
	}
	func_1005(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_611(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<19> Var1;

	Var1.f_2 = 5;
	Var1.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var1))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iParam2 != 0 && (Var1.f_18[iVar0 /*2*/])->f_1 != iParam2)
			{
				Jump @117; //curOff = 67
			}
			else if (iParam3 != 0 && &Var1.f_18[iVar0 /*2*/] != iParam3)
			{
			}
			else
			{
				*uParam1 = { *(Var1.f_18[iVar0 /*2*/]) };
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_612(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_613(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_1011(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_1012(iParam0))
	{
		return 0;
	}
	if (func_1013(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_614(iParam0, 1)) || func_6(32768))
	{
		if (!func_614(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_1014())
	{
		return 0;
	}
	return 1;
}

bool func_614(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

void func_615(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_616(int iParam0)
{
	if (!func_294(iParam0))
	{
		return 0;
	}
	if (func_620(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_617(int iParam0)
{
	if (!func_294(iParam0))
	{
		return 0;
	}
	if (func_620(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_618(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_294(iParam0))
	{
		return;
	}
	if (!func_617(iParam0))
	{
		func_621(iParam0, 2);
		if (bParam2)
		{
			if (!func_14(0, 0, 1))
			{
				func_510(1, 4);
			}
		}
		if ((!func_418() && !bParam1) && !func_14(0, 0, 1))
		{
			func_441(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_1015(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_619(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975 /* GXTEntry: "Fancy Suit" */;
		case 6:
			return 1661121390 /* GXTEntry: "The Gunslinger" */;
		case 7:
			return 1164374808 /* GXTEntry: "Winter Outfit" */;
		case 8:
			return 1160643979 /* GXTEntry: "The Winter Gunslinger" */;
		case 9:
			return 624063935 /* GXTEntry: "The Summer Gunslinger" */;
		case 10:
			return -1476781101 /* GXTEntry: "Island Outfit" */;
		case 11:
			return 294553332 /* GXTEntry: "Island Outfit" */;
		case 12:
			return 1788874135 /* GXTEntry: "Island Outfit Shackles" */;
		case 15:
			return 1560492757 /* GXTEntry: "Robbery Outfit" */;
		case 16:
			return -769081407 /* GXTEntry: "The Wittemore" */;
		case 17:
			return 1902428294 /* GXTEntry: "The Wittemore" */;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210 /* GXTEntry: "Police Outfit" */;
		case 0:
			return 166243423 /* GXTEntry: "Custom Outfit" */;
		case 1:
			return 1383300684 /* GXTEntry: "Saved Custom Outfit One" */;
		case 2:
			return 2051441678 /* GXTEntry: "Saved Custom Outfit Two" */;
		case 3:
			return 162509669 /* GXTEntry: "Saved Custom Outfit Three" */;
		case 4:
			return 635948769 /* GXTEntry: "Saved Custom Outfit Four" */;
		case 5:
			return 274995506 /* GXTEntry: "Saved Custom Outfit Five" */;
		case 24:
			return -1826731591 /* GXTEntry: "Brawler\'s Outfit" */;
		case 25:
			return 2119049229 /* GXTEntry: "The Ruffian" */;
		case 26:
			return 1352942778 /* GXTEntry: "The Rebel" */;
		case 27:
			return 1964379549 /* GXTEntry: "The Innocent" */;
		case 28:
			return 1201189539 /* GXTEntry: "The Pursuer" */;
		case 21:
			return 1351927599 /* GXTEntry: "The Grizzlies Outlaw" */;
		case 22:
			return 2032023096 /* GXTEntry: "The Nuevo Paraiso" */;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555 /* GXTEntry: "The Homesteader" */;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021 /* GXTEntry: "The Winter Cowboy" */;
		case 93:
			return 890706995 /* GXTEntry: "The Cowhand" */;
		case 90:
			return 1156438275 /* GXTEntry: "The Rancher" */;
		case 91:
			return -1611873049 /* GXTEntry: "The Rancher" */;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024 /* GXTEntry: "The Cowboy" */;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653 /* GXTEntry: "The Homesteader" */;
		case 29:
			return 509954990 /* GXTEntry: "The Chevalier" */;
		case 30:
			return -445916744 /* GXTEntry: "The Heartlands" */;
		case 31:
			return -866249154 /* GXTEntry: "The Gambler" */;
		case 32:
			return -2077063704 /* GXTEntry: "The Earl" */;
		case 33:
			return 205207539 /* GXTEntry: "The McLaughlin" */;
		case 34:
			return -1033657275 /* GXTEntry: "The Josiah" */;
		case 35:
			return 1806002837 /* GXTEntry: "The Farrier" */;
		case 36:
			return 705324896 /* GXTEntry: "The Donegal" */;
		case 37:
			return -1541763703 /* GXTEntry: "The Bulldogger" */;
		case 38:
			return 387052410 /* GXTEntry: "The Ranch Hand" */;
		case 39:
			return -361288914 /* GXTEntry: "The Scrapper" */;
		case 40:
			return -911054515 /* GXTEntry: "The Armadillo" */;
		case 41:
			return 1084200963 /* GXTEntry: "The Valentine" */;
		case 42:
			return 1847948074 /* GXTEntry: "The Vaquero" */;
		case 43:
			return -1212526764 /* GXTEntry: "The Dewberry Creek" */;
		case 44:
			return 1851440270 /* GXTEntry: "The Clairmont" */;
		case 45:
			return -2028985700 /* GXTEntry: "The Roscoe" */;
		case 46:
			return 1074435214 /* GXTEntry: "The Estate Boss" */;
		case 47:
			return -883015675 /* GXTEntry: "The Drover" */;
		case 48:
			return -1047155604 /* GXTEntry: "The Calumet" */;
		case 49:
			return 1123231221 /* GXTEntry: "The Cowpuncher" */;
		case 50:
			return 1866989210 /* GXTEntry: "The Tumbleweed" */;
		case 51:
			return 478183719 /* GXTEntry: "The Drifter" */;
		case 52:
			return -1698955868 /* GXTEntry: "The Leatherman" */;
		case 53:
			return -2029378634 /* GXTEntry: "The Cumberland" */;
		case 54:
			return 1339864416 /* GXTEntry: "The Millesani" */;
		case 55:
			return 890998115 /* GXTEntry: "The Faulkton" */;
		case 56:
			return -1376288999 /* GXTEntry: "The Dolton" */;
		case 57:
			return -1041123771 /* GXTEntry: "The Corson" */;
		case 58:
			return 1389254668 /* GXTEntry: "The Saint Denis" */;
		case 59:
			return -346112633 /* GXTEntry: "The Deauville" */;
		case 60:
			return 773309172 /* GXTEntry: "The Bretagne" */;
		default:
			break;
	}
	return 0;
}

bool func_620(int iParam0, int iParam1)
{
	if (!func_294(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

void func_621(int iParam0, int iParam1)
{
	if (!func_294(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

bool func_622(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1016(iParam1);
	func_1017(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	return DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964));
}

void func_623(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_294(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] && iParam1);
	Global_40.f_7157[iParam0 /*3*/] = (&Global_40.f_7157[iParam0 /*3*/] - iVar0);
}

int func_624(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_625(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

int func_626(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_627(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_628(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 != 0 && !func_1018(iParam0, iParam1, 1))
	{
		return 0;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == joaat("COST_TYPE_CRAFT") && func_1018(iParam0, Var2, 1))
				{
					if (func_1019(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1019(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_293(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_14(0, 0, 1))
		{
			func_510(1, 5);
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_629(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_630(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case -1375947476: /* GXTEntry: "Special Horse Medicine Pamphlet" */
			iVar0 = 307;
			break;
		case -1704241585: /* GXTEntry: "Special Horse Reviver Pamphlet" */
			iVar0 = 308;
			break;
		case -1267972061: /* GXTEntry: "Horse Ointment Pamphlet" */
			iVar0 = 309;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_STIMULANT"):
			iVar0 = 310;
			break;
		case 890514341: /* GXTEntry: "Horse Meal Pamphlet" */
			iVar0 = 311;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_MEDICINE"):
			iVar0 = 312;
			break;
		case 1882019322: /* GXTEntry: "Special Bitters Pamphlet" */
			iVar0 = 313;
			break;
		case 807302083: /* GXTEntry: "Special Snake Oil Pamphlet" */
			iVar0 = 314;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_TONIC"):
			iVar0 = 315;
			break;
		case -378547623: /* GXTEntry: "Potent Herbivore Bait Pamphlet" */
			iVar0 = 316;
			break;
		case 829545206: /* GXTEntry: "Potent Predator Bait Pamphlet" */
			iVar0 = 317;
			break;
		case 891318243: /* GXTEntry: "Cover Scent Pamphlet" */
			iVar0 = 319;
			break;
		case joaat("DOCUMENT_PAMPHLET_DYNAMITE_ARROW"):
			iVar0 = 320;
			break;
		case 1619534881: /* GXTEntry: "Fire Arrow Pamphlet" */
			iVar0 = 321;
			break;
		case -755457379: /* GXTEntry: "Improved Arrow Pamphlet" */
			iVar0 = 322;
			break;
		case 2141714005: /* GXTEntry: "Poison Arrow Pamphlet" */
			iVar0 = 323;
			break;
		case 1015404643: /* GXTEntry: "Small Game Arrow Pamphlet" */
			iVar0 = 324;
			break;
		case joaat("DOCUMENT_PAMPHLET_VOLATILE_DYNAMITE"):
			iVar0 = 325;
			break;
		case joaat("DOCUMENT_PAMPHLET_MOLOTOV"):
			iVar0 = 326;
			break;
		case joaat("DOCUMENT_PAMPHLET_VOLATILE_MOLOTOV"):
			iVar0 = 327;
			break;
		case -1740272183: /* GXTEntry: "Homing Tomahawk Pamphlet" */
			iVar0 = 328;
			break;
		case joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"):
			iVar0 = 329;
			break;
		case -1724192342: /* GXTEntry: "Improved Tomahawk Pamphlet" */
			iVar0 = 330;
			break;
		case joaat("DOCUMENT_PAMPHLET_POISON_THROWING_KNIFE"):
			iVar0 = 331;
			break;
		case -566881549: /* GXTEntry: "Split Point Pamphlet" */
			iVar0 = 332;
			break;
		case 147796381: /* GXTEntry: "Express Explosive Pamphlet" */
			iVar0 = 333;
			break;
		case -120865369: /* GXTEntry: "Incendiary Buckshot Pamphlet" */
			iVar0 = 334;
			break;
		case 1158808845: /* GXTEntry: "Explosive Slug Pamphlet" */
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_293(iVar0, 0);
	}
}

int func_631(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_552(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_297(iParam0, 1399091007))
	{
		func_988(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_632(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1020(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1022(&Var0, func_1021(0));
	}
	if (!func_1023(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_384(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_947(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_385(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_633(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_698(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1024(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_946(iParam0, Var0, Var0.f_4, bParam4) };
	return func_947(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_634(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_297(iParam0, 606799272))
		{
			func_1025(iParam0, iParam1);
		}
		if (func_297(iParam0, -1112814642) && func_297(iParam0, -1697809989))
		{
			func_579(iParam0, iParam1, 1, 0);
		}
	}
}

void func_635(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	bVar0 = bParam0;
	iVar1 = (bVar0 / 31);
	iVar2 = (bVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_636(bool bParam0)
{
	int iVar0;

	switch (bParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1026(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1027(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1027(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1027(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1028(1);
			break;
		case 34:
			func_1029(1);
			break;
		case 35:
			func_1030(1);
			break;
		case 36:
			break;
		case 37:
			func_1031(0);
			break;
		case 38:
			func_1032(0);
			break;
		case 39:
			func_1033(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_70()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_806("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_293(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_70()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_806("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_293(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_70()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_806("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_293(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_70()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_806("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_293(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_2() == -1)
			{
				if (!func_998(99217379) || func_1034(99217379) == 2110595215)
				{
					if (func_315())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_581(iVar0, 1, 0))
					{
						func_603(iVar0, 1, 752097756);
					}
					func_362(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_2() == -1)
			{
				if (!func_581(1013902307, 1, 0))
				{
					func_603(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_2() == -1)
			{
				if (!func_581(1013902307, 1, 0))
				{
					func_603(1013902307, 1, 752097756);
				}
				if (!func_581(142640135, 1, 0))
				{
					func_603(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_2() == -1)
			{
				if (!func_581(786809402, 1, 0))
				{
					func_603(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_2() == -1)
			{
				if (!func_581(786809402, 1, 0))
				{
					func_603(786809402, 1, 752097756);
				}
				if (!func_581(-518019409, 1, 0))
				{
					func_603(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1035();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

void func_637(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	bVar0 = bParam0;
	iVar1 = (bVar0 / 31);
	iVar2 = (bVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::CLEAR_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_638(bool bParam0)
{
	switch (bParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1026(0);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 2);
			func_1036(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 2);
			func_1036(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 2);
			func_1036(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 2);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 2);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1028(0);
			break;
		case 34:
			func_1029(0);
			break;
		case 35:
			func_1030(0);
			break;
		case 36:
			break;
		case 37:
			func_1031(1);
			break;
		case 38:
			func_1032(1);
			break;
		case 39:
			func_1033(1);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
		case 2:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 1)
			{
				PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			}
			break;
		case 3:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 2)
			{
				PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			}
			break;
		case 4:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 3)
			{
				PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			}
			break;
		case 5:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 4)
			{
				PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			}
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, false);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 0);
			break;
		case 48:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 50:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 49:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 51:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(1);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), false);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", false, true);
			break;
		case 46:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, false);
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), false);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), false);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), false);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), false);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), false);
			break;
	}
}

void func_639()
{
	func_505(-939420910);
	func_505(-1187950766);
	func_505(356365161);
	func_505(753127042);
	func_505(-2038424081);
	func_505(1884271742);
	func_505(459290420);
}

void func_640()
{
	func_505(704802028);
	func_505(588987611);
	func_505(2008888900);
	func_505(1649996811);
	func_505(227918160);
	func_505(168171957);
	func_505(1193080109);
	func_505(-491981251);
	func_505(-639037538);
	func_505(-618620429);
}

bool func_641(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_886(bParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_642(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return 1;
	}
	return 0;
}

int func_643(bool bParam0, bool bParam1)
{
	var uVar0;

	if (!func_250(bParam0))
	{
		return 0;
	}
	if (bParam1 == 296923297 || bParam1 == 1237718549)
	{
		return 1;
	}
	uVar0 = func_1037(bParam0, bParam1);
	return uVar0;
}

bool func_644(bool bParam0)
{
	return (bParam0 > -1 && bParam0 <= 6);
}

bool func_645(bool bParam0)
{
	return (bParam0 > -1 && bParam0 < 120);
}

void func_646(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (iParam1 == 999)
	{
		iVar0 = func_2();
	}
	if (iVar0 == -1)
	{
		switch (bParam0)
		{
			case joaat("PLAYER_ZERO"):
				func_1038(-2125499975);
				break;
			case joaat("PLAYER_THREE"):
				func_1038(1160113249);
				break;
			default:
				break;
		}
		return;
	}
	if (bParam0 == joaat("MP_MALE"))
	{
		func_1038(2026485318);
	}
	else if (bParam0 == joaat("MP_FEMALE"))
	{
		func_1038(24043185);
	}
}

int func_647()
{
	return 0;
}

bool func_648(int iParam0)
{
	return (Global_40.f_7731[iParam0 /*5*/])->f_4 > 0;
}

void func_649(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar1;

	switch (&Global_40.f_7731[iParam0 /*5*/])
	{
		case 0:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 2:
			*iParam1 = 4;
			*iParam2 = 0;
			break;
		case 3:
			*iParam1 = 8;
			*iParam2 = 0;
			break;
		case 4:
			*iParam1 = 12;
			*iParam2 = 0;
			break;
		case 5:
			*iParam1 = 20;
			*iParam2 = 0;
			break;
		case 6:
			*iParam1 = 20;
			*iParam2 = 0;
			break;
		case 7:
			*iParam1 = 32;
			*iParam2 = 0;
			break;
		case 8:
			*iParam1 = 32;
			*iParam2 = 0;
			break;
		case 9:
			*iParam1 = 52;
			*iParam2 = 0;
			break;
		case 10:
			*iParam1 = 52;
			*iParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_1040(iParam1, iParam2, &uVar0, &uVar1, 0, func_1039(iParam0));
	}
}

void func_650(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_651(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_1041(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1042(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_650(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_1041(Param0))
			{
				return;
			}
			func_1042(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_650(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_707(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

int func_652(int iParam0)
{
	return ((*Global_1835011)[iParam0 /*74*/])->f_1;
}

void func_653(bool bParam0)
{
	bool bVar0;

	if (Global_40.f_7748.f_1 < 9)
	{
		if (func_80(Global_40.f_7748.f_5, 1))
		{
			if (Global_40.f_7748.f_1 <= 9)
			{
				if (Global_40.f_7748.f_1 < 9)
				{
					bVar0 = true;
				}
				else if (func_1043())
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (bParam0)
				{
					func_1044();
				}
				else
				{
					func_1045();
				}
			}
		}
	}
	if (bVar0)
	{
		func_325(9, 0, 0, 0, 0);
	}
}

void func_654(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < Global_40.f_7731)
	{
		if (&Global_40.f_7731[iVar0 /*5*/] < 10)
		{
			if (func_80((Global_40.f_7731[iVar0 /*5*/])->f_3, 1))
			{
				if (&Global_40.f_7731[iVar0 /*5*/] <= 10)
				{
					if (&Global_40.f_7731[iVar0 /*5*/] < 7)
					{
						bVar1 = true;
					}
					else if (func_648(iVar0))
					{
						bVar1 = true;
					}
					else
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (bParam0)
					{
						func_1046(iVar0);
					}
					else
					{
						func_1047(iVar0, 0);
					}
					bVar2 = true;
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		func_325(10, 0, 0, 0, 0);
		func_325(7, 0, 0, 0, 0);
	}
}

void func_655(bool bParam0)
{
	if (func_1048() && (bParam0 || func_80(Global_40.f_7748, 1)))
	{
		Global_40.f_7748.f_3 = 0;
		if (bParam0)
		{
			Global_40.f_7748 = func_72();
		}
		else
		{
			func_293(492, 1);
		}
		func_325(9, 0, 0, 0, 0);
	}
}

int func_656(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_657(int iParam0)
{
	return func_710(iParam0, 256);
}

void func_658(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (Global_23117[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0 /*11*/] = (Global_1058888->f_40615[iParam0 /*11*/] || iParam1);
	}
}

void func_659(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

int func_660(int iParam0)
{
	if (!func_329(iParam0, 0))
	{
		return 2;
	}
	switch (iParam0)
	{
		case 0:
			return joaat("DISCOVERABLE_NAME_ODRISCOLL");
		case 2:
			return 1230354436 /* GXTEntry: "Lemoyne Raider" */;
		case 1:
			return -392391548 /* GXTEntry: "Murfree Brood" */;
		case 3:
			return -1141178522 /* GXTEntry: "Skinner Brother" */;
		case 4:
			return 1203887108 /* GXTEntry: "Hired Gun" */;
		case 5:
			return joaat("DISCOVERABLE_NAME_DEL_LOBO");
		default:
			break;
	}
	return 2;
}

bool func_661(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	if (bParam1)
	{
		if (&Global_40.f_9632[iParam0 /*4*/] > 0)
		{
			if (&Global_40.f_9632[iParam0 /*4*/] >= func_1049(iParam0))
			{
				return true;
			}
			Var2 = { func_759(joaat("TOTAL_PLAYING_TIME")) };
			if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
			{
				iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
				if (iVar1 >= (Global_40.f_9632[iParam0 /*4*/])->f_3)
				{
					return false;
				}
			}
		}
	}
	return &Global_40.f_9632[iParam0 /*4*/] > 0;
}

int func_662(int iParam0)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = { func_759(joaat("TOTAL_PLAYING_TIME")) };
	if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
	{
		iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
		if (iVar1 >= (Global_40.f_9632[iParam0 /*4*/])->f_3)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_663(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 261.4119f, 168.1394f, 97.095f;
				case 1:
					return -71.9f, 314.6f, 108.1f;
				case 2:
					return -247.9203f, 499.8062f, 94.8408f;
				case 3:
					return -265.6117f, -258.6254f, 91.1275f;
				case 4:
					return 947.9633f, 392.5947f, 110.4447f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
		case 36:
			switch (iParam1)
			{
				case 0:
					return 37.4f, 576f, 130.9528f;
				case 1:
					return 82.3596f, 414.8434f, 126.6896f;
				default:
					break;
			}
			break;
		case 3:
		case 4:
		case 38:
			switch (iParam1)
			{
				case 0:
					return -99.1603f, 295.7463f, 102.7589f;
				default:
					break;
			}
			break;
		case 6:
		case 42:
			switch (iParam1)
			{
				case 0:
					return -605.1606f, 415.9453f, 95.278f;
				case 1:
					return 647.687f, -566.0206f, 73.8882f;
				case 2:
					return 156.9574f, 589.7143f, 124.4553f;
				default:
					break;
			}
			break;
		case 5:
		case 35:
			switch (iParam1)
			{
				case 0:
					return -1110.081f, 126.4462f, 55.3198f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1735.511f, 57.3352f, 154.7623f;
				default:
					break;
			}
			break;
		case 41:
			switch (iParam1)
			{
				case 0:
					return -1735.511f, 57.3352f, 154.7623f;
				case 1:
					return 839.995f, -692.6373f, 66.1221f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -511.2764f, -324.3151f, 65.11539f;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					return -511.2764f, -324.3151f, 65.11539f;
				default:
					break;
			}
			break;
		case 9:
		case 10:
		case 37:
			switch (iParam1)
			{
				case 0:
					return 340.1664f, 224.1398f, 101.5865f;
				case 1:
					return -368.3074f, 115.4362f, 40.7802f;
				case 2:
					return -1061.945f, -445.6989f, 80.26047f;
				case 3:
					return -1283.033f, 16.5433f, 53.7479f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1633.234f, -672.1511f, 43.5035f;
				case 1:
					return 925.174f, -1145.063f, 53.314f;
				case 2:
					return 1426.139f, -1437.182f, 78.244f;
				case 3:
					return 1480.597f, -1043.651f, 54.8389f;
				case 4:
					return 2156.54f, -1319.13f, 41.4469f;
				case 5:
					return 1321.881f, -1679.864f, 66.872f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 1497.896f, -719.2251f, 47.15442f;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 1633.234f, -672.1511f, 43.5035f;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 925.6f, -1145f, 53f;
				case 1:
					return 1485.047f, -1042.127f, 52.9948f;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1717.905f, -2066.761f, 42.9164f;
				case 1:
					return 1475.829f, -2229.839f, 42.6941f;
				case 2:
					return 2153.501f, -1302.344f, 42.1521f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 1240.883f, -859.2491f, 69.91452f;
				case 1:
					return 991.1385f, -889.2033f, 70.3542f;
				default:
					break;
			}
			break;
		case 17:
		case 39:
			switch (iParam1)
			{
				case 0:
					return 2139.084f, -1322.471f, 41.6526f;
				case 1:
					return 2162.225f, -960.3032f, 41.7974f;
				case 2:
					return 1153.882f, -1502.448f, 52.6003f;
				case 3:
					return 1490.574f, -1001.085f, 48.9639f;
				case 4:
					return 1659.413f, -1597.443f, 55.4104f;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 2427.188f, 1043.388f, 86.5726f;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 2427.188f, 1043.388f, 86.5726f;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return 2355.17f, 1680.76f, 95.341f;
				case 1:
					return 2606.643f, 1809.042f, 91.94587f;
				case 2:
					return 2627.776f, 1314.441f, 113.6464f;
				case 3:
					return 2853.661f, 869.5517f, 49.258f;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 2466.44f, 1326.504f, 108.6252f;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					return 2737.724f, 836.7189f, 83.38937f;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return 2814.25f, 445.3571f, 63.1659f;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return -2361.181f, -1483.392f, 140.8987f;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					return -1554.11f, -1211.528f, 73.6863f;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					return -1298.058f, -1248.784f, 81.8463f;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return -1424.421f, -956.7158f, 61.702f;
				default:
					break;
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
					return -2089.884f, -1624.694f, 132.9787f;
				case 1:
					return -2169.37f, -1187.876f, 132.733f;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 0:
					return -2285.194f, -414.9127f, 156.6726f;
				default:
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					return -2285.194f, -414.9127f, 156.6726f;
				default:
					break;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 0:
					return -3285.6f, -2630.4f, 4.9f;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return -5233.051f, -2902.402f, 1.486f;
				default:
					break;
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 0:
					return -3827.842f, -2983.152f, -7.33933f;
				case 1:
					return -4181.152f, -2308.259f, 0.004f;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 0:
					return 1903.304f, 1642.989f, 170.1826f;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 0:
					return 2386.82f, 751.7125f, 66.2341f;
				case 1:
					return 2678.968f, 268.3763f, 62.3124f;
				case 2:
					return 1904.455f, 498.3759f, 122.2237f;
				case 3:
					return 2832.23f, 927.7681f, 47.4658f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_664(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_1050(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_1051(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

int func_665(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_1050(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_1052(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, bParam7);
	}
	if (bParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, bParam9);
	}
	func_1053(iVar0, bParam8);
	return iVar0;
}

float func_666(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
		case 3:
			return 150f;
		default:
			break;
	}
	switch (iParam0)
	{
		case 0:
			if (iParam2 == 3)
			{
				return 140f;
			}
			else
			{
				return 130f;
			}
			break;
		case 11:
			return 140f;
		default:
			return 175f;
	}
	return 175f;
}

int func_667(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_1050(vParam0))
	{
		return 0;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_668(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = ((((BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_SECONDS(), 0) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_MINUTES(), 6)) || BUILTIN::SHIFT_LEFT(iParam0, 12)) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_MONTH(), 22)) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_DAY_OF_MONTH(), 17));
	iVar1 = CLOCK::GET_CLOCK_YEAR();
	if ((iVar1 < 0 || iVar1 > 1930) || iVar1 < 1866)
	{
		return;
	}
	if (iVar1 < 1898)
	{
		iVar0 = (iVar0 || BUILTIN::SHIFT_LEFT((1898 - iVar1), 26)) | -2147483648;
	}
	else
	{
		iVar0 = (iVar0 || BUILTIN::SHIFT_LEFT((iVar1 - 1898), 26));
		iVar0 = (iVar0 - iVar0 & -2147483648);
	}
	Global_1899515 = iVar0;
}

int func_669(var uParam0)
{
	if (-1829635046 == func_1054(81053684))
	{
		if (func_1055(uParam0))
		{
			return 1;
		}
	}
	else if (func_1056(-525676072, uParam0))
	{
		if (func_1055(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_670()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

void func_671(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	char* sVar9;
	int iVar10;

	if (func_2() != -1)
	{
		return;
	}
	iVar0 = func_1057();
	if (bParam0 <= 0)
	{
		return;
	}
	else if (bParam0 > 0 && (iVar0 + bParam0) > 3000)
	{
		bVar1 = (3000 - iVar0);
	}
	else
	{
		bVar1 = bParam0;
	}
	if (bVar1 < 0)
	{
		bVar2 = MISC::ABSI(bVar1);
		sVar9 = "FAME_EVENT_DEC";
	}
	else
	{
		bVar2 = bVar1;
		sVar9 = "FAME_EVENT_INC";
	}
	iVar3 = (iVar0 + bVar1);
	fVar6 = BUILTIN::TO_FLOAT(iVar0);
	fVar7 = BUILTIN::TO_FLOAT(&Global_1347398);
	fVar8 = BUILTIN::TO_FLOAT(iVar3);
	iVar4 = func_819(BUILTIN::CEIL(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_819(BUILTIN::CEIL(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_1058())
		{
			func_1059(0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_1060())
		{
			func_1059(1000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_1061())
		{
			func_1059(2000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_1062())
	{
		func_1059(3000);
		AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_567(func_759(joaat("FAME")), bVar1);
	iVar10 = func_1057();
	AUDIO::_0x078F77FD1A43EAB3(iVar0, iVar10);
}

bool func_672(bool bParam0)
{
	return (bParam0 > -1 && bParam0 < 14);
}

int func_673(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 33)
	{
		if (&Global_40.f_9536[iVar0] == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_674(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 34);
}

int func_675()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 33)
	{
		if (&Global_40.f_9536[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_676(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_677(int iParam0, bool bParam1)
{
	return ((Global_40.f_4942[iParam0 /*60*/])->f_5 && bParam1) > 0;
}

void func_678(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!bParam2)
	{
		switch (bParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_1063(iParam0);
				func_1064(iParam0, 0);
				break;
		}
		func_1065(iParam0, bParam1);
		if (func_1066(bParam1, &iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			{
				if (func_1067(Global_1360165[iParam0 /*1157*/], iVar0))
				{
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[iParam0 /*1157*/], iVar0);
				}
				PED::_0x1902C4CFCC5BE57C(Global_1360165[iParam0 /*1157*/], PED::_0x30569F348D126A5A(Global_1360165[iParam0 /*1157*/]));
				PED::_0xCC8CA3E88256E58F(Global_1360165[iParam0 /*1157*/], false, true, true, true, false);
			}
		}
	}
	else
	{
		switch (bParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_1063(iParam0);
				func_1064(iParam0, 1);
				break;
		}
		func_1068(iParam0, bParam1);
		func_1069(iParam0, Global_1360165[iParam0 /*1157*/], 1);
	}
}

int func_679(bool bParam0)
{
	if (bParam0 <= -1 || bParam0 >= 13)
	{
		return 0;
	}
	return 1;
}

void func_680(int iParam0)
{
	if (!func_365(iParam0))
	{
		return;
	}
	func_1070(iParam0, 0);
}

int func_681(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_1071(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

void func_682(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_286(iVar1, 0))
		{
			func_1072(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

int func_683(int iParam0)
{
	if (((((((((((((((((func_297(iParam0, -2017733358) || func_297(iParam0, -1369131378)) || func_297(iParam0, -687467589)) || func_297(iParam0, 412399755)) || func_297(iParam0, 709057512)) || func_297(iParam0, -1478961327)) || func_297(iParam0, -1238404098)) || func_297(iParam0, 1160548794)) || iParam0 == joaat("PROVISION_BOAR_RARE_TUSK")) || iParam0 == joaat("PROVISION_BRA_SHIELD")) || iParam0 == joaat("PROVISION_CATHERINES_NECKLACE")) || iParam0 == joaat("PROVISION_DB_SKULL_STATUE")) || iParam0 == joaat("PROVISION_DEPUTY_STAR")) || iParam0 == joaat("PROVISION_LOANSHARK_SKINS")) || iParam0 == 2062875229) || iParam0 == joaat("PROVISION_RC_ROCK_STATUE")) || iParam0 == joaat("PROVISION_SCRAP_METAL")) || iParam0 == joaat("PROVISION_RCKITTY_EMERALD"))
	{
		return 1;
	}
	if (func_297(iParam0, 1291597743) && (!func_297(iParam0, -121341956) || func_297(iParam0, 606799272)))
	{
		return 1;
	}
	return 0;
}

void func_684(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1073(iParam0))
	{
		return;
	}
	iVar0 = func_555(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1074(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1074(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1074(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1074(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1074(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1074(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1075(0))
	{
		func_1076(iParam0, 1);
		if (func_693() == 1160113249)
		{
			func_1076(func_1075(-2125499975), 0);
		}
		else
		{
			func_1076(func_1075(1160113249), 0);
		}
	}
	func_1077();
	if (func_1078(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_738(0), iParam0, 0);
	}
	func_1079(iParam0, bParam3);
	if (bParam2)
	{
		func_1080(0, 0);
	}
}

int func_685(int iParam0, bool bParam1)
{
	var uVar0;
	var uVar5;
	var uVar9;
	struct<5> Var10;
	var uVar15;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!func_1081(iParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_1082() };
	Var10.f_4 = uVar9;
	if (func_993(iParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_1083(iParam0, 1))
			{
			}
		}
		if (func_1084(iParam0))
		{
			func_685(func_1085(iParam0), 1);
		}
		func_1086();
		return 1;
	}
	return 0;
}

int func_686(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_687(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1087(iParam0);
	if (bParam3)
	{
		func_1088(iParam0, sParam1, iParam2);
	}
}

void func_688(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_962(iParam0, sParam4, iParam5);
	}
	func_963(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_689(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_2() != -1)
	{
		return;
	}
	if (func_1089(8) && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
	Global_26795.f_627.f_121 = { Global_1946804->f_2657 };
	Global_26795.f_627 = func_619(Global_40.f_7729);
	if (bParam0)
	{
		func_682(1);
	}
	func_1090(8);
}

void func_690(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_533(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

struct<4> func_691(bool bParam0)
{
	return func_946(joaat("CHARACTER"), func_1091(), -1591664384, bParam0);
}

void func_692(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_2() == -1)
	{
		func_1092(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26795.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26795[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26795.f_20;
		Global_1946804->f_2657.f_21 = Global_26795.f_21;
		Global_1946804->f_2657.f_22 = Global_26795.f_22;
		Global_1946804->f_2657.f_23 = Global_26795.f_23;
		Global_1946804->f_2657.f_24 = Global_26795.f_24;
		Global_1946804->f_2657.f_25 = Global_26795.f_25;
		Global_1946804->f_2657.f_19 = Global_26795.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36637.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36637.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36637.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36637.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36637.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36637.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36637.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36637.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36637.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_555(iVar2) != -999503751)
		{
			func_1093(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1094(iVar2, 0))
		{
			func_1079(iVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

int func_693()
{
	return Global_1946804->f_1;
}

void func_694(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (iParam1[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam1[iVar0], 0, false))
			{
				if (func_942(iParam1[iVar0]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != iParam1[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_695(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_2() != -1)
	{
		return 0;
	}
	func_1095(bParam1);
	if (bParam2)
	{
		func_1096(1);
	}
	if (bParam0)
	{
		func_1097(8);
	}
	return 1;
}

void func_696(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_697(int iParam0, int iParam1, bool bParam2)
{
	if (!func_294(iParam0))
	{
		return;
	}
	if (func_616(iParam0))
	{
		if (func_617(iParam0))
		{
			func_623(iParam0, 2);
			func_623(iParam0, 4);
			if (bParam2)
			{
				if (!func_14(0, 0, 1))
				{
					func_510(1, 4);
				}
			}
		}
	}
}

struct<5> func_698(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_691(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_552(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_946(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_1021(bParam1) };
			if (bParam2 && func_1098(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_944(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_944(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_945(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { func_1099(bParam1) };
			switch (func_555(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (func_1100(iParam0, -1823706425))
			{
				Var0 = { func_946(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_1100(iParam0, -1483207246))
			{
				Var0 = { func_946(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_1101(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_699(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_1102(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_700(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_701(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_1103();
	if (iParam2 == 39)
	{
		Var0 = { func_698(iParam0, 1, 0) };
		iParam2 = func_700(func_699(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_297(iParam0, 866047851) && func_1104(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_703(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_1105(func_1102(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1106(iParam2);
	func_1107(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_1108(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_1108(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_1109(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_1110(iParam0, iParam2, iParam1, func_2() != -1);
	if (bParam4)
	{
		func_1111(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1111(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_1112(func_1102(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_702(bool bParam0, bool bParam1, bool bParam2)
{
	func_1113(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_703(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_704()
{
	func_1114(&(Global_1946804->f_2776));
	func_1115(32768);
	func_1112(1108822547, 8, 6);
}

int func_705(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_700(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_706(int iParam0)
{
	struct<4> Var0;

	if (func_1116(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1117(Var0);
}

void func_707(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1117(Var0);
}

int func_708(int iParam0)
{
	if (!func_327(iParam0))
	{
		return 0;
	}
	return func_710(iParam0, 16777216);
}

int func_709(int iParam0)
{
	if (!func_327(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

bool func_710(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_711(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_327(iParam0))
	{
		return 0;
	}
	iVar0 = func_1118(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_1119(func_712(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

int func_712(int iParam0)
{
	if (!func_327(iParam0))
	{
		return -15;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/])->f_1;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/])->f_1;
}

void func_713(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_23117[iParam0 /*11*/])->f_1 = iParam1;
		return;
	}
	(Global_1058888->f_40615[iParam0 /*11*/])->f_1 = iParam1;
}

void func_714(int iParam0, int iParam1)
{
	if (!func_327(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	(Global_23117[iParam0 /*11*/])->f_3 = iParam1;
}

void func_715(int iParam0)
{
	if (!func_327(iParam0))
	{
		return;
	}
	if (func_1120(iParam0) && func_1121(iParam0))
	{
		func_1123(func_1122(iParam0));
	}
	else
	{
		func_1124(func_1122(iParam0));
	}
}

void func_716(int iParam0, int iParam1)
{
	if (!func_365(iParam0))
	{
		return;
	}
	if (!func_1125(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_358[iParam0 /*12*/])->f_5 = ((Global_40.f_358[iParam0 /*12*/])->f_5 || iParam1);
		return;
	}
	(Global_1058888->f_42266[iParam0 /*12*/])->f_5 = ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 || iParam1);
}

void func_717(int iParam0, int iParam1)
{
	if (!func_365(iParam0))
	{
		return;
	}
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_358[iParam0 /*12*/])->f_5 = ((Global_40.f_358[iParam0 /*12*/])->f_5 - ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1));
		return;
	}
	(Global_1058888->f_42266[iParam0 /*12*/])->f_5 = ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 - ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1));
}

void func_718(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_365(iParam0))
	{
		return;
	}
	if (func_1125(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_716(iParam0, 1);
	}
	else
	{
		func_717(iParam0, 1);
	}
	func_1126(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_1127(iVar0) == iParam0)
		{
			func_721(iVar0, 0);
		}
		iVar0++;
	}
}

void func_719(int iParam0, int iParam1)
{
	if (!func_367(iParam0))
	{
		return;
	}
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_431[iParam0] = (&Global_40.f_431[iParam0] - (Global_40.f_431[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_42339[iParam0] = (&Global_1058888->f_42339[iParam0] - (Global_1058888->f_42339[iParam0] && iParam1));
}

void func_720(int iParam0, int iParam1)
{
	if (!func_367(iParam0))
	{
		return;
	}
	if (!func_1128(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_431[iParam0] = (Global_40.f_431[iParam0] || iParam1);
		return;
	}
	Global_1058888->f_42339[iParam0] = (Global_1058888->f_42339[iParam0] || iParam1);
}

void func_721(int iParam0, bool bParam1)
{
	if (!func_367(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_720(iParam0, 1);
	}
	else
	{
		if (func_1129(iParam0))
		{
			return;
		}
		func_719(iParam0, 1);
	}
	func_1130(iParam0, bParam1);
}

int func_722(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1131(bParam0);
	if (bParam1)
	{
		switch (iVar0)
		{
			case joaat("MISSION_COOP_CHAR_CREATOR"):
			default:
				return 0;
				return -496459706;
			case -765810527:
				return -1052738286;
			case -736232052:
				return -2042919232;
			case 34802860:
				return 173210050;
				switch (iVar0)
				{
					case joaat("MISSION_COOP_CHAR_CREATOR"):
					default:
						return 0;
						return -496459706;
					case -765810527:
						return -1052738286;
					case -736232052:
						return -2042919232;
					case 34802860:
						return 173210050;
					case joaat("MISSION_COOP_GVO_INTRO_1"):
						return -1758386749;
					case joaat("MISSION_COOP_GVO_INTRO_2"):
						return -1333110667;
					case joaat("MISSION_COOP_GVO_INTRO_3"):
						return -1008926950;
					case joaat("MISSION_COOP_GVO_OUTLAW_1"):
						return 1844852257;
					case joaat("MISSION_COOP_GVO_OUTLAW_2"):
						return -1130540186;
					case joaat("MISSION_COOP_GVO_OUTLAW_3"):
						return -883953461;
					case joaat("MISSION_COOP_GVO_OUTLAW_4"):
						return -1728607205;
					case joaat("MISSION_COOP_GVO_GUNSLINGER_1"):
						return 716380931;
					case joaat("MISSION_COOP_GVO_GUNSLINGER_2"):
						return 1090144145;
					case joaat("MISSION_COOP_GVO_GUNSLINGER_3"):
						return -1237667308;
					case joaat("MISSION_COOP_GVO_GUNSLINGER_4"):
						return -1411080856;
					case joaat("MISSION_COOP_GVO_REVENGE_1"):
						return -1308143969;
				}
		}
	}

bool func_723(bool bParam0)
{
	return (bParam0 > -1 && bParam0 < 673);
}

void func_724()
{
	struct<4> Var0;

	if (func_1132() >= 1 && func_1132() < 6)
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	}
	switch (func_1132())
	{
		case 0:
			if (func_1133())
			{
				if (!func_1134(&(Global_0.f_9)))
				{
					func_1135(&(Global_0.f_9), 0);
				}
			}
			else if (func_1134(&(Global_0.f_9)))
			{
				func_1136(&(Global_0.f_9));
			}
			if (func_1134(&(Global_0.f_9)))
			{
				if (func_1137(&(Global_0.f_9)) >= 10f)
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					func_1138(1);
				}
			}
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PLAYER::FORCE_CLEANUP(2);
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
				HUD::_0x4CC5F2FC1332577F(-1679307491);
				Global_0.f_12 = PED::GET_MOUNT(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_12))
				{
					PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_12, 806.1718f, 1780.41f, 280.762f, 27.8989f, true, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_12, true);
				}
				else
				{
					Global_0.f_12 = PED::_0x4C8B59171957BCF7(Global_35);
					if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_12))
					{
						if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(Global_0.f_12, true, false)) > 50f)
						{
							Global_0.f_12 = 0;
						}
						else
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_12, 806.1718f, 1780.41f, 280.762f, 27.8989f, true, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_12, true);
						}
					}
				}
				Global_0.f_13 = PED::_0xD806CD2A4F2C2996(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_13))
				{
					PED::_0xED00D72F81CF7278(Global_0.f_13, 0, 0);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_13, 804.3274f, 1779.618f, 280.7979f, 29.0898f, true, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_13, true);
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 797.0328f, 1780.719f, 279.8931f, 6.2684f, true, false, true);
				func_510(0, -1);
				Global_0.f_8 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@fin3@arthurs_grave", 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(Global_0.f_8);
				UNLOCK::_UNLOCK_SET_UNLOCKED(219254805, true);
				func_1138(2);
			}
			break;
		case 2:
			if (!func_5(&Global_0, 3) || func_1137(&(Global_0.f_9)) >= 15f)
			{
				func_1138(3);
			}
			break;
		case 3:
			if (ANIMSCENE::_0x477122B8D05E7968(Global_0.f_8, 1, 0))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Global_0.f_8, "JOHN", &Var0, false, 0, 2))
				{
					PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), Var0, Var0.f_3.f_2, true, true, true, false);
					func_1138(4);
				}
				else
				{
					ANIMSCENE::_0xADF1D53F3B1FE0A7(Global_0.f_8, &Var0, &(Var0.f_9), 2);
					PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), Var0, Var0.f_3.f_2, true, true, true, false);
					func_1138(4);
				}
			}
			break;
		case 4:
			if ((!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX())) || func_1137(&(Global_0.f_9)) >= 15f)
			{
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_12))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_12, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_12, 806.1718f, 1780.41f, 280.762f, 27.8989f, true, false, true);
					ENTITY::_0x9587913B9E772D29(Global_0.f_12, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_13))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_13, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_13, 804.3274f, 1779.618f, 280.7979f, 29.0898f, true, false, true);
					ENTITY::_0x9587913B9E772D29(Global_0.f_13, 0);
				}
				CAM::DO_SCREEN_FADE_IN(1000);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_0.f_8, "JOHN", Global_35, 0);
				ANIMSCENE::START_ANIM_SCENE(Global_0.f_8);
				func_1138(5);
			}
			break;
		case 5:
			if (ANIMSCENE::_0xD8254CB2C586412B(Global_0.f_8, 0))
			{
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
				HUD::_0x8BC7C1F929D07BF3(-1679307491);
				if (func_641(932909855))
				{
					func_1139(joaat("JOURNAL_ENTRY_100_PERCENT_HIGH"), 0);
				}
				else
				{
					func_1139(joaat("JOURNAL_ENTRY_100_PERCENT_LOW"), 0);
				}
				func_1140(0);
				func_1138(6);
			}
			break;
		case 6:
			break;
	}
}

int func_725()
{
	if (Global_1572887->f_12 == -1)
	{
		if (!func_70())
		{
			return 0;
		}
		else if (!func_85(0))
		{
			return 0;
		}
		else if (func_1141())
		{
			return 0;
		}
	}
	if (!Global_21 & 64 != 0)
	{
		return 0;
	}
	if (func_6(32898))
	{
		return 0;
	}
	if (func_20(Global_1572864->f_8))
	{
		return 0;
	}
	if (Global_1572864->f_21 != 0)
	{
		return 0;
	}
	if (func_5(&Global_0, 32))
	{
		if (func_5(&Global_0, 2))
		{
			return 1;
		}
		if (func_5(&Global_0, 64))
		{
			return 1;
		}
	}
	if (func_14(0, 1, 1))
	{
		return 0;
	}
	if (func_416(PLAYER::PLAYER_ID(), 1, 0, 0))
	{
		return 0;
	}
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		return 0;
	}
	if (MISC::_0x1B065A2BF7953815(0) == 1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (_NAMESPACE76::_0xC5C395C60B542A3C(1))
	{
		return 0;
	}
	if (func_1142() != 2 && func_1142() != 3)
	{
		return 0;
	}
	if (func_1143())
	{
		return 0;
	}
	return 1;
}

void func_726(var uParam0)
{
	uParam0->f_2 = 0;
}

float func_727(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_728()
{
	if (func_2() != -1)
	{
		return 0;
	}
	if (!func_70())
	{
		return 0;
	}
	if (!func_226(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_226(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_226(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_226(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_226(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_226(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_226(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_226(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_226(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_226(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_226(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_226(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_226(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_226(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_226(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_226(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_226(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_226(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_226(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_226(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_226(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_226(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_226(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_226(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_226(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_226(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_729(int iParam0, bool bParam1)
{
	if (func_2() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_6(32768))
	{
		return;
	}
	if (!func_6(32768))
	{
		func_1144(1, bParam1);
	}
	MISC::_0x279B0696DA4657EB(iParam0);
	MISC::_COPY_MEMORY((*Global_2621440)[iParam0 /*12065*/], &Global_40, 12065);
	MISC::_COPY_MEMORY((*Global_2645571)[iParam0 /*5398*/], &Global_12105, 5398);
	MISC::_COPY_MEMORY((*Global_2656368)[iParam0 /*3206*/], &Global_17503, 3206);
	MISC::_COPY_MEMORY((*Global_2662781)[iParam0 /*2408*/], &Global_20709, 2408);
	MISC::_COPY_MEMORY((*Global_2667598)[iParam0 /*1769*/], &Global_23117, 1769);
	MISC::_COPY_MEMORY((*Global_2671137)[iParam0 /*1909*/], &Global_24886, 1909);
	MISC::_COPY_MEMORY((*Global_2674956)[iParam0 /*777*/], &Global_26795, 777);
	MISC::_COPY_MEMORY((*Global_2676511)[iParam0 /*4501*/], &Global_27572, 4501);
	MISC::_COPY_MEMORY((*Global_2685514)[iParam0 /*4234*/], &Global_32073, 4234);
	if (func_6(32768))
	{
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_72();
	}
}

void func_730(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

int func_731()
{
	if (!func_5(&Global_0, 2))
	{
		if (Global_1572887->f_10)
		{
			func_730(&Global_0, 1);
			return 0;
		}
		if (!func_70())
		{
			func_730(&Global_0, 1);
			return 0;
		}
		if (func_20(func_798(0)))
		{
			return 0;
		}
		if (&Global_1879534)
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_88(&Global_1935630, 2048) || func_6(38))
		{
			return 0;
		}
		if (MISC::_0x1B065A2BF7953815(0) == 1)
		{
			return 0;
		}
		if (SAVE::_0x3CF46F55C6585590())
		{
			return 0;
		}
		if (Global_1935630->f_2 != Global_40.f_39 || (!Global_1935630->f_12 && ENTITY::GET_ENTITY_MODEL(Global_35) != Global_40.f_39))
		{
			return 0;
		}
		if (Global_40.f_7729 != &Global_1905941)
		{
			return 0;
		}
		if (func_5(&Global_0, 16))
		{
			func_730(&Global_0, 16);
			return 0;
		}
		if (Global_1914319->f_18941.f_17)
		{
			return 0;
		}
		if (STREAMING::_0x99F92061EFE908BA())
		{
			return 0;
		}
		func_1145(0);
	}
	if (SAVE::_0x3CF46F55C6585590())
	{
		return 0;
	}
	if (MISC::_0x1B065A2BF7953815(0) == 1)
	{
		return 0;
	}
	func_729(0, 0);
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_36 };
	Global_0.f_14 = 0;
	func_370(&Global_0, 4);
	func_730(&Global_0, 2);
	func_730(&Global_0, 32);
	func_730(&Global_0, 64);
	return 1;
}

void func_732()
{
	if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
	{
		Global_0.f_1 = -1;
		return;
	}
	func_730(&Global_0, 8);
	Global_0.f_1 = -1;
}

void func_733(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_734(int iParam0)
{
	return func_412(iParam0) == 2;
}

int func_735(bool bParam0)
{
	if (&Global_1415419->f_19[bParam0 /*12*/] != 0)
	{
		return 1;
	}
	return 0;
}

int func_736(bool bParam0)
{
	if (bParam0 <= -1 || bParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_737(bool bParam0, int iParam1, int iParam2)
{
	if (!func_736(bParam0))
	{
		return 0;
	}
	switch (bParam0)
	{
		case 0:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP1");
			break;
		case 1:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP2");
			break;
		case 2:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP3");
			break;
		case 3:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP4");
			break;
		case 4:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP5");
			break;
		case 5:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_GOLDRUSH");
			break;
		case 6:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MINIGAMES");
			break;
		case 7:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_B_AND_E");
			break;
		case 8:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RCKPT");
			break;
		case 9:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_TO_POOR");
			break;
		case 10:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_HONOR");
			break;
		case 11:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RC");
			break;
		case 12:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BOUNTY");
			break;
		case 13:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_UPGR_W");
			break;
		case 14:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BEAR");
			break;
		case 15:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_ART");
			break;
		case 16:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_COLLECT");
			break;
		default:
			return 0;
	}
	return 1;
}

int func_738(bool bParam0)
{
	if (func_2() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_739(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(bParam0))
	{
		return 1;
	}
	if (!NETWORK::_0x271F95E55C663B8B(&uVar0, uParam1))
	{
		return 0;
	}
	Var1.f_1 = 10;
	Var1.f_14 = 255;
	Var1.f_12 = iParam2;
	Var1.f_14 = iParam3;
	Var1.f_13 = iParam4;
	func_1146(uParam1, bParam0, Var1);
	return 1;
}

bool func_740(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1225314[iParam1 /*2*/] && iParam0) != 0;
}

int func_741(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1225287->f_2), iParam0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(Global_1225287->f_23[iVar0 /*3*/], iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_742(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return ((*Global_1140156)[iParam0 /*19*/])->f_1.f_1;
}

bool func_743(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

bool func_744()
{
	return !Global_1572887->f_8;
}

int func_745()
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return Global_1058888->f_4;
}

int func_746()
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return Global_1058888->f_5;
}

int func_747()
{
	if (Global_1572887->f_252.f_3 > 0)
	{
		return 1;
	}
	if (Global_1572887->f_252.f_4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_748(bool bParam0, int iParam1)
{
	return (Global_40.f_490.f_402[bParam0] && iParam1) != 0;
}

void func_749(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_753(bParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_754(bParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_754(bParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_754(bParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_754(bParam0));
			}
		}
	}
	func_864(bParam0, 4);
	func_864(bParam0, 8);
	func_864(bParam0, 16);
}

void func_750(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < &Global_1347702)
	{
		if (func_18(bVar0) && Global_1347702[bVar0 /*49*/] == iParam0)
		{
			func_752(bVar0);
			if (func_19(((*Global_1347702)[bVar0 /*49*/])->f_12, 4))
			{
				return;
			}
		}
		bVar0++;
	}
}

int func_751(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < &Global_1347702)
	{
		if (func_18(bVar0) && Global_1347702[bVar0 /*49*/] == iParam0)
		{
			if (func_19(((*Global_1347702)[bVar0 /*49*/])->f_12, 4))
			{
				if (func_226(((*Global_1347702)[bVar0 /*49*/])->f_15, 1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

void func_752(bool bParam0)
{
	if (!func_18(bParam0))
	{
		return;
	}
	func_248(bParam0, 1, 1);
	func_247(bParam0, 1, 1, 1, 32);
	func_749(bParam0, 1);
	func_780(((*Global_1347702)[bParam0 /*49*/])->f_15, 0);
	func_1147(((*Global_1347702)[bParam0 /*49*/])->f_15, -15);
	func_756(((*Global_1347702)[bParam0 /*49*/])->f_15, 0);
	func_1148(((*Global_1347702)[bParam0 /*49*/])->f_15, 0);
	func_1149(bParam0, 0f);
	func_1150(bParam0, 0f);
	Global_40.f_490.f_402[bParam0] = 0;
}

int func_753(bool bParam0)
{
	if (((*Global_1347702)[bParam0 /*49*/])->f_12 & 1 != 0 || ((*Global_1347702)[bParam0 /*49*/])->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_754(bool bParam0)
{
	var uVar0;

	uVar0 = ((*Global_1347702)[bParam0 /*49*/])->f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_755(bool bParam0)
{
	char cVar0[64];
	char* sVar8;
	char* sVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (((*Global_1347702)[bParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar10 = func_805(bParam0, 0);
	iVar11 = iVar10;
	iVar12 = iVar10;
	if (bParam0 == 82 || bParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {((*Global_1347702)[bParam0 /*49*/])->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_753(bParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_754(bParam0), ((*Global_1347702)[bParam0 /*49*/])->f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), ((*Global_1347702)[bParam0 /*49*/])->f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_754(bParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_754(bParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_754(bParam0)))
	{
		func_470(bParam0, 4);
	}
}

void func_756(int iParam0, int iParam1)
{
	if (!func_20(iParam0))
	{
		return;
	}
	func_1151(iParam0, iParam1);
}

int func_757(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_758(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_6;
	}
	return -15;
}

struct<2> func_759(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

bool func_760(int iParam0)
{
	return iParam0 != 0;
}

int func_761(bool bParam0)
{
	if (!func_406(bParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[bParam0 /*3*/])->f_1;
}

int func_762(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_1152(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_763(bool bParam0)
{
	return BUILTIN::SHIFT_LEFT(1, bParam0);
}

void func_764(int iParam0, var uParam1)
{
	*iParam0 = (*iParam0 || uParam1);
}

int func_765(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_766(var uParam0)
{
	if (func_417(&(uParam0->f_29), 62))
	{
		switch (func_1153())
		{
			case 1:
				if (!func_417(&(uParam0->f_29), 6))
				{
					return 0;
				}
				break;
			case 2:
				if (!func_417(&(uParam0->f_29), 8))
				{
					return 0;
				}
				break;
			case 4:
				if (!func_417(&(uParam0->f_29), 16))
				{
					return 0;
				}
				break;
			case 8:
				if (!func_417(&(uParam0->f_29), 32))
				{
					if (func_417(&(uParam0->f_29), 2))
					{
						if (func_64(func_72()) < 5)
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				break;
		}
	}
	return 1;
}

int func_767(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 0;
	}
	return 1;
}

int func_768(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
	}
	return 0;
}

Vector3 func_769(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_15;
}

float func_770()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

bool func_771()
{
	return Global_1894899 & 2 != 0;
}

int func_772(int iParam0)
{
	if (!func_20(iParam0))
	{
		return 0;
	}
	return func_1154(func_56(iParam0));
}

int func_773(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_435(bParam0, bParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_774(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_1155(bParam0, bParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_775(bool bParam0)
{
	int iVar0;

	iVar0 = -1337945352;
	if (!func_18(bParam0))
	{
		return iVar0;
	}
	if (((*Global_1347702)[bParam0 /*49*/])->f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if (((*Global_1347702)[bParam0 /*49*/])->f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[bParam0 /*49*/])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[bParam0 /*49*/])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

void func_776(bool bParam0)
{
	if (((*Global_1347702)[bParam0 /*49*/])->f_12 & 1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[bParam0 /*49*/])->f_37, -1986290853);
		switch (bParam0)
		{
			case 140:
			case 142:
				MAP::_0x662D364ABF16DE2F(((*Global_1347702)[bParam0 /*49*/])->f_37, 495758964);
				break;
		}
	}
}

int func_777(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_778(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_779(int iParam0)
{
	if (!func_20(iParam0))
	{
		return -1;
	}
	return func_1156(func_56(iParam0));
}

void func_780(int iParam0, int iParam1)
{
	if (!func_20(iParam0))
	{
		return;
	}
	func_1157(iParam0, iParam1);
}

void func_781(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_1154(iParam0);
	*uParam1 = func_57(iParam0);
	*uParam2 = func_1156(iParam0);
}

int func_782(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_762(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

void func_783(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_784(bool bParam0)
{
	vector3 vVar0;

	if (!VOLUME::_DOES_VOLUME_EXIST(bParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(bParam0) };
	func_664(vVar0, 0);
}

void func_785(var uParam0)
{
	*uParam0 = 0;
}

void func_786(bool bParam0)
{
	if (func_1158(179) || func_1158(180))
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[bParam0 /*49*/])->f_37))
		{
			if (((*Global_1347702)[bParam0 /*49*/])->f_37 == Global_1905944->f_5698)
			{
				func_453(1);
			}
		}
	}
	if (func_1159(179))
	{
		func_1160(179);
	}
	if (func_1159(180))
	{
		func_1160(180);
	}
}

int func_787(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_416(iParam0, bParam1, bParam2, bParam3))
	{
		return 1;
	}
	if (bParam1)
	{
		if (LAW::_0x0BB6DE7D23C60626(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_788(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_789(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_18(bParam0))
	{
		return;
	}
	func_1161(&(((*Global_1347702)[bParam0 /*49*/])->f_14), iParam1);
	func_1161(&(((*Global_1347702)[bParam0 /*49*/])->f_14), 2);
	func_1162(&(((*Global_1347702)[bParam0 /*49*/])->f_12), 16384);
	func_461(&(((*Global_1347702)[bParam0 /*49*/])->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_18(&(Global_40.f_450[iVar0])))
			{
				if (&Global_40.f_450[iVar0] == bParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

Vector3 func_790(bool bParam0)
{
	vector3 vVar0;

	if (!func_18(bParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1163(bParam0, &vVar0))
	{
		((*Global_1347702)[bParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[bParam0 /*49*/])->f_24;
}

void func_791(bool bParam0, bool bParam1, vector3 vParam2)
{
	if (!func_18(bParam0))
	{
		return;
	}
	if (((*Global_1347702)[bParam0 /*49*/])->f_13 & 32 != 0)
	{
		return;
	}
	else if (((*Global_1347702)[bParam0 /*49*/])->f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	func_786(bParam0);
	if (((*Global_1347702)[bParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[bParam0 /*49*/])->f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[bParam0 /*49*/])->f_37));
		}
		func_804(bParam0, func_1164(bParam0), 0, 1);
	}
	else if (((*Global_1347702)[bParam0 /*49*/])->f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[bParam0 /*49*/])->f_37));
		}
		func_804(bParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_804(bParam0, vParam2, 0, 0);
	}
	MAP::_0x662D364ABF16DE2F(((*Global_1347702)[bParam0 /*49*/])->f_37, 724623647);
	func_733(&(((*Global_1347702)[bParam0 /*49*/])->f_13), 4096);
}

int func_792(bool bParam0, int iParam1, int iParam2)
{
	switch (bParam0)
	{
		case 143:
			*iParam2 = 1754500170;
			*iParam1 = 14;
			return 1;
		default:
			break;
	}
	*iParam2 = -1600776215;
	*iParam1 = -1;
	return 0;
}

int func_793(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_523(iParam0))
	{
		return 0;
	}
	if (!func_1165(iParam1))
	{
		return 0;
	}
	if (bParam2)
	{
		return func_1166(iParam0, iParam1);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_794(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_2() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_795(int iParam0)
{
	bool bVar0;
	bool bVar1;

	switch (func_772(iParam0))
	{
		case 1:
			bVar0 = func_17(iParam0);
			return func_1167(bVar0);
		case 8:
			bVar1 = func_17(iParam0);
			if (func_19(((*Global_1347702)[bVar1 /*49*/])->f_12, 1))
			{
				return func_1168(bVar1);
			}
			break;
	}
	return -1;
}

void func_796(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_2() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_1169(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_1170();
		Global_1898077->f_9 = func_1171(Global_1894899->f_2);
		func_1172(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_797()
{
	if (!func_226(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_226(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_226(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_226(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_226(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_226(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_226(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_798(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

void func_799(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_1173(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_888(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

void func_800(int iParam0, bool bParam1)
{
	if (func_2() != -1)
	{
		return;
	}
	if (func_798(0) != iParam0)
	{
		return;
	}
	if (func_1174(iParam0))
	{
		if (bParam1)
		{
			func_1175(-525676072);
		}
		else
		{
			func_1176(-525676072);
		}
	}
}

int func_801(int iParam0)
{
	return func_1178(func_1177(iParam0));
}

int func_802(bool bParam0)
{
	int iVar0;

	if (((*Global_1347702)[bParam0 /*49*/])->f_48 == -1)
	{
		return 1;
	}
	if (((*Global_1347702)[bParam0 /*49*/])->f_47 == 0)
	{
		return 1;
	}
	iVar0 = func_1179(bParam0);
	return func_80(iVar0, 1);
}

bool func_803(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 81);
}

void func_804(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_18(bParam0))
	{
		return;
	}
	if (((*Global_1347702)[bParam0 /*49*/])->f_13 & 256 != 0 && func_14(0, 0, 1))
	{
		return;
	}
	if (((*Global_1347702)[bParam0 /*49*/])->f_12 & 16 != 0)
	{
		return;
	}
	if (((*Global_1347702)[bParam0 /*49*/])->f_36 == 0)
	{
		return;
	}
	if (func_6(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[bParam0 /*49*/])->f_37))
	{
		return;
	}
	((*Global_1347702)[bParam0 /*49*/])->f_38 = func_775(bParam0);
	if (!bParam5 && func_1180(bParam0))
	{
		((*Global_1347702)[bParam0 /*49*/])->f_37 = MAP::_BLIP_ADD_FOR_RADIUS(((*Global_1347702)[bParam0 /*49*/])->f_38, func_1164(bParam0), ((*Global_1347702)[bParam0 /*49*/])->f_18);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[bParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[bParam0 /*49*/])->f_37, ((*Global_1347702)[bParam0 /*49*/])->f_36, true);
	}
	else
	{
		((*Global_1347702)[bParam0 /*49*/])->f_37 = MAP::_BLIP_ADD_FOR_COORD(((*Global_1347702)[bParam0 /*49*/])->f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[bParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[bParam0 /*49*/])->f_37, ((*Global_1347702)[bParam0 /*49*/])->f_36, true);
	}
	if (bParam0 == 61)
	{
		func_885(8);
	}
	else if (bParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[bParam0 /*49*/])->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (bParam0 == 95)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[bParam0 /*49*/])->f_37, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[bParam0 /*49*/])->f_37, "BLIP_RHMRB");
	}
	else if (bParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[bParam0 /*49*/])->f_37, "BLIP_RCFSH");
	}
	else if (bParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[bParam0 /*49*/])->f_37, "BLIP_RCDIN");
	}
	else if (bParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[bParam0 /*49*/])->f_37, "BLIP_RCRKF");
	}
	else if ((((bParam0 == 44 || bParam0 == 45) || bParam0 == 46) || bParam0 == 47) || bParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[bParam0 /*49*/])->f_37, "BLIP_RCEXO");
	}
	func_1181(bParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[bParam0 /*49*/])->f_37, 64, bParam0);
	if (func_2() == -1)
	{
		func_776(bParam0);
		iVar0 = func_432(Global_40.f_4283);
		if (func_327(iVar0) && func_433(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			bVar1 = true;
			bVar2 = func_434(iVar0);
		}
		if (func_1155(bParam0, bVar1, iVar0))
		{
			func_436(((*Global_1347702)[bParam0 /*49*/])->f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::_0x66F35DD9D2B58579() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (((*Global_1347702)[bParam0 /*49*/])->f_13 & 1 == 0)
	{
		func_733(&(((*Global_1347702)[bParam0 /*49*/])->f_13), 1);
		if (((!func_1180(bParam0) || func_19(((*Global_1347702)[bParam0 /*49*/])->f_12, 1)) || func_19(((*Global_1347702)[bParam0 /*49*/])->f_12, 512)) || func_460(((*Global_1347702)[bParam0 /*49*/])->f_13, 2048))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[bParam0 /*49*/])->f_37, 580546400);
		}
	}
	if (((*Global_1347702)[bParam0 /*49*/])->f_13 & 32768 == 0)
	{
		if ((((*Global_1347702)[bParam0 /*49*/])->f_36 == joaat("BLIP_RC") && ((*Global_1347702)[bParam0 /*49*/])->f_12 & 1 == 0) && ((*Global_1347702)[bParam0 /*49*/])->f_12 & 2 != 0)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[bParam0 /*49*/])->f_37, -211388321);
		}
		else
		{
			func_733(&(((*Global_1347702)[bParam0 /*49*/])->f_13), 32768);
		}
	}
	if (((*Global_1347702)[bParam0 /*49*/])->f_12 & 8 != 0 && Global_40.f_490.f_402[bParam0] & 2 == 0)
	{
		if (func_1182(bParam0))
		{
			if (bParam0 == 97)
			{
				func_293(185, 0);
			}
			else
			{
				func_293(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[bParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[bParam0 /*49*/])->f_37;
			((*Global_1347702)[bParam0 /*49*/])->f_40 = func_441(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_470(bParam0, 2);
	}
}

int func_805(bool bParam0, bool bParam1)
{
	if (bParam0 == 22 || bParam0 == 23)
	{
		return joaat("BLIP_SCM_DORKINS");
	}
	else if (bParam0 == 26)
	{
		return joaat("BLIP_RC_CALLOWAY");
	}
	else if ((bParam0 == 30 || bParam0 == 33) || bParam0 == 36)
	{
		return joaat("BLIP_RC_CHAIN_GANG");
	}
	else if (bParam0 == 53 || bParam0 == 55)
	{
		return joaat("BLIP_RC_CRACKPOT");
	}
	else if (bParam0 == 58)
	{
		return joaat("BLIP_SHOP_DOCTOR");
	}
	else if (bParam0 == 60 || bParam0 == 61)
	{
		return joaat("BLIP_SCM_STRAUSS");
	}
	else if ((bParam0 == 71 || bParam0 == 74) || bParam0 == 75)
	{
		return joaat("BLIP_SCM_EVELYN");
	}
	else if (bParam0 == 77)
	{
		return joaat("BLIP_RC_ART");
	}
	else if (bParam0 == 82 || bParam0 == 83)
	{
		return joaat("BLIP_AMBIENT_GANG_LEADER");
	}
	else if (bParam0 == 89)
	{
		return joaat("BLIP_RC_KITTY");
	}
	else if (bParam0 == 101)
	{
		return joaat("BLIP_RC_ALBERT");
	}
	else if (bParam0 == 115)
	{
		return joaat("BLIP_SCM_EAGLE_FLIES");
	}
	else if ((bParam0 == 117 || bParam0 == 118) || bParam0 == 119)
	{
		return joaat("BLIP_RC_OH_BROTHER");
	}
	else if (bParam0 == 121)
	{
		if (bParam1 || func_226(((*Global_1347702)[bParam0 /*49*/])->f_15, 1))
		{
			return joaat("BLIP_RC_OBEDIAH_HINTON");
		}
	}
	else if (bParam0 == 127)
	{
		return joaat("BLIP_RC_LIGHTNING");
	}
	else if (bParam0 == 136)
	{
		return joaat("BLIP_RC_SLAVE_CATCHER");
	}
	else if (bParam0 == 143)
	{
		return joaat("BLIP_RC_ODD_FELLOWS");
	}
	else if (bParam0 == 147)
	{
		if (bParam1 || func_226(((*Global_1347702)[bParam0 /*49*/])->f_15, 1))
		{
			return joaat("BLIP_RC_WAR_VETERAN");
		}
	}
	if (bParam0 == 151)
	{
		return -1176045274 /* GXTEntry: "William" */;
	}
	return ((*Global_1347702)[bParam0 /*49*/])->f_36;
}

var func_806(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

var func_807(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

int func_808(int iParam0)
{
	if (func_772(iParam0) == 1)
	{
		return func_17(iParam0);
	}
	return -1;
}

int func_809(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_1183())
	{
		iVar2 = func_1183();
	}
	iVar5 = func_1184(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_56(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_56(iVar6) == 0)
			{
				return func_1185(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_56(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_56(iVar6) == 0)
			{
				return func_1185(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_1185(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

void func_810(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_6 = iParam1;
}

int func_811(bool bParam0, int iParam1)
{
	int iVar0;

	if (!bParam0 && func_641(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (LAW::_0x76CF93D4B416B288(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN")) < 2)
	{
		iVar0 = (LAW::_0x76CF93D4B416B288(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN")) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), iVar0);
	func_347(bParam0);
	return 1;
}

void func_812()
{
	struct<15> Var0;
	bool bVar17;
	bool bVar18;

	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	bVar17 = false;
	while (bVar17 < 27)
	{
		if (func_250(bVar17))
		{
			bVar18 = func_446(bVar17);
			if (ENTITY::DOES_ENTITY_EXIST(bVar18))
			{
				Var0.f_14 = bVar18;
				Var0.f_3 = bVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		bVar17++;
	}
	Global_1359489->f_58 = -15;
	func_1136(&(Global_1359489->f_55));
	if (func_883(1777191912, 1))
	{
		func_1186(1777191912, 1, 0);
	}
}

void func_813(int iParam0)
{
	if (!func_20(iParam0))
	{
		return;
	}
	func_1188(iParam0, (func_1187(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

bool func_814()
{
	return func_1189() > 0;
}

void func_815(bool bParam0, int iParam1, int iParam2)
{
	switch (bParam0)
	{
		case 67:
			func_1139(joaat("JOURNAL_ENTRY_CHAP8_ABIGAIL2X1_1"), iParam1);
			break;
		case 18:
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_4"), iParam1);
			func_1139(joaat("JOURNAL_GT_BRAITHWAITES_1"), iParam1);
			break;
		case 20:
			func_1139(joaat("JOURNAL_GT_BRAITHWAITES_2"), iParam1);
			break;
		case 2:
			func_1139(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_4"), iParam1);
			break;
		case 23:
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_3"), iParam1);
			func_1140(1);
			break;
		case 16:
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_2_TXT"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_3_TXT"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_4"), iParam1);
			break;
		case 59:
			func_1139(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_2"), iParam1);
			if (func_1190(146))
			{
				func_1139(joaat("JOURNAL_RC_TREASURE2_JN"), iParam1);
			}
			func_1140(1);
			break;
		case 76:
			func_1139(joaat("JOURNAL_ENTRY_CHAP9_FINALE2_1"), iParam1);
			if (func_1191() == 0)
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9A"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_10B"), iParam1);
			}
			break;
		case 44:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_GANG1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_GANG1_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_GANG1_3"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4B"), iParam1);
			break;
		case 46:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_GANG3_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_GANG3_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_GANG3_4"), iParam1);
			break;
		case 17:
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_3"), iParam1);
			break;
		case 19:
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_2"), iParam1);
			func_1139(joaat("JOURNAL_GT_GRAYS_2"), iParam1);
			break;
		case 21:
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_2"), iParam1);
			func_1140(0);
			break;
		case 15:
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1B"), iParam1);
			break;
		case 33:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_4"), iParam1);
			break;
		case 34:
			func_1139(joaat("JOURNAL_GT_INDUSTRY_3"), iParam1);
			break;
		case 64:
			func_1139(joaat("JOURNAL_ENTRY_CHAP8_LARAMIE1_1"), iParam1);
			break;
		case 60:
			func_1139(joaat("JOURNAL_CHAP8_PRONGHORN"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP8_MARSTON1_2"), iParam1);
			break;
		case 73:
			func_1139(joaat("JOURNAL_ENTRY_CHAP9_MARSTON6_1"), iParam1);
			break;
		case 74:
			func_1139(joaat("JOURNAL_ENTRY_CHAP9_MARSTON7_1"), iParam1);
			if (func_1191() == 0)
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_4A"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_5B"), iParam1);
			}
			break;
		case 8:
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_MARY1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_MARY1_3"), iParam1);
			break;
		case 36:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MARY3_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2"), iParam1);
			if (&Global_1357515 == 0)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2A"), iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2B"), iParam1);
			}
			break;
		case 27:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB1_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB1_3"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB1_4"), iParam1);
			break;
		case 28:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB2_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB2_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB2_3"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB2_4"), iParam1);
			func_1139(joaat("JOURNAL_GT_MOB_2"), iParam1);
			break;
		case 29:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB3_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB3_2"), iParam1);
			func_1139(joaat("JOURNAL_GT_MOB_3"), iParam1);
			break;
		case 31:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB5_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB5_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB5_3"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB5_4"), iParam1);
			break;
		case 4:
			func_1139(joaat("JOURNAL_CHAP2_HORSESHOE"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_3"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_5"), iParam1);
			func_1140(0);
			break;
		case 6:
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2"), iParam1);
			if (&Global_1357515 == -1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_A"), iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_B"), iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_C"), iParam1);
			}
			break;
		case 25:
			func_1139(joaat("JOURNAL_GT_MUDTOWN_3B"), iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_1139(joaat("JOURNAL_GT_MUDTWON_5_5000"), iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1139(joaat("JOURNAL_GT_MUDTWON_5_7500"), iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1139(joaat("JOURNAL_GT_MUDTWON_5_10000"), iParam1);
			}
			break;
		case 48:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_1"), iParam1);
			if (&Global_1357515 == -1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2A"), iParam1);
			}
			if (func_1192(51))
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2B"), iParam1);
			}
			break;
		case 49:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_1"), iParam1);
			if (&Global_1357515 == 0)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2A"), iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2B"), iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2C"), iParam1);
			}
			break;
		case 58:
			func_1139(joaat("JOURNAL_GT_NATIVE_3"), iParam1);
			break;
		case 50:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON1_1"), iParam1);
			break;
		case 52:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2B"), iParam1);
			if (iParam2 == 1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A"), iParam1);
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A2"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3B"), iParam1);
			}
			break;
		case 32:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_ODRISCOLL4_1"), iParam1);
			break;
		case 47:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_MARY4_1"), iParam1);
			break;
		case 69:
			func_1139(joaat("JOURNAL_ENTRY_CHAP9_SADIE2_1"), iParam1);
			if (func_226(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_2B"), iParam1);
			}
			break;
		case 70:
			func_1139(joaat("JOURNAL_ENTRY_CHAP9_SADIE3"), iParam1);
			if (func_1191() == 0)
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_7A"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8B"), iParam1);
			}
			break;
		case 71:
			if (func_1191() == 0)
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8A"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9B"), iParam1);
			}
			break;
		case 37:
			func_1139(joaat("JOURNAL_GT_SAINT_DENIS_1"), iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1B"), iParam1);
			}
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_2"), iParam1);
			break;
		case 13:
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_3"), iParam1);
			break;
		case 53:
			func_1139(joaat("JOURNAL_GT_CORNWALL_1"), iParam1);
			break;
		case 54:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY1_1"), iParam1);
			break;
		case 56:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_3"), iParam1);
			break;
		case 57:
			func_1139(joaat("JOURNAL_GT_TRAIN_ROBBERY_4"), iParam1);
			break;
		case 22:
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_2"), iParam1);
			break;
		case 12:
			func_1139(joaat("JOURNAL_GT_UTOPIA_2"), iParam1);
			break;
		case 0:
			func_1139(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_3"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_5"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_6"), iParam1);
			break;
		case 1:
			func_1140(1);
			break;
		case 3:
			if (func_840())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4")))
				{
					func_1139(joaat("JOURNAL_GT_WINTER_4_SE"), iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4_SE")))
			{
				func_1139(joaat("JOURNAL_GT_WINTER_4"), iParam1);
			}
			break;
		default:
			break;
	}
}

void func_816(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (bParam0)
	{
		case 0:
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_3"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_4"), iParam1);
			break;
		case 1:
			func_1139(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL2X2_1"), iParam1);
			break;
		case 2:
			func_1139(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL3_1"), iParam1);
			break;
		case 9:
			func_1139(joaat("JOURNAL_CHAP9_BEECHERSHOPE"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP9_BEECHERS1X3_1"), iParam1);
			if (func_226(((*Global_1835011)[69 /*74*/])->f_1, 1))
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1A"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1B"), iParam1);
			}
			break;
		case 22:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_CALDERON1X1_1"), iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_CALLOWAY_1_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_CALLOWAY_2_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_CALLOWAY_1_JN"), iParam1);
				func_1139(joaat("JOURNAL_RC_CALLOWAY_2_JN"), iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_CALLOWAY_3_1_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_CALLOWAY_3_2_AR"), iParam1);
			}
			else if (func_1190(26))
			{
				func_1139(joaat("JOURNAL_RC_CALLOWAY_3_JN_B1"), iParam1);
				func_1139(joaat("JOURNAL_RC_CALLOWAY_3_JN_B2"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_CALLOWAY_3_JN_A"), iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_AR"), iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_AR"), iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_AR"), iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_AR"), iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_AR"), iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_AR"), iParam1);
				}
			}
			else
			{
				func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2_JN"), iParam1);
				if (&Global_1357515 == -1)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_JN"), iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_JN"), iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_JN"), iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_JN"), iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_JN"), iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_JN"), iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_JN"), iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_JN"), iParam1);
			}
			break;
		case 37:
			func_1139(joaat("JOURNAL_GT_COACH_ROB_RSC"), iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_CRKPT1_1_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_CRKPT1_2_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_CRKPT1_1_JN"), iParam1);
				func_1139(joaat("JOURNAL_RC_CRKPT1_1_JN_B"), iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_CRKPT2_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_CRKPT2_1_JN"), iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_CRKPT3_1_AR"), iParam1);
			}
			else if (func_1190(54))
			{
				func_1139(joaat("JOURNAL_RC_CRKPT3_1B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_CRKPT3_1A_JN"), iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_CIG1_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_CIG1_1_JN"), iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_DINO1_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_DINO1_1_JN"), iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_DINO2_1_AR"), iParam1);
			}
			else if (func_1190(39))
			{
				func_1139(joaat("JOURNAL_RC_DINO2_1_B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_DINO2_1_A_JN"), iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_397(((*Global_1835011)[33 /*74*/])->f_1) == 1)
				{
					func_1139(joaat("JOURNAL_RC_EXOTIC1_1B_AR_A"), iParam1);
				}
				else
				{
					func_1139(joaat("JOURNAL_RC_EXOTIC1_1A_AR_A"), iParam1);
				}
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_EXOTIC1_1_JN"), iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_EXOTIC3_1_AR_A"), iParam1);
			}
			else if (func_1190(43))
			{
				func_1139(joaat("JOURNAL_RC_EXOTIC3_1_JN_B"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_EXOTIC3_1_JN_A"), iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_FISH1_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_FISH1_1_JN"), iParam1);
			}
			break;
		case 42:
			if (func_1190(41))
			{
				func_1139(joaat("JOURNAL_RC_FISH2_1_JN_B"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_FISH2_1_JN_A"), iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_ROCKCARV1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_ROCKCARV1_JN"), iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_ROCKCARV2_AR"), iParam1);
			}
			else if (func_1190(49))
			{
				func_1139(joaat("JOURNAL_RC_ROCKCARV2_JN_B"), iParam1);
				func_1139(joaat("JOURNAL_RC_ROCKCARV2_JN_B2"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_ROCKCARV2_JN_A"), iParam1);
			}
			break;
		case 51:
			func_1139(joaat("JOURNAL_RC_TAX1_1_JN"), iParam1);
			break;
		case 58:
			if (func_226(((*Global_1347702)[23 /*49*/])->f_15, 1))
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1B"), iParam1);
			}
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_3"), iParam1);
			break;
		case 59:
			func_1139(joaat("JOURNAL_CHAP2_DOWNES1_1"), iParam1);
			break;
		case 62:
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_DOWNES2_1"), iParam1);
			break;
		case 63:
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_ODRISCOLL2_2B"), iParam1);
			func_1139(joaat("JOURNAL_GT_ODRISCOLL_2"), iParam1);
			break;
		case 65:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_3"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_4"), iParam1);
			break;
		case 66:
			func_1139(joaat("JOURNAL_CHAP3_CLEMENS"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_3"), iParam1);
			func_1140(1);
			break;
		case 67:
			func_1139(joaat("JOURNAL_CHAP4_SHADYBELLE"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_2"), iParam1);
			break;
		case 68:
			func_1139(joaat("JOURNAL_CHAP6_BEAVERHOLLOW"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2B"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_3"), iParam1);
			func_1140(0);
			break;
		case 70:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_EDITHDOWNE2_1"), iParam1);
			break;
		case 71:
			func_1139(joaat("JOURNAL_RC_MILLER1_JN"), iParam1);
			break;
		case 73:
			func_1139(joaat("JOURNAL_RC_MILLER3_JN"), iParam1);
			break;
		case 75:
			func_1139(joaat("JOURNAL_RC_MILLER4_JN"), iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_FMA1_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_FMA1_1_JN"), iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_FMA3_1_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_FMA3_2_AR"), iParam1);
			}
			else if (func_1190(78))
			{
				func_1139(joaat("JOURNAL_RC_FMA3_2_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_FMA3_1_JN"), iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_FMA4_1_AR"), iParam1);
			}
			else if (func_1190(79))
			{
				func_1139(joaat("JOURNAL_RC_FMA4_2_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_FMA4_1_JN"), iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_GUNSLINGER1_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_GUNSLINGER1_1_JN"), iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_GUNSLINGER2_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_GUNSLINGER2_1_JN"), iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_GUNSLINGER3_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_GUNSLINGER3_1_JN"), iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_GUNSLINGER5_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_GUNSLINGER5_1_JN"), iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_HKK1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_HKK1_JN"), iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_HKK4_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_HKK4B_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_HKK4_A_JN"), iParam1);
				func_1139(joaat("JOURNAL_RC_HKK4_A2_JN"), iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_HKK5_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_HKK5_JN"), iParam1);
			}
			break;
		case 94:
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_1"), iParam1);
			if (&Global_1357515 == -1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2A"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2B"), iParam1);
			}
			func_1139(joaat("JOURNAL_GT_HOME_ROB"), iParam1);
			break;
		case 99:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MARY3X1_1"), iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_MASON1_1_AR"), iParam1);
				if (&Global_1357515 == -1)
				{
					func_1139(joaat("JOURNAL_RC_MASON1_2_AR_B"), iParam1);
				}
				else
				{
					func_1139(joaat("JOURNAL_RC_MASON1_2_AR_A"), iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_1139(joaat("JOURNAL_RC_MASON1_1B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_MASON1_1A_JN"), iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_MASON2_1_AR"), iParam1);
			}
			else if (func_1190(101))
			{
				func_1139(joaat("JOURNAL_RC_MASON2_1B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_MASON2_1A_JN"), iParam1);
			}
			break;
		case 103:
			func_1139(joaat("JOURNAL_RC_MASON3_1_AR"), iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_MASON4_1_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_MASON4_2_AR"), iParam1);
			}
			else if (func_1190(103))
			{
				func_1139(joaat("JOURNAL_RC_MASON4_1B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_MASON4_1A_JN"), iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_MASON5_1_AR"), iParam1);
			}
			else if (func_1190(104))
			{
				func_1139(joaat("JOURNAL_RC_MASON5_1B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_MASON5_1A_JN"), iParam1);
			}
			break;
		case 108:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_MONROE_1"), iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_MAYOR1_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_MAYOR1_AR_B"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_MAYOR1_JN"), iParam1);
				func_1139(joaat("JOURNAL_RC_MAYOR1B_JN"), iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_MAYOR2_AR"), iParam1);
			}
			else if (func_1190(109))
			{
				func_1139(joaat("JOURNAL_RC_MAYOR2B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_MAYOR2A_JN"), iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_1139(joaat("JOURNAL_RC_MAYOR3A_AR"), iParam1);
				}
				else
				{
					func_1139(joaat("JOURNAL_RC_MAYOR3B_AR"), iParam1);
				}
			}
			else if (func_1190(110))
			{
				if (&Global_1357515 == 0)
				{
					func_1139(joaat("JOURNAL_RC_MAYOR3C_JN"), iParam1);
				}
				else
				{
					func_1139(joaat("JOURNAL_RC_MAYOR3D_JN"), iParam1);
					func_1139(joaat("JOURNAL_RC_MAYOR3D_2_JN"), iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_1139(joaat("JOURNAL_RC_MAYOR3A_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_MAYOR3B_JN"), iParam1);
				func_1139(joaat("JOURNAL_RC_MAYOR3B_2_JN"), iParam1);
			}
			break;
		case 115:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_2"), iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_ODDF1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_ODDF1_JN"), iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_ODDF2_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_ODDF2_JN"), iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_OHBRO1_1_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_OHBRO1_2_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_OHBRO1_1_JN"), iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_OHBRO2_1_AR"), iParam1);
			}
			else if (func_1190(117))
			{
				func_1139(joaat("JOURNAL_RC_OHBRO2_1B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_OHBRO2_1A_JN"), iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_OHBRO3_1_AR"), iParam1);
			}
			else if (func_1190(118))
			{
				func_1139(joaat("JOURNAL_RC_OHBRO3_2B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_OHBRO3_2A_JN"), iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_PW1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_PW1_JN"), iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_PW3_AR"), iParam1);
			}
			else if (func_1190(121))
			{
				func_1139(joaat("JOURNAL_RC_PW3B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_PW3A_JN"), iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_PW4_AR"), iParam1);
			}
			else if (func_1190(122))
			{
				func_1139(joaat("JOURNAL_RC_PW4B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_PW4A_JN"), iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_PW5_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_PW5B_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_PW5_JN"), iParam1);
				func_1139(joaat("JOURNAL_RC_PW5B_JN"), iParam1);
			}
			break;
		case 127:
			func_1139(joaat("JOURNAL_RC_RTL1_AR"), iParam1);
			break;
		case 129:
			func_1139(joaat("JOURNAL_RC_RTL3_AR"), iParam1);
			break;
		case 131:
			func_1139(joaat("JOURNAL_RC_RTL5_AR"), iParam1);
			break;
		case 133:
			func_1139(joaat("JOURNAL_RC_RTL7_AR"), iParam1);
			break;
		case 134:
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_SADIE1_1"), iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_1139(joaat("JOURNAL_RC_KILLER4A_AR"), iParam1);
				}
				else
				{
					func_1139(joaat("JOURNAL_RC_KILLER4B_AR"), iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER1_AR")) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER2_AR"))) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER3_AR")))
			{
				if (&Global_1357515 == -1)
				{
					func_1139(joaat("JOURNAL_RC_KILLER4A_JN"), iParam1);
				}
				else
				{
					func_1139(joaat("JOURNAL_RC_KILLER4B_JN"), iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_1139(joaat("JOURNAL_RC_KILLER4C_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_KILLER4D_JN"), iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_SLVC1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_SLVC1_JN"), iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_SLVC2_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_SLVC3A_AR"), iParam1);
			}
			else if (func_1190(136))
			{
				func_1139(joaat("JOURNAL_RC_SLVC2B_JN"), iParam1);
				func_1139(joaat("JOURNAL_RC_SLVC3C_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_SLVC2A_JN"), iParam1);
				func_1139(joaat("JOURNAL_RC_SLVC3A_JN"), iParam1);
			}
			break;
		case 142:
			if (iParam2 == 1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3A"), iParam1);
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3B"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3C"), iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_1139(joaat("JOURNAL_RC_TREASURE1A_AR"), iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1139(joaat("JOURNAL_RC_TREASURE1B_AR"), iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_1139(joaat("JOURNAL_RC_TREASURE1A_JN"), iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1139(joaat("JOURNAL_RC_TREASURE1B_JN"), iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_WARVET1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_WARVET1_JN"), iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_WARVET2_AR"), iParam1);
			}
			else if (func_1190(147))
			{
				func_1139(joaat("JOURNAL_RC_WARVET2B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_WARVET2A_JN"), iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_WARVET3_AR"), iParam1);
			}
			else if (func_1190(148))
			{
				func_1139(joaat("JOURNAL_RC_WARVET3B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_WARVET3A_JN"), iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_WARVET4_AR"), iParam1);
			}
			else if (func_1190(149))
			{
				func_1139(joaat("JOURNAL_RC_WARVET4B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_WARVET4A_JN"), iParam1);
			}
			break;
		default:
			break;
	}
}

int func_817(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_772(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_808(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				case 1:
					return -694047360;
				case 2:
					return -757336127;
				case 3:
					return -164763388;
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				case 5:
					return 2030928096;
				case 6:
					return -332258016;
				case 10:
					return 1817180056;
				case 13:
					return 545240164;
				case 15:
					return 1141344854;
				case 8:
					return 1796786552;
				case 25:
					return 1783253542;
				case 14:
					return -2129915369;
				case 7:
					return -1393633441;
				case 9:
					if (func_397(((*Global_1835011)[9 /*74*/])->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				case 11:
					return 278608719;
				case 12:
					return -561040434;
				case 16:
					return 95619635;
				case 17:
					return 1185998732;
				case 53:
					return -221923309;
				case 18:
					return -620369863;
				case 19:
					return -1738185394;
				case 20:
					return -637873918;
				case 22:
					return 561912024;
				case 23:
					return 951007010;
				case 24:
					return -1512720465;
				case 21:
					return 920901415;
				case 26:
					return -1664107227;
				case 27:
					return -1934704933;
				case 28:
					return -582523927;
				case 29:
					return -259827569;
				case 30:
					return -1633236438;
				case 31:
					return -1396074730;
				case 32:
					return -248683070;
				case 33:
					return 1454698172;
				case 34:
					return -1548165899;
				case 35:
					return -1486701482;
				case 36:
					return 1249990864;
				case 37:
					return -164125056;
				case 38:
					return -1198456774;
				case 39:
					return -820014425;
				case 40:
					return -2071373019;
				case 41:
					return -162152912;
				case 42:
					return -532430534;
				case 43:
					return -695655810;
				case 44:
					return -1238376790;
				case 45:
					return 1927460276;
				case 46:
					return 1824331150;
				case 47:
					return 1888528254;
				case 48:
					return 1971155641;
				case 49:
					return -1757085331;
				case 50:
					return 1264235360;
				case 51:
					return 1157034909;
				case 52:
					return 512067206;
				case 54:
					return -258855820;
				case 55:
					return 2143139308;
				case 56:
					return -18183703;
				case 57:
					return 692218123;
				case 58:
					return 127002552;
				case 59:
					return 1769573516;
				case 60:
					return 501194998;
				case 61:
					return -219249641;
				case 62:
					return 1935952956;
				case 63:
					return 121222228;
				case 64:
					return -1381943684;
				case 65:
					return -1417145007;
				case 66:
					return -314300362;
				case 67:
					return -445710060;
				case 68:
					return 122725574;
				case 69:
					return -935212592;
				case 70:
					return -597010176;
				case 71:
					return 534386033;
				case 72:
					return -330340613;
				case 73:
					return 1425403638;
				case 74:
					return 124507607;
				case 75:
					return 747937920;
				case 76:
					return 1636680094;
			}
			break;
		case 8:
			bVar2 = func_17(iParam0);
			switch (bVar2)
			{
				case 120:
					return -895048976;
				case 0:
					return -172442174;
				case 63:
					return 569547151;
				case 97:
					return 1150653348;
				case 98:
					return -2075517304;
				case 94:
					return -1048889581;
				case 59:
					return 2137967386;
				case 61:
					return -1955429862;
				case 62:
					return 1899640864;
				case 112:
					return 1469701481;
				case 113:
					return -954047483;
				case 114:
					return -1868521635;
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				case 76:
					return 281905065;
				case 134:
					return 1132574871;
				case 3:
					return 709886296;
				case 5:
					return -1646431667;
				case 21:
					return 2143106360;
				case 37:
					return 1073595144;
				case 138:
					return -1582252733;
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				case 106:
					return 195634974;
				case 107:
					return 1508162848;
				case 115:
					return -1971110347;
				case 116:
					return 446631778;
				case 22:
					return 1909655985;
				case 23:
					return -303175962;
				case 82:
					return 437096661;
				case 68:
					*uParam1 = -2060316038;
					return 1046168872;
				case 140:
					return 1593516439;
				case 142:
					return 1234351222;
				case 58:
					return -1988547710;
				case 64:
					return 98434060;
				case 65:
					return 1937922313;
				case 108:
					return -713369135;
				case 8:
					return -1538781541;
				case 10:
					return -925475803;
				case 2:
					return -1479860879;
				case 96:
					return -1025265051;
				case 52:
					return -270246276;
				default:
					break;
			}
			break;
		case 11:
			bVar3 = func_17(iParam0);
			switch (bVar3)
			{
				case 581819093:
					return -1202860612;
				case -1220302226:
					return 703663141;
				case -839878969:
					return 1534808110;
				case -360730635:
					return -742985447;
				case 687859577:
					return -331451824;
				case 1202375449:
					return 1344816618;
				case -1891229662:
					return 597768834;
				case -668333238:
					return -120359954;
				case 99378894:
					return -290258665;
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_818(bool bParam0, int iParam1)
{
	*iParam1 = 0;
	switch (bParam0)
	{
		case 68:
			*iParam1 = 35;
			return 70;
		case 76:
			*iParam1 = 35;
			return 70;
		case 70:
			*iParam1 = 35;
			return 70;
		case 73:
			*iParam1 = 35;
			return 70;
		case 19:
			*iParam1 = 25;
			return 50;
		case 21:
			*iParam1 = 35;
			return 70;
		case 60:
			*iParam1 = 35;
			return 70;
		case 61:
			*iParam1 = 35;
			return 70;
		case 62:
			*iParam1 = 35;
			return 70;
		case 63:
			*iParam1 = 35;
			return 70;
		case 64:
			*iParam1 = 35;
			return 70;
		case 65:
			*iParam1 = 35;
			return 70;
		case 66:
			*iParam1 = 35;
			return 70;
		case 67:
			*iParam1 = 35;
			return 70;
		case 32:
			*iParam1 = 35;
			return 70;
		case 48:
			*iParam1 = 35;
			return 70;
		case 49:
			*iParam1 = 35;
			return 70;
		case 47:
			*iParam1 = 30;
			return 60;
		case 58:
			*iParam1 = 30;
			return 60;
		case 27:
			*iParam1 = 30;
			return 60;
		case 29:
			*iParam1 = 40;
			return 100;
		case 30:
			*iParam1 = 50;
			return 100;
		case 33:
			*iParam1 = 30;
			return 60;
		case 23:
			*iParam1 = 30;
			return 60;
		case 10:
			*iParam1 = 30;
			return 60;
		case 5:
			*iParam1 = 45;
			return 60;
		case 11:
			*iParam1 = 35;
			return 70;
		case 9:
			*iParam1 = 45;
			return 70;
		case 15:
			*iParam1 = 15;
			return 35;
		case 35:
			*iParam1 = 50;
			return 70;
		case 8:
			*iParam1 = 50;
			return 100;
		case 36:
			*iParam1 = 40;
			return 80;
		case 22:
			*iParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*iParam1 = 20;
			return 40;
	}
	return 120;
}

int func_819(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_820(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

void func_821(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_1193(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

int func_822(bool bParam0, int iParam1)
{
	*iParam1 = 0;
	switch (bParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		case 60:
			*iParam1 = 0;
			return 0;
		case 74:
			*iParam1 = 45;
			return 75;
		case 119:
			*iParam1 = 45;
			return 75;
		case 84:
			*iParam1 = 45;
			return 75;
		case 85:
			*iParam1 = 45;
			return 75;
		case 106:
			*iParam1 = 20;
			return 35;
		case 107:
			*iParam1 = 20;
			return 35;
		case 8:
			*iParam1 = 45;
			return 75;
		case 9:
			*iParam1 = 45;
			return 75;
		case 10:
			*iParam1 = 45;
			return 75;
		case 98:
			*iParam1 = 30;
			return 50;
		case 82:
			*iParam1 = 30;
			return 50;
		case 83:
			*iParam1 = 30;
			return 50;
		case 99:
			*iParam1 = 30;
			return 50;
		case 138:
			*iParam1 = 30;
			return 50;
		case 139:
			*iParam1 = 30;
			return 50;
		case 140:
			*iParam1 = 30;
			return 50;
		case 141:
			*iParam1 = 30;
			return 50;
		case 142:
			*iParam1 = 30;
			return 50;
		case 21:
			*iParam1 = 30;
			return 50;
		case 136:
			*iParam1 = 30;
			return 50;
		case 137:
			*iParam1 = 40;
			return 80;
		case 124:
			*iParam1 = 30;
			return 50;
		case 125:
			*iParam1 = 30;
			return 50;
		case 127:
			*iParam1 = 30;
			return 50;
		case 128:
			*iParam1 = 30;
			return 50;
		case 131:
			*iParam1 = 30;
			return 50;
		case 133:
			*iParam1 = 30;
			return 50;
		case 105:
			*iParam1 = 30;
			return 50;
		case 89:
			*iParam1 = 30;
			return 50;
		case 93:
			*iParam1 = 30;
			return 50;
		case 75:
			*iParam1 = 30;
			return 50;
		case 5:
			*iParam1 = 50;
			return 100;
		case 6:
			*iParam1 = 30;
			return 50;
		case 77:
			*iParam1 = 30;
			return 50;
		case 78:
			*iParam1 = 30;
			return 50;
		case 30:
			*iParam1 = 30;
			return 50;
		case 31:
			*iParam1 = 30;
			return 50;
		case 32:
			*iParam1 = 30;
			return 50;
		case 33:
			*iParam1 = 30;
			return 50;
		case 34:
			*iParam1 = 30;
			return 50;
		case 35:
			*iParam1 = 30;
			return 50;
		case 36:
			*iParam1 = 30;
			return 50;
		case 24:
			*iParam1 = 30;
			return 50;
		case 25:
			*iParam1 = 30;
			return 50;
		case 26:
			*iParam1 = 30;
			return 50;
		case 27:
			*iParam1 = 30;
			return 50;
		case 28:
			*iParam1 = 30;
			return 50;
		case 66:
			*iParam1 = 30;
			return 50;
		case 67:
			*iParam1 = 50;
			return 100;
		case 146:
			*iParam1 = 30;
			return 50;
		case 38:
			*iParam1 = 30;
			return 45;
		case 39:
			*iParam1 = 30;
			return 45;
		case 40:
			*iParam1 = 30;
			return 45;
		case 41:
			*iParam1 = 30;
			return 45;
		case 42:
			*iParam1 = 30;
			return 45;
		case 43:
			*iParam1 = 30;
			return 45;
		case 44:
			*iParam1 = 30;
			return 45;
		case 45:
			*iParam1 = 30;
			return 45;
		case 46:
			*iParam1 = 30;
			return 45;
		case 47:
			*iParam1 = 30;
			return 45;
		case 48:
			*iParam1 = 30;
			return 45;
		case 49:
			*iParam1 = 30;
			return 45;
		case 50:
			*iParam1 = 30;
			return 45;
		case 51:
			*iParam1 = 30;
			return 45;
		case 112:
			*iParam1 = 10;
			return 20;
		case 113:
			*iParam1 = 25;
			return 45;
		case 114:
			*iParam1 = 10;
			return 20;
		case 59:
			*iParam1 = 15;
			return 35;
		case 61:
			*iParam1 = 15;
			return 35;
		case 97:
			*iParam1 = 15;
			return 35;
		case 94:
			*iParam1 = 20;
			return 30;
		case 0:
			*iParam1 = 45;
			return 75;
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

int func_823(bool bParam0)
{
	switch (bParam0)
	{
		case 57:
		case 125:
		case 150:
			return 1;
	}
	return 0;
}

void func_824(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_2() != -1)
	{
		return;
	}
	if ((Global_36615 && func_1194(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_1195(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_1196(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_1197(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_1196(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_825(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_826()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(13);
		(*Global_1898441)[iVar0 /*38*/] = 13;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_WIN2_COM", 24);
	}
}

void func_827()
{
	if (func_2() != -1)
	{
		return;
	}
	func_1199();
	func_1200();
	func_1201();
	func_1202();
	func_1203();
	func_1204();
	func_1205();
}

void func_828(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_299(iParam0, 1, 1, -142743235, 1);
	if (func_1206(iParam0))
	{
		func_1072(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_700(func_1207(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_1208(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1 /*11*/];
		*(Global_1946804->f_1616.f_1[iVar1 /*3*/]) = { vVar4 };
		(Global_1946804->f_1616.f_1[iVar1 /*3*/])->f_2 = ((Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
		iVar1++;
	}
	if (func_693() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_1209(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_1209(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_1210(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_1210(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_1210(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_1210(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_1210(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_1210(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_1210(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_1210(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_1210(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_1211(iVar8, iVar0))
				{
					func_1212(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_1211(iVar8, iVar0))
		{
			func_1212(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
			{
				*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
		{
			*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
		if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar1 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar1 /*3*/]) };
		iVar1++;
	}
}

void func_829()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1211(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_693() == -2125499975 || func_693() == -449205311)
			{
				vVar2.x = joaat("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
				vVar2.f_1 = 1530758430;
				func_1212(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = joaat("BASE");
				func_1212(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = joaat("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5 /*11*/] == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/]) = { vVar2 };
	}
}

void func_830()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(14);
		(*Global_1898441)[iVar0 /*38*/] = 14;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_831(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_226(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_226(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_467(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_883(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_832(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_700(iParam0, 1);
	func_1213(Global_1946804->f_1497.f_1[iVar0 /*3*/], 2, 6);
	func_1213(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
		(Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1 = 0;
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		if (bParam2)
		{
			func_325(17, iParam0, 0, 0, 0);
		}
	}
	if (func_2() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1213((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1213((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_833()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(17);
		(*Global_1898441)[iVar0 /*38*/] = 17;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA2_COM", 24);
	}
}

void func_834()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(18);
		(*Global_1898441)[iVar0 /*38*/] = 18;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA3_COM", 24);
	}
}

int func_835(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;

	if (iParam3 == -358215195)
	{
		Var0 = { func_698(iParam1, 1, 0) };
		iParam3 = func_699(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_1214(iParam3);
	return func_362(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

int func_836(int iParam0, int iParam1)
{
	if (!func_1215(iParam0))
	{
		return 0;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_1216(iParam0);
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	return func_1217(Global_40.f_9910[iParam1 /*6*/], 4);
}

void func_837(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_1215(iParam0))
	{
		return;
	}
	if (!func_71(iParam1))
	{
		return;
	}
	if (func_80(iParam1, 1))
	{
		return;
	}
	iVar0 = func_1216(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_836(iParam0, -1))
	{
		return;
	}
	else
	{
		func_1218(Global_40.f_9910[iVar0 /*6*/], 2);
	}
	(Global_40.f_9910[iVar0 /*6*/])->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_14(0, 0, 1))
		{
			func_510(0, 17);
		}
	}
}

void func_838()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(19);
		(*Global_1898441)[iVar0 /*38*/] = 19;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MOB5_COM", 24);
	}
}

void func_839()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(20);
		(*Global_1898441)[iVar0 /*38*/] = 20;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_840()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

void func_841()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(21);
		(*Global_1898441)[iVar0 /*38*/] = 21;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA1_COM", 24);
	}
}

void func_842()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(22);
		(*Global_1898441)[iVar0 /*38*/] = 22;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA3_COM", 24);
	}
}

void func_843()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(24);
		(*Global_1898441)[iVar0 /*38*/] = 24;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ODR5_COM", 24);
	}
}

void func_844()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(25);
		(*Global_1898441)[iVar0 /*38*/] = 25;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN1_COM", 24);
	}
}

void func_845()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(27);
		(*Global_1898441)[iVar0 /*38*/] = 27;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MAR51_COM", 24);
	}
}

void func_846()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(28);
		(*Global_1898441)[iVar0 /*38*/] = 28;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_847(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_848(int iParam0)
{
	return (Global_40.f_12018.f_4 && iParam0) != 0;
}

void func_849(int iParam0)
{
	if (func_6(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_1005(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_1005(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_850()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(29);
		(*Global_1898441)[iVar0 /*38*/] = 29;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BEE22_COM", 24);
	}
}

void func_851()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(26);
		(*Global_1898441)[iVar0 /*38*/] = 26;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN2_COM", 24);
	}
}

void func_852()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(23);
		(*Global_1898441)[iVar0 /*38*/] = 23;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOC_COM", 24);
	}
}

void func_853()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(15);
		(*Global_1898441)[iVar0 /*38*/] = 15;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOW3_COM", 24);
	}
}

void func_854()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(16);
		(*Global_1898441)[iVar0 /*38*/] = 16;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DUT1_COM", 24);
	}
}

void func_855()
{
	if (func_1219() > 1)
	{
		func_1220();
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_BAND_ROOT")))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_BAND_ROOT"), true);
			func_293(444, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HERB_ROOT")))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HERB_ROOT"), true);
			func_293(447, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HORSE_ROOT")))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HORSE_ROOT"), true);
			func_293(448, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SHOT_ROOT")))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SHOT_ROOT"), true);
			func_293(450, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_WEAP_ROOT")))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_WEAP_ROOT"), true);
			func_293(452, 1);
		}
	}
}

bool func_856(bool bParam0)
{
	return func_870(bParam0, 4, 1);
}

void func_857(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_759(joaat("BANK_DEBT_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_858(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (func_6(32768))
	{
		return;
	}
	if (!func_20(iParam0))
	{
		return;
	}
	func_888(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_772(iParam0))
	{
		case 1:
			func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS")), 1);
			bVar0 = func_17(iParam0);
			func_567(func_759(joaat("MISSIONS_PROGRESSED")), 1);
			switch (func_1167(bVar0))
			{
				case 0:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP1")), 1);
					break;
				case 1:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP2")), 1);
					break;
				case 2:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP3")), 1);
					break;
				case 3:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP4")), 1);
					break;
				case 4:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP5")), 1);
					break;
				case 5:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP6")), 1);
					break;
				case 6:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP7")), 1);
					break;
				case 7:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP8")), 1);
					break;
				case 8:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP9")), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (bVar0 == 7)
			{
				func_567(func_568(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY")), 1);
			}
			if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1835011)[bVar0 /*74*/])->f_8))))
			{
				func_567(func_568(joaat("COMPLETED"), joaat("REQUIRED_MISSIONS")), 1);
			}
			break;
		case 8:
			bVar1 = func_17(iParam0);
			if (func_19(((*Global_1347702)[bVar1 /*49*/])->f_12, 1))
			{
				func_567(func_759(joaat("MISSIONS_PROGRESSED")), 1);
			}
			if (func_19(((*Global_1347702)[bVar1 /*49*/])->f_12, 4) || bVar1 == 59)
			{
				if (func_19(((*Global_1347702)[bVar1 /*49*/])->f_12, 1))
				{
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS")), 1);
				}
				else
				{
					func_567(func_568(joaat("COMPLETED"), joaat("RC")), 1);
				}
			}
			if (func_19(((*Global_1347702)[bVar1 /*49*/])->f_12, 1))
			{
				switch (func_1168(bVar1))
				{
					case 0:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP1")), 1);
						break;
					case 1:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP2")), 1);
						break;
					case 2:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP3")), 1);
						break;
					case 3:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP4")), 1);
						break;
					case 4:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP5")), 1);
						break;
					case 5:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP6")), 1);
						break;
					case 6:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP7")), 1);
						break;
					case 7:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP8")), 1);
						break;
					case 8:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP9")), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1347702)[bVar1 /*49*/])->f_3))))
				{
					func_567(func_568(joaat("COMPLETED"), joaat("REQUIRED_MISSIONS")), 1);
				}
			}
			else if (func_19(((*Global_1347702)[bVar1 /*49*/])->f_12, 4))
			{
				if (func_19(((*Global_1347702)[bVar1 /*49*/])->f_12, 4194304))
				{
				}
				else if (!func_19(((*Global_1347702)[bVar1 /*49*/])->f_12, 512))
				{
					func_567(func_568(joaat("COMPLETED"), joaat("RC_STRANDS")), 1);
				}
				else
				{
					func_567(func_568(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY")), 1);
				}
			}
			break;
	}
}

void func_859()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_2() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_2)
	{
		return;
	}
	if (!func_3(64))
	{
		return;
	}
	else if (func_88(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_14(0, 0, 1) || func_1143()) || func_728())
	{
		return;
	}
	iVar0 = func_797();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1221(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_806(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_806(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_1088(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_510(0, -1);
	}
	if (iVar2 > 0)
	{
		func_441("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_1222(1, 0);
	Global_1956575->f_2 = 1;
}

void func_860(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_6(32768))
	{
		return;
	}
	func_688(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER")))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_1223(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_861(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 1:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 2:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 4:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 5:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 6:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 9:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 10:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 11:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		default:
			break;
	}
	return 0;
}

void func_862(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514->f_11)
	{
		iVar0 = func_863();
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		if (MISSIONDATA::_0x57E798B54C45EE1A(iVar1) != 5 && iVar0 == 5)
		{
			if (func_772(Global_1879514->f_1) == 1)
			{
				func_380(5, 1);
			}
			else if (func_772(Global_1879514->f_1) == 8 && (func_19(((*Global_1347702)[func_17(Global_1879514->f_1) /*49*/])->f_12, 1) || func_19(((*Global_1347702)[func_17(Global_1879514->f_1) /*49*/])->f_12, 33554432)))
			{
				func_380(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), 3);
	}
}

int func_863()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1224(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_1225(iVar0))
	{
		if (Global_1879514->f_18)
		{
			return Global_1879514->f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

void func_864(bool bParam0, int iParam1)
{
	Global_40.f_490.f_402[bParam0] = (&Global_40.f_490.f_402[bParam0] - (Global_40.f_490.f_402[bParam0] && iParam1));
}

void func_865(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar1 = false;
	bVar0 = false;
	while (bVar0 < &Global_1347702)
	{
		if (func_18(bVar0) && Global_1347702[bVar0 /*49*/] == iParam0)
		{
			bVar1 = true;
			func_749(bVar0, 1);
		}
		else if (bVar1)
		{
		}
		else
		{
			bVar0++;
		}
	}
}

char* func_866(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_1226(sParam1));
}

void func_867(bool bParam0, char* sParam1, char* sParam2, float fParam3)
{
	int iVar0;

	if (((*Global_1347702)[bParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_753(bParam0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_754(bParam0)))
	{
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(iVar0, func_754(bParam0), MISC::GET_HASH_KEY(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

void func_868(bool bParam0, bool bParam1)
{
	if (!func_748(bParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_753(bParam0), func_754(bParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_753(bParam0), func_754(bParam0), 2, "");
		func_470(bParam0, 16);
	}
	else
	{
		if (func_748(bParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_753(bParam0), func_754(bParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_753(bParam0), func_754(bParam0), 0, "");
		}
		func_864(bParam0, 16);
	}
}

void func_869(bool bParam0, bool bParam1)
{
	if (((*Global_1347702)[bParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_748(bParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_753(bParam0), func_754(bParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_748(bParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_753(bParam0), func_754(bParam0), 1, "");
		}
		func_470(bParam0, 8);
	}
	else
	{
		if (func_748(bParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_753(bParam0), func_754(bParam0), 0, "");
		}
		func_864(bParam0, 8);
	}
}

bool func_870(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_479(bParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[bParam0 /*60*/] && iParam1) != 0;
}

void func_871(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		func_1227(bParam1);
	}
}

bool func_872(bool bParam0, int iParam1)
{
	return (Global_40.f_4942[bParam0 /*60*/])->f_8 == iParam1;
}

int func_873(bool bParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	while (*iParam2 < 10)
	{
		if (&(Global_40.f_4942[bParam0 /*60*/])->f_11[*iParam2 /*3*/] == iParam1)
		{
			return 1;
		}
		*iParam2++;
	}
	*iParam2 = -1;
	return 0;
}

int func_874(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_1228(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return 0;
		}
	}
	if (func_1228(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(bParam0))
		{
			return 0;
		}
	}
	if (func_1228(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_1228(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return 0;
		}
	}
	if (func_1228(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return 0;
		}
	}
	if (func_1228(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(bParam0))
		{
			return 0;
		}
	}
	if (func_1228(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return 0;
		}
	}
	if (func_1228(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(bParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_875(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_479(bParam0))
	{
		return 0;
	}
	if (func_872(bParam0, iParam1))
	{
		return func_1229(bParam0);
	}
	iVar0 = -1;
	if (func_873(bParam0, iParam1, &iVar0))
	{
		return func_878(bParam0, iVar0);
	}
	return 0;
}

void func_876(bool bParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_446(bParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		PED::_0x2B4CE170DE09F346(bVar0, iParam1);
	}
	func_1230(bParam0, iParam1, 0);
}

void func_877(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	uParam0->f_2 = 0;
}

bool func_878(bool bParam0, int iParam1)
{
	if ((!func_479(bParam0) || iParam1 < 0) || iParam1 >= 10)
	{
		return false;
	}
	return MISC::IS_BIT_SET(((*Global_1360165)[bParam0 /*1157*/])->f_1155, iParam1);
}

void func_879(bool bParam0, int iParam1, bool bParam2)
{
	if ((!func_479(bParam0) || iParam1 < 0) || iParam1 >= 10)
	{
		return;
	}
	if (bParam2)
	{
		if (!MISC::IS_BIT_SET(((*Global_1360165)[bParam0 /*1157*/])->f_1155, iParam1))
		{
			MISC::SET_BIT(&(((*Global_1360165)[bParam0 /*1157*/])->f_1155), iParam1);
		}
	}
	else if (MISC::IS_BIT_SET(((*Global_1360165)[bParam0 /*1157*/])->f_1155, iParam1))
	{
		MISC::CLEAR_BIT(&(((*Global_1360165)[bParam0 /*1157*/])->f_1155), iParam1);
	}
}

void func_880(var uParam0)
{
	if ((func_874(Global_35, 0) && func_1231(*uParam0)) && PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		func_1232(*uParam0);
	}
	if ((!func_874(Global_35, 0) || !func_1231(*uParam0)) || !PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		func_877(uParam0);
	}
}

int func_881(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_479(bParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if ((Global_1357549->f_1675[iVar1 /*5*/])->f_1 == bParam0)
			{
				((*Global_1360165)[bParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
				return &(Global_1357549->f_1675[iVar1 /*5*/]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1 /*5*/] != 0 && (Global_1357549->f_1675[iVar1 /*5*/])->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1 /*5*/];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_479(bParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = bParam0;
			((*Global_1360165)[bParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

int func_882(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

int func_883(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_1233(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_884(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_885(int iParam0)
{
	switch (func_2())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

int func_886(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_887(int iParam0)
{
	int iVar0;

	if (func_1234(iParam0))
	{
		if (!func_554(45))
		{
			return 0;
		}
	}
	iVar0 = func_889(iParam0);
	if (func_70())
	{
		if (!func_226(((*Global_1835011)[3 /*74*/])->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return 1;
}

void func_888(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_889(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_890(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_7862[iParam0 /*4*/]);
	}
	return &(Global_42605[iParam0 /*4*/]);
}

int func_891(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 4:
			return 5;
		case 79:
			return 6;
		case 43:
			return 0;
		case 98:
			return 2;
		case 58:
			return 4;
		case 71:
			return 1;
		case 9:
			return 3;
		case 22:
			return 7;
		case 37:
			return 8;
		default:
			break;
	}
	return -1;
}

void func_892(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0])))
		{
			MAP::_SET_BLIP_FLASH_STYLE(&(Global_36307[iParam0]), iParam1);
		}
	}
}

void func_893(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_1235(*uParam0, -1);
		func_1236(*uParam0, 0);
		func_1237(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[*uParam0])))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[*uParam0]));
			}
			MAP::REMOVE_BLIP(Global_36307[*uParam0]);
		}
	}
	*uParam0 = -1;
}

int func_894(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_895(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_896(int iParam0)
{
	Global_40.f_4283 = iParam0;
	Global_40.f_4283.f_1 = func_432(iParam0);
}

void func_897(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_907(2097152);
			break;
		case 1:
			func_907(4194304);
			break;
		case 2:
			func_907(16777216);
			break;
		case 3:
			func_907(33554432);
			break;
		case 5:
			func_907(67108864);
			break;
		case 4:
			func_907(134217728);
			break;
		case 6:
			func_907(268435456);
			break;
		case 7:
			func_907(536870912);
			break;
		case 8:
			func_907(1073741824 /* Float: 2f */);
			break;
	}
}

void func_898()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		*(Global_1357549->f_1497.f_32[iVar0 /*5*/]) = { 0f, 0f, 0f };
		(Global_1357549->f_1497.f_32[iVar0 /*5*/])->f_3 = 0f;
		(Global_1357549->f_1497.f_32[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
	Global_1357549->f_1497.f_108 = 0;
}

int func_899(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_1050(*(Global_1357549->f_1497.f_32[iVar0 /*5*/])))
		{
			*(Global_1357549->f_1497.f_32[iVar0 /*5*/]) = { vParam0 };
			(Global_1357549->f_1497.f_32[iVar0 /*5*/])->f_3 = fParam3;
			(Global_1357549->f_1497.f_32[iVar0 /*5*/])->f_4 = iParam4;
			Global_1357549->f_1497.f_108++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_900(int iParam0)
{
	return func_901(23, iParam0);
}

int func_901(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1238(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1239())
	{
		return func_1238(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_1238(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_902(int iParam0)
{
	if (!func_327(iParam0))
	{
		return 0;
	}
	return func_710(iParam0, 8);
}

void func_903(int iParam0, int iParam1)
{
	if (!func_327(iParam0))
	{
		return;
	}
	((*Global_1888801)[iParam0 /*35*/])->f_19 = iParam1;
}

void func_904(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

void func_905(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_906()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_710(iVar1, 1))
		{
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1888801)[iVar1 /*35*/])->f_26)))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1888801)[iVar1 /*35*/])->f_26));
			}
		}
		if (((*Global_1888801)[iVar1 /*35*/])->f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1888801)[iVar1 /*35*/])->f_9, false))
			{
				if (func_2() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1888801)[iVar1 /*35*/])->f_9, 523);
				}
				else if (!SCRIPTS::_0x30BED53646C86D11(((*Global_1888801)[iVar1 /*35*/])->f_9))
				{
					SCRIPTS::_0x7DE4643157AD646C(((*Global_1888801)[iVar1 /*35*/])->f_9);
				}
			}
			else if (func_710(iVar1, 2))
			{
				if (func_2() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(((*Global_1888801)[iVar1 /*35*/])->f_26), 523);
				}
				else
				{
					SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(((*Global_1888801)[iVar1 /*35*/])->f_26)));
				}
			}
			if (!SCRIPTS::_DOES_THREAD_EXIST(((*Global_1888801)[iVar1 /*35*/])->f_9))
			{
				((*Global_1888801)[iVar1 /*35*/])->f_9 = 0;
				func_659(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

void func_907(int iParam0)
{
	switch (func_2())
	{
		case -1:
			Global_40.f_4283.f_2 = (Global_40.f_4283.f_2 || iParam0);
			break;
	}
}

int func_908(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_909(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FLOW"):
			return 7;
		case 1784174017:
			return 8;
		case joaat("VIGNETTE"):
			return 10;
		case 2051438686:
			return 11;
		case joaat("BASE"):
			return 1;
		case 1871598:
			return 9;
		case joaat("EVENT"):
			return 6;
		case 1059981727:
			return 2;
		case joaat("GRIEFING"):
			return 4;
		case 1191674135:
			return 3;
		case -112322057:
			return 12;
		case -823778732:
			return 25;
		case 1338623152:
			return 16;
		case 1401247110:
			return 20;
		case 1007627076:
			return 13;
		case 864606355:
			return 31;
		case 1338525796:
			return 18;
		case -2076625074:
			return 26;
		case -288774278:
			return 15;
		case 1934998953:
			return 14;
		case -1148482643:
			return 32;
		case 603776282:
			return 22;
		case 1339344423:
			return 27;
		case 1562395675:
			return 19;
		case 1316832864:
			return 28;
		case -1619448191:
			return 29;
		case -520130198:
			return 24;
		case 1418253584:
			return 30;
		case -348149883:
			return 33;
		case 814591385:
			return 34;
		case 981348373:
			return 17;
		case -1100417366:
			return 35;
		case 1438856241:
			return 23;
		case -1989143022:
			return 21;
		default:
			break;
	}
	return 0;
}

int func_910(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_911(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1240(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_912(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1993529370:
			return 14;
		case -1910231185:
			return 27;
		case -1779466334:
			return 30;
		case -1751068532:
			return 19;
		case -1600776215:
			return 0;
		case -1403291038:
			return 13;
		case -1350098362:
			return 28;
		case -1132827806:
			return 18;
		case -1066004925:
			return 36;
		case -586199837:
			return 23;
		case -529686691:
			return 20;
		case -505280232:
			return 29;
		case -423064657:
			return 9;
		case -415041951:
			return 3;
		case -316764041:
			return 15;
		case -156236308:
			return 1;
		case -115118166:
			return 8;
		case -27924880:
			return 4;
		case 0:
			return 38;
		case 508286680:
			return 5;
		case 557524588:
			return 11;
		case 623901469:
			return 16;
		case 651189962:
			return 31;
		case 830459706:
			return 25;
		case 1274330613:
			return 22;
		case 1302444626:
			return 34;
		case 1398684735:
			return 26;
		case 1556254948:
			return 2;
		case 1570236479:
			return 6;
		case 1590600971:
			return 10;
		case 1598344177:
			return 21;
		case 1601295776:
			return 33;
		case 1618820662:
			return 32;
		case 1754500170:
			return 35;
		case 1763394652:
			return 17;
		case 1792646445:
			return 12;
		case 1831828781:
			return 24;
		case 1843135693:
			return 7;
		case 1869671285:
			return 37;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_913(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1600776215;
		case 1:
			return 508286680;
		case 2:
			return -115118166;
		case 3:
			return 1274330613;
		case 4:
			return -1993529370;
		default:
			break;
	}
	return -1600776215;
}

int func_914(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1600776215;
		case 1:
			return 1843135693;
		case 2:
			return -1403291038;
		case 3:
			return -1066004925;
		case 4:
			return 1598344177;
		default:
			break;
	}
	return -1600776215;
}

int func_915(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_912(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_916(var uParam0)
{
	struct<5> Var0;

	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_917(int iParam0)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
	{
		func_1241(&(((*Global_1392626)[iParam0 /*32*/])->f_10));
		MAP::REMOVE_BLIP((*Global_1392626)[iParam0 /*32*/]);
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1392626)[iParam0 /*32*/])->f_1))
	{
		func_1241(&(((*Global_1392626)[iParam0 /*32*/])->f_10));
		MAP::REMOVE_BLIP(&(((*Global_1392626)[iParam0 /*32*/])->f_1));
	}
}

void func_918(int iParam0)
{
	Global_40.f_9052.f_21 = (Global_40.f_9052.f_21 || iParam0);
}

bool func_919(int iParam0)
{
	return func_552(iParam0) == joaat("WEAPON");
}

int func_920(int iParam0)
{
	var uVar0;

	if (func_2() != -1)
	{
		return 0;
	}
	if (func_553(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_925(iParam0, &uVar0, 1, 0, 0);
	}
	return func_581(iParam0, 1, 0);
}

void func_921(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_552(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_557(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_942(iVar0))
	{
		if (func_2() == -1)
		{
			func_287(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_537(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_610(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_922(int iParam0, int iParam1)
{
	int iVar0;

	if (func_297(iParam0, 58855631))
	{
		func_1242(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_923(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!func_558(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_738(bParam3), iParam0);
}

int func_924(int iParam0, bool bParam1)
{
	if (func_562(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_738(bParam1), iParam0, 0);
}

int func_925(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1243(&iParam0);
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!func_558(0))
	{
		bParam3 = true;
	}
	if (func_919(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_1021(0) };
			Var4.f_9 = -1591664384;
			if (!func_944(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return 0;
			}
			else if (func_945(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return 0;
			}
			if (func_1098(iParam0, 1))
			{
				if (!func_944(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return 0;
				}
				else if (func_945(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return 0;
				}
			}
		}
		else if (!func_1244(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_923(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_1245(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_738(bParam4), iParam0, 0);
	}
	if ((iVar28 + bParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_926(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1020(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1022(&Var0, func_1021(0));
	}
	if (!func_1023(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_385(iVar14);
	return uVar15;
}

int func_927()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_928(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_929(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_2() != -1)
	{
		return;
	}
	iVar0 = func_1246(iParam0);
	fVar1 = func_1247(iParam0);
	if ((Global_1347477->f_117 || !func_554(31)) || !func_1248(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1249(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_1250(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_1005(MISC::_CREATE_VAR_STRING(6, func_1251(iParam0), fVar1), "itemtype_textures", func_1252(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_930(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588 /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return -1021394391 /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return -987306668 /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return -1028735103 /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return 515229791 /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return -1230863414 /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return 232875659 /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return 1423129537 /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return -435742319 /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return -1854702679 /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return 1265323898 /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return -479775696 /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_931(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1253(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_932(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_548() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1254(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1255(), 12);
			}
			break;
		case joaat("DINO_BONES"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_970() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1256(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_970(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1257(), 13);
			}
			break;
		case joaat("ROCK_CARVINGS"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_971() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1258(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_971(), 10);
			}
			break;
		case joaat("TAXIDERMY"):
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_931(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_933(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == joaat("COL_CC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_CC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_CC_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == joaat("DINO_BONES"))
	{
		if (iParam1 == joaat("COL_DB_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_DB_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_DB_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == joaat("ROCK_CARVINGS"))
	{
		if (iParam1 == joaat("COL_RC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_RC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_RC_INTRO_PRE"));
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return 1;
}

int func_934(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_935(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_936(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1259(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_581(iVar2, 1, 0) || func_1261(func_1260(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_939(func_1259(iVar0))), func_939(func_1259(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_970() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1262(iVar0)), func_1262(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1256() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1262(iVar0)), func_1262(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1262(iVar0)), func_1262(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_980(iParam3, func_1263(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_976(iVar2) - iParam7) >= func_931(iParam3, func_1264(iVar0));
				}
				else
				{
					bVar1 = func_976(iVar2) >= func_931(iParam3, func_1264(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_976(iVar2) + iParam7) >= func_931(iParam3, func_1264(iVar0));
			}
			else
			{
				bVar1 = func_976(iVar2) >= func_931(iParam3, func_1264(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1265(iVar2)), func_1265(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1266(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1267(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1267(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_971() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1268(iVar0)), func_1268(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1258() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1268(iVar0)), func_1268(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1268(iVar0)), func_1268(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_980(iParam3, func_1263(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_976(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1269(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1269(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1270(iVar2)), func_1270(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return 1;
}

int func_937(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1257() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == joaat("TAXIDERMY"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return 1;
}

int func_938(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_20(func_798(0)) && ((func_1271(0) == 1 || func_1271(0) == 8) || func_1271(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == joaat("DINO_BONES") || iParam2 == 1995362678) || iParam2 == joaat("ROCK_CARVINGS"))
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == joaat("TAXIDERMY"))
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return 1;
}

char* func_939(int iParam0)
{
	switch (iParam0)
	{
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			return "COL_CC_GUN_SET";
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			return "COL_CC_ART_SET";
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			return "COL_CC_LND_SET";
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			return "COL_CC_GRL_SET";
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			return "COL_CC_PLT_SET";
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			return "COL_CC_ACT_SET";
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			return "COL_CC_AML_SET";
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return "COL_CC_VEH_SET";
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			return "COL_CC_SPT_SET";
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			return "COL_CC_INV_SET";
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			return "COL_CC_HOR_SET";
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

bool func_940(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = bParam0;
	iVar1 = (bVar0 / 31);
	iVar2 = (bVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_941(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_942(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_943(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return 1786352060;
		case 217:
			return -833319691;
		case 218:
			return 1591329969;
		case 219:
			return 2123222014;
		case 220:
			return -1578397674;
		case 221:
			return 1473261684;
		case 222:
			return -241855024;
		case 223:
			return 12999093;
		case 224:
			return -6796437;
		case 225:
			return -268116367;
		case 226:
			return -636470867;
		case 227:
			return 1737668280;
		case 228:
			return 892807236;
		case 229:
			return -733247890;
		case 230:
			return 24047176;
		case 231:
			return -1561999014;
		case 232:
			return -2052774042;
		case 233:
			return -997150586;
		case 234:
			return -1189569496;
		case 235:
			return 46488141;
		case 236:
			return 1046566686;
		case 237:
			return 325139909;
		case 238:
			return -1585141069;
		case 239:
			return 802754820;
		case 240:
			return 1415981582;
		case 241:
			return -1886147520;
		case 242:
			return 654877947;
		case 243:
			return -415648720;
		case 244:
			return 1221327846;
		case 245:
			return 923162715;
		case 246:
			return 625423581;
		case 247:
			return 326668608;
		case 248:
			return 669530755;
		case 249:
			return 429759982;
		case 250:
			return -2111934838;
		case 251:
			return 1886178087;
		case 252:
			return 1587783573;
		case 253:
			return -279722001;
		case 254:
			return 1310070322;
		case 255:
			return 724026534;
		case 256:
			return 137387616;
		case 257:
			return -653439684;
		case 258:
			return 1376835592;
		case 259:
			return -1824203570;
		case 260:
			return -1654197998;
		case 261:
			return 798987653;
		case 262:
			return 976923323;
		case 263:
			return 1167442289;
		case 264:
			return 986998820;
		case 265:
			return -2119169513;
		case 266:
			return -2015960939;
		case 267:
			return -1287636759;
		case 268:
			return -706917073;
		case 269:
			return -2166805;
		case 270:
			return -1391602433;
		case 271:
			return 1782075221;
		case 272:
			return 1282544585;
		case 273:
			return 1732594027;
		case 274:
			return -1058817012;
		case 275:
			return 1090546265;
		case 276:
			return -1783120823;
		case 277:
			return -1535745896;
		case 278:
			return -2086922122;
		case 279:
			return -1675198649;
		case 280:
			return 1189497682;
		case 281:
			return -1565675519;
		case 282:
			return -268973591;
		case 283:
			return 1039159916;
		case 284:
			return 1111816631;
		case 285:
			return 405591388;
		case 286:
			return 897456793;
		case 287:
			return 104187473;
		case 288:
			return 773808542;
		case 289:
			return -1120669954;
		case 290:
			return -1389278274;
		case 291:
			return 552979403;
		case 292:
			return -1571578784;
		case 293:
			return -708312114;
		case 294:
			return 688823508;
		case 295:
			return -1622147240;
		case 296:
			return 830292162;
		case 297:
			return 226276782;
		case 298:
			return -678416628;
		case 299:
			return -1098528034;
		case 300:
			return 316207340;
		case 301:
			return -1909200748;
		case 302:
			return -939652363;
		case 303:
			return joaat("SLOTID_PROGRESSION");
		case 304:
			return -375447933;
		case 305:
			return 537014919;
		case 306:
			return 1784584921;
		case 307:
			return 1084182731;
		case 308:
			return -1045471300;
		case 309:
			return 1617414719;
		case 310:
			return -787761753;
		case 311:
			return -490616606;
		case 312:
			return 1491346514;
		case 313:
			return -1311702610;
		case 314:
			return -904250715;
		case 315:
			return 1034665895;
		case 316:
			return -101524555;
		case 317:
			return 1419152594;
		case 318:
			return -451359317;
		case 319:
			return -1915385310;
		case 320:
			return 1315162488;
		case 321:
			return -361152079;
		case 322:
			return -2041626192;
		case 323:
			return -2077812539;
		case 324:
			return -1371514637;
		case 325:
			return 1730017037;
		case 326:
			return 892816668;
		case 327:
			return -1994943603;
		case 328:
			return 603133554;
		case 329:
			return -30160144;
		case 330:
			return -1248299493;
		case 331:
			return 727393558;
		case 332:
			return 755611221;
		case 333:
			return -170255458;
		case 334:
			return 1011151573;
		case 335:
			return 1122339631;
		case 336:
			return 454815308;
		case 337:
			return 990701735;
		case 338:
			return -246340825;
		case 339:
			return -1410671073;
		case 340:
			return 1547608292;
		case 341:
			return -714132970;
		case 342:
			return 732290690;
		case 343:
			return 971340545;
		case 344:
			return -234132662;
		case 345:
			return -2143057988;
		case 346:
			return -993947465;
		case 347:
			return -486552269;
		case 348:
			return -1156317860;
		case 349:
			return 1229625803;
		case 350:
			return -388596167;
		case 351:
			return -1204639465;
		case 352:
			return -1384685096;
		case 353:
			return -2026728113;
		case 354:
			return -1228057307;
		case 355:
			return 1835126290;
		case 356:
			return 1890833594;
		case 357:
			return -751549960;
		case 358:
			return -1682270750;
		case 359:
			return -1839865333;
		case 360:
			return -1990383629;
		case 361:
			return 1712094016;
		case 362:
			return 1532953697;
		case 363:
			return 1620318083;
		case 364:
			return -307230331;
		case 365:
			return -1034549620;
		case 366:
			return -1293064293;
		case 367:
			return -1540142553;
		case 368:
			return -1769886012;
		case 369:
			return -1983081126;
		case 370:
			return -1106117124;
		case 371:
			return -1873108338;
		case 372:
			return -2097543219;
		case 373:
			return 155413195;
		case 374:
			return -1162387149;
		case 375:
			return 1728382685 /* GXTEntry: "Right" */;
		case 376:
			return -649335959 /* GXTEntry: "Left" */;
		case 377:
			return -1876502240;
		case 378:
			return -2107032155;
		case 379:
			return 619103418;
		case 380:
			return 1355448197;
		case 381:
			return 1681762005;
		case 382:
			return 1026887814;
		case 383:
			return 354352628;
		case 384:
			return 1519366642;
		case 385:
			return -82757515;
		case 386:
			return 386306655;
		case 387:
			return 1243962119;
		case 388:
			return 756214903;
		case 389:
			return -718417579;
		case 390:
			return -1445516411;
		case 391:
			return -672392892;
		case 392:
			return 1465341584;
		case 393:
			return -427758369;
		case 394:
			return -735647142;
		case 395:
			return 1535838048;
		case 396:
			return -602272282;
		case 397:
			return 2051264661;
		case 398:
			return 487172188;
		case 399:
			return 282270687;
		case 400:
			return 1607708943;
		case 401:
			return 1686264939;
		case 402:
			return 314786149;
		case 403:
			return 1402841185;
		case 404:
			return 1099170772;
		case 405:
			return 2125676786;
		case 406:
			return -363896735;
		case 407:
			return -468790222;
		case 408:
			return -1779133048;
		case 409:
			return 1732537631;
		case 410:
			return 1755095401;
		case 411:
			return 835771095;
		case 412:
			return 1963317232;
		case 413:
			return 259627919;
		case 414:
			return 1299075397;
		case 415:
			return -1509094230;
		case 416:
			return 61132362;
		case 417:
			return 1549741908;
		case 418:
			return 288484254;
		case 419:
			return -1877032947;
		case 420:
			return -1395676456;
		case 421:
			return 1136146715;
		case 422:
			return 468034421;
		case 423:
			return 1079459546;
		case 424:
			return -140369351;
		case 425:
			return 1822341990;
		case 426:
			return 1219701681;
		case 427:
			return 1601295268;
		case 428:
			return -1692460667;
		case 429:
			return 1471419228;
		case 430:
			return 907446160;
		case 431:
			return -1126482585;
		case 432:
			return 1911050315;
		case 433:
			return -1343525599;
		case 434:
			return 1261891225;
		case 435:
			return 763162704;
		case 436:
			return 1335861197;
		case 437:
			return 526744654;
		case 438:
			return -1177461517;
		case 439:
			return -241638635;
		case 440:
			return 1024262875;
		case 441:
			return 853355463;
		case 442:
			return -337288221;
		case 443:
			return 361381308;
		case 444:
			return -1264898804;
		case 445:
			return -585289073;
		case 446:
			return 1423542233;
		case 447:
			return -948489286;
		case 448:
			return 2063859257;
		case 449:
			return -1652627327;
		case 450:
			return -1959697839;
		case 451:
			return -1532267859;
		case 452:
			return -1410062763;
		case 453:
			return -901428716;
		case 454:
			return -1628873469;
		case 455:
			return 144855571;
		case 456:
			return -617589883;
		case 457:
			return -1306457086;
		case 458:
			return 1713542477;
		case 459:
			return -305542365;
		case 460:
			return 1985390213;
		case 461:
			return -2145069367;
		case 462:
			return -1674390752;
		case 463:
			return -2117214398;
		case 464:
			return 1880805647;
		case 465:
			return -62390436;
		case 466:
			return 1815288415;
		case 467:
			return 196214097;
		case 468:
			return -201958220;
		case 469:
			return 1400281261;
		case 470:
			return 1601515402;
		case 471:
			return -940704970;
		case 472:
			return -548371721;
		case 473:
			return -1022384613;
		case 474:
			return -357406394;
		case 475:
			return 1077068189;
		case 476:
			return -782241404;
		case 477:
			return 1669853467;
		case 478:
			return 1592019450;
		case 479:
			return 635273153;
		case 480:
			return -1559225678;
		case 481:
			return -266425508;
		case 482:
			return 1117400455;
		case 483:
			return 454332195;
		case 484:
			return -1328061889;
		case 485:
			return 561650932;
		case 486:
			return 256105670;
		case 487:
			return 1976779618;
		case 488:
			return -269095126;
		case 489:
			return 2145617267;
		case 490:
			return 1150213537;
		case 491:
			return 1598825281;
		case 492:
			return -712527121;
		case 493:
			return 1308553072;
		case 494:
			return 852866398;
		case 495:
			return -1794417972;
		case 496:
			return 293062146;
		case 497:
			return 95360094;
		case 498:
			return 807631773;
		case 499:
			return 1603958275;
		case 500:
			return 860052020;
		case 501:
			return -1885979781;
		case 502:
			return 746147970;
		case 503:
			return 666663006;
		case 504:
			return -2096186453;
		case 505:
			return 859409444;
		case 506:
			return -671427187;
		case 507:
			return 100192478;
		case 508:
			return 307812616;
		case 509:
			return 1670843243;
		case 510:
			return 899615863;
		case 511:
			return -298901850;
		case 512:
			return 1379186917;
		case 513:
			return -817206030;
		case 514:
			return -1150323212;
		case 515:
			return -247466821;
		case 516:
			return 427124242;
		case 517:
			return 855418120;
		case 518:
			return -777015093;
		case 519:
			return -722462870;
		case 520:
			return -937454324;
		case 521:
			return -339438116;
		case 522:
			return 2135639035;
		case 523:
			return 1254273765;
		case 524:
			return -792172668;
		case 525:
			return 1905987493;
		case 526:
			return 495693044;
		case 527:
			return -1693422950;
		case 528:
			return -205873076;
		case 529:
			return -2143114654;
		case 530:
			return -1420574021;
		case 531:
			return -1959250381;
		case 532:
			return -1088328663;
		case 533:
			return 513602003;
		case 534:
			return 359221401;
		case 535:
			return 1005272;
		case 536:
			return 1583044470;
		case 537:
			return 348853959;
		case 538:
			return 1045621973;
		case 539:
			return 1084576580;
		case 540:
			return 1651573695;
		case 541:
			return 1463321587;
		case 542:
			return -997505963;
		case 543:
			return -1649851713;
		case 544:
			return -386012962;
		case 545:
			return 1386101789;
		case 546:
			return 1227915917;
		case 547:
			return -218846335;
		case 548:
			return -352578118;
		case 549:
			return 1426626782;
		case 550:
			return -714081520;
		case 551:
			return 74547781;
		case 552:
			return 1271463052;
		case 553:
			return 1983140194;
		case 554:
			return 677262775;
		case 555:
			return -832337898;
		case 556:
			return -319249747;
		case 557:
			return -16955722;
		case 558:
			return -1360128126;
		case 559:
			return -1535425646;
		case 560:
			return -1063641743;
		case 561:
			return -1041133401;
		case 562:
			return 1380479304;
		case 563:
			return 600890828;
		case 564:
			return 733333190;
		case 565:
			return 1843035435;
		case 566:
			return -304127320;
		case 567:
			return 122470371;
		case 568:
			return 0;
		case 569:
			return -1591664384;
		case 570:
			return -673000374;
		case 571:
			return -1150938404;
		case 572:
			return -1756997214;
		case 573:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_944(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1245(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_945(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1272(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_946(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_286(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_738(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_947(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1273(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1101(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_558(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_738(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_948(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_1274(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_949(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_72();
	func_73(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_950(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1275(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_ARROW")) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_0xD3750CCC00635FC2(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_0x5C2EA6C44F515F34(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_951(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(iParam0));
}

int func_952(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_953(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_554(50))
			{
				if (!func_554(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_554(51))
			{
				if (!func_554(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

int func_954(bool bParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_286(iParam1, 0))
	{
		return 0;
	}
	if (func_552(iParam1) != joaat("CLOTHING"))
	{
		return 0;
	}
	bVar1 = func_2() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(bParam0);
	if (func_555(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_1207(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_297(iParam1, 866047851))
	{
		iVar5 = func_700(iVar4, 1);
		if (func_1104(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_0x5FF9A878C3D115B8(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_0xFB4891BD7578CDC1(bParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_555(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_297(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return 0;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536; /* GXTEntry: "You are currently not wearing any boots." */
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(bParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return 0;
			}
			break;
		case -1505978566:
			if (func_1056(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return 0;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_0x90403E8107B60E81(bParam0);
				iVar10 = func_1276(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1276(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_555(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_297(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536; /* GXTEntry: "You are currently not wearing any boots." */
						return 0;
					}
				}
			}
			*uParam2 = 0;
			return 1;
		}

void func_955()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

int func_956()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_581(func_1277(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_957(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BRACELET_GOLD"):
		case joaat("PROVISION_CC_VINTAGE_HANDCUFFS"):
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"):
			return joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH");
		case joaat("PROVISION_BEAR_LEGENDARY_CLAW"):
		case joaat("PROVISION_BRACELET_SILVER"):
		case joaat("PROVISION_RC_QUARTZ_CHUNK"):
			return joaat("PROVISION_TALISMAN_BEAR_CLAW");
		case joaat("PROVISION_RF_WOOD_COBALT"):
		case joaat("PROVISION_EARRING_GOLD"):
		case joaat("PROVISION_BOAR_TUSK_LEGENDARY"):
			return joaat("PROVISION_TALISMAN_BOAR_TUSK");
		case joaat("PROVISION_BUFFALO_HORN_LEGENDARY"):
		case joaat("PROVISION_EARRING_SILVER"):
		case joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"):
			return joaat("PROVISION_TALISMAN_BUFFALO_HORN");
		case joaat("PROVISION_OLD_BRASS_COMPASS"):
			return joaat("PROVISION_TALISMAN_RAVEN_CLAW");
	}
	return 0;
}

int func_958(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (iParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				iVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			if (iParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				iVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK"):
			if (iParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RF_WOOD_COBALT");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (iParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (func_581(iVar0, 1, 0) && func_581(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_959(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BEAVER_TOOTH");
		case joaat("PROVISION_BISON_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BISON_HORN");
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BUCK_ANTLER");
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COUGAR_FANG");
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COYOTE_FANG");
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_ELK_ANTLER");
		case joaat("PROVISION_FOX_CLAW_LEGENDARY"):
			return joaat("PROVISION_TRINKET_FOX_CLAW");
		case joaat("PROVISION_LIONS_PAW"):
			return joaat("PROVISION_TRINKET_LION_PAW");
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_MOOSE_ANTLER");
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PANTHER_EYE");
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PRONGHORN_ANTLER");
		case joaat("PROVISION_RAM_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_RAM_HORN");
		case joaat("PROVISION_WOLF_HEART_LEGENDARY"):
			return joaat("PROVISION_TRINKET_WOLF_HEART");
		default:
			break;
	}
	return 0;
}

int func_960(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1278(iParam0);
	if (iVar0 != -15)
	{
		func_73(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_80(iVar0, 1);
	}
	return 0;
}

int func_961(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_581(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_286(iVar25, 0) && func_297(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_962(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1005(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_963(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		bVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		bVar1 = ((iParam0 - bVar0) / iParam3);
		if (func_1279())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(bVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		bVar1 = (bVar1 + iVar2);
		func_1005(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - bVar0);
		if (bVar0 > 0)
		{
			func_404(bVar0);
			func_1280(bVar0, 0, 0);
		}
		func_1005(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", bVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		bVar1 = iParam0;
	}
	if (bVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(bVar1, iParam4);
		func_567(func_759(joaat("CAREER_CASH")), bVar1);
	}
}

void func_964(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_965(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_966(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_967(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_968(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_976(iVar9);
	iVar2 = func_976(iVar10);
	iVar3 = func_976(iVar11);
	iVar5 = func_977(iVar9);
	iVar6 = func_977(iVar10);
	iVar7 = func_977(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_976(iVar12);
		iVar8 = func_977(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_969(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_970()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1281(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_971()
{
	return COLLECTION::_0x5461C821D00FE15A(joaat("ROCK_CARVINGS"), 0);
}

int func_972(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (func_1269(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1269(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1269(iVar0))
		{
			*sParam2++;
		}
		if (func_1269(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_1269(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1269(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1269(iVar0))
		{
			*sParam2++;
		}
		if (func_1269(iVar1))
		{
			*sParam2++;
		}
		if (func_1269(iVar0) && func_1269(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_1269(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1269(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1269(iVar0))
		{
			*sParam2++;
		}
		if (func_1269(iVar1))
		{
			*sParam2++;
		}
		if (func_1269(iVar2))
		{
			*sParam2++;
		}
		if ((func_1269(iVar0) && func_1269(iVar1)) && func_1269(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1269(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1269(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1269(iVar0))
		{
			*sParam2++;
		}
		if (func_1269(iVar1))
		{
			*sParam2++;
		}
		if (func_1269(iVar2))
		{
			*sParam2++;
		}
		if (func_1269(iVar3))
		{
			*sParam2++;
		}
		if (((func_1269(iVar0) && func_1269(iVar1)) && func_1269(iVar2)) && func_1269(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_973(int iParam0)
{
	if (!func_1282(iParam0))
	{
		func_1284(func_1283(iParam0));
	}
}

int func_974()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1282(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_975(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_976(iVar9);
	iVar2 = func_976(iVar10);
	iVar3 = func_976(iVar11);
	iVar5 = func_977(iVar9);
	iVar6 = func_977(iVar10);
	iVar7 = func_977(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_976(iVar12);
		iVar8 = func_977(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_976(int iParam0)
{
	int iVar0;

	if (func_581(iParam0, 1, 0))
	{
		iVar0 = func_537(iParam0, 0, 0);
	}
	return iVar0;
}

int func_977(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 5;
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 5;
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return 15;
		case joaat("PROVISION_HERON_FEATHER"):
			return 20;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return 7;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return 10;
		case joaat("PROVISION_GATOR_EGG"):
			return 25;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return 3;
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return 7;
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return 5;
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 30;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return 10;
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return 10;
		default:
			break;
	}
	return 0;
}

int func_978(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_979(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_980(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1253(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_981(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_980(iParam1, 5) || iParam0 == func_980(iParam1, 6)) || iParam0 == func_980(iParam1, 7)) || iParam0 == func_980(iParam1, 8)) || iParam0 == func_980(iParam1, 9))
	{
		func_972(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_549(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_551(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_982(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_980(iParam1, 5) || iParam0 == func_980(iParam1, 6)) || iParam0 == func_980(iParam1, 7)) || iParam0 == func_980(iParam1, 8)) || iParam0 == func_980(iParam1, 9))
	{
		if (func_972(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_549(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_551(51, 0, 0, iVar0, func_931(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_549(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_551(51, 0, 0, iVar0, func_931(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_983()
{
	if (func_467(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

int func_984(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_631(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_383("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_384(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_533(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_385(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_385(iVar1);
	}
	return 0;
}

void func_985(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_986(int iParam0)
{
	if (!func_1285(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_987(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_988(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

float func_989()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1286())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1287(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1287(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1288();
	fVar2 = func_1289();
	fVar3 = func_1290();
	fVar4 = func_1291();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1292()));
	fVar7 = (func_1287(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1293(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1294(3, fVar9, fVar9 > 100f);
	return func_313(fVar7, -100f, 100f);
}

float func_990()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1286())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1287(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1287(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1288();
	fVar2 = func_1289();
	fVar3 = func_1290();
	fVar4 = func_1291();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1292()));
	fVar7 = (func_1287(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1293(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1294(2, fVar9, fVar9 > 100f);
	return func_313(fVar7, -100f, 100f);
}

float func_991()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1286())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1287(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1295())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1296())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1287(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1288();
	fVar2 = func_1289();
	fVar3 = func_1290();
	fVar4 = func_1291();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1292()));
	fVar7 = (func_1287(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1293(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1294(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1287(0);
	}
	return func_313(fVar7, -100f, 100f);
}

bool func_992(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_993(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_286(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_925(iParam0, uParam2, bParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_558(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_738(0), uParam1, uParam2, iParam0, uParam2->f_4, bParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_994(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1297();
			}
			break;
	}
	return 0;
}

int func_995(int iParam0)
{
	switch (iParam0)
	{
		case 439606975: /* GXTEntry: "Fancy Suit" */
			return 14;
		case 1661121390: /* GXTEntry: "The Gunslinger" */
			return 6;
		case 1164374808: /* GXTEntry: "Winter Outfit" */
			return 7;
		case 624063935: /* GXTEntry: "The Summer Gunslinger" */
			return 9;
		case -1476781101: /* GXTEntry: "Island Outfit" */
			return 10;
		case 1560492757: /* GXTEntry: "Robbery Outfit" */
			return 15;
		case -769081407: /* GXTEntry: "The Wittemore" */
			return 16;
		case 688004210: /* GXTEntry: "Police Outfit" */
			return 20;
		case 166243423: /* GXTEntry: "Custom Outfit" */
			return 0;
		case -1826731591: /* GXTEntry: "Brawler\'s Outfit" */
			return 24;
		case 2119049229: /* GXTEntry: "The Ruffian" */
			return 25;
		case 1352942778: /* GXTEntry: "The Rebel" */
			return 26;
		case 1964379549: /* GXTEntry: "The Innocent" */
			return 27;
		case 1201189539: /* GXTEntry: "The Pursuer" */
			return 28;
		case 1351927599: /* GXTEntry: "The Grizzlies Outlaw" */
			return 21;
		case 2032023096: /* GXTEntry: "The Nuevo Paraiso" */
			return 22;
		case 1784889667:
			return 13;
		case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
			return 8;
		case 1383300684: /* GXTEntry: "Saved Custom Outfit One" */
			return 1;
		case 2051441678: /* GXTEntry: "Saved Custom Outfit Two" */
			return 2;
		case 162509669: /* GXTEntry: "Saved Custom Outfit Three" */
			return 3;
		case 635948769: /* GXTEntry: "Saved Custom Outfit Four" */
			return 4;
		case 274995506: /* GXTEntry: "Saved Custom Outfit Five" */
			return 5;
		case 1902428294: /* GXTEntry: "The Wittemore" */
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332: /* GXTEntry: "Island Outfit" */
			return 11;
		case 1788874135: /* GXTEntry: "Island Outfit Shackles" */
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555: /* GXTEntry: "The Homesteader" */
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021: /* GXTEntry: "The Winter Cowboy" */
			return 70;
		case 890706995: /* GXTEntry: "The Cowhand" */
			return 93;
		case 1156438275: /* GXTEntry: "The Rancher" */
			return 90;
		case -1611873049: /* GXTEntry: "The Rancher" */
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024: /* GXTEntry: "The Cowboy" */
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653: /* GXTEntry: "The Homesteader" */
			return 65;
		case 509954990: /* GXTEntry: "The Chevalier" */
			return 29;
		case -445916744: /* GXTEntry: "The Heartlands" */
			return 30;
		case -866249154: /* GXTEntry: "The Gambler" */
			return 31;
		case -2077063704: /* GXTEntry: "The Earl" */
			return 32;
		case 205207539: /* GXTEntry: "The McLaughlin" */
			return 33;
		case -1033657275: /* GXTEntry: "The Josiah" */
			return 34;
		case 1806002837: /* GXTEntry: "The Farrier" */
			return 35;
		case 705324896: /* GXTEntry: "The Donegal" */
			return 36;
		case -1541763703: /* GXTEntry: "The Bulldogger" */
			return 37;
		case 387052410: /* GXTEntry: "The Ranch Hand" */
			return 38;
		case -361288914: /* GXTEntry: "The Scrapper" */
			return 39;
		case -911054515: /* GXTEntry: "The Armadillo" */
			return 40;
		case 1084200963: /* GXTEntry: "The Valentine" */
			return 41;
		case 1847948074: /* GXTEntry: "The Vaquero" */
			return 42;
		case -1212526764: /* GXTEntry: "The Dewberry Creek" */
			return 43;
		case 1851440270: /* GXTEntry: "The Clairmont" */
			return 44;
		case -2028985700: /* GXTEntry: "The Roscoe" */
			return 45;
		case 1074435214: /* GXTEntry: "The Estate Boss" */
			return 46;
		case -883015675: /* GXTEntry: "The Drover" */
			return 47;
		case -1047155604: /* GXTEntry: "The Calumet" */
			return 48;
		case 1123231221: /* GXTEntry: "The Cowpuncher" */
			return 49;
		case 1866989210: /* GXTEntry: "The Tumbleweed" */
			return 50;
		case 478183719: /* GXTEntry: "The Drifter" */
			return 51;
		case -1698955868: /* GXTEntry: "The Leatherman" */
			return 52;
		case -2029378634: /* GXTEntry: "The Cumberland" */
			return 53;
		case 1339864416: /* GXTEntry: "The Millesani" */
			return 54;
		case 890998115: /* GXTEntry: "The Faulkton" */
			return 55;
		case -1376288999: /* GXTEntry: "The Dolton" */
			return 56;
		case -1041123771: /* GXTEntry: "The Corson" */
			return 57;
		case 1389254668: /* GXTEntry: "The Saint Denis" */
			return 58;
		case -346112633: /* GXTEntry: "The Deauville" */
			return 59;
		case 773309172: /* GXTEntry: "The Bretagne" */
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_996(int iParam0, bool bParam1)
{
	return func_994(iParam0, 0) < func_1298(iParam0, bParam1);
}

int func_997(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_555(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_998(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_700(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_700(iParam0, 1) /*11*/];
}

void func_999(int iParam0, int iParam1)
{
	if (func_297(iParam1, 130796156))
	{
		func_1299(iParam1, 0);
	}
	else if (func_297(iParam1, 930141731))
	{
		func_1299(iParam1, 1);
		func_1300(iParam0);
	}
}

void func_1000(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == joaat("LOOTER_PED_IS_MALE") && &uParam0->f_1[iVar0] == joaat("LOOTER_PED_IS_FEMALE")) || (iParam1 == joaat("LOOTER_PED_IS_FEMALE") && &uParam0->f_1[iVar0] == joaat("LOOTER_PED_IS_MALE"))) || (iParam1 == joaat("LOOT_TYPE_NORMAL") && &uParam0->f_1[iVar0] == joaat("LOOT_TYPE_SKINNING"))) || (iParam1 == joaat("LOOT_TYPE_SKINNING") && &uParam0->f_1[iVar0] == joaat("LOOT_TYPE_NORMAL")))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_1001(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_1301(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1302(uParam2, iParam0, Var1);
	return 1;
}

int func_1002(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1003(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_1004(int iParam0)
{
	var uVar0;

	if (!func_1303(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

var func_1005(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_1304(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_1006()
{
	return !&Global_1911774;
}

void func_1007(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = iParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = bParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = bParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_1008(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_1009(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_1010(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_1011(int iParam0, int iParam1)
{
	if (func_2() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_1012(int iParam0)
{
	if (func_2() != -1)
	{
		if (func_614(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_614(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_1013(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_614(iParam0, 65536) && !func_614(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_614(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_614(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1014()
{
	return Global_1905944->f_5694;
}

char* func_1015(int iParam0)
{
	int iVar0;

	iVar0 = func_619(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1270(iVar0);
}

int func_1016(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_693();
	}
	if (func_2() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

void func_1017(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

int func_1018(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((bParam2 && func_2() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 0;
	}
	if (!func_1305(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_1019(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;

	if (func_2() != -1)
	{
		return false;
	}
	if (func_1305(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
					{
						bVar0 = true;
					}
				}
				UNLOCK::_UNLOCK_SET_UNLOCKED(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

struct<14> func_1020(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

struct<4> func_1021(bool bParam0)
{
	int iVar0;

	iVar0 = func_738(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_946(923904168, func_691(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_946(923904168, func_691(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_946(923904168, func_691(bParam0), -740156546, 0);
}

void func_1022(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1023(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_738(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1024(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_1273(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_558(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_738(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_1025(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_2() == -1)
	{
		if (func_543(43))
		{
			if (func_297(iParam0, 412399755))
			{
				func_973(joaat("EXOTIC_STAGE_01"));
				if (func_974() == 0)
				{
					func_510(0, 10);
					iVar0 = func_1306(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_976(iParam0) < func_977(iParam0))
						{
							func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_543(44))
		{
			if (func_297(iParam0, 709057512))
			{
				func_973(joaat("EXOTIC_STAGE_02"));
				if (func_974() == 1)
				{
					func_510(0, 10);
					iVar0 = func_1306(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_976(iParam0) < func_977(iParam0))
						{
							func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_543(45))
		{
			if (func_297(iParam0, -1478961327))
			{
				func_973(joaat("EXOTIC_STAGE_03"));
				if (func_974() == 2)
				{
					func_510(0, 10);
					iVar0 = func_1306(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_976(iParam0) < func_977(iParam0))
						{
							func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_543(46))
		{
			if (func_297(iParam0, -1238404098))
			{
				func_973(joaat("EXOTIC_STAGE_04"));
				if (func_974() == 3)
				{
					func_510(0, 10);
					iVar0 = func_1306(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_976(iParam0) < func_977(iParam0))
						{
							func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_543(47))
		{
			if (func_297(iParam0, 1160548794))
			{
				func_973(joaat("EXOTIC_STAGE_05"));
				if (func_974() == 4)
				{
					func_510(0, 10);
					iVar0 = func_1306(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_976(iParam0) < func_977(iParam0))
						{
							func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_1026(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_1027(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0 /*36*/]));
}

void func_1028(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_1029(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_1030(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_1031(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(iVar0);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(iVar0);
	}
}

void func_1032(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_1033(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

int func_1034(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_700(iParam0, 1) /*3*/]);
}

void func_1035()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_357();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_287(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_603(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_287(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_603(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_1036(int iParam0)
{
	var uVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	uVar0 = &Global_1955569->f_5.f_2[iParam0 /*36*/];
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uVar0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1955569->f_5.f_1, uVar0);
}

bool func_1037(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_479(bParam0))
	{
		return false;
	}
	func_1307(bParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[bParam0 /*1157*/])->f_65[iVar0]), iVar1);
}

void func_1038(int iParam0)
{
	Global_1946804->f_1 = iParam0;
}

int func_1039(int iParam0)
{
	switch ((Global_40.f_7731[iParam0 /*5*/])->f_2)
	{
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		default:
			break;
	}
	return 1;
}

void func_1040(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	fVar3 = BUILTIN::TO_FLOAT(iParam5);
	iVar0 = func_1308(BUILTIN::TO_FLOAT(*iParam0), fVar3);
	iVar1 = func_1309(BUILTIN::TO_FLOAT(*iParam1), fVar3);
	iVar2 = func_1310(BUILTIN::TO_FLOAT(*uParam2), fVar3);
	*iParam0 = (*iParam0 / iParam5);
	*iParam1 = (*iParam1 / iParam5);
	*uParam2 = (*uParam2 / iParam5);
	*uParam3 = (*uParam3 / iParam5);
	*iParam1 = (*iParam1 + iVar0);
	*uParam2 = (*uParam2 + iVar1);
	*uParam3 = (*uParam3 + iVar2);
	if (bParam4)
	{
		*uParam3 = (*uParam3 * -1);
		*uParam2 = (*uParam2 * -1);
		*iParam1 = (*iParam1 * -1);
		*iParam0 = (*iParam0 * -1);
	}
}

bool func_1041(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1042(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

bool func_1043()
{
	return Global_40.f_7748.f_6 > 0;
}

void func_1044()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	func_1311(Global_40.f_7748.f_5, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	iVar3 = (iVar3 + (365 * iVar5));
	iVar3 = (iVar3 + (30 * iVar4));
	iVar2 = (iVar2 + (24 * iVar3));
	if (iVar2 > 168)
	{
		iVar2 = 168;
	}
	while (iVar2 > iVar6)
	{
		func_1312(Global_40.f_7748.f_1, &iVar7, &iVar6, 0);
		iVar6 = (iVar6 + (24 * iVar7));
		iVar2 = (iVar2 - iVar6);
		func_1045();
	}
}

void func_1045()
{
	int iVar0;

	if (Global_40.f_7748.f_1 >= 9)
	{
		func_1313();
		return;
	}
	iVar0 = Global_40.f_7748.f_1 + 1;
	func_1314(iVar0, 0);
	if (func_1043())
	{
		if (Global_40.f_7748.f_1 >= 9)
		{
			func_1313();
		}
		else
		{
			func_1315();
		}
	}
	func_1316();
}

void func_1046(int iParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	func_1311((Global_40.f_7731[iParam0 /*5*/])->f_3, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	iVar3 = (iVar3 + (365 * iVar5));
	iVar3 = (iVar3 + (30 * iVar4));
	iVar2 = (iVar2 + (24 * iVar3));
	if (iVar2 > 168)
	{
		iVar2 = 168;
	}
	while (iVar2 > iVar6)
	{
		func_649(iParam0, &iVar7, &iVar6, 0);
		iVar6 = (iVar6 + (24 * iVar7));
		iVar2 = (iVar2 - iVar6);
		func_1047(iParam0, 0);
	}
}

void func_1047(int iParam0, bool bParam1)
{
	int iVar0;

	if (&Global_40.f_7731[iParam0 /*5*/] >= 10)
	{
		func_1317(iParam0);
		return;
	}
	if (!bParam1)
	{
		if (&Global_40.f_7731[iParam0 /*5*/] >= 7 && !func_648(iParam0))
		{
			return;
		}
	}
	iVar0 = &Global_40.f_7731[iParam0 /*5*/] + 1;
	func_1318(iVar0);
	func_324(iParam0, iVar0, 0);
	if (func_648(iParam0))
	{
		if (&Global_40.f_7731[iParam0 /*5*/] >= 7)
		{
			func_1317(iParam0);
		}
		else
		{
			func_1319(iParam0);
		}
	}
	func_1320();
}

bool func_1048()
{
	return 1 == Global_40.f_7748.f_3;
}

int func_1049(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 2:
			return 2;
		case 36:
			return 2;
		case 9:
			return 2;
		case 10:
			return 2;
		case 37:
			return 2;
		case 0:
			return 1;
		case 16:
			return 3;
		case 11:
			return 1;
		case 20:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 24:
			return 1;
		case 34:
			return 3;
		case 43:
			return 6;
		default:
			break;
	}
	return 2;
}

int func_1050(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_1051(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_1052(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_1053(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_1054(int iParam0)
{
	int iVar0;

	iVar0 = func_700(func_1321(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_1055(var uParam0)
{
	if (func_1056(81053684, uParam0))
	{
		return 1;
	}
	if (func_1056(-525676072, uParam0))
	{
		return 1;
	}
	return 0;
}

int func_1056(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_700(func_1321(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_555(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_1057()
{
	if (func_2() != -1)
	{
		return 0;
	}
	return func_1322(joaat("FAME"));
}

bool func_1058()
{
	return Global_1347398->f_1 == 0;
}

void func_1059(int iParam0)
{
	Global_1347398->f_1 = iParam0;
}

bool func_1060()
{
	return Global_1347398->f_1 == 1000;
}

bool func_1061()
{
	return Global_1347398->f_1 == 2000;
}

bool func_1062()
{
	return Global_1347398->f_1 == 3000;
}

void func_1063(int iParam0)
{
	func_1065(iParam0, 1);
	func_1065(iParam0, 128);
	func_1065(iParam0, 256);
	func_1065(iParam0, 512);
	func_1065(iParam0, 1024);
	func_1065(iParam0, 2048);
	func_1065(iParam0, 4096);
	func_1065(iParam0, 65536);
	func_1065(iParam0, 16384);
	func_1065(iParam0, 262144);
	func_1065(iParam0, 524288);
	func_1065(iParam0, 1048576);
	func_1065(iParam0, 2097152);
	func_1065(iParam0, 32768);
	func_1065(iParam0, 131072);
	func_1065(iParam0, 134217728);
	func_1065(iParam0, 1073741824 /* Float: 2f */);
}

void func_1064(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

void func_1065(int iParam0, bool bParam1)
{
	(Global_40.f_4942[iParam0 /*60*/])->f_5 = ((Global_40.f_4942[iParam0 /*60*/])->f_5 - ((Global_40.f_4942[iParam0 /*60*/])->f_5 && bParam1));
}

int func_1066(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 1:
			*iParam1 = 860729266;
			return 1;
		case 128:
			*iParam1 = 1606325429;
			return 1;
		case 256:
			*iParam1 = 1743550585;
			return 1;
		case 512:
			*iParam1 = 1064646155;
			return 1;
		case 1024:
			*iParam1 = -536694793;
			return 1;
		case 2048:
			*iParam1 = -1304053509;
			return 1;
		case 4096:
			*iParam1 = 879715242;
			return 1;
		case 65536:
			*iParam1 = -972364774;
			return 1;
		case 16384:
			*iParam1 = -1100875244;
			return 1;
		case 262144:
			*iParam1 = 1153596794;
			return 1;
		case 524288:
			*iParam1 = 1016389820;
			return 1;
		case 1048576:
			*iParam1 = -726966617;
			return 1;
		case 2097152:
			*iParam1 = 1365901568;
			return 1;
		case 32768:
			*iParam1 = -1658942149;
			return 1;
		case 131072:
			*iParam1 = -1980913856;
			return 1;
		case 134217728:
			*iParam1 = -1683207356;
			return 1;
		case 1073741824:
			*iParam1 = -1712783565;
			return 1;
	}
	return 0;
}

bool func_1067(bool bParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(bParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

void func_1068(int iParam0, bool bParam1)
{
	(Global_40.f_4942[iParam0 /*60*/])->f_5 = ((Global_40.f_4942[iParam0 /*60*/])->f_5 || bParam1);
}

void func_1069(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1) || ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return;
	}
	if (PED::_0xFB4891BD7578CDC1(bParam1, joaat("WEARABLE_MASKS")))
	{
		PED::_0xD710A5007C2AC539(bParam1, joaat("WEARABLE_MASKS"), 1);
	}
	if (PED::_0xFB4891BD7578CDC1(bParam1, 494009478))
	{
		PED::_0xD710A5007C2AC539(bParam1, 494009478, 1);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1 > 0 && func_1067(bParam1, 860729266))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4096 > 0 && func_1067(bParam1, 879715242))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 128 > 0 && func_1067(bParam1, 1606325429))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 256 > 0 && func_1067(bParam1, 1743550585))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 512 > 0 && func_1067(bParam1, 1064646155))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1024 > 0 && func_1067(bParam1, -536694793))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2048 > 0 && func_1067(bParam1, -1304053509))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & -2147483648 > 0 && func_1067(bParam1, 718939204))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 65536 > 0 && func_1067(bParam1, -972364774))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16384 > 0 && func_1067(bParam1, -1100875244))
	{
		if (PED::_0xFB4891BD7578CDC1(bParam1, -134124598))
		{
			PED::_0xD710A5007C2AC539(bParam1, -134124598, 1);
		}
		if (PED::_0xFB4891BD7578CDC1(bParam1, 2071466316))
		{
			PED::_0xD710A5007C2AC539(bParam1, 2071466316, 1);
		}
		PED::_0x1902C4CFCC5BE57C(bParam1, -1100875244);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 262144 > 0 && func_1067(bParam1, 1153596794))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 524288 > 0 && func_1067(bParam1, 1016389820))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1048576 > 0 && func_1067(bParam1, -726966617))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2097152 > 0 && func_1067(bParam1, 1365901568))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 32768 > 0 && func_1067(bParam1, -1658942149))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 131072 > 0 && func_1067(bParam1, -1980913856))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4194304 > 0 && func_1067(bParam1, 491764525))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8388608 > 0 && func_1067(bParam1, -76015264))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16777216 > 0 && func_1067(bParam1, 622113465))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 33554432 > 0 && func_1067(bParam1, 781533162))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 67108864 > 0 && func_1067(bParam1, -271415321))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 134217728 > 0 && func_1067(bParam1, -1683207356))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 268435456 > 0 && func_1067(bParam1, -254794762))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 536870912 > 0 && func_1067(bParam1, 609066278))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1073741824 > 0 && func_1067(bParam1, -1712783565))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8192 > 0 && func_1067(bParam1, 1544915253))
	{
		PED::_0x1902C4CFCC5BE57C(bParam1, 1544915253);
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_57 = 1;
	}
}

void func_1070(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_365(iParam0))
	{
		return;
	}
	iVar0 = func_1323();
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	PLAYER::_SET_MAX_WANTED_LEVEL_2(iVar0);
	if (iParam0 == func_1324())
	{
		LAW::_SET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID(), iParam1);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (&Global_40.f_358[iParam0 /*12*/] != iParam1)
		{
			func_1325(iParam0, iParam1);
			func_1326(iParam0);
		}
		Global_40.f_358[iParam0 /*12*/] = iParam1;
		if (!func_1125(iParam0, 4))
		{
			if (&Global_40.f_358[iParam0 /*12*/] >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
			{
				func_1327(iParam0, 1);
			}
		}
		else if (&Global_40.f_358[iParam0 /*12*/] == 0)
		{
			func_1327(iParam0, 0);
		}
		return;
	}
	Global_1058888->f_42266[iParam0 /*12*/] = iParam1;
}

int func_1071(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_1328(iParam0, uParam1, &uVar0))
	{
		func_1329(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1072(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_555(iParam0))
	{
		case -2061583405:
			bVar0 = func_1330(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1330(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1330(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1330(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1330(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1330(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1077();
	}
	if (bParam1)
	{
		func_1080(0, 0);
	}
}

int func_1073(int iParam0)
{
	if (func_2() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1074(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1331(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1094(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_555(iParam0) != -999503751)
	{
		func_1093(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1075(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_693();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_1076(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_698(iParam0, 0, 0) };
	Var5 = { func_946(iParam0, Var0, Var0.f_4, 0) };
	if (func_1245(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_738(0), &Var5);
	return 1;
}

void func_1077()
{
	int iVar0;

	if (func_2() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26795[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26795.f_20 = Global_1946804->f_2657.f_20;
		Global_26795.f_21 = Global_1946804->f_2657.f_21;
		Global_26795.f_22 = Global_1946804->f_2657.f_22;
		Global_26795.f_23 = Global_1946804->f_2657.f_23;
		Global_26795.f_24 = Global_1946804->f_2657.f_24;
		Global_26795.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36637.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36637.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36637.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36637.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36637.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36637.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36637.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_1078(int iParam0)
{
	return func_1333(func_1332(iParam0));
}

void func_1079(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_698(iParam0, 0, 0) };
	Var5 = { func_946(iParam0, Var0, Var0.f_4, 0) };
	if (func_1245(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_738(0), &Var5, bParam1);
}

void func_1080(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1334(0);
	}
	if (bParam0)
	{
		func_650(8);
		func_650(512);
	}
	else
	{
		func_650(8);
		func_650(16);
	}
}

int func_1081(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_555(iParam1);
		iVar5 = func_1335(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_698(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_946(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = uVar2;
					return 1;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_738(0);
			Var37 = { func_698(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_946(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_555(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
							{
								if (func_1336(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = uVar2;
									return 1;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return 0;
}

struct<4> func_1082()
{
	struct<4> Var0;

	Var0 = { func_691(0) };
	return func_946(856287005, Var0, -218846335, 0);
}

int func_1083(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!func_1081(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_1082() };
	Var14 = { func_946(iParam0, Var10, iVar9, 0) };
	if (func_1337(Var14, iParam1))
	{
		if (func_1338(iParam0))
		{
			if (func_1339(325139909, &iVar18))
			{
				if (func_1083(iVar18, 0))
				{
				}
			}
		}
		else if (func_1084(iParam0))
		{
			if (func_1339(325139909, &iVar19))
			{
				if (func_1083(iVar19, 0))
				{
				}
			}
			if (func_1339(986998820, &iVar20))
			{
				if (func_1083(iVar20, 0))
				{
				}
			}
			iVar21 = func_1085(iParam0);
			if (func_286(iVar21, 0))
			{
				if (func_1083(iVar21, 1))
				{
				}
			}
		}
		func_1086();
		return 1;
	}
	return 0;
}

int func_1084(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (func_297(iParam0, -251515357))
	{
		return 1;
	}
	return 0;
}

int func_1085(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HORSE_EQUIPMENT_WESTERN_01_SPECIAL_NEW_SADDLE_000"):
			return 263080063 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_SPECIAL_NEW_SADDLE_000"):
			return -34331381 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_MCCLELLAN_01_SPECIAL_NEW_SADDLE_000"):
			return -993578318 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_WESTERN_03_SPECIAL_NEW_SADDLE_000"):
			return 579268144 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_WESTERN_04_SPECIAL_NEW_SADDLE_000"):
			return 1104489688 /* GXTEntry: "Trapper Blanket" */;
	}
	return 0;
}

int func_1086()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	int iVar21;

	Var0 = { func_698(856287005, 0, 0) };
	Var5 = { func_946(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_555(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_1340(Var5, -415648720, 0);
	}
	if (!func_286(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_1335(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_1340(Var5, iVar11, 0);
			if (!func_286(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (func_1084(iVar14) || func_1338(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == 986998820)
						{
							if (func_1084(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == -1189569496)
								{
									if (!func_1084(iVar14) && func_1341(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_1342(iVar11, &Var16, 1))
									{
										if (!func_1337(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}

void func_1087(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_686(1) < iParam0)
	{
		iParam0 = func_686(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_759(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_1088(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1005(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

bool func_1089(int iParam0)
{
	return (Global_26795.f_774 && iParam0) != 0;
}

void func_1090(int iParam0)
{
	Global_26795.f_774 = (Global_26795.f_774 || iParam0);
}

struct<4> func_1091()
{
	struct<4> Var0;

	return Var0;
}

void func_1092(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_1020(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1023(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_385(iVar0);
	}
}

void func_1093(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1343(iParam2, *uParam0);
	func_1344(uParam0->f_1[*uParam0 /*5*/], iParam1, -1, 1, 0);
	*uParam0++;
}

int func_1094(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_698(iParam0, 0, 0) };
	Var5 = { func_946(iParam0, Var0, Var0.f_4, 0) };
	if (func_1245(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_738(0), &Var5, iParam1);
	return 1;
}

void func_1095(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_2() != -1)
	{
		return;
	}
	if (!func_1089(8))
	{
		return;
	}
	if (Global_26795.f_627 == 0)
	{
		return;
	}
	Global_1946804->f_1497 = Global_26795.f_627;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1497.f_1[iVar0 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
	func_682(1);
	Global_1946804->f_2657 = { Global_26795.f_627.f_121 };
	func_1077();
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		func_1094(iVar2, 0);
		iVar1 = func_700(func_1207(iVar2), 1);
		if (iVar1 >= 39)
		{
		}
		else if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0])
		{
			INVENTORY::_0x46743BBFEDBC859E(func_738(0), iVar2, 1);
		}
		else
		{
			INVENTORY::_0x46743BBFEDBC859E(func_738(0), iVar2, 0);
		}
		iVar0++;
	}
	if (!bParam0)
	{
		return;
	}
	iVar3 = Global_1946804->f_1497;
	iVar4 = func_995(iVar3);
	if (iVar4 == -1)
	{
		iVar4 = 0;
		func_1345(Global_35, iVar4, &(Global_1946804->f_1949), 1, iVar3, 1);
	}
	else
	{
		func_1345(Global_35, iVar4, &(Global_1946804->f_1949), 1, 0, 1);
	}
}

void func_1096(bool bParam0)
{
	int iVar0;

	if (func_1346(Global_35))
	{
		func_1347(Global_35, bParam0, 1);
		return;
	}
	iVar0 = Global_1946804->f_1497;
	Global_1905941 = func_995(iVar0);
	if (&Global_1905941 == -1)
	{
		Global_1905941 = 0;
	}
	func_623(Global_40.f_7729, 4096);
	func_621(&Global_1905941, 4096);
	Global_40.f_7729 = &Global_1905941;
	func_1348(Global_35, 1, 1);
}

void func_1097(int iParam0)
{
	Global_26795.f_774 = (Global_26795.f_774 - (Global_26795.f_774 && iParam0));
}

int func_1098(int iParam0, bool bParam1)
{
	if (func_555(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_924(joaat("UPGRADE_OFFHAND_HOLSTER"), 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_1099(bool bParam0)
{
	int iVar0;

	iVar0 = func_738(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_946(271701509, func_691(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_946(271701509, func_691(bParam0), 12999093, 0);
}

int func_1100(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_555(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_1101(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_738(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_1102(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_1103()
{
	int iVar0;

	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_1104(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_297(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_297(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_297(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_297(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_297(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_297(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_1105(int iParam0)
{
	func_1112(iParam0, 8, 6);
}

void func_1106(int iParam0)
{
	func_1349(&(Global_1946804->f_2589), iParam0);
}

void func_1107(int iParam0, int iParam1)
{
	func_1350(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1108(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1109(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_555(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1351(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1107(iVar1, iVar3);
		}
	}
	if (func_998(-1586649372) && func_1351(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1107(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1107(iVar1, iVar3);
					}
				}
			}
			func_1352(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1352(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("BASE") || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1107(iVar1, iVar3);
					}
				}
				Jump @1172; //curOff = 527
				func_1352(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/])->f_1 == joaat("BASE")
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_1107(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_1107(iVar1, iVar3);
					}
				}
				Jump @1172; //curOff = 658
				func_1352(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1172; //curOff = 693
				func_1352(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1107(iVar1, iVar3);
					}
				}
				Jump @1172; //curOff = 788
				func_1352(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1172; //curOff = 809
				if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1107(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1107(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_555(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1107(iVar1, iVar3);
						}
					}
				}
				Jump @1172; //curOff = 1027
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_297(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1172; //curOff = 1112
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_555(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_555(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1107(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_555(&(uParam0->f_1[iVar1 /*3*/])) || func_297(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1107(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_1110(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_1353(0);
	if (iParam2 != 0 && func_1354(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1355(iParam0, func_1102(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1111(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_2() != -1;
	iVar7 = func_1353(0);
	if (func_703(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_1102(iVar0, 1);
			if (func_1356(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1356(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1276(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1357(uParam0);
				if (iVar3 > 0)
				{
					if (!func_703(524288))
					{
						func_650(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_1102(iVar0, 1);
							if (func_1356(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1356(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1276(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_1107(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_1115(524288);
				}
			}
		}
	}

void func_1112(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_700(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_700(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_700(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_1113(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1358(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_2() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1359(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_619(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_619(Global_40.f_7729);
				Global_1946804->f_1378 = func_619(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_1360(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1080(0, 1);
	}
}

void func_1114(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1115(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1116(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1117(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1041(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1041(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1042(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_650(8);
}

int func_1118(int iParam0)
{
	if (!func_327(iParam0))
	{
		return 0;
	}
	if (func_708(iParam0))
	{
		return -1;
	}
	return (Global_23117[iParam0 /*11*/])->f_3;
}

int func_1119(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_71(iParam0))
	{
		return 0;
	}
	func_1311(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((BUILTIN::TO_FLOAT(iVar0) / 60f) + BUILTIN::TO_FLOAT(iVar1)) + (BUILTIN::TO_FLOAT(iVar2) * 60f)) + ((BUILTIN::TO_FLOAT(iVar3) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar4) * 30.4375f) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = BUILTIN::ROUND(fVar6);
	return iVar7;
}

int func_1120(int iParam0)
{
	if (!func_327(iParam0))
	{
		return 0;
	}
	return func_710(iParam0, 33554432);
}

int func_1121(int iParam0)
{
	if (!func_327(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 26:
		case 32:
		case 35:
		case 38:
		case 57:
		case 61:
		case 76:
		case 78:
		case 93:
		case 95:
		case 105:
		case 115:
			return 1;
	}
	return 0;
}

int func_1122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REGION_BAY_CRAWDADWILLIES");
		case 1:
			return joaat("REGION_BAY_MACOMBS_END");
		case 2:
			return joaat("REGION_BAY_MERKINSWALLER");
		case 3:
			return joaat("REGION_BAY_LAGRAS");
		case 4:
			return joaat("REGION_BAY_LAKAY");
		case 5:
			return joaat("REGION_BAY_SAINT_DENIS");
		case 6:
			return joaat("REGION_BAY_ORANGE_PLANTATION");
		case 7:
			return joaat("REGION_BAY_SERIAL_KILLER");
		case 8:
			return joaat("REGION_BAY_SERENDIPITY");
		case 9:
			return joaat("REGION_BAY_SHADYBELLE");
		case 10:
			return joaat("REGION_BAY_SILTWATERSTRAND");
		case 11:
			return joaat("REGION_BGV_APPLESEEDTIMBER");
		case 12:
			return joaat("REGION_BGV_BERYLS_DREAM");
		case 13:
			return joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER");
		case 14:
			return joaat("REGION_BGV_DAKOTARIVER_TRAPPER");
		case 15:
			return joaat("REGION_BGV_FORTRIGGS");
		case 16:
			return joaat("REGION_BGV_HANGINGDOG");
		case 17:
			return joaat("REGION_BGV_LONEMULESTEAD");
		case 18:
			return joaat("REGION_BGV_MISSING_HUSBAND");
		case 19:
			return joaat("REGION_BGV_MONTO_REST");
		case 20:
			return joaat("REGION_BGV_OWANJILA_DAM");
		case 21:
			return joaat("REGION_BGV_PAINTEDSKY");
		case 22:
			return joaat("REGION_BGV_PRONGHORN");
		case 24:
			return joaat("REGION_BGV_SHACK");
		case 23:
			return joaat("REGION_BGV_RIGGS_STATION");
		case 25:
			return joaat("REGION_BGV_SHEPHERDS_RISE");
		case 26:
			return joaat("REGION_BGV_STRAWBERRY");
		case 27:
			return joaat("REGION_BGV_VALLEY_VIEW");
		case 28:
			return joaat("REGION_BGV_WALLACE_STATION");
		case 29:
			return joaat("REGION_BGV_WATSONSCABIN");
		case 30:
			return joaat("REGION_BLU_CANEBREAK_MANOR");
		case 31:
			return joaat("REGION_BLU_COPPERHEAD");
		case 32:
			return joaat("REGION_BLU_SISIKA");
		case 33:
			return joaat("REGION_CML_BACCHUSBRIDGE");
		case 34:
			return joaat("REGION_CML_DINO_LADY");
		case 35:
			return joaat("REGION_CML_OLDFORTWALLACE");
		case 36:
			return joaat("REGION_CML_SIXPOINTCABIN");
		case 37:
			return joaat("REGION_GRT_BEECHERS");
		case 38:
			return joaat("REGION_GRT_BLACKWATER");
		case 39:
			return joaat("REGION_GRT_QUAKERS_COVE");
		case 40:
			return joaat("REGION_GRZ_ADLERRANCH");
		case 41:
			return joaat("REGION_GRZ_DEAD_RIVAL");
		case 50:
			return joaat("REGION_GRZ_CALUMETRAVINE");
		case 51:
			return joaat("REGION_GRE_CIVIL_WAR_BRIDE");
		case 42:
			return joaat("REGION_GRZ_CHEZPORTER");
		case 52:
			return joaat("REGION_GRZ_COHUTTA");
		case 43:
			return joaat("REGION_GRZ_COLTER");
		case 44:
			return joaat("REGION_GRZ_FROZEN_EXPLORER");
		case 53:
			return joaat("REGION_GRZ_GUNFIGHT");
		case 45:
			return joaat("REGION_GRZ_MILLESANI_CLAIM");
		case 46:
			return joaat("REGION_GRZ_MOUNTAIN_MAN");
		case 47:
			return joaat("REGION_GRZ_STARVING_CHILDREN");
		case 48:
			return joaat("REGION_GRZ_TEMPEST_RIM");
		case 54:
			return joaat("REGION_GRZ_THELOFT");
		case 55:
			return joaat("REGION_GRE_VETERAN");
		case 56:
			return joaat("REGION_GRZ_WAPITI");
		case 49:
			return joaat("REGION_GRZ_WINTERMINING_TOWN");
		case 57:
			return joaat("REGION_GUA_AGUASDULCES");
		case 58:
			return joaat("REGION_GUA_CAMP");
		case 59:
			return joaat("REGION_GUA_CINCOTORRES");
		case 60:
			return joaat("REGION_GUA_LACAPILLA");
		case 61:
			return joaat("REGION_GUA_MANICATO");
		case 62:
			return joaat("REGION_HRT_ABANDONED_MILL");
		case 64:
			return joaat("REGION_HRT_CARMODYDELL");
		case 65:
			return joaat("REGION_HRT_CORNWALLKEROSENE");
		case 66:
			return joaat("REGION_HRT_CROP_FARM");
		case 67:
			return joaat("REGION_HRT_CUMBERLANDFALLS");
		case 68:
			return joaat("REGION_HRT_DOWNSRANCH");
		case 69:
			return joaat("REGION_HRT_EMERALDRANCH");
		case 70:
			return joaat("REGION_HRT_GRANGERS_HOGGERY");
		case 71:
			return joaat("REGION_HRT_HORSESHOEOVERLOOK");
		case 72:
			return joaat("REGION_HRT_LARNEDSOD");
		case 73:
			return joaat("REGION_HRT_LOONY_CULT");
		case 74:
			return joaat("REGION_HRT_LUCKYSCABIN");
		case 75:
			return joaat("REGION_HRT_SWANSONS_STATION");
		case 76:
			return joaat("REGION_HRT_VALENTINE");
		case 77:
			return joaat("REGION_ROA_ABERDEENPIGFARM");
		case 78:
			return joaat("REGION_ROA_ANNESBURG");
		case 79:
			return joaat("REGION_ROA_BEAVERHOLLOW");
		case 63:
			return joaat("REGION_ROA_BEECHERS_C");
		case 80:
			return joaat("REGION_ROA_BLACK_BALSAM_RISE");
		case 81:
			return joaat("REGION_ROA_BRANDYWINE_DROP");
		case 82:
			return joaat("REGION_ROA_BUTCHERCREEK");
		case 83:
			return joaat("REGION_ROA_DOVERHILL");
		case 84:
			return joaat("REGION_ROA_HAPPY_FAMILY");
		case 85:
			return joaat("REGION_ROA_ISOLATIONIST");
		case 86:
			return joaat("REGION_ROA_MACLEANSHOUSE");
		case 87:
			return joaat("REGION_ROA_MOSSY_FLATS");
		case 88:
			return joaat("REGION_ROA_ROANOKE_VALLEY");
		case 89:
			return joaat("REGION_ROA_ROCKYSEVEN");
		case 90:
			return joaat("REGION_ROA_TRAPPER");
		case 91:
			return joaat("REGION_ROA_VANHORNMANSION");
		case 92:
			return joaat("REGION_ROA_VANHORNPOST");
		case 93:
			return joaat("REGION_SCM_BRAITHWAITEMANOR");
		case 94:
			return joaat("REGION_SCM_BULGERGLADE");
		case 95:
			return joaat("REGION_SCM_CALIGAHALL");
		case 96:
			return joaat("REGION_SCM_CATFISHJACKSONS");
		case 97:
			return joaat("REGION_SCM_CLEMENSCOVE");
		case 98:
			return joaat("REGION_SCM_CLEMENSPOINT");
		case 99:
			return joaat("REGION_SCM_COMPSONS_STEAD");
		case 100:
			return joaat("REGION_SCM_DAIRY_FARM");
		case 101:
			return joaat("REGION_SCM_HORSE_SHOP");
		case 102:
			return joaat("REGION_SCM_LONNIESSHACK");
		case 103:
			return joaat("REGION_SCM_LOVE_TRIANGLE");
		case 104:
			return joaat("REGION_SCM_RADLEYS_PASTURE");
		case 105:
			return joaat("REGION_SCM_RHODES");
		case 106:
			return joaat("REGION_SCM_SLAVE_PEN");
		case 107:
			return joaat("REGION_TAL_AURORA_BASIN");
		case 109:
			return joaat("REGION_TAL_COCHINAY");
		case 110:
			return joaat("REGION_TAL_MANZANITAPOST");
		case 111:
			return joaat("REGION_TAL_PACIFICUNIONRR");
		case 112:
			return joaat("REGION_TAL_TANNERSREACH");
		case 108:
			return joaat("REGION_TAL_DEAD_SETTLER");
		case 113:
			return joaat("REGION_TAL_TRAPPER");
		case 126:
			return joaat("REGION_HEN_MACFARLANES_RANCH");
		case 127:
			return joaat("REGION_HEN_THIEVES_LANDING");
		case 120:
			return joaat("REGION_CHO_ARMADILLO");
		case 121:
			return joaat("REGION_CHO_COOTS_CHAPEL");
		case 122:
			return joaat("REGION_CHO_DON_JULIO_HOUSE");
		case 124:
			return joaat("REGION_CHO_RIDGEWOOD_FARM");
		case 123:
			return joaat("REGION_CHO_RILEYS_CHARGE");
		case 125:
			return joaat("REGION_CHO_TWIN_ROCKS");
		case 114:
			return joaat("REGION_GAP_GAPTOOTH_BREACH");
		case 115:
			return joaat("REGION_GAP_TUMBLEWEED");
		case 116:
			return joaat("REGION_GAP_RATHSKELLER_FORK");
		case 129:
			return joaat("REGION_GAP_SOLOMONS_FOLLY");
		case 117:
			return joaat("REGION_RIO_BENEDICT_POINT");
		case 118:
			return joaat("REGION_RIO_FORT_MERCER");
		case 119:
			return joaat("REGION_RIO_PLAIN_VIEW");
		case 128:
			return joaat("REGION_CENTRALUNIONRR");
		default:
			break;
	}
	return 0;
}

void func_1123(int iParam0)
{
	int iVar0;

	if (func_1361(iParam0) == 57)
	{
		MAP::_0x563FCB6620523917(-1145496915, -1482012664);
		MAP::_0x563FCB6620523917(-1043953850, -1482012664);
		MAP::_0x563FCB6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_1362(iParam0) == 4 || func_1362(iParam0) == 12) || func_1127(func_1362(iParam0)) == 4) || (func_1128(func_1362(iParam0), 8) && ((func_1362(iParam0) == 2 || func_1362(iParam0) == 0) || func_1362(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		MAP::_0x563FCB6620523917(iParam0, iVar0);
	}
}

void func_1124(int iParam0)
{
	if (func_1361(iParam0) == 57)
	{
		MAP::_0x6786D7AFAC3162B3(-1145496915);
		MAP::_0x6786D7AFAC3162B3(-1043953850);
		MAP::_0x6786D7AFAC3162B3(-1783502982);
	}
	else if (MAP::_0xE38450DBCBC70E3D(iParam0, -1305340593) || MAP::_0xE38450DBCBC70E3D(iParam0, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iParam0);
	}
}

bool func_1125(int iParam0, int iParam1)
{
	if (!func_365(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

void func_1126(int iParam0, bool bParam1)
{
	if (!func_365(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1123(func_1363(iParam0));
	}
	else
	{
		func_1124(func_1363(iParam0));
	}
}

int func_1127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

bool func_1128(int iParam0, int iParam1)
{
	if (!func_367(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

int func_1129(int iParam0)
{
	if (!func_367(iParam0))
	{
		return 0;
	}
	return func_1128(iParam0, 2);
}

void func_1130(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_367(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_1364(iParam0);
	if (bParam1)
	{
		func_1123(iVar0);
	}
	else
	{
		func_1124(iVar0);
	}
}

int func_1131(bool bParam0)
{
	switch (bParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return -765810527;
		case 5:
		case 6:
		case 7:
		case 8:
			return 34802860;
		case 9:
		case 10:
		case 11:
		case 12:
			return -736232052;
		default:
			break;
	}
	return func_1365(bParam0);
}

int func_1132()
{
	return Global_0.f_7;
}

bool func_1133()
{
	struct<2> Var0;
	float fVar2;

	if (!func_70())
	{
		return false;
	}
	if (func_6(32768))
	{
		return false;
	}
	if (func_88(&Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("RESPAWN_DUMP_BODY")) > 0)
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(219254805))
	{
		return false;
	}
	if (!func_226(((*Global_1835011)[77 /*74*/])->f_1, 1) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FINALE3_OUTRO")) > 0)
	{
		return false;
	}
	if (Global_1914319->f_18941.f_17 || Global_1914319->f_18941.f_15)
	{
		return false;
	}
	if (Global_1392040 & 8388608 != 0)
	{
		return false;
	}
	if (((PED::_0x34D6AC1157C8226C(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1")) || PED::_0x34D6AC1157C8226C(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"))) || PED::_0x34D6AC1157C8226C(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3"))) || PED::_0x34D6AC1157C8226C(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4")))
	{
		return false;
	}
	if (Global_1392040->f_6)
	{
		return false;
	}
	if (Global_1914319->f_17369)
	{
		return false;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return false;
	}
	if (UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return false;
	}
	if (&Global_1898437 == ((*Global_1347702)[42 /*49*/])->f_15 && (&Global_1898438 - MISC::GET_GAME_TIMER()) <= 60000)
	{
		return false;
	}
	Var0 = { func_759(joaat("TOTAL_PROGRESS_MADE")) };
	fVar2 = func_1366(Var0);
	return fVar2 >= 100f;
}

bool func_1134(var uParam0)
{
	return func_1367(*uParam0, 1);
}

void func_1135(var uParam0, bool bParam1)
{
	if (bParam1 || !func_1134(uParam0))
	{
		func_1368(uParam0);
	}
}

void func_1136(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_1137(var uParam0)
{
	if (!func_1134(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1369(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1370() - uParam0->f_1);
}

void func_1138(int iParam0)
{
	Global_0.f_7 = iParam0;
	func_1368(&(Global_0.f_9));
}

void func_1139(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_1371(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_1140(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_1140(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_1371(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1372(1);
	}
}

bool func_1141()
{
	return Global_1425247->f_53;
}

int func_1142()
{
	return &Global_1572864;
}

bool func_1143()
{
	return (func_88(&Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("RESPAWN_DUMP_BODY")) > 0);
}

void func_1144(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;

	if (func_2() == -1)
	{
		func_1373();
	}
	else
	{
		return;
	}
	func_1374();
	Global_40.f_9.f_14 = func_72();
	Global_40.f_9.f_20 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = SAVE::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1375())
		{
			func_1376(Global_1310720->f_1);
		}
		else if (func_86() == func_1377(Global_36, 1) && func_1378() != 2)
		{
			func_1376(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_1376(Global_36);
		}
		func_1379(Global_36, &vVar0, &uVar4);
		if (!func_1375())
		{
			if (func_448(vVar0, Global_36) < func_448(Global_40.f_9.f_7, Global_36))
			{
				func_1376(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_1377(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1379(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_888(Global_1935630, 8192);
	}
	func_1380();
}

void func_1145(bool bParam0)
{
	if (!func_5(&Global_0, 2))
	{
		func_1144(0, 0);
		SAVE::_0x62C9EB51656D68CE(-189896212);
		func_370(&Global_0, 2);
		if (bParam0)
		{
			func_370(&Global_0, 32);
		}
		func_730(&Global_0, 1);
	}
}

void func_1146(var uParam0, bool bParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_1381(uParam0))
	{
		return;
	}
	if (&Global_1224423 < 20)
	{
		Global_1224423 = &Global_1224423 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224423->f_1[iVar0 /*22*/]) = { *(Global_1224423->f_1[iVar0 + 1 /*22*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 10;
	Var1.f_7.f_14 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = bParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1224423->f_1[(&Global_1224423 - 1) /*22*/]) = { Var1 };
}

void func_1147(int iParam0, int iParam1)
{
	if (!func_20(iParam0))
	{
		return;
	}
	func_810(iParam0, iParam1);
}

void func_1148(int iParam0, int iParam1)
{
	if (!func_20(iParam0))
	{
		return;
	}
	func_1382(iParam0, iParam1);
}

void func_1149(bool bParam0, float fParam1)
{
	if (!func_18(bParam0))
	{
		return;
	}
	Global_40.f_490[bParam0] = fParam1;
}

void func_1150(bool bParam0, float fParam1)
{
	if (!func_18(bParam0))
	{
		return;
	}
	Global_40.f_490.f_201[bParam0] = fParam1;
}

void func_1151(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

int func_1152(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_1153()
{
	return &Global_1899516;
}

int func_1154(int iParam0)
{
	return iParam0 & 31;
}

int func_1155(bool bParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && MAP::DOES_BLIP_EXIST(((*Global_1347702)[bParam0 /*49*/])->f_37)) && ((*Global_1347702)[bParam0 /*49*/])->f_12 & 1 != 0)
	{
		return ((*Global_1347702)[bParam0 /*49*/])->f_27 == iParam2;
	}
	return 0;
}

int func_1156(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_1157(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1383(iParam0);
	}
	else
	{
		func_1384(iParam0, iParam1);
	}
	func_1385();
}

int func_1158(int iParam0)
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return iVar0 == (Global_1905944->f_22[iParam0 /*9*/])->f_1;
	}
	return 0;
}

bool func_1159(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_612(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_1160(int iParam0)
{
	int iVar0;
	int iVar1;

	func_612(iParam0, &iVar0, &iVar1);
	func_1386(iVar0, iVar1);
}

void func_1161(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1162(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1163(bool bParam0, var uParam1)
{
	if (bParam0 == 90)
	{
		if (func_397(((*Global_1347702)[bParam0 /*49*/])->f_15) != 0)
		{
			((*Global_1347702)[bParam0 /*49*/])->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return 1;
		}
	}
	else if (bParam0 == 96)
	{
		if (((*Global_1347702)[bParam0 /*49*/])->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return 1;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return 1;
		}
	}
	return 0;
}

Vector3 func_1164(bool bParam0)
{
	switch (bParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		case 33:
			return 905.92f, -421.19f, 88.23f;
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		case 38:
			return -329.32f, -366.6f, 87f;
		case 39:
			return 97.4f, -212.47f, 111.6f;
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		case 84:
			return -73.18f, -392.3f, 70.84f;
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		case 104:
			return 2407f, -585.32f, 40.66f;
		case 105:
			return -219.25f, 212.93f, 94.15f;
		case 116:
			return 211.99f, 512.98f, 126.54f;
		case 117:
			return -329.2f, 797.9f, 116.89f;
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		case 135:
			return -576.08f, 524.9f, 97.86f;
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		default:
			break;
	}
	return ((*Global_1347702)[bParam0 /*49*/])->f_24;
}

int func_1165(int iParam0)
{
	if (iParam0 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_1166(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_523(iParam0))
	{
		return false;
	}
	func_915(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1935183->f_73[iParam0 /*7*/][iVar0], iVar1);
}

int func_1167(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_1168(bool bParam0)
{
	switch (bParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_1169(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_1170()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_1171(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_1172(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_1173(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1174(int iParam0)
{
	if (!func_20(iParam0))
	{
		return 0;
	}
	switch (func_772(iParam0))
	{
		case 1:
			switch (func_17(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return 1;
			}
			break;
		case 8:
			switch (func_17(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return 1;
			}
			break;
	}
	return 0;
}

void func_1175(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_738(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_555(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1387(func_1332(iParam0), 6);
}

void func_1176(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_738(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_555(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1388(func_1332(iParam0), 6);
}

int func_1177(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1178(int iParam0)
{
	struct<5> Var0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*(Global_1898164->f_1[0 /*5*/]) = { Var0 };
		return 1;
	}
	*(Global_1898164->f_1[iParam0 /*5*/]) = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_1389(iParam0, Global_1898164->f_162);
	return 1;
}

int func_1179(bool bParam0)
{
	int iVar0;

	iVar0 = func_398(((*Global_1347702)[bParam0 /*49*/])->f_48);
	func_73(&iVar0, 0, 0, ((*Global_1347702)[bParam0 /*49*/])->f_47, 0, 0, 0, 0);
	return iVar0;
}

int func_1180(bool bParam0)
{
	if (func_2() != -1)
	{
		return 0;
	}
	if (!func_18(bParam0))
	{
		return 0;
	}
	if (((*Global_1347702)[bParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[bParam0 /*49*/])->f_13 & 2048 != 0)
	{
		return 0;
	}
	if (((*Global_1347702)[bParam0 /*49*/])->f_18 > -1f)
	{
		return 1;
	}
	return 0;
}

void func_1181(bool bParam0)
{
	if (!func_1180(bParam0))
	{
		if (((*Global_1347702)[bParam0 /*49*/])->f_13 & 16 != 0)
		{
			if (((*Global_1347702)[bParam0 /*49*/])->f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[bParam0 /*49*/])->f_37))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1347702)[bParam0 /*49*/])->f_37, -1446646876);
				}
				func_733(&(((*Global_1347702)[bParam0 /*49*/])->f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[bParam0 /*49*/])->f_37))
			{
				MAP::_SET_BLIP_FLASH_STYLE(((*Global_1347702)[bParam0 /*49*/])->f_37, -1446646876);
			}
			func_461(&(((*Global_1347702)[bParam0 /*49*/])->f_13), 32);
		}
	}
}

int func_1182(bool bParam0)
{
	if ((bParam0 == 97 || bParam0 == 99) || bParam0 == 6)
	{
		return 1;
	}
	return 0;
}

int func_1183()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_1184(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_1185(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_1390(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_1183())
	{
		return -1;
	}
	iVar0 = func_1184(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_1157(iVar1, 0);
	func_1188(iVar1, 0);
	func_1151(iVar1, 0);
	func_1382(iVar1, 0);
	func_1391(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1392(iVar1, iParam4);
	}
	return iVar1;
}

int func_1186(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_499(Global_40.f_4283.f_6[iVar0 /*5*/], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1187(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_2;
	}
	return -1;
}

void func_1188(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

int func_1189()
{
	return Global_40.f_11095.f_35;
}

bool func_1190(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_1191()
{
	int iVar0;
	int iVar1;

	iVar0 = func_398(((*Global_1347702)[9 /*49*/])->f_15);
	iVar1 = func_398(((*Global_1835011)[69 /*74*/])->f_1);
	if (func_76(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

int func_1192(bool bParam0)
{
	if (!func_84(bParam0))
	{
		return 0;
	}
	return func_226(((*Global_1835011)[bParam0 /*74*/])->f_1, 1);
}

void func_1193(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_1393(iParam0, iParam1, bParam2);
}

int func_1194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return 1;
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return 2;
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return 4;
		case joaat("HONOR_EVENT_SCARE"):
			return 32;
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return 64;
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return 128;
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return 256;
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return 512;
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return 1024;
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return 2048;
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return 4096;
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return 8192;
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return 16384;
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return 32768;
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return 65536;
		case joaat("HONOR_EVENT_THEFT"):
			return 131072;
		case joaat("HONOR_EVENT_INTERVENED"):
			return 262144;
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return 524288;
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return 1048576;
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return 2097152;
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_1195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_1196(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_1394();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_1395(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_554(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_315())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_819(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1394();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_1396(iVar1);
		func_1398(func_1397(), 0, 4000);
		func_1399(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_1400(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_567(func_759(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_1195(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1401(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1005(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1005(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_567(func_759(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_1195(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1401(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1005(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1005(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_759(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_380(10, 1);
	}
}

void func_1197(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_1198(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1 /*38*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1 /*38*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1199()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1402(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, false);
			func_1403();
		}
		return;
	}
	if (!func_226(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	func_1404();
	if (MISSIONDATA::_0x57E798B54C45EE1A(joaat("NBD1")) >= 2)
	{
		if (MISSIONDATA::_0x57E798B54C45EE1A(joaat("CABR01")) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(645322743))
	{
		return;
	}
	func_1402(1);
}

void func_1200()
{
	if (!func_226(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(304788622))
	{
		return;
	}
	func_290(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(304788622, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1968398307))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-1968398307, true);
}

void func_1201()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
		{
			func_1405(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1383789777))
	{
		return;
	}
	if (!func_226(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, true);
	func_1405(1);
}

void func_1202()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
		{
			func_687(15000, 0, 0, 0, 1);
			func_1405(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1651350587))
	{
		return;
	}
	if (!func_226(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, true);
	func_688(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1405(1);
}

void func_1203()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!func_581(1191437462 /* GXTEntry: "Le Tresor des Morts Map 1" */, 1, 0) && !func_467(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_290(1191437462 /* GXTEntry: "Le Tresor des Morts Map 1" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1406(1))
			{
				func_595(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!func_581(1119149048 /* GXTEntry: "Le Tresor des Morts Riddle Note" */, 1, 0) && !func_467(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_290(1119149048 /* GXTEntry: "Le Tresor des Morts Riddle Note" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1406(2))
			{
				func_595(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !func_1406(4))
		{
			func_595(4);
		}
		if (func_1406(0))
		{
			func_1407(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (func_581(1191437462 /* GXTEntry: "Le Tresor des Morts Map 1" */, 1, 0))
			{
				func_299(1191437462 /* GXTEntry: "Le Tresor des Morts Map 1" */, 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (func_581(1119149048 /* GXTEntry: "Le Tresor des Morts Riddle Note" */, 1, 0))
			{
				func_299(1119149048 /* GXTEntry: "Le Tresor des Morts Riddle Note" */, 1, 1, -142743235, 0);
			}
		}
		if (func_1406(1))
		{
			func_1407(1);
		}
		if (func_1406(2))
		{
			func_1407(2);
		}
		if (func_1406(4))
		{
			func_1407(4);
		}
		if (!func_1406(0))
		{
			func_595(0);
		}
	}
}

void func_1204()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;

	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER"));
	if (!bVar0)
	{
		return;
	}
	if (!func_226(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-236259196))
	{
		return;
	}
	Var1 = { func_1408() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_287(joaat("WEAPON_REVOLVER_DOUBLEACTION"));
		if (func_559(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1408() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_1409(joaat("COMPONENT_REVOLVER_DOUBLEACTION_GRIP_PEARL"), Var1, 1423542233);
		func_1409(joaat("COMPONENT_REVOLVER_DOUBLEACTION_BARREL_LONG"), Var1, -1264898804);
		func_1409(joaat("COMPONENT_SHORTARM_BARREL_MATERIAL_7"), Var1, 1592019450);
		func_1409(joaat("COMPONENT_SHORTARM_CYLINDER_MATERIAL_7"), Var1, 1117400455);
		func_1409(joaat("COMPONENT_SHORTARM_HAMMER_MATERIAL_7"), Var1, 1150213537);
		func_1409(joaat("COMPONENT_SHORTARM_SIGHT_MATERIAL_7"), Var1, 1598825281);
		func_1409(joaat("COMPONENT_SHORTARM_TRIGGER_MATERIAL_7"), Var1, -712527121);
		func_1409(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_1"), Var1, 454332195);
		func_1409(joaat("COMPONENT_SHORTARM_FRAME_MATERIAL_7"), Var1, 256105670);
		func_1409(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_MATERIAL_7"), Var1, -1328061889);
		func_1409(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_1"), Var1, -782241404);
		func_1409(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_MATERIAL_7"), Var1, 1669853467);
		func_1409(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_1"), Var1, -1559225678);
		func_1409(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_MATERIAL_7"), Var1, -266425508);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !func_670())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_533(iVar16))
			{
				if (iVar16 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
				{
					if (WEAPON::_0xD955FEE4B87AFA07(iVar16))
					{
						if (func_554(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 0, false, false);
					}
					else if (WEAPON::_0x0556E9D2ECF39D01(iVar16))
					{
						if ((func_554(24) && func_533(iVar15)) && iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
					}
				}
			}
			else if (!func_533(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
			else if (iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
				if (func_554(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(-236259196, true);
	}
}

void func_1205()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE")))
	{
		return;
	}
	if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);
	}
}

int func_1206(int iParam0)
{
	switch (func_555(iParam0))
	{
		case -2061583405:
			return 1;
		case -1719060085:
			return 1;
		case -999503751:
			return 1;
		case -525676072:
			return 1;
		case 81053684:
			return 1;
		case -413129408:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1207(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_698(iParam0, 1, 0) };
	return func_699(Var0.f_4);
}

void func_1208(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (func_2() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_700(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1108(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
		}
	}
}

int func_1209(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;

	Var4 = func_1016(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_1411(uParam0, func_1410(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_700(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("BASE");
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_1412(iVar3) && func_1355(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_1109(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1] /*3*/]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return 1;
				}
			}
		}
	}

Vector3 func_1210(int iParam0, int iParam1)
{
	if (func_2() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		return *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	return *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

int func_1211(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_1210(iParam0, iParam1) };
	return vVar0.x;
}

void func_1212(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1213(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_1214(int iParam0)
{
	func_1108(Global_1946804->f_1497.f_1[func_700(iParam0, 1) /*3*/], 2, 6);
	func_1108(Global_1946804->f_1378.f_1[func_700(iParam0, 1) /*3*/], 2, 6);
}

bool func_1215(int iParam0)
{
	return iParam0 != 0;
}

int func_1216(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!func_1215(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_9910[iVar1 /*6*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_1217(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1218(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1219()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1413(iVar1);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_1414(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1220()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1413(iVar0);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_1414(iVar1)))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(func_1414(iVar1), true);
		}
		iVar0++;
	}
}

int func_1221(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;

	if (func_2() != -1)
	{
		return 0;
	}
	if (&Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_286(iVar0, 0))
	{
		return 0;
	}
	if (!func_1415(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1242(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_297(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_698(iVar0, 0, 1) };
	iVar10 = func_1416(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1417(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1418(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_290(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_687(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1222(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar9;

	if (func_2() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(&uVar0))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar9))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

void func_1223(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1279())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, joaat("HUD_TOASTS"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, joaat("HUD_TOASTS"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1279())
	{
		iVar3 = (iVar3 + iVar2);
	}
	TELEMETRY::_0xE6DC9B21AC7A8729(func_778(iParam0), iVar3, iVar1, iParam3);
	bVar4 = func_17(iParam0);
	if (func_772(iParam0) != 1 || (bVar4 != 37 && bVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_772(iParam0))
	{
		case 1:
			switch (bVar4)
			{
				case 25:
					func_1419(1, iVar1);
					func_1419(8, iVar1);
					func_1419(7, iVar1);
					break;
				case 12:
					func_1419(6, iVar1);
					break;
				case 53:
					func_1419(3, iVar1);
					func_1419(7, iVar1);
					func_1419(4, iVar1);
					break;
				case 20:
					func_1419(8, iVar1);
					break;
				case 19:
					func_1419(1, iVar1);
					func_1419(2, iVar1);
					break;
				case 24:
					func_1419(3, iVar1);
					func_1419(9, iVar1);
					func_1419(20, iVar1);
					break;
				case 28:
					func_1419(1, iVar1);
					break;
				case 34:
					func_1419(23, iVar1);
					func_1419(2, iVar1);
					func_1419(18, iVar1);
					break;
				case 29:
					func_1419(0, iVar1);
					func_1419(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1419(0, iVar1);
					func_1419(3, iVar1);
					func_1419(2, iVar1);
					func_1419(11, iVar1);
					func_1419(6, iVar1);
					func_1419(25, iVar1);
					func_1419(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (bVar4)
			{
				case 94:
					func_1419(5, iVar1);
					break;
				case 63:
					func_1419(1, iVar1);
					func_1419(3, iVar1);
					break;
				case 37:
					func_1419(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_809(0, 10, 11, joaat("CABR01")))
			{
				func_1419(7, iVar1);
				func_1419(4, iVar1);
			}
			else if (iParam0 == func_809(0, 7, 11, joaat("CACR02")))
			{
				func_1419(8, iVar1);
				func_1419(15, iVar1);
			}
			else if (iParam0 == func_809(0, 8, 11, joaat("CACR03")))
			{
				func_1419(3, iVar1);
			}
			else if (iParam0 == func_809(0, 11, 11, joaat("CACR01")))
			{
				func_1419(6, iVar1);
				func_1419(3, iVar1);
			}
			else if (iParam0 == func_809(0, 12, 11, joaat("CACR04")))
			{
				func_1419(9, iVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1420()));
	if (!func_437(629))
	{
		func_293(629, 0);
	}
}

int func_1224(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_20(iParam0))
	{
		return 0;
	}
	uVar0 = func_475(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_1225(int iParam0)
{
	return STATS::_0x4DAC398297981B87(iParam0);
}

char* func_1226(char* sParam0)
{
	return sParam0;
}

void func_1227(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

bool func_1228(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_1229(bool bParam0)
{
	if (!func_479(bParam0))
	{
		return 0;
	}
	return ((*Global_1360165)[bParam0 /*1157*/])->f_1154;
}

void func_1230(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_479(bParam0))
	{
		return;
	}
	if (func_872(bParam0, iParam1))
	{
		func_1421(bParam0, bParam2);
		return;
	}
	iVar0 = -1;
	if (func_873(bParam0, iParam1, &iVar0))
	{
		func_879(bParam0, iVar0, bParam2);
	}
}

int func_1231(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_1422(iParam0, &iVar0))
	{
		return func_1423(iVar0);
	}
	return 0;
}

void func_1232(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		PED::_0x2B4CE170DE09F346(Global_35, iParam0);
	}
	func_1424(iParam0, 0);
}

bool func_1233(int iParam0)
{
	int iVar0;
	int iVar1;

	func_911(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

int func_1234(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return 1;
	}
	return 0;
}

void func_1235(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42605[iParam0 /*4*/] = iParam1;
	return;
}

void func_1236(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_1 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_1 = iParam1;
	return;
}

void func_1237(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_2 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_2 = iParam1;
	return;
}

bool func_1238(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_1239()
{
	return Global_1109400->f_244;
}

int func_1240(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_1241(var uParam0)
{
	*uParam0 = 0;
}

int func_1242(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_1243(int iParam0)
{
	if (!func_286(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			return 1;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			return 1;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			return 1;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			return 1;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1244(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_698(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_943((375 + iVar29), 1);
		if (func_944(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_945(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return 1;
			}
		}
		iVar29++;
	}
	return 0;
}

int func_1245(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_946(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_738(bParam6), &Var0, 0);
	return uVar4;
}

int func_1246(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_1247(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_1425(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_1425(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_1425(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

int func_1248(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_554(18);
		case 2:
			return func_554(20);
		case 1:
			return func_554(19);
		default:
			break;
	}
	return 1;
}

int func_1249(int iParam0)
{
	return func_1426(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1250(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_2() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_554(31))
	{
		return;
	}
	iVar0 = func_1249(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1249(iParam0);
	if (func_1427(iParam0) && func_1428(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1429(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1430(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_293(func_1431(iParam0), 0);
					}
					func_1432(iParam0, iVar2, iVar3);
					func_1433(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1251(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1252(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("ITEMTYPE_PLAYER_STAMINA");
		case 0:
			return joaat("ITEMTYPE_PLAYER_HEALTH");
		case 2:
			return joaat("ITEMTYPE_PLAYER_DEADEYE");
		default:
			break;
	}
	return 0;
}

int func_1253(int iParam0, var uParam1)
{
	if (!func_1434(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1254()
{
	return func_1435(Global_40.f_12018);
}

int func_1255()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_930(iVar1);
		if (func_581(iVar2, 1, 0) || func_1261(func_1260(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1256()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1436(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1257()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1266(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1258()
{
	return COLLECTION::_0x3A65F4844913A047(joaat("ROCK_CARVINGS"), 0);
}

int func_1259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588 /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return -1021394391 /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return -987306668 /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return -1028735103 /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return 515229791 /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return -1230863414 /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return 232875659 /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return 1423129537 /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return -435742319 /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return -1854702679 /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return 1265323898 /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return -479775696 /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_1260(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			return 1;
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			return 8;
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			return 4;
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			return 16;
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			return 32;
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			return 64;
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			return 128;
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			return 256;
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			return 2;
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			return 512;
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			return 1024;
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_1261(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_1262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1263(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_1264(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_1265(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return "COL_EP_LITTLE_FOUND";
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return "COL_EP_REDDISH_FOUND";
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return "COL_EP_SNOWY_FOUND";
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case joaat("PROVISION_HERON_FEATHER"):
			return "COL_HF_FOUND";
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return "COL_RO_LADY_SLIPPER_FOUND";
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return "COL_RO_MOCCASIN_FOUND";
		case joaat("PROVISION_GATOR_EGG"):
			return "COL_GF_FOUND";
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return "COL_RO_ACUNAS_STAR_FOUND";
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return "COL_RO_CIGAR_FOUND";
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return "COL_RO_GHOST_FOUND";
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return "COL_SF_FOUND";
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return "COL_RO_RAT_TAIL_FOUND";
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return "COL_RO_SPIDER_FOUND";
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return "COL_RO_CLAMSHELL_FOUND";
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return "COL_RO_DRAGONS_FOUND";
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return "COL_RO_QUEENS_FOUND";
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_1266(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_1267(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LEGENDARY_FISH_01"):
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case joaat("LEGENDARY_FISH_02"):
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case joaat("LEGENDARY_FISH_03"):
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case joaat("LEGENDARY_FISH_04"):
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_05"):
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case joaat("LEGENDARY_FISH_06"):
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case joaat("LEGENDARY_FISH_07"):
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case joaat("LEGENDARY_FISH_08"):
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case joaat("LEGENDARY_FISH_09"):
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_10"):
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_11"):
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case joaat("LEGENDARY_FISH_12"):
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case joaat("LEGENDARY_FISH_13"):
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_1268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1269(int iParam0)
{
	if (func_1437(iParam0) && func_581(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_1438(iParam0) && func_1439(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_1270(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_598(iParam0));
}

int func_1271(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

int func_1272(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_738(0);
	*uParam1 = { func_946(iParam0, func_1021(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_1273(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1274(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1275(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_1276(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_700(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_703(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, joaat("BASE"), iParam2, bParam3));
	return iVar0;
}

int func_1277(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_TOOTH_LEGENDARY");
		case 1:
			return joaat("PROVISION_BISON_HORN_LEGENDARY");
		case 2:
			return joaat("PROVISION_BUCK_ANTLER_LEGENDARY");
		case 3:
			return joaat("PROVISION_COUGAR_FANG_LEGENDARY");
		case 4:
			return joaat("PROVISION_COYOTE_FANG_LEGENDARY");
		case 5:
			return joaat("PROVISION_ELK_ANTLER_LEGENDARY");
		case 6:
			return joaat("PROVISION_FOX_CLAW_LEGENDARY");
		case 7:
			return joaat("PROVISION_LIONS_PAW");
		case 8:
			return joaat("PROVISION_MOOSE_ANTLER_LEGENDARY");
		case 9:
			return joaat("PROVISION_PANTHER_EYE_LEGENDARY");
		case 10:
			return joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY");
		case 11:
			return joaat("PROVISION_RAM_HORN_LEGENDARY");
		case 12:
			return joaat("PROVISION_WOLF_HEART_LEGENDARY");
		case 13:
			return joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
		case 14:
			return joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
		case 15:
			return joaat("PROVISION_BRACELET_GOLD");
		case 16:
			return joaat("PROVISION_BEAR_LEGENDARY_CLAW");
		case 17:
			return joaat("PROVISION_RC_QUARTZ_CHUNK");
		case 18:
			return joaat("PROVISION_BRACELET_SILVER");
		case 19:
			return joaat("PROVISION_BOAR_TUSK_LEGENDARY");
		case 20:
			return joaat("PROVISION_RF_WOOD_COBALT");
		case 21:
			return joaat("PROVISION_EARRING_GOLD");
		case 22:
			return joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
		case 23:
			return joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
		case 24:
			return joaat("PROVISION_EARRING_SILVER");
		case 25:
			return joaat("PROVISION_OLD_BRASS_COMPASS");
		default:
			break;
	}
	return 0;
}

int func_1278(int iParam0)
{
	return func_1440(iParam0, -1);
}

int func_1279()
{
	if (func_840())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_1280(bool bParam0, char* sParam1, int iParam2)
{
	if (bParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1279())
	{
		func_1005(MISC::_CREATE_VAR_STRING(2, sParam1, bParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_1005(MISC::_CREATE_VAR_STRING(2, sParam1, bParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_1281(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_1282(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1283(int iParam0)
{
	switch (iParam0)
	{
		case joaat("EXOTIC_STAGE_01"):
			return 1;
		case joaat("EXOTIC_STAGE_02"):
			return 2;
		case joaat("EXOTIC_STAGE_03"):
			return 4;
		case joaat("EXOTIC_STAGE_04"):
			return 8;
		case joaat("EXOTIC_STAGE_05"):
			return 16;
		default:
			break;
	}
	return 0;
}

void func_1284(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_1285(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1286()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_1287(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1288()
{
	float fVar0;
	int iVar1;

	fVar0 = func_312(13);
	iVar1 = func_1441(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1289()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1290()
{
	if (func_840())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1291()
{
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1292()
{
	return Global_1955565->f_3;
}

void func_1293(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1442(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), bParam2);
}

void func_1294(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1442(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), false);
	}
}

bool func_1295()
{
	return func_312(12) <= -99f;
}

bool func_1296()
{
	return func_312(12) >= 99f;
}

int func_1297()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_555(iVar1) == -999503751)
		{
			if (func_1443() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1298(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_1299(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1444(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_301(50);
			}
			else
			{
				func_301(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_301(51);
			}
			else
			{
				func_301(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1445(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_585();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_585();
			}
			break;
		case 3:
			func_301(24);
			if (bParam1)
			{
				if (!func_1445(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_585();
				}
			}
			break;
	}
}

void func_1300(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1446(0))
			{
				iVar0++;
			}
			if (func_1446(2))
			{
				iVar0++;
			}
			if (func_1446(4))
			{
				iVar0++;
			}
			if (!func_1447(16))
			{
				if (iVar0 == 1)
				{
					func_1448();
					func_293(456, 1);
					func_1449(16);
				}
			}
			if (!func_1447(32))
			{
				if (iVar0 >= 3)
				{
					func_1448();
					func_293(456, 1);
					func_1449(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1446(1))
			{
				iVar0++;
			}
			if (func_1446(3))
			{
				iVar0++;
			}
			if (func_1446(7))
			{
				iVar0++;
			}
			if (!func_1447(1))
			{
				if (iVar0 == 1)
				{
					func_1450();
					func_293(457, 1);
					func_1449(1);
				}
			}
			if (!func_1447(2))
			{
				if (iVar0 >= 3)
				{
					func_1450();
					func_293(457, 1);
					func_1449(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1446(5))
			{
				iVar0++;
			}
			if (func_1446(6))
			{
				iVar0++;
			}
			if (func_1446(8))
			{
				iVar0++;
			}
			if (!func_1447(4))
			{
				if (iVar0 == 1)
				{
					func_1451();
					func_293(455, 1);
					func_1449(4);
				}
			}
			if (!func_1447(8))
			{
				if (iVar0 >= 3)
				{
					func_1451();
					func_293(455, 1);
					func_1449(8);
				}
			}
			break;
	}
}

void func_1301(var uParam0)
{
	func_1000(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1000(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_1000(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_1302(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1381(uParam0))
	{
		return;
	}
	if (&Global_1224865 < 20)
	{
		Global_1224865 = &Global_1224865 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224865->f_1[iVar0 /*21*/]) = { *(Global_1224865->f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224865->f_1[(&Global_1224865 - 1) /*21*/]) = { Var1 };
}

int func_1303(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_1304(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_1305(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

int func_1306(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_976(iVar9);
	iVar2 = func_976(iVar10);
	iVar3 = func_976(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_976(iVar12);
	}
	iVar5 = func_977(iVar9);
	iVar6 = func_977(iVar10);
	iVar7 = func_977(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_977(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_1307(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1452(bParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_1308(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 24f));
}

int func_1309(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 60f));
}

int func_1310(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 60f));
}

void func_1311(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1453(func_72(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_1312(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar1;

	switch (iParam0)
	{
		case 0:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 2:
			*iParam1 = 4;
			*iParam2 = 0;
			break;
		case 3:
			*iParam1 = 8;
			*iParam2 = 0;
			break;
		case 4:
			*iParam1 = 12;
			*iParam2 = 0;
			break;
		case 5:
			*iParam1 = 20;
			*iParam2 = 0;
			break;
		case 6:
			*iParam1 = 20;
			*iParam2 = 0;
			break;
		case 7:
			*iParam1 = 32;
			*iParam2 = 0;
			break;
		case 8:
			*iParam1 = 32;
			*iParam2 = 0;
			break;
		case 9:
			*iParam1 = 52;
			*iParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_1040(iParam1, iParam2, &uVar0, &uVar1, 0, func_1454());
	}
}

void func_1313()
{
	bool bVar0;

	bVar0 = func_1043();
	Global_40.f_7748.f_6 = 0;
	if (bVar0 && !func_1043())
	{
		func_1455(14);
	}
}

void func_1314(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_1456(iParam0))
	{
		return;
	}
	if (Global_40.f_7748.f_1 == iParam0)
	{
		return;
	}
	Global_40.f_7748.f_1 = iParam0;
	if (!bParam1)
	{
		Global_40.f_7748.f_5 = func_72();
		bVar2 = (Global_40.f_7748.f_1 < 9 && func_1043());
		func_1312(Global_40.f_7748.f_1, &iVar0, &iVar1, bVar2);
		func_73(&(Global_40.f_7748.f_5), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_1315()
{
	bool bVar0;

	bVar0 = func_1043();
	Global_40.f_7748.f_6 = (Global_40.f_7748.f_6 - 1);
	if (bVar0 && !func_1043())
	{
		func_1455(14);
	}
}

void func_1316()
{
	int iVar0;

	if (func_1457() >= 7)
	{
		iVar0 = func_72();
		func_73(&iVar0, 0, 0, 0, 2, 0, 0, 0);
		DECORATOR::DECOR_SET_INT(Global_35, "hairLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "hairShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "hairLong");
	}
}

void func_1317(int iParam0)
{
	bool bVar0;

	bVar0 = func_648(iParam0);
	(Global_40.f_7731[iParam0 /*5*/])->f_4 = 0;
	if (bVar0 && !func_648(iParam0))
	{
		func_293(490, 1);
		func_1458(iParam0, 0);
	}
}

void func_1318(int iParam0)
{
	if (iParam0 >= 7)
	{
		func_293(489, 0);
	}
	if ((iParam0 >= 4 && Global_1897952->f_41 != 8) && func_226(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		func_293(493, 0);
	}
}

void func_1319(int iParam0)
{
	bool bVar0;

	bVar0 = func_648(iParam0);
	(Global_40.f_7731[iParam0 /*5*/])->f_4 = ((Global_40.f_7731[iParam0 /*5*/])->f_4 - 1);
	if (bVar0 && !func_648(iParam0))
	{
		func_293(490, 1);
		func_1458(iParam0, 0);
	}
}

void func_1320()
{
	int iVar0;

	iVar0 = func_72();
	func_73(&iVar0, 0, 0, 0, 2, 0, 0, 0);
	if (func_1459(0) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chinLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chinShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chinLong");
	}
	if (func_1459(1) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chopsLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chopsShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chopsLong");
	}
	if (func_1459(2) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "stacheLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "stacheShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "stacheLong");
	}
}

int func_1321(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_699(iVar0);
}

var func_1322(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_759(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_1323()
{
	int iVar0;

	if (func_2() == 0)
	{
		return -1;
	}
	iVar0 = func_797();
	if (iVar0 == -1)
	{
		return 150000;
	}
	if (iVar0 <= 1)
	{
		return 30000;
	}
	if (iVar0 == 2 && !func_85(24))
	{
		return 50000;
	}
	return 150000;
}

int func_1324()
{
	return Global_1934266->f_4;
}

void func_1325(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYAMBARINO"), iParam1);
			break;
		case 1:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYNEWHANOVER"), iParam1);
			break;
		case 2:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYLEMOYNE"), iParam1);
			break;
		case 3:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYWESTELIZABETH"), iParam1);
			break;
		case 4:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYNEWAUSTIN"), iParam1);
			break;
		default:
			break;
	}
}

void func_1326(int iParam0)
{
	int iVar0;

	iVar0 = func_1460(iParam0);
	switch (iParam0)
	{
		case 0:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELAMBARINO"), iVar0);
			break;
		case 1:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELNEWHANOVER"), iVar0);
			break;
		case 2:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELLEMOYNE"), iVar0);
			break;
		case 3:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELWESTELIZABETH"), iVar0);
			break;
		case 4:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELNEWAUSTIN"), iVar0);
			break;
		default:
			break;
	}
}

void func_1327(int iParam0, bool bParam1)
{
	if (!func_365(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_716(iParam0, 4);
	}
	else
	{
		func_717(iParam0, 4);
	}
	func_1461(iParam0, bParam1);
}

bool func_1328(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132154->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1462(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1329(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_3), uParam0);
}

int func_1330(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_1331(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_555(iParam0) != -999503751)
		{
			func_1463(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_555(iParam0) != -999503751)
	{
		func_1463(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1094(iParam0, 1);
	return 1;
}

int func_1331(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

int func_1332(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_1333(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

void func_1334(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_1335(int iParam0)
{
	int iVar0;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_555(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_1336(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_738(bParam6), &uParam0, iParam4, &Var0))
	{
		return 0;
	}
	if (!func_1101(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_1337(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_558(0))
	{
		return func_1464(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1101(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_738(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1338(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
	}
	if (func_297(iParam0, 162787671))
	{
		return 1;
	}
	return 0;
}

int func_1339(int iParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_1465(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_1082() };
	*iParam1 = func_1340(Var0, iParam0, 0);
	if (!func_286(*iParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1340(struct<4> Param0, int iParam4, int iParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1336(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1341(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return 1;
	}
	return 0;
}

int func_1342(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	int iVar30;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var2 = { func_1020(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_1022(&Var2, func_1082());
	if (func_1023(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_384(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_286(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_1341(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_385(iVar0);
						return 1;
					}
				}
			}
			iVar30++;
		}
		func_385(iVar0);
	}
	return 0;
}

void func_1343(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1344(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1466(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_700(func_1207(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1467(uParam0);
	}
}

int func_1345(bool bParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = iParam1;
	}
	if (iParam4 != 0)
	{
		iVar1 = iParam4;
	}
	else
	{
		iVar1 = func_619(iParam1);
	}
	if (iVar0 == -1 && !func_622(iVar1, func_693()))
	{
		return 1;
	}
	if (uParam2->f_1 != 0 && func_1468(uParam2, 1))
	{
		if (uParam2->f_1 == iVar1)
		{
			if (bParam3)
			{
				return func_1469(bParam0, uParam2);
			}
			else
			{
				return 1;
			}
		}
		else if (uParam2->f_1 != iVar1)
		{
			func_1470(uParam2);
		}
	}
	if (!func_1468(uParam2, 1))
	{
		func_1471(&(uParam2->f_1));
		if (!bParam5)
		{
			if (!func_1472(&(uParam2->f_1), &uVar2, iVar1, iVar0, 1, 0))
			{
				return 1;
			}
		}
		uParam2->f_1 = iVar1;
		func_1473(uParam2, 1);
	}
	if (!bParam3)
	{
		return 1;
	}
	return func_1469(bParam0, uParam2);
}

bool func_1346(bool bParam0)
{
	return func_1474(bParam0, &(Global_1946804->f_1949));
}

int func_1347(bool bParam0, bool bParam1, bool bParam2)
{
	return func_1475(bParam0, &(Global_1946804->f_1949), bParam1, 0, 1, bParam2);
}

void func_1348(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iParam0 = 0;
	}
	else
	{
		iVar0 |= 1;
	}
	if (bParam2 && Global_1946804->f_2535 != 0)
	{
		func_1476(Global_1946804->f_2535);
		func_1477(0);
		Global_1946804->f_2535 = 0;
	}
	if (func_703(32768))
	{
		func_1478(1108822547);
	}
	if (func_2() != -1)
	{
		func_325(2, 0, 6, iParam0, 0);
		func_325(4, 0, 0, iParam0, 0);
		func_325(5, 0, 0, iParam0, 0);
		func_325(6, 0, 0, iParam0, 0);
	}
	else
	{
		func_325(2, 0, iVar0, iParam0, 0);
	}
	func_1334(0);
}

void func_1349(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1479(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_1479(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_1480(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

void func_1350(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1481(uParam0, 1))
	{
		func_1482(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_1351(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_1352(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("BASE");
		}
		if (bParam2)
		{
			func_1107(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1107(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == joaat("CUSTOM"))
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = joaat("BASE");
		if (bParam3)
		{
			func_1107(iVar2, iVar0);
		}
	}
}

int func_1353(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_693();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1354(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, iParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1355(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return 1;
}

bool func_1356(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_700(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_1357(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_1358(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_2() == -1)
	{
		func_1212(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_1483(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_1359(int iParam0, int iParam1)
{
	if (func_2() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

void func_1360(int iParam0, bool bParam1, int iParam2)
{
	func_1484(&(Global_1946804->f_1378), iParam0);
	func_1485(2, iParam0, 6);
	if (bParam1)
	{
		func_1080(0, 1);
	}
}

int func_1361(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case joaat("REGION_BAY_CRAWDADWILLIES"):
			return 0;
		case joaat("REGION_BAY_MACOMBS_END"):
			return 1;
		case joaat("REGION_BAY_MERKINSWALLER"):
			return 2;
		case joaat("REGION_BAY_LAGRAS"):
			return 3;
		case joaat("REGION_BAY_LAKAY"):
			return 4;
		case joaat("REGION_BAY_SAINT_DENIS"):
			return 5;
		case joaat("REGION_BAY_ORANGE_PLANTATION"):
			return 6;
		case joaat("REGION_BAY_SERIAL_KILLER"):
			return 7;
		case joaat("REGION_BAY_SERENDIPITY"):
			return 8;
		case joaat("REGION_BAY_SHADYBELLE"):
			return 9;
		case joaat("REGION_BAY_SILTWATERSTRAND"):
			return 10;
		case joaat("REGION_BGV_APPLESEEDTIMBER"):
			return 11;
		case joaat("REGION_BGV_BERYLS_DREAM"):
			return 12;
		case joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER"):
			return 13;
		case joaat("REGION_BGV_DAKOTARIVER_TRAPPER"):
			return 14;
		case joaat("REGION_BGV_FORTRIGGS"):
			return 15;
		case joaat("REGION_BGV_HANGINGDOG"):
			return 16;
		case joaat("REGION_BGV_LONEMULESTEAD"):
			return 17;
		case joaat("REGION_BGV_MISSING_HUSBAND"):
			return 18;
		case joaat("REGION_BGV_MONTO_REST"):
			return 19;
		case joaat("REGION_BGV_OWANJILA_DAM"):
			return 20;
		case joaat("REGION_BGV_PAINTEDSKY"):
			return 21;
		case joaat("REGION_BGV_PRONGHORN"):
			return 22;
		case joaat("REGION_BGV_RIGGS_STATION"):
			return 23;
		case joaat("REGION_BGV_SHACK"):
			return 24;
		case joaat("REGION_BGV_SHEPHERDS_RISE"):
			return 25;
		case joaat("REGION_BGV_STRAWBERRY"):
			return 26;
		case joaat("REGION_BGV_VALLEY_VIEW"):
			return 27;
		case joaat("REGION_BGV_WATSONSCABIN"):
			return 29;
		case joaat("REGION_BLU_CANEBREAK_MANOR"):
			return 30;
		case joaat("REGION_BLU_COPPERHEAD"):
			return 31;
		case joaat("REGION_BLU_SISIKA"):
			return 32;
		case joaat("REGION_CML_BACCHUSBRIDGE"):
			return 33;
		case joaat("REGION_CML_DINO_LADY"):
			return 34;
		case joaat("REGION_CML_OLDFORTWALLACE"):
			return 35;
		case joaat("REGION_CML_SIXPOINTCABIN"):
			return 36;
		case joaat("REGION_GRT_BEECHERS"):
			return 37;
		case joaat("REGION_GRT_BLACKWATER"):
			return 38;
		case joaat("REGION_GRT_QUAKERS_COVE"):
			return 39;
		case joaat("REGION_GRZ_ADLERRANCH"):
			return 40;
		case joaat("REGION_GRZ_DEAD_RIVAL"):
			return 41;
		case joaat("REGION_GRZ_CALUMETRAVINE"):
			return 50;
		case joaat("REGION_GRE_CIVIL_WAR_BRIDE"):
			return 51;
		case joaat("REGION_GRZ_CHEZPORTER"):
			return 42;
		case joaat("REGION_GRZ_COHUTTA"):
			return 52;
		case joaat("REGION_GRZ_COLTER"):
			return 43;
		case joaat("REGION_GRZ_FROZEN_EXPLORER"):
			return 44;
		case joaat("REGION_GRZ_GUNFIGHT"):
			return 53;
		case joaat("REGION_GRZ_MILLESANI_CLAIM"):
			return 45;
		case joaat("REGION_GRZ_MOUNTAIN_MAN"):
			return 46;
		case joaat("REGION_GRZ_STARVING_CHILDREN"):
			return 47;
		case joaat("REGION_GRZ_TEMPEST_RIM"):
			return 48;
		case joaat("REGION_GRZ_THELOFT"):
			return 54;
		case joaat("REGION_BGV_WALLACE_STATION"):
			return 28;
		case joaat("REGION_GRE_VETERAN"):
			return 55;
		case joaat("REGION_GRZ_WAPITI"):
			return 56;
		case joaat("REGION_GRZ_WINTERMINING_TOWN"):
			return 49;
		case joaat("REGION_GUA_AGUASDULCES"):
			return 57;
		case joaat("REGION_GUA_CAMP"):
			return 58;
		case joaat("REGION_GUA_CINCOTORRES"):
			return 59;
		case joaat("REGION_GUA_LACAPILLA"):
			return 60;
		case joaat("REGION_GUA_MANICATO"):
			return 61;
		case joaat("REGION_HRT_ABANDONED_MILL"):
			return 62;
		case joaat("REGION_HRT_CARMODYDELL"):
			return 64;
		case joaat("REGION_HRT_CORNWALLKEROSENE"):
			return 65;
		case joaat("REGION_HRT_CROP_FARM"):
			return 66;
		case joaat("REGION_HRT_CUMBERLANDFALLS"):
			return 67;
		case joaat("REGION_HRT_DOWNSRANCH"):
			return 68;
		case joaat("REGION_HRT_EMERALDRANCH"):
			return 69;
		case joaat("REGION_HRT_GRANGERS_HOGGERY"):
			return 70;
		case joaat("REGION_HRT_HORSESHOEOVERLOOK"):
			return 71;
		case joaat("REGION_HRT_LARNEDSOD"):
			return 72;
		case joaat("REGION_HRT_LOONY_CULT"):
			return 73;
		case joaat("REGION_HRT_LUCKYSCABIN"):
			return 74;
		case joaat("REGION_HRT_SWANSONS_STATION"):
			return 75;
		case joaat("REGION_HRT_VALENTINE"):
			return 76;
		case joaat("REGION_ROA_ABERDEENPIGFARM"):
			return 77;
		case joaat("REGION_ROA_ANNESBURG"):
			return 78;
		case joaat("REGION_ROA_BEECHERS_C"):
			return 63;
		case joaat("REGION_ROA_BEAVERHOLLOW"):
			return 79;
		case joaat("REGION_ROA_BLACK_BALSAM_RISE"):
			return 80;
		case joaat("REGION_ROA_BRANDYWINE_DROP"):
			return 81;
		case joaat("REGION_ROA_BUTCHERCREEK"):
			return 82;
		case joaat("REGION_ROA_DOVERHILL"):
			return 83;
		case joaat("REGION_ROA_HAPPY_FAMILY"):
			return 84;
		case joaat("REGION_ROA_ISOLATIONIST"):
			return 85;
		case joaat("REGION_ROA_MACLEANSHOUSE"):
			return 86;
		case joaat("REGION_ROA_MOSSY_FLATS"):
			return 87;
		case joaat("REGION_ROA_ROANOKE_VALLEY"):
			return 88;
		case joaat("REGION_ROA_ROCKYSEVEN"):
			return 89;
		case joaat("REGION_ROA_TRAPPER"):
			return 90;
		case joaat("REGION_ROA_VANHORNMANSION"):
			return 91;
		case joaat("REGION_ROA_VANHORNPOST"):
			return 92;
		case joaat("REGION_SCM_BRAITHWAITEMANOR"):
			return 93;
		case joaat("REGION_SCM_BULGERGLADE"):
			return 94;
		case joaat("REGION_SCM_CALIGAHALL"):
			return 95;
		case joaat("REGION_SCM_CATFISHJACKSONS"):
			return 96;
		case joaat("REGION_SCM_CLEMENSCOVE"):
			return 97;
		case joaat("REGION_SCM_CLEMENSPOINT"):
			return 98;
		case joaat("REGION_SCM_HORSE_SHOP"):
			return 101;
		case joaat("REGION_SCM_LONNIESSHACK"):
			return 102;
		case joaat("REGION_SCM_LOVE_TRIANGLE"):
			return 103;
		case joaat("REGION_SCM_COMPSONS_STEAD"):
			return 99;
		case joaat("REGION_SCM_DAIRY_FARM"):
			return 100;
		case joaat("REGION_SCM_RADLEYS_PASTURE"):
			return 104;
		case joaat("REGION_SCM_RHODES"):
			return 105;
		case joaat("REGION_SCM_SLAVE_PEN"):
			return 106;
		case joaat("REGION_TAL_AURORA_BASIN"):
			return 107;
		case joaat("REGION_TAL_DEAD_SETTLER"):
			return 108;
		case joaat("REGION_TAL_COCHINAY"):
			return 109;
		case joaat("REGION_TAL_MANZANITAPOST"):
			return 110;
		case joaat("REGION_TAL_PACIFICUNIONRR"):
			return 111;
		case joaat("REGION_TAL_TANNERSREACH"):
			return 112;
		case joaat("REGION_TAL_TRAPPER"):
			return 113;
		case joaat("REGION_HEN_MACFARLANES_RANCH"):
			return 126;
		case joaat("REGION_HEN_THIEVES_LANDING"):
			return 127;
		case joaat("REGION_CHO_ARMADILLO"):
			return 120;
		case joaat("REGION_CHO_COOTS_CHAPEL"):
			return 121;
		case joaat("REGION_CHO_DON_JULIO_HOUSE"):
			return 122;
		case joaat("REGION_CHO_RIDGEWOOD_FARM"):
			return 124;
		case joaat("REGION_CHO_RILEYS_CHARGE"):
			return 123;
		case joaat("REGION_CHO_TWIN_ROCKS"):
			return 125;
		case joaat("REGION_GAP_GAPTOOTH_BREACH"):
			return 114;
		case joaat("REGION_GAP_TUMBLEWEED"):
			return 115;
		case joaat("REGION_GAP_RATHSKELLER_FORK"):
			return 116;
		case joaat("REGION_GAP_SOLOMONS_FOLLY"):
			return 129;
		case joaat("REGION_RIO_BENEDICT_POINT"):
			return 117;
		case joaat("REGION_RIO_FORT_MERCER"):
			return 118;
		case joaat("REGION_RIO_PLAIN_VIEW"):
			return 119;
		case joaat("REGION_CENTRALUNIONRR"):
			return 128;
		default:
			break;
	}
	return -1;
}

int func_1362(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISTRICT_BAYOU_NWA"):
			return 0;
		case joaat("DISTRICT_BIG_VALLEY"):
			return 1;
		case joaat("DISTRICT_BLUEGILL_MARSH"):
			return 2;
		case joaat("DISTRICT_CUMBERLAND_FOREST"):
			return 3;
		case joaat("DISTRICT_GREAT_PLAINS"):
			return 4;
		case joaat("DISTRICT_GRIZZLIES"):
			return 5;
		case joaat("DISTRICT_GRIZZLIES_EAST"):
			return 6;
		case joaat("DISTRICT_GRIZZLIES_WEST"):
			return 7;
		case joaat("DISTRICT_GUAMA"):
			return 8;
		case joaat("DISTRICT_HEARTLAND"):
			return 9;
		case joaat("DISTRICT_ROANOKE_RIDGE"):
			return 10;
		case joaat("DISTRICT_SCARLETT_MEADOWS"):
			return 11;
		case joaat("DISTRICT_TALL_TREES"):
			return 12;
		case joaat("DISTRICT_GAPTOOTH_RIDGE"):
			return 13;
		case joaat("DISTRICT_RIO_BRAVO"):
			return 14;
		case joaat("DISTRICT_CHOLLA_SPRINGS"):
			return 15;
		case joaat("DISTRICT_HENNIGANS_STEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

int func_1363(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("STATE_LEMOYNE");
		case 3:
			return joaat("STATE_WEST_ELIZABETH");
		case 1:
			return joaat("STATE_NEW_HANOVER");
		case 0:
			return joaat("STATE_AMBARINO");
		case 4:
			return joaat("STATE_NEW_AUSTIN");
		case 5:
			return joaat("STATE_GUARMA");
		default:
			break;
	}
	return 0;
}

int func_1364(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DISTRICT_BAYOU_NWA");
		case 1:
			return joaat("DISTRICT_BIG_VALLEY");
		case 2:
			return joaat("DISTRICT_BLUEGILL_MARSH");
		case 3:
			return joaat("DISTRICT_CUMBERLAND_FOREST");
		case 4:
			return joaat("DISTRICT_GREAT_PLAINS");
		case 5:
			return joaat("DISTRICT_GRIZZLIES");
		case 6:
			return joaat("DISTRICT_GRIZZLIES_EAST");
		case 7:
			return joaat("DISTRICT_GRIZZLIES_WEST");
		case 8:
			return joaat("DISTRICT_GUAMA");
		case 9:
			return joaat("DISTRICT_HEARTLAND");
		case 10:
			return joaat("DISTRICT_ROANOKE_RIDGE");
		case 11:
			return joaat("DISTRICT_SCARLETT_MEADOWS");
		case 12:
			return joaat("DISTRICT_TALL_TREES");
		case 15:
			return joaat("DISTRICT_CHOLLA_SPRINGS");
		case 13:
			return joaat("DISTRICT_GAPTOOTH_RIDGE");
		case 16:
			return joaat("DISTRICT_HENNIGANS_STEAD");
		case 14:
			return joaat("DISTRICT_RIO_BRAVO");
		default:
			break;
	}
	return 1776960747;
}

int func_1365(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return joaat("MISSION_COOP_CHAR_CREATOR");
		case 1:
			return joaat("MISSION_COOP_INTRO_RHODES");
		case 2:
			return joaat("MISSION_COOP_INTRO_VALENTINE");
		case 3:
			return joaat("MISSION_COOP_INTRO_BLACKWATER");
		case 4:
			return joaat("MISSION_COOP_INTRO_TUMBLEWEED");
		case 5:
			return joaat("MISSION_COOP_FREEMODE_TUTORIAL_RHODES");
		case 6:
			return joaat("MISSION_COOP_FREEMODE_TUTORIAL_VALENTINE");
		case 7:
			return joaat("MISSION_COOP_FREEMODE_TUTORIAL_BLACKWATER");
		case 8:
			return joaat("MISSION_COOP_FREEMODE_TUTORIAL_TUMBLEWEED");
		case 9:
			return joaat("MISSION_COOP_CLAY2_RHODES");
		case 10:
			return joaat("MISSION_COOP_CLAY2_VALENTINE");
		case 11:
			return joaat("MISSION_COOP_CLAY2_BLACKWATER");
		case 12:
			return joaat("MISSION_COOP_CLAY2_TUMBLEWEED");
		case 13:
			return joaat("MISSION_COOP_GVO_INTRO_1");
		case 14:
			return joaat("MISSION_COOP_GVO_INTRO_2");
		case 15:
			return joaat("MISSION_COOP_GVO_INTRO_3");
		case 16:
			return joaat("MISSION_COOP_GVO_OUTLAW_1");
		case 17:
			return joaat("MISSION_COOP_GVO_OUTLAW_2");
		case 18:
			return joaat("MISSION_COOP_GVO_OUTLAW_3");
		case 19:
			return joaat("MISSION_COOP_GVO_OUTLAW_4");
		case 20:
			return joaat("MISSION_COOP_GVO_GUNSLINGER_1");
		case 21:
			return joaat("MISSION_COOP_GVO_GUNSLINGER_2");
		case 22:
			return joaat("MISSION_COOP_GVO_GUNSLINGER_3");
		case 23:
			return joaat("MISSION_COOP_GVO_GUNSLINGER_4");
		case 24:
			return joaat("MISSION_COOP_GVO_REVENGE_1");
		default:
			break;
	}
	return 0;
}

float func_1366(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_FLOAT(&uParam0, &uVar0);
	return uVar0;
}

bool func_1367(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1368(var uParam0)
{
	func_1486(uParam0, 0f);
}

bool func_1369(var uParam0)
{
	return func_1367(*uParam0, 2);
}

float func_1370()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_1371(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_1372(1);
	}
}

void func_1372(bool bParam0)
{
	if (bParam0)
	{
		func_1487(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_1488(&(Global_40.f_12018.f_42), 1);
	}
}

void func_1373()
{
	if (func_2() != -1)
	{
		return;
	}
	if (!func_70())
	{
		return;
	}
	func_1489(&(Global_40.f_40));
}

void func_1374()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar0 /*373*/])->f_1))
		{
			(Global_40.f_11029[iVar0 /*5*/])->f_1 = { VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iVar0 /*373*/])->f_1) };
			(Global_40.f_11029[iVar0 /*5*/])->f_4 = VEHICLE::_0x67995318F5FAA496(((*Global_1425371)[iVar0 /*373*/])->f_1);
		}
		iVar0++;
	}
}

bool func_1375()
{
	return !func_1050(Global_1310720->f_1);
}

void func_1376(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_1377(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_1490();
	if (func_327(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_1491(vParam0, iParam3);
}

int func_1378()
{
	return Global_40.f_4283.f_4;
}

void func_1379(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;

	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_1492())
	{
		fVar0 = func_727(vParam0, Global_40.f_6);
	}
	if (func_1493(33554432))
	{
		if (!func_1051(Global_40.f_2, 0f, 0f, 0f, 1056964608 /* Float: 0.5f */, 1))
		{
			fVar1 = func_727(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150f && fVar0 > 150f)
	{
		*uParam3 = { Global_36 };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*uParam4 = 3;
	}
}

void func_1380()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;

	if (!func_88(&Global_1935630, 8192))
	{
		return;
	}
	if (func_6(32768))
	{
		return;
	}
	func_1173(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_1494(joaat("COMPLETED"), joaat("MISSIONS_CHP1")))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(func_1494(joaat("COMPLETED"), joaat("MISSIONS_CHP2")))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(func_1494(joaat("COMPLETED"), joaat("MISSIONS_CHP3")))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(func_1494(joaat("COMPLETED"), joaat("MISSIONS_CHP4")))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_1494(joaat("COMPLETED"), joaat("MISSIONS_CHP5")))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(func_1494(joaat("COMPLETED"), joaat("MISSIONS_CHP6")))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(func_1494(joaat("COMPLETED"), joaat("MISSIONS_CHP7")))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(func_1494(joaat("COMPLETED"), joaat("MISSIONS_CHP8")))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(func_1494(joaat("COMPLETED"), joaat("MISSIONS_CHP9")))));
	fVar0 = (fVar0 + (0.5f * func_1495(10f, BUILTIN::TO_FLOAT(func_1494(joaat("COMPLETED"), joaat("RC_STRANDS"))))));
	fVar0 = (fVar0 + (0.6f * func_1495(5f, BUILTIN::TO_FLOAT(func_1494(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY"))))));
	fVar0 = (fVar0 + (0.2f * func_1495(25f, BUILTIN::TO_FLOAT(func_1322(joaat("UNIQUE_BEATS_COMPLETED"))))));
	fVar0 = (fVar0 + (2f * func_1495(1f, BUILTIN::TO_FLOAT(func_1322(joaat("GANG_AMBUSH_ENCOUNTERED"))))));
	fVar0 = (fVar0 + (0.3333333f * func_1495(6f, BUILTIN::TO_FLOAT(func_1322(joaat("GANG_HIDEOUT_COMPLETED"))))));
	fVar0 = (fVar0 + (3f * func_1495(1f, BUILTIN::TO_FLOAT(func_1322(joaat("DISCOVERABLE_FOUND"))))));
	iVar1 = func_1496();
	fVar0 = (fVar0 + (0.1111111f * func_1495(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1665658745)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1665658745)));
	fVar2 = func_1497(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -263938772)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -263938772))));
	fVar2 = func_1497(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 228647253)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 228647253))));
	fVar2 = func_1497(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1695604435)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1695604435))));
	fVar2 = func_1497(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -379038926)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -379038926))));
	fVar2 = func_1497(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1597499323)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1597499323))));
	fVar2 = func_1497(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -278663717)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -278663717))));
	fVar2 = func_1497(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 586249988)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 586249988))));
	fVar2 = func_1497(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -419800938)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -419800938))));
	fVar2 = func_1497(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -1362069171)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -1362069171))));
	fVar2 = func_1497(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -740350755)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -740350755))));
	fVar2 = func_1497(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1511070393)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_1495(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_1495(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(func_1498()))));
	if (func_83(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_83(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_83(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_83(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_83(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 499813453)));
	fVar2 = func_1497(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 666607663))));
	fVar2 = func_1497(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), -220219788))));
	fVar2 = func_1497(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 218622660))));
	fVar2 = func_1497(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 390004462))));
	fVar2 = func_1497(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 6410548))));
	fVar0 = (fVar0 + (1f * func_1495(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_1495(5f, BUILTIN::TO_FLOAT(func_1322(joaat("SHACK_FOUND"))))));
	fVar0 = (fVar0 + (0.2f * func_1495(5f, BUILTIN::TO_FLOAT(func_1494(joaat("KILLS"), joaat("LEGENDARY_ANIMALS"))))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1274(COMPENDIUM::_0x729D52F61A5A9E22(joaat("ANIMALS")), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1274(COMPENDIUM::_0x729D52F61A5A9E22(joaat("EQUIPMENT")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1274(COMPENDIUM::_0x729D52F61A5A9E22(joaat("FISH")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(joaat("GANGS")));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1274(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HERBS")), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1274(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HORSES")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1274(COMPENDIUM::_0x729D52F61A5A9E22(joaat("WEAPONS")), 48)) / BUILTIN::TO_FLOAT(48)));
	func_1499(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_1495((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_1495(1f, BUILTIN::TO_FLOAT(func_1500(joaat("HORSES_REACHED_MAX_BOND"))))));
	fVar5 = BUILTIN::TO_FLOAT(func_1501());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_1495(1f, BUILTIN::TO_FLOAT(func_1494(joaat("ATTEMPTS"), joaat("BLACKJACK"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1495(1f, BUILTIN::TO_FLOAT(func_1494(joaat("ATTEMPTS"), joaat("DOMINOES_HAND"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1495(1f, BUILTIN::TO_FLOAT(func_1494(joaat("ATTEMPTS"), joaat("FIVE_FINGER"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1495(1f, BUILTIN::TO_FLOAT(func_1494(joaat("ATTEMPTS"), joaat("POKER_HAND"))))));
	fVar0 = (fVar0 + (0.2f * func_1495(5f, BUILTIN::TO_FLOAT(func_1322(joaat("SPECIAL_PED_INTERACTION"))))));
	fVar0 = (fVar0 + (0.5f * func_1495(1f, BUILTIN::TO_FLOAT(func_1322(joaat("BATHS_TAKEN"))))));
	fVar0 = (fVar0 + (0.5f * func_1495(1f, BUILTIN::TO_FLOAT(func_1322(joaat("SHOWS_SEEN"))))));
	fVar0 = (fVar0 + (0.5f * func_1495(1f, BUILTIN::TO_FLOAT(func_1322(joaat("THEATRE_VISITS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1495(1f, BUILTIN::TO_FLOAT(func_1494(joaat("MADE_RECIPE_TYPE"), joaat("AMMO"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1495(1f, BUILTIN::TO_FLOAT(func_1494(joaat("MADE_RECIPE_TYPE"), joaat("FOOD"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1495(1f, BUILTIN::TO_FLOAT(func_1494(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1495(1f, BUILTIN::TO_FLOAT(func_1494(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1495(1f, BUILTIN::TO_FLOAT(func_1494(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1495(1f, BUILTIN::TO_FLOAT(func_1494(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1495(1f, BUILTIN::TO_FLOAT(func_1494(joaat("ROB_COMPLETED"), joaat("COACH"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1495(1f, BUILTIN::TO_FLOAT(func_1494(joaat("ROB_COMPLETED"), joaat("HOME"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1495(1f, BUILTIN::TO_FLOAT(func_1494(joaat("ROB_COMPLETED"), joaat("SHOP"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1495(1f, BUILTIN::TO_FLOAT(func_1494(joaat("ROB_COMPLETED"), joaat("TRAIN"))))));
	Var6 = { func_759(joaat("TOTAL_PROGRESS_MADE")) };
	fVar8 = func_1366(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_20(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_20(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_762(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_457(Global_1898330[iVar61]);
				}
				else
				{
					func_451(iVar61, 0);
					if (func_772(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_778(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (&Global_40.f_450[iVar63] > -1 && &Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_778(((*Global_1347702)[&Global_40.f_450[iVar63] /*49*/])->f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_0x51EC204A6E5B5A1A(func_778(&Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}

int func_1381(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

void func_1382(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

int func_1383(int iParam0)
{
	int iVar0;

	iVar0 = func_1152(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1502(iVar0);
}

int func_1384(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_1503(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_1385()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

void func_1386(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_1387(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

void func_1388(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

void func_1389(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1504((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1504(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_20(&(Global_1898164->f_1[0 /*5*/])))
	{
		func_780(&(Global_1898164->f_1[0 /*5*/]), 3);
	}
}

bool func_1390(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1391(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = iParam1;
}

void func_1392(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

void func_1393(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479->f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

int func_1394()
{
	int iVar0;

	iVar0 = func_1189();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_1395(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_2() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = MISC::GET_GAME_TIMER();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_1505(MISC::ABSF(fVar1) < 1f, func_1505(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_1396(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_1397()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_1398(int iParam0, bool bParam1, int iParam2)
{
	func_1506((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1507(iParam0);
}

void func_1399(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_1508(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_1400(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_1509(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1510(iVar5, &iVar2, &iVar0))
			{
				if (!func_286(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1511(iVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_552(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1394() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1394() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1512();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}

char* func_1401(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return "HONOR_EVENT_LOOT_INNOCENT";
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return "HONOR_EVENT_AMBIENT_KILL";
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return "HONOR_EVENT_AMBIENT_KO";
		case joaat("HONOR_EVENT_SCARE"):
			return "HONOR_EVENT_SCARE";
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return "HONOR_EVENT_KILL_VERMIN";
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return "HONOR_EVENT_KILL_HORSE";
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return "HONOR_EVENT_STEAL_HORSE";
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return "HONOR_EVENT_STEAL_DONKEY";
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return "HONOR_EVENT_STEAL_MULE";
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return "HONOR_EVENT_STEAL_WAGON";
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return "HONOR_EVENT_ANTAGONIZE";
		case joaat("HONOR_EVENT_THEFT"):
			return "HONOR_EVENT_THEFT";
		case joaat("HONOR_EVENT_INTERVENED"):
			return "HONOR_EVENT_INTERVENED";
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return "HONOR_EVENT_DONATED_GAME";
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return "HONOR_EVENT_ITEM_REQUEST";
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return "HONOR_EVENT_LONG_ABSENCE";
		case joaat("HONOR_EVENT_CRUEL_DEATH"):
			return "HONOR_EVENT_CRUEL_DEATH";
		case joaat("HONOR_EVENT_JUSTICE_SERVED"):
			return "HONOR_EVENT_JUSTICE_SERVED";
		case joaat("HONOR_EVENT_CHEAT"):
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

void func_1402(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (bParam0)
	{
		func_290(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1403();
		UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, true);
	}
	else
	{
		func_1513(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_828(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_299(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		func_1514(146323340, func_1082());
		Var0 = { func_1515() };
		if (func_1516(&Var0) == -1387633835)
		{
			func_1517(&Var0);
			func_1518(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		func_1519(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1520(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				func_1521(iVar6, iVar7);
				func_1522(iVar6, iVar8);
				func_1523(iVar6, iVar9);
				func_1524(iVar6, 0);
				if (func_1525(iVar6))
				{
					func_1526(iVar6);
				}
				iVar10 = func_1527(iVar8);
				func_1528(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, false);
	}
}

int func_1403()
{
	if (!func_1529(-1898635967, func_1082(), 1))
	{
		return 0;
	}
	if (func_840())
	{
		if (!func_1529(146323340, func_1082(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1404()
{
	func_288(joaat("WEAPON_PISTOL_VOLCANIC"));
	func_288(joaat("WEAPON_SHOTGUN_PUMP"));
	func_288(joaat("WEAPON_RIFLE_VARMINT"));
}

void func_1405(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1426541042))
		{
			return;
		}
		func_290(-1080874779 /* GXTEntry: "Special Health Cure" */, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1426541042, true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1426541042))
		{
			return;
		}
		func_299(-1080874779 /* GXTEntry: "Special Health Cure" */, 3, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_299(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		func_1519(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1520(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				func_1521(iVar0, iVar1);
				func_1522(iVar0, iVar2);
				func_1523(iVar0, iVar3);
				func_1524(iVar0, 0);
				if (func_1525(iVar0))
				{
					func_1526(iVar0);
				}
				iVar4 = func_1527(iVar2);
				func_1528(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1403();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1426541042, false);
	}
}

bool func_1406(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1407(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1408()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<10> Var17;
	struct<14> Var39;

	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_383("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_384(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
			}
			else if (func_945(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_385(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_385(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1409(int iParam0, struct<4> Param1, int iParam5)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var19;

	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1336(Param1, iParam5, &Var5, 0))
	{
		func_947(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_993(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1337(Var19, 1);
}

int func_1410(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 128;
		case 350097565:
			return 256;
		case 346761890:
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1411(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1530(uParam0->f_1[iVar0 /*3*/], 2))
		{
			iVar7 = func_1102(iVar0, 1);
			if (func_1351(iVar0, iParam1))
			{
				vVar4 = { func_1210(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0 /*11*/] && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_1356(iVar7, 4))
				{
					func_1112(iVar7, 4, 6);
				}
			}
			else
			{
				func_1531(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = &Global_1946804->f_57[iVar0 /*11*/];
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar1 };
				}
			}
			iVar0++;
		}
	}

int func_1412(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946804->f_964.f_2 = 0;
	if (func_2() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1017(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_1413(int iParam0)
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

int func_1414(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("SP_CHAL_BAND_ROOT");
		case 2:
			return joaat("SP_CHAL_HERB_ROOT");
		case 4:
			return joaat("SP_CHAL_HORSE_ROOT");
		case 8:
			return joaat("SP_CHAL_SHOT_ROOT");
		case 16:
			return joaat("SP_CHAL_WEAP_ROOT");
		default:
			break;
	}
	return 0;
}

bool func_1415(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_2() == -1)
	{
		if (func_919(iParam0))
		{
			iVar1 = WEAPON::_0x865F36299079FB75(iParam0);
			bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
	}
	return bVar0;
}

int func_1416(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_1243(&iParam0);
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!func_558(0))
	{
		bParam2 = true;
	}
	iVar0 = func_923(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1245(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = INVENTORY::_0xE787F05DFC977BDE(func_738(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1417(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;

	if (func_297(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (func_1532(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (&Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || &Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar49 = (iVar49 + (Var0[iVar32 /*2*/])->f_1);
					Jump @229; //curOff = 201
				}
				else if (&Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = func_624(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_627(iVar62, iVar61);
					if (func_286(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1417(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1417(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!func_1532(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || &Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_1418(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_686(1);
}

void func_1419(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_1533(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP", MISC::_CREATE_VAR_STRING(2, func_831(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_1533(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP_NOS", MISC::_CREATE_VAR_STRING(2, func_831(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1420()
{
	return Global_40.f_4283.f_325;
}

void func_1421(bool bParam0, bool bParam1)
{
	if (!func_479(bParam0))
	{
		return;
	}
	((*Global_1360165)[bParam0 /*1157*/])->f_1154 = bParam1;
}

int func_1422(int iParam0, int iParam1)
{
	*iParam1 = 0;
	while (*iParam1 < 15)
	{
		if (&Global_40.f_4237[*iParam1 /*3*/] == iParam0)
		{
			return 1;
		}
		*iParam1++;
	}
	*iParam1 = -1;
	return 0;
}

bool func_1423(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return MISC::IS_BIT_SET(&Global_1347701, iParam0);
}

void func_1424(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1;
	if (func_1422(iParam0, &iVar0))
	{
		func_1534(iVar0, bParam1);
	}
}

float func_1425(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_1246(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1426(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1535(iVar6) - func_1535(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1426(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_1427(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1428(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1429(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1426(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1535(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1535(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_1430(int iParam0)
{
	int iVar0;

	if (func_1536(iParam0, &iVar0))
	{
		return func_1535(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1537())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1537())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1537())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_1431(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_1432(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> Var10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_1538(iParam0));
	sVar4 = func_1540(func_1539(iVar3, iParam2));
	sVar6 = func_1541(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_1542(iParam0));
	iVar8 = func_1543(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1544(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_807(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_1545(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1433(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_1434(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1435(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1436(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_1437(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1438(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1439(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1546(&iVar0, 0, iVar95, &Var1) && !func_1546(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1547(iVar0, &Var1);
			if (func_286(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

int func_1440(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_738(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_409(&uVar6, iVar0);
	func_410(&uVar6, iVar1);
	func_411(&uVar6, iVar2);
	func_79(&uVar6, iVar3);
	func_78(&uVar6, iVar4);
	func_77(&uVar6, iVar5);
	return uVar6;
}

int func_1441(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_1442(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_1008(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1008(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_1443()
{
	return Global_1946804->f_1497;
}

int func_1444(int iParam0)
{
	int iVar0;

	if (func_1548(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1549(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1550(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1551(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_1445(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_581(func_1552(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return 1;
	}
	return 0;
}

int func_1446(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_581(func_1553(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return 1;
	}
	return 0;
}

bool func_1447(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1448()
{
	int iVar0;

	if (func_2() != -1)
	{
		return;
	}
	func_603(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = func_1249(1);
	func_1432(1, iVar0, 0);
}

void func_1449(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1450()
{
	int iVar0;

	if (func_2() != -1)
	{
		return;
	}
	func_603(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = func_1249(2);
	func_1432(2, iVar0, 0);
}

void func_1451()
{
	int iVar0;

	if (func_2() != -1)
	{
		return;
	}
	func_603(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = func_1249(0);
	func_1432(0, iVar0, 0);
}

int func_1452(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_1453(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_76(iParam0, iParam1, 1))
	{
		iVar0 = func_68(iParam1);
		iVar1 = func_69(iParam0);
		iVar2 = (func_69(iParam0) - func_69(iParam1));
		iVar3 = (func_68(iParam0) - func_68(iParam1));
		iVar4 = (func_67(iParam0) - func_67(iParam1));
		iVar5 = (func_64(iParam0) - func_64(iParam1));
		iVar6 = (func_65(iParam0) - func_65(iParam1));
		iVar7 = (func_66(iParam0) - func_66(iParam1));
	}
	else
	{
		iVar0 = func_68(iParam0);
		iVar1 = func_69(iParam1);
		iVar2 = (func_69(iParam1) - func_69(iParam0));
		iVar3 = (func_68(iParam1) - func_68(iParam0));
		iVar4 = (func_67(iParam1) - func_67(iParam0));
		iVar5 = (func_64(iParam1) - func_64(iParam0));
		iVar6 = (func_65(iParam1) - func_65(iParam0));
		iVar7 = (func_66(iParam1) - func_66(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_223(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_1554(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

int func_1454()
{
	if (func_1555(8))
	{
		return 8;
	}
	else if (func_1555(4))
	{
		return 4;
	}
	else if (func_1555(2))
	{
		return 2;
	}
	return 1;
}

void func_1455(int iParam0)
{
	Global_40.f_7748.f_4 = (Global_40.f_7748.f_4 - (Global_40.f_7748.f_4 && iParam0));
}

int func_1456(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 9)
	{
		return 0;
	}
	return 1;
}

int func_1457()
{
	return Global_40.f_7748.f_1;
}

void func_1458(int iParam0, int iParam1)
{
	(Global_40.f_7731[iParam0 /*5*/])->f_2 = iParam1;
}

int func_1459(int iParam0)
{
	return &(Global_40.f_7731[iParam0 /*5*/]);
}

int func_1460(int iParam0)
{
	if (!func_365(iParam0))
	{
		return 0;
	}
	if ((Global_40.f_358[iParam0 /*12*/])->f_5 & 2 != 0)
	{
		return 5;
	}
	if (&Global_40.f_358[iParam0 /*12*/] > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
	{
		return func_1556(&(Global_40.f_358[iParam0 /*12*/]));
	}
	return 0;
}

void func_1461(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MAP::_0x563FCB6620523917(func_1557(iParam0), -1482012664);
	}
	else if (MAP::_0xE38450DBCBC70E3D(func_1557(iParam0), -1305340593) || MAP::_0xE38450DBCBC70E3D(func_1557(iParam0), -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(func_1557(iParam0));
	}
}

int func_1462(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CHALLENGE");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = joaat("FEATURE");
			break;
		case -2:
			iVar0 = joaat("GOLD");
			break;
		case 2:
			iVar0 = joaat("MISSION_STORY");
			break;
		case 3:
			iVar0 = joaat("MISSION_PROCEDURAL");
			break;
		case 4:
			iVar0 = joaat("MISSION_MINIGAME");
			break;
		case 5:
			iVar0 = joaat("MISSION_FREE_MODE_EVENT");
			break;
		case 6:
			iVar0 = joaat("MISSION_VERSUS");
			break;
		case 7:
			iVar0 = joaat("PROPERTY");
			break;
		case 8:
			iVar0 = joaat("RECIPE");
			break;
		case 9:
			iVar0 = joaat("TITLE");
			break;
		case 10:
			iVar0 = joaat("SHOP");
			break;
		case 11:
			iVar0 = 1252941330;
			break;
		case 12:
			iVar0 = -1930354636;
			break;
		case 13:
			iVar0 = 1332629624;
			break;
		case 14:
			iVar0 = 1746212499;
			break;
		case 15:
			iVar0 = 1859328971;
			break;
		case 16:
			iVar0 = 1151893103;
			break;
		case 17:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

void func_1463(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1558(iParam1);
	func_1559(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1560(&(uParam0->f_26), iVar1);
		if (func_1561(uParam0->f_26, &iVar0))
		{
			func_1562(iVar0, iVar1);
		}
	}
}

int func_1464(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<17> Var44;
	struct<16> Var61;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_1101(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_552(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_1563(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1564(joaat("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var44 = { func_1565(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1566(joaat("UPDATE"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1567(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1568(joaat("UPDATE"), &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1465(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_555(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1335(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

void func_1466(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1569(&(uParam0->f_3));
}

void func_1467(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1570(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

bool func_1468(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

int func_1469(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (uParam1->f_1 == 0)
	{
		return 0;
	}
	if (!func_1468(uParam1, 2))
	{
		iVar1 = PED::_GET_METAPED_TYPE(bParam0);
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (&uParam1->f_1.f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				uParam1->f_135[uParam1->f_134 /*2*/] = PED::_0xF6D9E1F3560CBF8E(iVar1, &(uParam1->f_1.f_1[iVar0 /*3*/]), 0, false, 0);
				(uParam1->f_135[uParam1->f_134 /*2*/])->f_1 = iVar0;
				uParam1->f_134++;
			}
			iVar0++;
		}
		func_1473(uParam1, 2);
	}
	return func_1474(bParam0, uParam1);
}

void func_1470(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	uParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_134)
	{
		if (PED::_0x93FFD92F05EC32FD(&(uParam0->f_135[iVar0 /*2*/])))
		{
			PED::_0x13E7320C762F0477(&(uParam0->f_135[iVar0 /*2*/]));
		}
		(uParam0->f_135[iVar0 /*2*/])->f_1 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1.f_1[iVar0 /*3*/]) = { vVar1 };
		iVar0++;
	}
	func_1114(&(uParam0->f_120));
	uParam0->f_134 = 0;
	*uParam0 = 0;
}

void func_1471(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_1472(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!func_1571(uParam0, iParam3, iParam2) && !func_1209(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return 0;
	}
	iVar0 = 10;
	if (func_703(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/]))
		{
			func_1105(1108822547);
		}
		else
		{
			func_1478(1108822547);
		}
	}
	func_1111(uParam0, 0, 0);
	func_1334(iParam5);
	return 1;
}

void func_1473(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1474(bool bParam0, var uParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return true;
	}
	if (uParam1->f_1 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam1->f_134)
	{
		if (!PED::_0xB0B2C6D170B0E8E5(&(uParam1->f_135[iVar0 /*2*/])))
		{
			return false;
		}
		iVar0++;
	}
	return PED::_0xA0BC8FAED8CFEB3C(bParam0);
}

int func_1475(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	bVar1 = true;
	if (uParam1->f_1 == 0)
	{
		return 0;
	}
	if (!func_1474(bParam0, uParam1))
	{
		bVar1 = false;
	}
	iVar3 = uParam1->f_1;
	iVar2 = func_995(iVar3);
	if (iVar2 == -1)
	{
		iVar2 = 0;
	}
	if (iVar2 >= 0 && iVar2 <= 5)
	{
		bVar0 = true;
	}
	Global_1905941 = iVar2;
	func_623(Global_40.f_7729, 4096);
	func_621(&Global_1905941, 4096);
	Global_40.f_7729 = &Global_1905941;
	func_1572(&(uParam1->f_1));
	iVar4 = -1;
	if (!bVar0)
	{
		iVar4 = func_1573(uParam1->f_1);
	}
	func_1411(&(Global_1946804->f_1497), iVar4, 0);
	func_1574(iVar3, bParam0, bVar0, 1, bVar1, 0);
	func_1575(bParam0);
	if (bParam2)
	{
		func_1470(uParam1);
	}
	if (bParam3)
	{
		func_1576();
	}
	if (bParam4)
	{
		if (bParam5)
		{
			func_706(0);
		}
		else
		{
			func_706(2048);
		}
	}
	return 1;
}

int func_1476(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1946804->f_2535.f_1 <= 0)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		Global_1946804->f_2535.f_2 = 0;
		Global_1946804->f_2535.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*(Global_1946804->f_2535.f_43[iVar0 /*2*/]) = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1946804->f_2535.f_3[iVar1] = 0;
			iVar1++;
		}
		return 1;
	}
	iVar0 = func_1577(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 - (Global_1946804->f_2535.f_2 && (Global_1946804->f_2535.f_43[iVar0 /*2*/])->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_1578(iVar1, (Global_1946804->f_2535.f_43[iVar0 /*2*/])->f_1))
		{
			func_1579(iVar1, (Global_1946804->f_2535.f_43[iVar0 /*2*/])->f_1);
		}
		iVar1++;
	}
	Global_1946804->f_2535.f_1 = (Global_1946804->f_2535.f_1 - 1);
	*(Global_1946804->f_2535.f_43[iVar0 /*2*/]) = { *(Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1 /*2*/]) };
	(Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1 /*2*/])->f_1 = 0;
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1 /*2*/] = 0;
	return 1;
}

bool func_1477(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1102(iVar0, 1);
		if (!func_1356(iVar2, 2))
		{
		}
		else if (&Global_1946804->f_2535.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0 && func_1580(iVar0) == -1)
			{
				func_1107(iVar0, 0);
				func_1480(Global_1946804->f_2589.f_2[(Global_1946804->f_2589 - 1) /*2*/], 2, 6);
			}
			func_1112(iVar2, 3, 6);
			Global_1946804->f_2456[iVar0 /*2*/] = 0;
			(Global_1946804->f_2456[iVar0 /*2*/])->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

void func_1478(int iParam0)
{
	func_1531(iParam0, 8, 6);
}

bool func_1479(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1480(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1481(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1482(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1483(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1484(var uParam0, int iParam1)
{
	int iVar0;

	if (func_2() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1212(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1483(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_1485(int iParam0, int iParam1, int iParam2)
{
	if (func_2() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_1486(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_1370() - fParam1);
	func_1581(uParam0, 1);
	func_1582(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_1487(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1488(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1489(int* iParam0)
{
	MISC::_COPY_MEMORY(iParam0, &(Global_1879534->f_7301), 243);
}

int func_1490()
{
	return Global_1894899->f_2;
}

int func_1491(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_1583(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0 /*51*/][iVar2];
			if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1888801)[iVar4 /*35*/])->f_3))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar4 /*35*/])->f_3, vParam0))
				{
					switch (((*Global_1888801)[iVar4 /*35*/])->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_1492()
{
	if (func_85(43) && !func_85(44))
	{
		return 0;
	}
	if (func_85(67) && func_255() != 8)
	{
		return 0;
	}
	return 1;
}

bool func_1493(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

var func_1494(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_568(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

float func_1495(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_1496()
{
	int iVar0;

	if (func_1228(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_1228(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_1228(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_1228(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_1228(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_1228(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_1228(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_1228(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_1228(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_1497(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_1498()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_1584(iVar0);
		if (func_1228(func_1585(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1499(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	ENTITY::IS_ENTITY_DEAD(Global_35);
	*iParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
	*iParam0 = (*iParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1));
	*iParam0 = (*iParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2));
	*iParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
	*iParam1 = (*iParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1));
	*iParam1 = (*iParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2));
	*iParam1 += 6;
	iVar0 = func_537(joaat("UPGRADE_HEALTH_TANK_1"), 0, 0);
	iVar1 = func_537(joaat("UPGRADE_STAMINA_TANK_1"), 0, 0);
	iVar2 = func_537(joaat("UPGRADE_DEADEYE_TANK_1"), 0, 0);
	*iParam0 = (*iParam0 + ((iVar0 + iVar1) + iVar2));
}

var func_1500(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_566(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_1501()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_1586(iVar0);
		if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(iVar2) >= STATS::CHAL_GET_MAX_RANKS(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1502(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_1503(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

void func_1504(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { *(Global_1898164->f_1[iParam0 /*5*/]) };
	*(Global_1898164->f_1[iParam0 /*5*/]) = { *(Global_1898164->f_1[iParam1 /*5*/]) };
	*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
}

float func_1505(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_1506(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1587(bParam1);
	}
}

void func_1507(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_1508(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

int func_1509(int iParam0)
{
	vector3 vVar0;

	if (!func_1253(23, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return 1;
	}
	return 0;
}

int func_1510(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1253(23, &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

int func_1511(int iParam0)
{
	return iParam0;
}

int func_1512()
{
	int iVar0;

	iVar0 = func_1394();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_1513(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;

	func_299(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_1588(iParam0, &uVar18);
	func_1589(iParam0, &uVar18, &iVar34, 1);
	if (func_693() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_1590(iParam0, &(Global_26795.f_627.f_121.f_20));
	func_1072(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_299(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_555(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_1590(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_21));
				break;
			case 81053684:
				func_1590(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_23));
				break;
			case -525676072:
				func_1590(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_1590(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_24));
				break;
			case -413129408:
				func_1590(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_25));
				break;
		}
		func_1072(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_700(func_1207(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_1471(&(Global_1946804->f_1616));
	func_1209(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_1210(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_1210(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_1210(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_1210(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_1210(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_1210(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_1210(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_1210(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_1210(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_1211(&(iVar0[iVar36]), iVar35))
			{
				func_1072(func_1591(iVar35), 1, 1);
				func_1592(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1530(Global_1946804->f_1616.f_1[iVar37 /*3*/], 2))
						{
						}
						else
						{
							func_1212(Global_1946804->f_1616.f_1[iVar37 /*3*/], iVar37, 0);
							*(Global_1946804->f_1497.f_1[iVar37 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar37 /*3*/]) };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_1946804->f_1497.f_1[&iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_995(iParam0))
	{
		if (!func_1089(8))
		{
			if (func_693() == -2125499975)
			{
				if (bVar17)
				{
					func_1209(&(Global_1946804->f_1616), 1661121390 /* GXTEntry: "The Gunslinger" */, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423; /* GXTEntry: "Custom Outfit" */
					func_1484(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1485(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_995(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_1209(&(Global_1946804->f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423; /* GXTEntry: "Custom Outfit" */
					func_1484(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1485(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_995(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_995(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					func_623(Global_40.f_7729, 4096);
					func_621(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_1593(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_26795.f_627.f_1.f_1.f_1[&iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_1209(&(Global_1946804->f_1616), 1661121390 /* GXTEntry: "The Gunslinger" */, &uVar39, 0, 1, 0, -2125499975);
	func_1209(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[8 /*3*/]) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[9 /*3*/]) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[0 /*3*/]) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[2 /*3*/]) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[3 /*3*/]) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[1 /*3*/]) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[5 /*3*/]) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[6 /*3*/]) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[7 /*3*/]) };
	Global_26795.f_627 = Global_1946804->f_1616;
	Global_26795.f_627.f_1.f_1 = Global_1946804->f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar36 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar36 /*3*/]) };
		iVar36++;
	}
}

int func_1514(int iParam0, struct<4> Param1)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	var uVar7;
	int iVar11;
	struct<5> Var12;

	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_286(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1245(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1594(&uVar7);
					if (func_947(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

struct<6> func_1515()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_1339(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1339(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1339(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1339(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1339(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1339(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

int func_1516(var uParam0)
{
	return uParam0->f_1;
}

void func_1517(var uParam0)
{
	func_1595(uParam0);
	func_1597(uParam0, func_1596(-1346384396));
	func_1598(uParam0, func_1596(-712836614));
	func_1599(uParam0, func_1596(-1629133289));
	func_1600(uParam0, func_1596(1302066700));
	func_1601(uParam0, func_1596(599669344));
	func_1602(uParam0, func_1596(-1555511632));
}

void func_1518(struct<6> Param0)
{
	if (!func_1083(Param0.f_4, 1))
	{
	}
	if (!func_1083(Param0, 1))
	{
	}
	if (!func_1083(Param0.f_2, 1))
	{
	}
	if (!func_1083(Param0.f_5, 1))
	{
	}
	if (!func_1083(Param0.f_3, 1))
	{
	}
	if (!func_1083(Param0.f_1, 1))
	{
	}
}

int func_1519(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_70())
	{
		if (func_469())
		{
			bVar0 = false;
			if (!func_226(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_554(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1603();
				*iParam1 = func_1604();
				*iParam2 = func_1605();
				return 1;
			}
			else
			{
				*iParam0 = func_1606();
				*iParam1 = func_1607();
				*iParam2 = func_1608();
				return 1;
			}
		}
		else if (func_315())
		{
			if (!func_226(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*iParam0 = func_1609();
				*iParam1 = func_1610();
				*iParam2 = func_1611();
				return 1;
			}
			else
			{
				*iParam0 = func_1612();
				*iParam1 = func_1613();
				*iParam2 = func_1614();
				return 1;
			}
		}
	}
	else if (func_469())
	{
		*iParam0 = func_1615();
		*iParam1 = func_1616();
		*iParam2 = func_1617();
		return 1;
	}
	else if (func_315())
	{
		*iParam0 = func_1618();
		*iParam1 = func_1619();
		*iParam2 = func_1620();
		return 1;
	}
	return 0;
}

int func_1520(int iParam0)
{
	iParam0 = func_1621(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_8;
}

void func_1521(int iParam0, int iParam1)
{
	iParam0 = func_1621(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = iParam1;
}

void func_1522(int iParam0, int iParam1)
{
	iParam0 = func_1621(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = iParam1;
}

void func_1523(int iParam0, int iParam1)
{
	iParam0 = func_1621(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = iParam1;
}

void func_1524(int iParam0, int iParam1)
{
	iParam0 = func_1621(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_434 = iParam1;
}

int func_1525(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_1622(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_691(0) };
	if (func_1623(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1526(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1624(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_947(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1527(int iParam0)
{
	if (iParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return 559905966;
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return 1538827865 /* GXTEntry: "American Paint~n~Overo Coat" */;
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return -1792561227 /* GXTEntry: "American Paint~n~Tobiano Coat" */;
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return 1033678910 /* GXTEntry: "American Paint~n~Splashed White Coat" */;
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return -1942141178 /* GXTEntry: "American Paint~n~Grey Overo Coat" */;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return 671599957 /* GXTEntry: "American Standardbred~n~Black Coat" */;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return -1554935503 /* GXTEntry: "American Standardbred~n~Buckskin Coat" */;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return 694610769 /* GXTEntry: "American Standardbred~n~Palomino Dapple Coat" */;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return 1941463607 /* GXTEntry: "American Standardbred~n~Silver Tail Buckskin Coat" */;
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return -887316537 /* GXTEntry: "Andalusian~n~Dark Bay Coat" */;
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return 1762474047 /* GXTEntry: "Andalusian~n~Rose Grey Coat" */;
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return -828859553 /* GXTEntry: "Andalusian~n~Perlino Coat" */;
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return 1410237043 /* GXTEntry: "Appaloosa~n~Blanket Coat" */;
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return -2026073756 /* GXTEntry: "Appaloosa~n~Leopard Blanket Coat" */;
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
			return 729407854;
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return 2002245664 /* GXTEntry: "Appaloosa~n~Brown Leopard Coat" */;
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return -1120227140 /* GXTEntry: "Appaloosa~n~Leopard Coat" */;
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return 1142681594 /* GXTEntry: "Arabian~n~Black Coat" */;
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return 1214981718 /* GXTEntry: "Arabian~n~Red Chestnut Coat" */;
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
			return -845373950;
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return -864588185 /* GXTEntry: "Arabian~n~Rose Grey Bay Coat" */;
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return 1482814085;
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return -1040918754 /* GXTEntry: "Arabian~n~White Coat" */;
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return 535545841 /* GXTEntry: "Ardennes~n~Bay Roan Coat" */;
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return 1686036388 /* GXTEntry: "Ardennes~n~Strawberry Roan Coat" */;
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return -621245377 /* GXTEntry: "Ardennes~n~Iron Grey Roan Coat" */;
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return 2125477381 /* GXTEntry: "Belgian~n~Blond Chestnut Coat" */;
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return 1808724704 /* GXTEntry: "Belgian~n~Mealy Chestnut Coat" */;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return -1745871311 /* GXTEntry: "Dutch Warmblood~n~Sooty Buckskin Coat" */;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return -1366099125 /* GXTEntry: "Dutch Warmblood~n~Seal Brown Coat" */;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return -1900776854 /* GXTEntry: "Dutch Warmblood~n~Chocolate Roan Coat" */;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return 1381855825 /* GXTEntry: "Hungarian Halfbred~n~Flaxen Chestnut Coat" */;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return -470894301 /* GXTEntry: "Hungarian Halfbred~n~Flaxen Piebald Tobiano Coat" */;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return -58297715 /* GXTEntry: "Hungarian Halfbred~n~Dark Dapple Grey" */;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_BLACK");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
			return -1158763155;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return 1112812928 /* GXTEntry: "Kentucky Saddler~n~Chestnut Pinto Coat" */;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_GREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return 2100045093 /* GXTEntry: "Kentucky Saddler~n~Silver Bay Coat" */;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return 1097965086 /* GXTEntry: "Missouri Fox Trotter~n~Amber Champagne" */;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return -2136667309 /* GXTEntry: "Missouri Fox Trotter~n~Silver Dapple Pinto Coat" */;
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return -376463594 /* GXTEntry: "Morgan~n~Bay Coat" */;
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return -1917318030 /* GXTEntry: "Morgan~n~Bay Roan Coat" */;
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return 1631640006 /* GXTEntry: "Morgan~n~Flaxen Chestnut Coat" */;
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
			return -1565311117;
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return joaat("HORSE_BREED_MORGAN_PALOMINO");
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return 210760725 /* GXTEntry: "Mustang~n~Tiger Grullo Dun Coat" */;
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return 2051021144 /* GXTEntry: "Mustang~n~Wild Bay Coat" */;
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return 1924406350 /* GXTEntry: "Mustang~n~Tiger Striped Bay Coat" */;
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return -1990143531 /* GXTEntry: "Nokota~n~Blue Roan Coat" */;
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return 1741899492 /* GXTEntry: "Nokota~n~White Roan Coat" */;
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return -1629575335 /* GXTEntry: "Nokota~n~Reverse Dapple Roan Coat" */;
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return 1096294193 /* GXTEntry: "Shire~n~Dark Bay Coat" */;
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return -1162498792 /* GXTEntry: "Shire~n~Light Grey Coat" */;
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return -212500005 /* GXTEntry: "Suffolk Punch~n~Sorrel Coat" */;
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return -538557079 /* GXTEntry: "Suffolk Punch~n~Red Chestnut Coat" */;
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return 171150858 /* GXTEntry: "Tennessee Walker~n~Black Rabicano Coat" */;
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_CHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return -126472599 /* GXTEntry: "Tennessee Walker~n~Dapple Bay Coat" */;
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
			return -1219957736;
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return -332060056 /* GXTEntry: "Tennessee Walker~n~Red Roan Coat" */;
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return 1917500091 /* GXTEntry: "Tennessee Walker~n~Flaxen Roan Coat" */;
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return -1043453945 /* GXTEntry: "Thoroughbred~n~Blood Bay Coat" */;
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return 1723487083 /* GXTEntry: "Thoroughbred~n~Dapple Grey Coat" */;
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return 2044230644 /* GXTEntry: "Thoroughbred~n~Brindle Coat" */;
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return 1680713143 /* GXTEntry: "Thoroughbred~n~Reverse Dapple Black Coat" */;
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return 344528703 /* GXTEntry: "Turkoman~n~Dark Bay Coat" */;
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return -1674873797 /* GXTEntry: "Turkoman~n~Gold Coat" */;
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return 281852151 /* GXTEntry: "Turkoman~n~Silver Coat" */;
		case joaat("A_C_DONKEY_01"):
			return -285185056;
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return -1692268955 /* GXTEntry: "Appaloosa~n~Black Snowflake Coat" */;
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return 2130706226 /* GXTEntry: "Arabian~n~Grey Coat" */;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return -1754375530 /* GXTEntry: "Hungarian Halfbred~n~Liver Chestnut Coat" */;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return -71211764 /* GXTEntry: "Missouri Fox Trotter~n~Sable Champagne Coat" */;
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return -1390353518 /* GXTEntry: "Mustang~n~Golden Dun Coat" */;
		case joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY"):
			return 330935532 /* GXTEntry: "Tennessee Walker~n~Mahogany Bay Coat" */;
		case joaat("A_C_HORSE_SHIRE_RAVENBLACK"):
			return -935042458 /* GXTEntry: "Shire~n~Raven Black Coat" */;
		case joaat("A_C_HORSE_BUELL_WARVETS"):
			return -41062704;
		case joaat("A_C_HORSE_JOHN_ENDLESSSUMMER"):
			return 887669186;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return 2102774612;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return -2011111190;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return -535752499;
		default:
			break;
	}
	return 0;
}

int func_1528(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_286(iParam1, 0))
	{
		return 0;
	}
	if (!func_1625(iParam1))
	{
		return 0;
	}
	if (func_1525(iParam0))
	{
		return 0;
	}
	iVar0 = func_1622(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_691(0) };
	Var1.f_4 = iVar0;
	if (!func_993(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

int func_1529(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;

	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_286(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1245(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1594(&Var7);
					if (func_993(Var3, &Var7, &Var12, 1, 752097756, 0))
					{
						if (bParam5)
						{
							func_1337(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_1530(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_1531(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_700(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_700(iParam0, 1) /*11*/])->f_10 || iParam1);
}

int func_1532(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*((*uParam2)[iVar47 /*2*/]) = { *(Var0.f_4[iVar47 /*2*/]) };
		iVar47++;
	}
	if (bParam4)
	{
		func_1626(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

char* func_1533(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		case 1:
			return "HEADSHOT_JOHN";
		case 2:
			return "HEADSHOT_JAVIER";
		case 3:
			return "HEADSHOT_BILL";
		case 4:
			return "HEADSHOT_UNCLE";
		case 5:
			return "HEADSHOT_HOSEA";
		case 6:
			return "HEADSHOT_MICAH";
		case 7:
			return "HEADSHOT_CHARLES";
		case 8:
			return "HEADSHOT_SEAN";
		case 9:
			return "HEADSHOT_LENNY";
		case 10:
			return "HEADSHOT_KIERAN";
		case 11:
			return "HEADSHOT_SADIE";
		case 13:
			return "HEADSHOT_ABIGAIL";
		case 14:
			return "HEADSHOT_JACK";
		case 15:
			return "HEADSHOT_MARYBETH";
		case 16:
			return "HEADSHOT_MOLLY";
		case 17:
			return "HEADSHOT_PEARSON";
		case 18:
			return "HEADSHOT_STRAUSS";
		case 19:
			return "HEADSHOT_SUSAN";
		case 20:
			return "HEADSHOT_KAREN";
		case 21:
			return "HEADSHOT_SWANSON";
		case 22:
			return "HEADSHOT_TILLY";
		case 23:
			return "HEADSHOT_TRELAWNY";
		case 24:
			return "HEADSHOT_CLEET";
		case 25:
			return "HEADSHOT_JOE";
		default:
			break;
	}
	return "";
}

void func_1534(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(&Global_1347701, iParam0))
		{
			MISC::SET_BIT(Global_1347701, iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(&Global_1347701, iParam0))
	{
		MISC::CLEAR_BIT(Global_1347701, iParam0);
	}
}

int func_1535(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

int func_1536(int iParam0, int iParam1)
{
	return 0;
}

int func_1537()
{
	return 0;
}

int func_1538(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_738(0), joaat("UPGRADE_HEALTH_TANK_1"), 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_738(0), joaat("UPGRADE_STAMINA_TANK_1"), 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_738(0), joaat("UPGRADE_DEADEYE_TANK_1"), 0);
	}
	return 0;
}

struct<4> func_1539(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_1540(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1541(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_1542(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_1543(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("TOAST_RPG_LEVEL_STAMINA");
		case 0:
			return joaat("TOAST_RPG_LEVEL_HEALTH");
		case 2:
			return joaat("TOAST_RPG_LEVEL_DEADEYE");
		default:
			break;
	}
	return 0;
}

int func_1544(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_1545(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

int func_1546(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;

	if (func_1627(iParam1) && !func_1628(iParam1))
	{
		bVar0 = func_1629(iParam1);
	}
	else
	{
		return 0;
	}
	func_1630(uParam3);
	iVar5 = func_1631(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, bVar0, iVar5, 0))
	{
		return 0;
	}
	*iParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*iParam0))
	{
		return 0;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*iParam0);
	uParam3->f_3 = ENTITY::_0x0FD25587BB306C86(*iParam0);
	return 1;
}

void func_1547(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1632(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1633(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

int func_1548(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (func_297(iParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_1549(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (func_297(iParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_1550(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (func_297(iParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_1551(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (func_297(iParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_1552(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1634(iParam0);
		case 1:
			return func_1635(iParam0);
		case 2:
			return func_1636(iParam0);
		case 3:
			return func_1637(iParam0);
	}
	return 0;
}

int func_1553(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1638(iParam0);
		case 1:
			return func_1639(iParam0);
		case 2:
			return func_1640(iParam0);
		case 3:
			return func_1641(iParam0);
		case 4:
			return func_1642(iParam0);
		case 5:
			return func_1643(iParam0);
		case 6:
			return func_1644(iParam0);
		case 7:
			return func_1645(iParam0);
		case 8:
			return func_1646(iParam0);
	}
	return 0;
}

float func_1554(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(BUILTIN::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

bool func_1555(int iParam0)
{
	return (Global_40.f_7748.f_4 && iParam0) != 0;
}

int func_1556(int iParam0)
{
	int iVar0;

	iVar0 = 5;
	while (iVar0 >= 1)
	{
		if (iParam0 >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(iVar0))
		{
			return iVar0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

int func_1557(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_1647(iParam0), 64);
	sVar8 = func_1648(cVar0);
	return MISC::GET_HASH_KEY(sVar8);
}

int func_1558(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1559(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1560(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1466(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_1561(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

void func_1562(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

struct<28> func_1563(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<28> Var0;
	struct<29> Var28;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_738(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1567(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1564(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1649(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1649(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		func_1649(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1565(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<17> Var0;
	struct<15> Var17;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_738(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1567(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1566(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1649(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1649(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1649(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<16> func_1567(var uParam0)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_1568(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1649(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1649(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_1649(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1569(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1570(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1650(func_693());
	if (*uParam0)
	{
		func_1569(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, func_2() != -1, iParam2);
	*uParam0 = 1;
}

int func_1571(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam2 != 0 && func_1591(iParam1) != iParam2)
	{
		return 0;
	}
	if (func_1359(2, iParam1))
	{
		func_1651(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void func_1572(var uParam0)
{
	int iVar0;

	Global_1946804->f_1497 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1497.f_1[iVar0 /*3*/]) = { *(uParam0->f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_1573(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1016(0);
	func_1017(&(Global_1946804->f_964), iVar1, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
	{
		return -1;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &(Global_1946804->f_964), 2049745650))
	{
		return -1;
	}
	return func_1410(iVar0);
}

void func_1574(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_995(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_2() != -1)
	{
		return;
	}
	func_1103();
	if (bParam5)
	{
		if (!func_1472(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_703(32768) && &Global_1946804->f_1378.f_1[10 /*3*/] != &Global_1946804->f_57[10 /*11*/])
	{
		func_704();
	}
	func_1652(iVar3, 1, 1, 1, 1, 1);
	func_325(31, 0, 0, 0, 0);
	func_706(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(bParam1))
		{
			func_325(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_325(2, iVar1, 3, bParam1, 0);
		}
	}
	else
	{
		func_1653(&(Global_1946804->f_1497), bParam1, 1, -1, 1, 1, 1);
	}
}

void func_1575(bool bParam0)
{
	PED::_0xE3144B932DFDFF65(bParam0, 0f, -1, 1, 1);
	PED::CLEAR_PED_ENV_DIRT(bParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

void func_1576()
{
	char* sVar0;

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return;
	}
	if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
	{
		return;
	}
	if (!func_703(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946804->f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	TASK::TASK_PLAY_ANIM(Global_35, func_1654(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_1115(1);
	STREAMING::REMOVE_ANIM_DICT(func_1654());
}

int func_1577(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2535.f_1)
	{
		if (&Global_1946804->f_2535.f_43[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1578(int iParam0, var uParam1)
{
	return (Global_1946804->f_2535.f_3[iParam0] && uParam1) != 0;
}

void func_1579(int iParam0, var uParam1)
{
	Global_1946804->f_2535.f_3[iParam0] = (&Global_1946804->f_2535.f_3[iParam0] - (Global_1946804->f_2535.f_3[iParam0] && uParam1));
}

int func_1580(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2589)
	{
		if (&Global_1946804->f_2589.f_2[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1581(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1582(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1583(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_1655(vParam0, 0f, 0f, 0, 2);
	return func_1655(vParam0, ((*Global_1894052)[iVar0 /*3*/])->f_1, ((*Global_1894052)[iVar0 /*3*/])->f_2, Global_1894052[iVar0 /*3*/], 4);
}

int func_1584(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 8:
			return 512;
		case 9:
			return 1024;
		case 10:
			return 2048;
		case 11:
			return 4096;
		case 12:
			return 8192;
		case 13:
			return 16384;
		case 14:
			return 32768;
		case 15:
			return 65536;
		case 16:
			return 131072;
		case 17:
			return 262144;
		case 18:
			return 524288;
		case 19:
			return 1048576;
		default:
			break;
	}
	return 1;
}

int func_1585()
{
	return Global_40.f_8863.f_148;
}

int func_1586(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("SP_CHAL_BAND_ROOT");
		case 1:
			return joaat("SP_CHAL_EXPL_ROOT");
		case 2:
			return joaat("SP_CHAL_GAMB_ROOT");
		case 3:
			return joaat("SP_CHAL_HERB_ROOT");
		case 4:
			return joaat("SP_CHAL_HORSE_ROOT");
		case 5:
			return joaat("SP_CHAL_HUNT_ROOT");
		case 6:
			return joaat("SP_CHAL_SHOT_ROOT");
		case 7:
			return joaat("SP_CHAL_SURV_ROOT");
		case 8:
			return joaat("SP_CHAL_WEAP_ROOT");
		default:
			break;
	}
	return 0;
}

void func_1587(bool bParam0)
{
	func_1656(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_0x4CC5F2FC1332577F(121713391);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(121713391);
	}
}

int func_1588(int iParam0, var uParam1)
{
	var uVar0;
	struct<2> Var1;
	int iVar8;

	iVar8 = 0;
	if (!func_622(iParam0, func_693()))
	{
		return 0;
	}
	Var1 = func_1016(func_693());
	Var1.f_1 = iParam0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &Var1, joaat("COMPONENT")))
		{
		}
		else
		{
			(*uParam1)[iVar8] = uVar0;
			iVar8++;
		}
	}
	return iVar8;
}

int func_1589(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar19;
	struct<14> Var20;

	Var5.f_9 = -1591664384;
	iVar19 = func_1016(func_693());
	Var20 = { func_1020(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!func_1023(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_384(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = func_995(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					func_1017(&(Global_1946804->f_964), iVar19, Var5.f_4, joaat("COMPONENT"), 1, uParam1[iVar3]);
					DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
					if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
					{
					}
					else
					{
						*iParam2 = (*iParam2 - 1);
						(*uParam1)[iVar3] = uParam1[*iParam2];
						(*uParam1)[*iParam2] = 0;
					}
					iVar3 = (iVar3 + -1);
				}
			}
		}
		iVar2++;
	}
	func_385(iVar0);
	return 1;
}

void func_1590(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = iParam0;
	if (!func_1331(iVar2, &iVar0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_26795.f_627.f_121.f_19)
	{
		if (iVar2 == &Global_26795.f_627.f_121[iVar0])
		{
			bVar1 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar1)
	{
		return;
	}
	if (Global_26795.f_627.f_121.f_19 == 1)
	{
		Global_26795.f_627.f_121.f_19 = 0;
		*uParam1 = 0;
		Global_26795.f_627.f_121[0] = 0;
		return;
	}
	Global_26795.f_627.f_121.f_19 = (Global_26795.f_627.f_121.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_26795.f_627.f_121[iVar0] = &Global_26795.f_627.f_121[Global_26795.f_627.f_121.f_19];
	Global_26795.f_627.f_121[Global_26795.f_627.f_121.f_19] = 0;
}

int func_1591(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1657();
	}
	if (func_2() == -1)
	{
		return (Global_26795.f_26[iParam0 /*120*/])->f_1;
	}
	return (Global_36637.f_45.f_350.f_26[iParam0 /*120*/])->f_1;
}

void func_1592(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_2() == -1)
	{
		Global_26795.f_26[iParam0 /*120*/] = 0;
		(Global_26795.f_26[iParam0 /*120*/])->f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = &Global_1946804->f_57[iVar0 /*11*/];
			func_1212(&uVar1, iVar0, iParam0);
			iVar0++;
		}
		return;
	}
	Global_36637.f_45.f_350.f_26[iParam0 /*120*/] = 0;
	(Global_36637.f_45.f_350.f_26[iParam0 /*120*/])->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = &Global_1946804->f_57[iVar0 /*11*/];
		func_1483(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

int func_1593(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_619(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_1591(iParam1);
	}
	if ((bParam3 && func_620(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_622(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_623(Global_40.f_7729, 4096);
		func_621(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		func_1658(bParam0);
	}
	func_1576();
	if (!func_1659(iParam1))
	{
		func_1574(iVar0, bParam0, func_1660(iParam1), 1, 0, 1);
	}
	func_1575(bParam0);
	return 1;
}

void func_1594(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_1595(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_1596(int iParam0)
{
	if (func_469())
	{
		switch (iParam0)
		{
			case -1346384396:
				return joaat("HORSE_EQUIPMENT_HORSE_BLANKET_00_NEW_000");
			case -712836614:
				return joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_STOCK_NEW_SADDLE_000");
			case -1629133289:
				return joaat("HORSE_EQUIPMENT_HORN_NEW_000");
			case 1302066700:
				return joaat("HORSE_EQUIPMENT_STIRRUP_NEW_000");
			case 599669344:
				return joaat("HORSE_EQUIPMENT_HORSE_BEDROLL_01_USED_000");
			case -1555511632:
				return joaat("HORSE_EQUIPMENT_HORSE_SADDLEBAG_USED_000");
		}
	}
	else if (func_315())
	{
		switch (iParam0)
		{
			case -1346384396:
				return joaat("HORSE_EQUIPMENT_HORSE_BLANKET_09_NEW_001");
			case -712836614:
				return joaat("HORSE_EQUIPMENT_WESTERN_04_STOCK_NEW_SADDLE_005");
			case -1629133289:
				return joaat("HORSE_EQUIPMENT_HORN_NEW_012");
			case 1302066700:
				return joaat("HORSE_EQUIPMENT_STIRRUP_NEW_006");
			case 599669344:
				return joaat("HORSE_EQUIPMENT_HORSE_BEDROLL_00_USED_003");
			case -1555511632:
				return joaat("HORSE_EQUIPMENT_HORSE_SADDLEBAG_NEW_003");
		}
	}
	return 0;
}

void func_1597(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

void func_1598(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1;
}

void func_1599(var uParam0, var uParam1)
{
	uParam0->f_2 = uParam1;
}

void func_1600(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
}

void func_1601(var uParam0, var uParam1)
{
	uParam0->f_4 = uParam1;
}

void func_1602(var uParam0, var uParam1)
{
	uParam0->f_5 = uParam1;
}

int func_1603()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_1604()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_1605()
{
	return 1;
}

int func_1606()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_1607()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_1608()
{
	return 1;
}

int func_1609()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_1610()
{
	return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_1611()
{
	return 2;
}

int func_1612()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_1613()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_1614()
{
	return 1;
}

int func_1615()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_1616()
{
	return joaat("A_C_HORSE_MORGAN_BAY");
}

int func_1617()
{
	return 1;
}

int func_1618()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_1619()
{
	return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_1620()
{
	return 1;
}

int func_1621(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1622(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

int func_1623(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_738(bParam2), uParam0, iParam1);
}

int func_1624(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_1525(iParam0))
	{
		return 0;
	}
	iVar0 = func_1622(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_691(0) };
	if (!func_1661(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_1662(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

bool func_1625(int iParam0)
{
	return func_552(iParam0) == joaat("HORSE");
}

void func_1626(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	struct<2> Var21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		Var21[iVar0 /*2*/] = uParam2[iVar0 /*2*/];
		(Var21[iVar0 /*2*/])->f_1 = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (&Var21[iVar0 /*2*/] == Var19)
							{
								(Var21[iVar0 /*2*/])->f_1 = ((Var21[iVar0 /*2*/])->f_1 - Var19.f_1);
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if ((Var21[iVar0 /*2*/])->f_1 != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR((IntToFloat(((*uParam2)[iVar0 /*2*/])->f_1) * ((Var21[iVar0 /*2*/])->f_1 / 1f)));
		}
		iVar0++;
	}
}

int func_1627(int iParam0)
{
	iParam0 = func_1621(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_1628(int iParam0)
{
	bool bVar0;

	iParam0 = func_1621(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_1627(iParam0))
	{
		return 0;
	}
	bVar0 = func_1629(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(bVar0) || PED::IS_PED_INJURED(bVar0))
	{
		return 1;
	}
	return 0;
}

int func_1629(int iParam0)
{
	iParam0 = func_1621(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

void func_1630(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_1 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_2 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_3 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_4 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_5 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_6 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_1631(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_1632(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_0x88EFFED5FE8B0B4A(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_0x7BCC6087D130312A(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_1633(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(iParam0, iParam1, iParam2);
	return uVar2;
}

int func_1634(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1635(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1636(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1637(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1638(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR");
		default:
			break;
	}
	return 0;
}

int func_1639(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR");
		default:
			break;
	}
	return 0;
}

int func_1640(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
		default:
			break;
	}
	return 0;
}

int func_1641(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		default:
			break;
	}
	return 0;
}

int func_1642(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR");
		default:
			break;
	}
	return 0;
}

int func_1643(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER");
		default:
			break;
	}
	return 0;
}

int func_1644(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
		default:
			break;
	}
	return 0;
}

int func_1645(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		default:
			break;
	}
	return 0;
}

int func_1646(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

char* func_1647(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LBS_AMBARINO_BOUNTY";
		case 1:
			return "LBS_NEW_HANOVER_BOUNTY";
		case 2:
			return "LBS_LEMOYNE_BOUNTY";
		case 3:
			return "LBS_W_ELIZABETH_BOUNTY";
		case 4:
			return "LBS_NEW_AUSTIN_BOUNTY";
		case 5:
			return "LBS_GUARMA_BOUNTY";
		default:
			break;
	}
	return "LBS_INVALID_BOUNTY";
}

char* func_1648(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

void func_1649(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224226)
	{
		if (&Global_1224226->f_1[iVar0 /*9*/] == iParam0)
		{
			if ((Global_1224226->f_1[iVar0 /*9*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1224226->f_1[iVar0 /*9*/])->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1663(iParam0, iParam1);
}

int func_1650(int iParam0)
{
	if (func_2() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1651(var uParam0, int iParam1)
{
	int iVar0;

	if (func_2() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		*uParam0 = (Global_26795.f_26[iParam1 /*120*/])->f_1;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			*(uParam0->f_1[iVar0 /*3*/]) = { *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iVar0 /*3*/]) };
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	*uParam0 = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_1652(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	bVar1 = true;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_1657()) || bParam5)
		{
			func_1664();
		}
	}
	if (func_2() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_1665(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_619(Global_40.f_7729);
				Global_1946804->f_1378 = func_619(Global_40.f_7729);
				bParam3 = true;
			}
		}
		bVar1 = func_1660(iVar0);
	}
	if (bParam3 && bVar1)
	{
		func_1360(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_1080(0, 1);
	}
	func_1334(0);
}

void func_1653(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_2() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(bParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(bParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(bParam1, Global_1347477->f_190);
			}
			func_650(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1666(bParam1, 29, bVar4, 1, 0);
			func_1666(bParam1, 31, bVar4, 1, 0);
			func_1666(bParam1, 30, bVar4, 1, 0);
			func_1666(bParam1, 22, bVar4, 1, 0);
			func_1666(bParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_703(32768) && func_1356(1108822547, 8)) && func_1351(10, iParam3))
	{
		func_1667(bParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_1102(iVar1, 1);
			if (func_1356(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_1351(iVar1, iParam3))
				{
				}
				else if ((func_1356(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_1356(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1666(bParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_1531(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_2456[iVar1 /*2*/]) && (uParam0->f_1[iVar1 /*3*/])->f_1 == (Global_1946804->f_2456[iVar1 /*2*/])->f_1)
						{
						}
						else
						{
							if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
							{
								func_1666(bParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_1356(iVar3, 1))
							{
								func_1112(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(bParam1, iVar2, false, bVar4, false);
							if ((uParam0->f_1[iVar1 /*3*/])->f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(bParam1, iVar2, (uParam0->f_1[iVar1 /*3*/])->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(bParam1, bVar4);
							PED::_0xCC8CA3E88256E58F(bParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}

char* func_1654()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

int func_1655(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

void func_1656(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

int func_1657()
{
	if (func_2() == -1)
	{
		return Global_26795.f_776;
	}
	return Global_36637.f_45.f_350.f_1011;
}

void func_1658(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

int func_1659(int iParam0)
{
	return 0;
}

int func_1660(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1661(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_738(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return 0;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return 0;
	}
	return 1;
}

int func_1662(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_738(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

void func_1663(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1224226 < 20)
	{
		Global_1224226 = &Global_1224226 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224226->f_1[iVar0 /*9*/]) = { *(Global_1224226->f_1[iVar0 + 1 /*9*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	*(Global_1224226->f_1[(&Global_1224226 - 1) /*9*/]) = { Var1 };
}

void func_1664()
{
	int iVar0;

	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1497.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_1665(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1016(0);
	iVar1 = 0;
	func_1017(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
	{
		return 0;
	}
	if (!DATAFILE::_0xA63CD20F19B961AB(&iVar1, &(Global_1946804->f_964), -1516819610))
	{
		return 0;
	}
	return iVar1;
}

void func_1666(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_1102(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1668(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_0x5FF9A878C3D115B8(iParam4, PED::_GET_METAPED_TYPE(bParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xDF631E4BCE1B1FC4(bParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xD710A5007C2AC539(bParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

void func_1667(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_1356(1108822547, 6))
	{
		if (bParam2)
		{
			func_1666(bParam0, iVar0, func_2() != -1, 0, 0);
			func_1531(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(bParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1112(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
}

int func_1668(int iParam0)
{
	int iVar0;

	iVar0 = func_555(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return joaat("HATS");
		case -525676072:
			return joaat("MASKS_LARGE");
		default:
			break;
	}
	return 0;
}

