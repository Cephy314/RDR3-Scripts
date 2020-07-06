#region Local Var
	struct<12> Local_0 = { 7, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	struct<4> Var1;
	bool bVar5;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_1(&uVar0);
	func_2();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_3(&uVar0);
	}
	func_4(1);
	bVar5 = PED::_0xD5FE956C70FF370B(Global_34);
	while (true)
	{
		if (((PED::IS_PED_FALLING(Global_34) || PED::_0x3E592D0486DEC0F6(Global_34)) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true)) || PED::_IS_PED_HOGTIED(Global_34))
		{
			func_5(0);
		}
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(0);
		if ((PED::_0xD5FE956C70FF370B(Global_34) != bVar5 && !Global_1939231->f_6) && func_6(Global_1939231->f_10478, 1224357681) != 0)
		{
			func_7(func_6(Global_1939231->f_10478, 1224357681));
			bVar5 = !bVar5;
		}
		if (Global_1939231->f_4)
		{
			func_8();
			func_9();
			func_10(Global_1939231->f_10477);
			if (Global_1939231->f_34 == 0)
			{
			}
			else
			{
				func_7(Global_1939231->f_34);
			}
			func_2();
			if (Global_1939231->f_10485 != 0 && !func_11())
			{
				func_12(Global_1939231->f_10485, &(Var1.f_3));
			}
			Global_1939231->f_4 = 0;
			Global_1939231->f_34 = 0;
		}
		if (func_13())
		{
			func_12(Global_1939231->f_10485, &(Var1.f_3));
			func_2();
			func_14(0);
			Global_1939231->f_6 = 0;
		}
		while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iScriptParam_0))
		{
			if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iScriptParam_0, &Var1))
			{
				Global_1939231->f_6 = 0;
				switch (Var1)
				{
					case -1740156697:
						Global_1939231->f_10485 = Var1.f_1;
						if (!func_11())
						{
							switch (Var1.f_2)
							{
								case -1287062382:
									func_15(Var1.f_1, &(Var1.f_3));
									break;
								case joaat("USABLE_ITEM"):
								case 1086195311:
									ATTRIBUTE::_0xD962F8579D702DB5();
									func_12(Var1.f_1, &(Var1.f_3));
									break;
								case joaat("FOLDER_ITEM"):
									ATTRIBUTE::_0xD962F8579D702DB5();
									func_16(Var1.f_1, &(Var1.f_3));
									break;
							}
						}
						else
						{
							func_2();
							ATTRIBUTE::_0xD962F8579D702DB5();
						}
						func_17(Var1.f_2);
						func_4(2);
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -722926211:
					case 703281244:
						func_18();
						func_2();
						ATTRIBUTE::_0xD962F8579D702DB5();
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -1203660660:
						switch (Var1.f_2)
						{
							case joaat("USABLE_ITEM"):
							case joaat("BREAKABLE_ITEM"):
							case 1086195311:
								if (func_19() || func_20())
								{
									if (func_21(Global_1939231->f_10478, 0, 0, 0, 1, 0, 0))
									{
										func_5(0);
									}
								}
								else if (func_22())
								{
								}
								else if (!func_23(0))
								{
									func_24();
								}
								func_4(4);
								break;
							case joaat("DROP_ITEM"):
								func_25(Global_1939231->f_10478, 1);
								break;
							case joaat("DISCARD_ALL"):
								if (func_23(0))
								{
									func_4(32);
								}
								else
								{
									func_26(Global_1939231->f_10478);
								}
								break;
							case joaat("SEND_ALL"):
								func_4(64);
								break;
						}
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case 922460030:
						func_4(16);
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -2075827635:
						func_4(8);
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					default:
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
				}
			}
		}
		BUILTIN::WAIT(0);
	}
	func_3(&uVar0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1(var uParam0)
{
	if (func_27() == -1)
	{
		func_28();
	}
	(*Global_1913112)[0 /*11*/] = 0;
	func_29(uParam0);
	return 1;
}

void func_2()
{
	if (func_11())
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
		INVENTORY::_0x75CFAC49301E134F(Global_1939231->f_10501, 0, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10494, func_30(Global_1939231->f_10477));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10495, func_31(Global_1939231->f_10477));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10514, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10510, false);
		if (func_23(0) || func_32())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10496, "");
		}
		if (func_33(29))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, HUD::_GET_LABEL_TEXT_BY_HASH(818738914));
		}
		else
		{
			func_34(Global_1939231->f_10477);
		}
	}
}

void func_3(var uParam0)
{
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1939231->f_6 = 0;
	Global_1939231->f_38 = 0;
	Global_1939231->f_33 = -1;
	Global_1939231->f_34 = 0;
	Global_1939231->f_10481 = 0;
	func_35(822208792);
	func_36(0);
	func_37(0);
	func_38(uParam0);
	if (!TASK::_0x038B1F1674F0E242(Global_34))
	{
		func_39(0);
	}
	func_40(1);
	func_41();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4(int iParam0)
{
	Global_1939231->f_10451 = (Global_1939231->f_10451 || iParam0);
}

void func_5(bool bParam0)
{
	if (bParam0)
	{
		Global_1939231 = 1;
	}
	else
	{
		Global_1939231 = 2;
	}
}

int func_6(int iParam0, int iParam1)
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

void func_7(int iParam0)
{
	var uVar0;

	uVar0 = iParam0;
	Global_1939231->f_10484 = 0;
	func_43(Global_1939231->f_10468[func_42(Global_1939231->f_10477) /*2*/], iParam0);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1939231->f_10490, Global_1939231->f_10484);
	func_44(Global_1939231->f_33);
	Global_1939231->f_10476 = uVar0;
}

void func_8()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	Global_1939231->f_10484 = 0;
	if (Global_1939231->f_10476 != -1)
	{
		iVar0 = Global_1939231->f_10476;
		func_43(Global_1939231->f_10468[func_42(Global_1939231->f_10477) /*2*/], iVar0);
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1939231->f_10490, Global_1939231->f_10484);
	}
	iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("Satchel");
	bVar2 = Global_1939231->f_10484 <= false;
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "FolderEmpty", bVar2);
}

int func_9()
{
	if ((func_45() || func_47(Global_34, func_46(7), 1)) || (!(func_48(7) || func_49(7)) && func_23(0)))
	{
		return (func_50(0, -1591664384) && func_50(1, 724026534));
	}
	return func_50(0, -1591664384);
}

void func_10(int iParam0)
{
	struct<2> Var0;
	struct<10> Var2;

	Var0 = { *(Global_1939231->f_10468[Global_1939231->f_10475 /*2*/]) };
	Var2.f_9 = -1591664384;
	if (!func_51())
	{
		func_52(0);
	}
	Global_1939231->f_10483 = 0;
	Global_1939231->f_38.f_203 = 0;
	if (Global_1939231->f_10486)
	{
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1939231->f_10489, Global_1939231->f_10483);
		Global_1939231->f_10486 = 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10498, func_30(iParam0));
	if (!func_23(0) && !func_32())
	{
		func_53(func_42(iParam0), &Var0, &Var2, iParam0);
	}
	func_54();
	if (Global_1939231->f_10477 == -283002878)
	{
		func_55();
	}
	else if (Global_1939231->f_10477 == -889932290)
	{
		func_56();
	}
	else if (Global_1939231->f_10477 == -693134279)
	{
		func_57();
	}
	else
	{
		if (Global_1939231->f_10477 == -182626652 || Global_1939231->f_10477 == 1783698482)
		{
			if ((Global_1915180->f_19742 == 38 || Global_1915180->f_19742 == 2) && func_23(0))
			{
				func_57();
			}
		}
		func_58(func_42(iParam0), &Var0, &Var2, iParam0);
		if ((Global_1939231->f_10477 == -182626652 && (((Global_1915180->f_19742 == 10 || Global_1915180->f_19742 == 16) || Global_1915180->f_19742 == 15) || Global_1915180->f_19742 == 29)) || (Global_1939231->f_10477 == -693134279 && Global_1915180->f_19742 == 2))
		{
			if (func_45())
			{
				Var0 = { *(Global_1939231->f_10468[1 /*2*/]) };
				func_58(1, &Var0, &Var2, iParam0);
			}
			else if (func_59())
			{
				Var0 = { *(Global_1939231->f_10468[2 /*2*/]) };
				func_58(2, &Var0, &Var2, iParam0);
			}
		}
		func_60();
		func_55();
		func_56();
		func_61();
	}
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1939231->f_10489, Global_1939231->f_10483);
	func_44(0);
}

bool func_11()
{
	return Global_1939231->f_38.f_203 <= 0;
}

void func_12(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	func_62();
	if (func_13())
	{
		func_14(0);
		if (Global_1939231->f_6)
		{
			iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939231->f_10490, Global_1939231->f_10485);
		}
		else
		{
			iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939231->f_10489, Global_1939231->f_10485);
		}
		iVar0 = func_63(iVar1);
	}
	else
	{
		iVar0 = func_63(*uParam1);
	}
	if (func_63(*uParam1) == iVar0)
	{
		func_64(iVar0, uParam1);
	}
	func_65(0, iVar0);
	func_62();
	func_44(iParam0);
}

bool func_13()
{
	return Global_1939231->f_10;
}

void func_14(int iParam0)
{
	Global_1939231->f_10 = iParam0;
}

void func_15(int iParam0, int iParam1)
{
	if (iParam0 != Global_1939231->f_10475)
	{
		func_66(iParam0, iParam1);
	}
}

void func_16(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Global_1939231->f_33 = uParam0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "label");
	func_67(iVar0, uParam1);
	iVar1 = iVar0;
	func_7(iVar1);
	if (func_68(Global_1939231->f_10478, 0))
	{
		if (Global_1939231->f_10477 == 1783698482 || func_69(Global_1939231->f_10478, 474910316))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, "");
			func_70(Global_1939231->f_10478, joaat("ANTIQUE_BOTTLES"));
			func_70(Global_1939231->f_10478, joaat("ARROWHEADS"));
			func_70(Global_1939231->f_10478, joaat("BIRD_EGGS"));
			func_70(Global_1939231->f_10478, joaat("COINS"));
			func_70(Global_1939231->f_10478, joaat("FAMILY_HEIRLOOMS"));
			func_70(Global_1939231->f_10478, joaat("LOST_JEWELRY_BRACELETS"));
			func_70(Global_1939231->f_10478, joaat("LOST_JEWELRY_EARRINGS"));
			func_70(Global_1939231->f_10478, joaat("LOST_JEWELRY_NECKLACES"));
			func_70(Global_1939231->f_10478, joaat("LOST_JEWELRY_RINGS"));
			func_70(Global_1939231->f_10478, joaat("TAROT_CARDS_CUPS"));
			func_70(Global_1939231->f_10478, joaat("TAROT_CARDS_PENTACLES"));
			func_70(Global_1939231->f_10478, joaat("TAROT_CARDS_SWORDS"));
			func_70(Global_1939231->f_10478, joaat("TAROT_CARDS_WANDS"));
			func_70(Global_1939231->f_10478, joaat("WILD_FLOWERS"));
		}
	}
	else if (Global_1939231->f_10477 == 1783698482 || Global_1939231->f_10477 == -693134279)
	{
		iVar2 = iVar0;
		if (iVar2 != 0)
		{
			if (Global_1939231->f_10477 != -693134279)
			{
				func_71();
			}
			Var3.f_2 = 5;
			Var3.f_18 = 8;
			func_72(iVar2, &Var3);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10495, Var3.f_1);
			if (!func_23(0) && iVar2 == STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), 0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10504, false);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10505, false);
			}
		}
	}
}

void func_17(int iParam0)
{
	if (iParam0 != joaat("FOLDER_ITEM"))
	{
		Global_1939231->f_10476 = -1;
	}
}

void func_18()
{
	int iVar0;

	iVar0 = Global_1939231->f_10453;
	func_73(iVar0);
}

int func_19()
{
	if (func_74(Global_34, 0))
	{
		if (PED::_IS_PED_USING_SCENARIO_HASH(Global_34, joaat("PROP_PLAYER_OPEN_CASHBOX")))
		{
			return 1;
		}
	}
	return 0;
}

int func_20()
{
	if (Global_1939231->f_36 == 3)
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	var uVar27;
	bool bVar28;
	int iVar29;
	bool bVar30;
	bool bVar31;
	int iVar32;

	if (func_20())
	{
		Global_1939231->f_10479 = iParam0;
		func_75(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_76(iParam0, bParam4))
	{
		return 0;
	}
	if (func_77(iParam0))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 108107462))
	{
		return 0;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (iParam0 == -418848773)
	{
		UIAPPS::_LAUNCH_APP_WITH_ENTRY("player_menu", "mp_moonshine_selection");
	}
	if (func_69(iParam0, -2081717885))
	{
		func_78(iParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_69(iParam0, -1909684001))
	{
		func_79(iParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_69(iParam0, 587975446))
	{
		func_80(iParam0, Var10);
	}
	else if (func_69(iParam0, 566155764))
	{
		if (!func_81(iParam0))
		{
			return 0;
		}
	}
	if (func_82(iParam0, bParam5, bParam6, bParam1))
	{
		Global_1912976 = iParam0;
		Global_1913165 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_69(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_83(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_69(iParam0, -1472964441) || func_69(iParam0, -228153877)) || func_69(iParam0, 566155764))
	{
	}
	else if (func_69(iParam0, 1919582297))
	{
		if (((func_84() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1)) || TASK::_0x0C3CB2E600C8977D(Global_34, 1)) || !PED::IS_PED_ON_FOOT(Global_34))
		{
			return 0;
		}
		switch (iParam0)
		{
			case joaat("CONSUMABLE_HERBIVORE_BAIT"):
			case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case joaat("CONSUMABLE_PREDATOR_BAIT"):
			case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_83(Var10, 0);
		bVar28 = false;
	}
	else if (func_85(iParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_86(Global_1070356->f_26843.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_83(Var10, 0);
		iVar29 = 1;
	}
	else if (func_87(iParam0) == joaat("CLOTHING"))
	{
		if (!func_88(iParam0))
		{
			func_89("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_90(iParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_91();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_92(PLAYER::PLAYER_ID()))
			{
				func_89("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_89("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1951141->f_1657 != iParam0)
			{
				func_93(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_94(iParam0, 0);
					return iVar29;
				case -2061583405:
					func_95(iParam0);
					func_93(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (iParam0 == &Global_1951141->f_1657.f_1[23 /*3*/])
					{
						func_96(Global_34, 260271636 /* GXTEntry: "No Gloves" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						PED::_0xCB9401F918CB0F75(Global_34, "PlayUnequipGlovesFidget", true, 15);
						func_97(iParam0, 0);
						return 1;
					}
					else
					{
						PED::_0xCB9401F918CB0F75(Global_34, "PlayEquipGlovesFidget", true, 15);
						func_97(iParam0, 1);
					}
					break;
				default:
					if (!func_69(iParam0, -1348134986))
					{
					}
					else
					{
						func_94(iParam0, 0);
					}
					break;
			}
			func_96(Global_34, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				func_5(1);
				break;
			case joaat("KIT_WARDROBE"):
				if (func_27() != -1)
				{
				}
				else if (!func_88(iParam0))
				{
					func_89("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_98(7, iParam0);
					bVar31 = func_98(1, iParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17094))
						{
							MAP::REMOVE_BLIP(&Global_17094);
						}
						Global_17094 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::_0x662D364ABF16DE2F(Global_17094, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
						func_89(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_17094), 10000, 0, 0, 0, 1);
					}
					else if (!func_99(7))
					{
						func_89("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_47(Global_34, func_46(7), 0))
						{
							func_89("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17094))
							{
								MAP::REMOVE_BLIP(&Global_17094);
							}
							Global_17094 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
							MAP::_0x662D364ABF16DE2F(Global_17094, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
							func_89(MISC::_CREATE_VAR_STRING(0, -482898802, Global_17094), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = joaat("PLAYER_WARDROBE");
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_83(Var10, 0);
						}
						Jump @2060; //curOff = 1557
						func_100();
						Jump @2060; //curOff = 1564
						if (!func_101(Global_1956172->f_1, 1) || func_101(Global_1956172->f_1, 512))
						{
							if (func_88(joaat("KIT_CAMP")))
							{
								if (func_102(1, 1))
								{
									func_103(2, 1);
								}
								else if (func_104(1))
								{
									func_89("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else if (func_105())
								{
									func_89("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										func_106();
									}
									else
									{
										func_89("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									func_107(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								func_89("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								func_107(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else if (func_105())
							{
								func_89("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								func_89("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1956172->f_1 |= 2;
							iVar29 = 1;
						}
						Jump @2060; //curOff = 1839
						if (!WEAPON::_IS_WEAPON_BINOCULARS(func_108(Global_34, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iParam0, true, 0, false, false);
						}
						return 1;
						Jump @2060; //curOff = 1877
						if (func_108(Global_34, 1, 0, 0) != joaat("WEAPON_KIT_CAMERA"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_KIT_CAMERA"), true, 0, false, false);
						}
						return 1;
						Jump @2060; //curOff = 1918
						Jump @2060; //curOff = 1921
						func_109(533, 1);
						Jump @2060; //curOff = 1932
						func_110(1);
						Jump @2060; //curOff = 1940
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("DOCUMENT_PLAYER_JOURNAL"), 1928812891, 1, 0, -1082130432);
						bVar28 = false;
						return 1;
						Jump @2060; //curOff = 1975
						UIAPPS::_LAUNCH_APP_BY_HASH(joaat("COLLECTORS"));
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("COLLECTORS")) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							func_83(Var10, 0);
						}
						return 1;
						Jump @2060; //curOff = 2051
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar29;
		}
	}

int func_22()
{
	if (Global_1939231->f_36 == 1 || Global_1939231->f_36 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_23(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

void func_24()
{
	bool bVar0;
	struct<5> Var1;
	struct<4> Var6;
	bool bVar10;
	int iVar11;

	if (func_87(Global_1939231->f_10478) == joaat("CONSUMABLE"))
	{
		Global_1939067->f_41 = Global_1939231->f_10478;
	}
	else
	{
		Global_1939067->f_42 = Global_1939231->f_10478;
	}
	bVar0 = true;
	if (func_90(Global_1939231->f_10478) == -854348463)
	{
		Var1 = { func_111(Global_1939231->f_10478, 0, 0) };
		Var6 = { func_112(Global_1939231->f_10478, Var1, Var1.f_4, 0) };
		func_113(Var6, 1);
		bVar10 = func_114(0);
		if (func_27() == 0)
		{
			bVar10 = true;
		}
		if (Global_1939231->f_10477 == -156634416)
		{
			func_115(bVar10, 0, joaat("CI_TAG_FOLDER_KIT_WATCHES"));
		}
		else
		{
			func_115(bVar10, 1, 0);
		}
		bVar0 = true;
	}
	else if (Global_1939231->f_10478 == joaat("KIT_GUN_OIL"))
	{
		func_116();
		bVar0 = false;
	}
	else if ((func_90(Global_1939231->f_10478) == 81053684 || func_90(Global_1939231->f_10478) == -525676072) || func_69(Global_1939231->f_10478, -1348134986))
	{
		func_94(Global_1939231->f_10478, 0);
		bVar0 = false;
	}
	else if (func_69(Global_1939231->f_10478, 316290104))
	{
		if (func_117(Global_1939231->f_10478, 0, 0) >= 0)
		{
			bVar0 = true;
		}
	}
	else if (func_118(Global_1939231->f_10478, 1, 0))
	{
		if (func_27() == -1)
		{
			iVar11 = func_119(Global_1939231->f_10478);
			if (func_68(iVar11, 0))
			{
				if (func_120(iVar11))
				{
					bVar0 = false;
				}
			}
		}
	}
	else if (func_69(Global_1939231->f_10478, -1242251796))
	{
		func_123(Global_1939231->f_10478, func_122(func_121(0)));
	}
	else if (((func_69(Global_1939231->f_10478, -1472964441) && func_124(Global_1939231->f_10478)) && func_125()) && !func_126(Global_1939231->f_10478))
	{
		func_127();
		func_128(Global_17172.f_2954.f_17, 1, 0, -142743235);
		if (func_21(Global_1939231->f_10478, 0, 0, 0, 1, 0, 0))
		{
			bVar0 = false;
		}
	}
	else if (func_21(Global_1939231->f_10478, 0, 0, 0, 1, 0, 0))
	{
		bVar0 = false;
	}
	if (func_20())
	{
		bVar0 = false;
	}
	Global_1939231->f_10479 = Global_1939231->f_10478;
	func_5(bVar0);
	func_52(0);
}

void func_25(int iParam0, int iParam1)
{
	if (!func_68(iParam0, 0))
	{
		return;
	}
	if (((func_69(iParam0, -1472964441) && func_124(iParam0)) && func_125()) && func_126(iParam0))
	{
		func_127();
	}
	if (!func_129(iParam0, iParam1, 0, -327174699))
	{
		if (!func_130(iParam0, iParam1, 0, 1, -327174699))
		{
		}
	}
	func_115(1, 1, func_6(iParam0, 1224357681));
}

void func_26(int iParam0)
{
	func_25(iParam0, func_131(func_121(0), iParam0, 0, 1, 1));
}

int func_27()
{
	return Global_1572887->f_13;
}

void func_28()
{
	func_132(-893403924, &(Global_1939231->f_10515), 600, -1, 0, 0);
	func_133();
}

int func_29(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	bVar0 = func_23(0);
	bVar1 = func_32();
	bVar2 = false;
	if (((!bVar0 && !bVar1) && Global_1939231->f_10477 != -156634416) && Global_1939231->f_10477 != 1061777683)
	{
		bVar2 = true;
	}
	Global_1939231->f_10486 = 1;
	Global_1939231->f_10489 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_menu_items");
	Global_1939231->f_10490 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_list_items");
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Satchel");
	Global_1939231->f_10503 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSelectLabel", -31549930);
	Global_1939231->f_10504 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectEnabled", true);
	Global_1939231->f_10505 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectVisible", true);
	Global_1939231->f_10506 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptHoldSelectLabel", joaat("SATCHEL_PROMPT_BREAKDOWN"));
	Global_1939231->f_10507 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectEnabled", false);
	Global_1939231->f_10508 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectVisible", false);
	Global_1939231->f_10511 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "PromptDiscardAllLabel", HUD::_GET_LABEL_TEXT_BY_HASH(joaat("SATCHEL_PROMPT_DISCARD_ALL")));
	Global_1939231->f_10509 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllEnabled", bVar2);
	Global_1939231->f_10510 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllVisible", bVar2);
	Global_1939231->f_10514 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDropVisibile", bVar2);
	Global_1939231->f_10512 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSendLabel", -31549930);
	if ((func_27() == -1 && func_23(0)) && Global_1915180->f_19742 == 2)
	{
		Global_1939231->f_10513 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", true);
	}
	else
	{
		Global_1939231->f_10513 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", false);
	}
	iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Selected");
	Global_1939231->f_10494 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "Name", 0);
	Global_1939231->f_10495 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "Description", 0);
	if (func_23(0) || func_19())
	{
		Global_1939231->f_10496 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "Price", "");
	}
	else
	{
		Global_1939231->f_10496 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar3, "Price", false);
	}
	if ((func_27() == -1 && func_23(0)) && Global_1915180->f_19742 == 2)
	{
		Global_1939231->f_10497 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "PriceLabel", "SHOP_SEND");
	}
	else if (Global_1915180->f_19742 == 29)
	{
		Global_1939231->f_10497 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "PriceLabel", "MATERIAL_VALUE");
	}
	else
	{
		Global_1939231->f_10497 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "PriceLabel", "SHOP_VALUE");
	}
	Global_1939231->f_10498 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "Category", 0);
	Global_1939231->f_10492 = DATABINDING::_DATABINDING_ADD_DATA_INT(iVar3, "DefaultCategoryIndex", false);
	Global_1939231->f_10493 = DATABINDING::_DATABINDING_ADD_DATA_INT(iVar3, "CategoryIndex", func_134());
	Global_1939231->f_10491 = DATABINDING::_DATABINDING_ADD_DATA_INT(iVar3, "CategoryCount", false);
	Global_1939231->f_10499 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "IndexDescription", "");
	Global_1939231->f_10500 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "Tip", "");
	Global_1939231->f_10501 = INVENTORY::_0x9D21B185ABC2DBC4(iVar3, "effects", 0, 0);
	Global_1939231->f_10502 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "Folder", 0);
	Global_1939231->f_10488 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_category_items");
	func_135(Global_1939231->f_10488);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1939231->f_10488, Global_1939231->f_10452);
	iVar4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "Collections");
	iVar5 = joaat("SATCHEL_TITLE");
	if (func_136(joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1")))
	{
		iVar5 = -1401261769; /* GXTEntry: "Legendary Satchel" */
	}
	iVar6 = func_137(iVar4, "player", iVar5, "ALL SATCHEL", -1591664384);
	if (iVar6 < 0)
	{
		return 0;
	}
	if ((func_45() || func_47(Global_34, func_46(7), 1)) || (!(func_48(7) || func_49(7)) && func_23(0)))
	{
		func_137(iVar4, "saddle", -1186165261 /* GXTEntry: "SADDLEBAGS" */, "ALL", 724026534);
	}
	func_66(iVar6, &iVar3);
	if (Global_1939231->f_8)
	{
		func_138(Global_1939231->f_10477);
		func_139(Global_1939231->f_10477, &iVar3, 0);
		func_115(1, 0, 0);
	}
	else
	{
		func_115(func_140(), 0, 0);
	}
	Global_1939231->f_8 = 0;
	return 1;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1346594033 /* GXTEntry: "Recent" */;
		case -1559802791:
			return -352057134 /* GXTEntry: "Materials" */;
		case -1268291907:
			return 845736308 /* GXTEntry: "Ingredients" */;
		case -96974025:
			return -2057617490 /* GXTEntry: "Tonics" */;
		case -1666604090:
			return 991808728 /* GXTEntry: "Provisions" */;
		case 1561961676:
			return -92112048 /* GXTEntry: "Valuables" */;
		case -156634416:
			return 2047707540 /* GXTEntry: "Kit" */;
		case 1061777683:
			return -36657802 /* GXTEntry: "Documents" */;
		case 1783698482:
			return -1236163301 /* GXTEntry: "Collections" */;
		case -283002878:
			return 262409577 /* GXTEntry: "Horse Cargo" */;
		case -889932290:
			return joaat("HWAGON_TITLE");
		case -2074770370:
			return 1643818657 /* GXTEntry: "Donations" */;
		case -693134279:
			return -1077706770 /* GXTEntry: "Postable Items" */;
		case -182626652:
			if ((Global_1915180->f_20136 || Global_1915180->f_21989.f_1) && (Global_1915180->f_19742 == 16 || Global_1915180->f_19742 == 29))
			{
				return joaat("SHOP_PEARSON_DONATE");
			}
			else
			{
				return -161395681 /* GXTEntry: "Sell" */;
			}
			break;
	}
	return 0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1315938069 /* GXTEntry: "Stores your most recently collected items." */;
		case -1559802791:
			return -1694952718 /* GXTEntry: "Stores all types of inedible materials to craft a variety of items." */;
		case -1268291907:
			return 1510785758 /* GXTEntry: "Stores all types of edible ingredients to craft provisions and tonics." */;
		case -96974025:
			return 392871877 /* GXTEntry: "Stores all types of tonics from shop bought to crafted versions." */;
		case -1666604090:
			return 92275361 /* GXTEntry: "Stores all types of provisions from shop bought to cooked meals." */;
		case 1561961676:
			return 983460938 /* GXTEntry: "Stores all types of valuables that can be sold for cash." */;
		case -156634416:
			return -1579183876 /* GXTEntry: "Stores all types of equipment that will be used regularly." */;
		case 1061777683:
			return -419081072 /* GXTEntry: "Stores all types of documents that can be further inspected or actioned on." */;
		case 1783698482:
			return 2061483699 /* GXTEntry: "Stores completed collectible sets that can be sold to Madam Nazar." */;
		case -283002878:
			return -1202687131 /* GXTEntry: "Displays all items that are stored on the Horse." */;
		case -889932290:
			return -1875341370 /* GXTEntry: "Displays all items that are stored on the Hunting Wagon." */;
		case -2074770370:
			return 89311517 /* GXTEntry: "Displays all items that can be donated." */;
		case -693134279:
			return 1001811369 /* GXTEntry: "No items to post." */;
		case -182626652:
			if (Global_1915180->f_19742 == 29)
			{
				return 89311517 /* GXTEntry: "Displays all items that can be donated." */;
			}
			else
			{
				return 288697952 /* GXTEntry: "Displays all items that are suitable for selling." */;
			}
			break;
	}
	return 0;
}

int func_32()
{
	if (((Global_1939231->f_36 == 1 || Global_1939231->f_36 == 2) || func_19()) || func_20())
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	if (func_141())
	{
		if (Global_1915180->f_19742 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case -2074770370:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, HUD::_GET_LABEL_TEXT_BY_HASH(818738914));
			break;
		case -693134279:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, HUD::_GET_LABEL_TEXT_BY_HASH(-402412948));
			break;
		case -182626652:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, HUD::_GET_LABEL_TEXT_BY_HASH(-456150746));
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, "");
			break;
	}
	return 0;
}

void func_35(int iParam0)
{
	Global_1939231->f_37 = iParam0;
}

void func_36(int iParam0)
{
	Global_1939231->f_36 = iParam0;
}

void func_37(int iParam0)
{
	Global_1939231->f_11 = iParam0;
}

void func_38(var uParam0)
{
	int iVar0;

	MAP::DISPLAY_RADAR(true);
	Global_1939231->f_1 = 0;
	func_142();
	func_143(uParam0);
	ATTRIBUTE::_0xD962F8579D702DB5();
	HUD::_SHOW_PLAYER_CORES(false);
	HUD::_SHOW_HORSE_CORES(false);
	if (func_27() == -1)
	{
	}
	else
	{
		while (!func_144(0, 0) && iVar0 < 15)
		{
			iVar0++;
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			BUILTIN::WAIT(0);
		}
	}
}

void func_39(int iParam0)
{
	((*Global_1913146)[iParam0 /*6*/])->f_1 = 3;
	(*Global_1913146)[iParam0 /*6*/] = 0;
	((*Global_1913146)[iParam0 /*6*/])->f_5 = 0;
}

void func_40(int iParam0)
{
	Global_1939231->f_10451 = (Global_1939231->f_10451 - (Global_1939231->f_10451 && iParam0));
}

void func_41()
{
	int iVar0;

	iVar0 = func_145(0);
	func_146(iVar0, 1, 0, 0);
	func_147(iVar0);
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case -283002878:
			return 1;
		case -889932290:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_43(var uParam0, int iParam1)
{
	struct<14> Var0;
	int iVar14;

	Var0.f_9 = -1591664384;
	iVar14 = 0;
	iVar14 = (*uParam0 - 1);
	while (iVar14 >= 0)
	{
		if (!func_148(&Var0, iVar14, func_42(Global_1939231->f_10477), *uParam0))
		{
		}
		else if (func_149(Var0.f_9))
		{
		}
		else if (!func_150(Var0.f_4, iParam1))
		{
		}
		else if (!func_151(Var0.f_4))
		{
		}
		else if (func_23(0))
		{
			if (!func_68(Var0.f_4, 0) || Var0.f_11 <= 0)
			{
			}
			else
			{
				if (Global_1939231->f_10478 == 0)
				{
					func_52(Var0.f_4);
				}
				func_152(Var0);
			}
			iVar14 = (iVar14 + -1);
		}
	}

void func_44(int iParam0)
{
	if (Global_1939231->f_38.f_203 > 16)
	{
		if (Global_1939231->f_6)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10499, MISC::_CREATE_VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1939231->f_10484));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10499, MISC::_CREATE_VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1939231->f_38.f_203));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10499, "");
	}
}

int func_45()
{
	int iVar0;

	if (func_23(0))
	{
		iVar0 = func_121(0);
		if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || PED::IS_PED_INJURED(iVar0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			return 0;
		}
		if (!func_153(Global_1915180->f_19742.f_1))
		{
			return 0;
		}
		if (func_154(Global_1915180->f_19742.f_1, iVar0))
		{
			return 1;
		}
	}
	else
	{
		if (func_27() == -1)
		{
			if (func_155(Global_34))
			{
				iVar0 = PED::GET_MOUNT(Global_34);
			}
			else if (func_156(-283002878))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
		}
		if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || PED::IS_PED_INJURED(iVar0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			return 0;
		}
		if (func_157(iVar0, 0, 1) < 1.7f || func_156(-283002878))
		{
			return 1;
		}
	}
	return 0;
}

int func_46(int iParam0)
{
	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903007[iParam0 /*43*/];
}

int func_47(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return 0;
}

int func_48(int iParam0)
{
	int iVar0;

	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_159(iParam0))
	{
		return 0;
	}
	iVar0 = func_46(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_159(iParam0))
	{
		return 0;
	}
	iVar0 = func_46(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(Global_34, true, false) };
	if (func_160(vVar1, vVar4) > func_161(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	if (!func_162((Global_1939231->f_10468[iParam0 /*2*/])->f_1))
	{
		return 0;
	}
	return func_163("ALL", &((Global_1939231->f_10468[iParam0 /*2*/])->f_1), Global_1939231->f_10468[iParam0 /*2*/], iParam1, 0);
}

bool func_51()
{
	return Global_1939231->f_9;
}

void func_52(int iParam0)
{
	Global_1939231->f_10478 = iParam0;
}

void func_53(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (Global_1939231->f_10477 == 0)
	{
		return;
	}
	iVar1 = 0;
	if (iParam3 == 0 && *uParam1 > 16)
	{
		iVar1 = (*uParam1 - 16);
	}
	iVar0 = 0;
	while (iVar0 < Global_1939231->f_38.f_1)
	{
		Global_1939231->f_38.f_2[iVar0 /*2*/] = 0;
		(Global_1939231->f_38.f_2[iVar0 /*2*/])->f_1 = 0;
		iVar0++;
	}
	Global_1939231->f_38.f_1 = 0;
	iVar0 = 0;
	if (*uParam1 > 0)
	{
		iVar0 = (*uParam1 - 1);
		while (iVar0 >= iVar1)
		{
			if (!func_148(iParam2, iVar0, uParam1->f_1, *uParam1))
			{
			}
			else if (!func_164(iParam2, iParam3))
			{
			}
			else
			{
				func_165(iParam2->f_4);
			}
			iVar0 = (iVar0 + -1);
		}
	}
}

void func_54()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	Global_1939231->f_10481 = 0;
	if (func_166())
	{
		if (PED::_IS_PED_CARRYING(Global_34))
		{
			iVar2 = ITEMSET::CREATE_ITEMSET(false);
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_34, iVar2);
			if (ITEMSET::IS_ITEMSET_VALID(iVar2))
			{
				iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
				iVar4 = 0;
				while (iVar4 < iVar3)
				{
					iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
					if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
					}
					else
					{
						iVar1 = func_167(iVar0);
						if (func_151(iVar1))
						{
							Global_1939231->f_10481 = iVar1;
						}
					}
					iVar4++;
				}
				ITEMSET::DESTROY_ITEMSET(iVar2);
			}
		}
	}
}

void func_55()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (func_23(0))
	{
		iVar1 = func_168();
		if (((iVar1 == 10 || iVar1 == 15) || iVar1 == 29) || iVar1 == 16)
		{
			if (Global_1939231->f_10477 == -283002878 || (Global_1939231->f_10477 == -182626652 && func_45()))
			{
				bVar0 = true;
			}
		}
		else if (func_168() == 16)
		{
			if (Global_1939231->f_10477 == -283002878 || Global_1939231->f_10477 == -182626652)
			{
				bVar0 = true;
			}
		}
		else if (func_168() == 2 && Global_1939231->f_10477 == -693134279)
		{
			bVar0 = true;
		}
	}
	else if (Global_1939231->f_10477 == -283002878)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_27() == 0)
		{
			func_169(1);
		}
		else if (func_168() == 16)
		{
			func_170(1);
		}
		else
		{
			func_169(1);
		}
	}
}

void func_56()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (func_23(0))
	{
		iVar1 = func_168();
		if (((iVar1 == 10 || iVar1 == 15) || iVar1 == 29) || iVar1 == 16)
		{
			if (Global_1939231->f_10477 == -889932290 || (Global_1939231->f_10477 == -182626652 && func_59()))
			{
				bVar0 = true;
			}
		}
		else if (func_168() == 16)
		{
			if (Global_1939231->f_10477 == -889932290 || Global_1939231->f_10477 == -182626652)
			{
				bVar0 = true;
			}
		}
		else if (func_168() == 2 && Global_1939231->f_10477 == -693134279)
		{
			bVar0 = true;
		}
	}
	else if (Global_1939231->f_10477 == -889932290)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_27() == 0)
		{
			func_171(1);
		}
	}
}

void func_57()
{
	if ((Global_1939231->f_10477 == 1783698482 || Global_1939231->f_10477 == -693134279) || ((Global_1915180->f_19742 == 38 && func_23(0)) && Global_1939231->f_10477 == -182626652))
	{
		if (func_172(0) && COLLECTION::_0x6BAB7ACED1017204(joaat("WEEKLY_COLLECTABLES"), 0))
		{
			func_173(STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), 0));
		}
	}
	if (func_174(joaat("ANTIQUE_BOTTLES")))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(joaat("ANTIQUE_BOTTLES"), 0));
	}
	if (func_174(joaat("BIRD_EGGS")))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(joaat("BIRD_EGGS"), 0));
	}
	if (func_174(joaat("ARROWHEADS")))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(joaat("ARROWHEADS"), 0));
	}
	if (func_174(joaat("FAMILY_HEIRLOOMS")))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(joaat("FAMILY_HEIRLOOMS"), 0));
	}
	if (func_174(joaat("WILD_FLOWERS")))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(joaat("WILD_FLOWERS"), 0));
	}
	if (func_174(joaat("COINS")))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(joaat("COINS"), 0));
	}
	if (func_174(joaat("LOST_JEWELRY_RINGS")))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_RINGS"), 0));
	}
	if (func_174(joaat("LOST_JEWELRY_BRACELETS")))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_BRACELETS"), 0));
	}
	if (func_174(joaat("LOST_JEWELRY_EARRINGS")))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_EARRINGS"), 0));
	}
	if (func_174(joaat("LOST_JEWELRY_NECKLACES")))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_NECKLACES"), 0));
	}
	if (func_174(joaat("TAROT_CARDS_CUPS")))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_CUPS"), 0));
	}
	if (func_174(joaat("TAROT_CARDS_PENTACLES")))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_PENTACLES"), 0));
	}
	if (func_174(joaat("TAROT_CARDS_SWORDS")))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_SWORDS"), 0));
	}
	if (func_174(joaat("TAROT_CARDS_WANDS")))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_WANDS"), 0));
	}
}

void func_58(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0)
	{
		func_175(iParam0, uParam1, iParam2, iParam3);
	}
	else
	{
		iVar1 = 0;
		if (*uParam1 > 0)
		{
			iVar0 = (*uParam1 - 1);
			while (iVar0 >= 0)
			{
				if (!func_148(iParam2, iVar0, uParam1->f_1, *uParam1))
				{
				}
				else if (!func_164(iParam2, iParam3))
				{
				}
				else
				{
					func_176(*iParam2, 0);
					iVar1++;
					if (iParam3 == 0 && iVar1 >= 16)
					{
					}
					else
					{
						iVar0 = (iVar0 + -1);
					}
				}
			}
		}
	}

int func_59()
{
	int iVar0;

	if (func_27() == -1)
	{
		return 0;
	}
	if (!func_177())
	{
		return 0;
	}
	iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (func_178(iVar0))
	{
		return 0;
	}
	if (func_23(0))
	{
		if (func_179(Global_1915180->f_19742.f_1, iVar0))
		{
			return 1;
		}
	}
	else if (func_157(iVar0, 0, 1) < 3.7f || func_156(-889932290))
	{
		return 1;
	}
	return 0;
}

void func_60()
{
	switch (Global_1939231->f_10477)
	{
		case -156634416:
			func_180();
			break;
		case 1561961676:
			break;
	}
}

void func_61()
{
	if (func_68(Global_1939231->f_10481, 0) && (!func_45() || func_131(func_121(0), Global_1939231->f_10481, 0, 1, 1) == 0))
	{
		func_181(Global_1939231->f_10481, 0, 1);
	}
}

void func_62()
{
	if (!func_68(Global_1939231->f_10478, 0))
	{
		Global_1939231->f_6 = 0;
	}
	else if ((((func_6(Global_1939231->f_10478, 1224357681) != 0 && Global_1939231->f_10477 != 0) && Global_1939231->f_10477 != -2074770370) && !Global_1915180->f_20136) && !Global_1915180->f_21989.f_1)
	{
		Global_1939231->f_6 = 1;
	}
	else
	{
		Global_1939231->f_6 = 0;
	}
}

int func_63(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iParam0, "label");
	return iVar0;
}

void func_64(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	float fVar12;
	float fVar13;
	int iVar14;
	float fVar15;
	struct<19> Var16;
	int iVar51;

	bVar0 = true;
	if (func_68(iParam0, 0))
	{
		if (func_69(iParam0, 1147021565))
		{
			if (Global_1939231->f_10477 == -283002878)
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (!func_23(0))
			{
				iVar2 = func_182(iParam0);
				if (func_69(iParam0, 1573112293) && !func_183(iVar2))
				{
					bVar0 = false;
					ATTRIBUTE::_0xD962F8579D702DB5();
				}
				else
				{
					ATTRIBUTE::_0x7E2C766ADB2C5F1A(iParam0, iVar1);
				}
			}
		}
		func_184(iParam0, uParam1);
		bVar3 = false;
		bVar4 = func_185(iParam0);
		bVar5 = false;
		bVar6 = false;
		bVar7 = false;
		iVar8 = 0;
		if ((func_69(iParam0, -1472964441) && func_124(iParam0)) && !func_23(0))
		{
			bVar5 = true;
			if (func_125())
			{
				if (func_126(iParam0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10505, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10504, false);
					if (!func_186())
					{
						bVar4 = true;
						bVar6 = true;
					}
				}
				else
				{
					iVar8 = func_187(iParam0, 1);
					if (iVar8 == 0 || iVar8 == 2)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10505, false);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10506, -31549930);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10507, true);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10508, true);
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10504, false);
					}
					bVar7 = true;
				}
			}
			else
			{
				iVar8 = func_187(iParam0, 1);
				if (iVar8 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10504, false);
				}
			}
		}
		if (func_6(iParam0, 1224357681) == joaat("CI_TAG_FOLDER_SKILL_PAMPHLETS") || func_6(iParam0, 1224357681) == joaat("CI_TAG_FOLDER_SATCHEL_PAMPHLETS"))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10503, joaat("READ"));
		}
		if (func_45() || func_59())
		{
			iVar9 = func_131(func_121(0), iParam0, 0, 1, 1);
		}
		else
		{
			iVar9 = func_188(iParam0, 0, 0, 0);
		}
		if (iParam0 == Global_1939231->f_10481)
		{
			iVar9++;
		}
		iVar10 = func_189(iParam0, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10494, func_190(iParam0));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10495, func_191(iParam0));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10514, bVar4);
		if (bVar4 && iVar9 > 1)
		{
			bVar3 = true;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10510, bVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10509, bVar3);
		bVar11 = true;
		if (func_23(0) || func_32())
		{
			fVar12 = (BUILTIN::TO_FLOAT(func_192(iParam0)) / 100f);
			fVar13 = (BUILTIN::TO_FLOAT(func_194(func_193(iParam0), 770694722)) / 100f);
			if (func_69(iParam0, 1064293907) || INVENTORY::_0x245D07651B1D183B(iParam0, 1073741824))
			{
				if (func_195())
				{
					fVar13 = (fVar13 * 1.25f);
				}
			}
			else if ((INVENTORY::_0x245D07651B1D183B(iParam0, 268435456) || INVENTORY::_0x245D07651B1D183B(iParam0, 134217728)) || func_69(iParam0, 1888974372))
			{
				fVar13 = (fVar13 * 0.4f);
			}
			else
			{
				fVar13 = (fVar13 * 0.6f);
			}
			if (Global_1915180->f_19742 == 2)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10496, MISC::_CREATE_VAR_STRING(10, "SEND_ITEM_VALUE", func_196(MISC::_0x2B6846401D68E563(fVar12, 2), joaat("COLOR_PURE_WHITE"))));
			}
			else if (Global_1915180->f_19742 == 29)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10496, func_196(MISC::_0x2B6846401D68E563(fVar13, 2), joaat("COLOR_PURE_WHITE")));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10496, MISC::_CREATE_VAR_STRING(10, "SHOP_ITEM_VALUE", func_196(MISC::_0x2B6846401D68E563(fVar12, 2), joaat("COLOR_PURE_WHITE"))));
			}
			if (!func_197(iParam0, Global_1915180->f_19742.f_1) && !func_32())
			{
				bVar11 = false;
			}
			if (func_168() == 29 && func_198(iParam0))
			{
				bVar11 = false;
			}
		}
		if (bVar5)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_UNIQUE"));
			if (bVar6)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTORS_MAP_DISCARD"));
			}
			else if (bVar7)
			{
				if (iVar8 == 0 || iVar8 == 2)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTORS_MAP"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, func_199(iVar8)));
				}
			}
			else if (iVar8 != 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, func_199(iVar8)));
			}
		}
		else if (-492264119 == iParam0 && !func_200())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_CANT_READ_LETTER"));
		}
		else if (bVar11)
		{
			if (iVar10 > 1)
			{
				if ((func_168() == 38 && func_68(iParam0, 0)) && func_69(iParam0, 474910316))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, "");
					func_70(iParam0, joaat("ANTIQUE_BOTTLES"));
					func_70(iParam0, joaat("ARROWHEADS"));
					func_70(iParam0, joaat("BIRD_EGGS"));
					func_70(iParam0, joaat("COINS"));
					func_70(iParam0, joaat("FAMILY_HEIRLOOMS"));
					func_70(iParam0, joaat("LOST_JEWELRY_BRACELETS"));
					func_70(iParam0, joaat("LOST_JEWELRY_EARRINGS"));
					func_70(iParam0, joaat("LOST_JEWELRY_NECKLACES"));
					func_70(iParam0, joaat("LOST_JEWELRY_RINGS"));
					func_70(iParam0, joaat("TAROT_CARDS_CUPS"));
					func_70(iParam0, joaat("TAROT_CARDS_PENTACLES"));
					func_70(iParam0, joaat("TAROT_CARDS_SWORDS"));
					func_70(iParam0, joaat("TAROT_CARDS_WANDS"));
					func_70(iParam0, joaat("WILD_FLOWERS"));
				}
				else if (iVar9 >= iVar10)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_CAPACITY_FULL", iVar9, iVar10));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_CAPACITY", iVar9, iVar10));
				}
			}
			else if (iVar10 == 1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_UNIQUE"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_INFINITE", iVar9));
			}
		}
		else if (func_168() == 2)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, "");
		}
		else if (func_168() == 29)
		{
			if (func_198(iParam0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_SKINNED_ITEM"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_CRIPPS"));
			}
		}
		else if ((func_201(func_168()) && ENTITY::DOES_ENTITY_EXIST((Global_1051388->f_69[func_168() /*76*/])->f_20)) && !PED::IS_PED_MALE((Global_1051388->f_69[func_168() /*76*/])->f_20))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_ITEM_F"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_ITEM"));
		}
	}
	else
	{
		iVar14 = iParam0;
		if (func_202(iVar14))
		{
			fVar15 = (BUILTIN::TO_FLOAT(func_203(iVar14)) / 100f);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10494, iVar14);
			Var16.f_2 = 5;
			Var16.f_18 = 8;
			if (ITEMDATABASE::_0xF8D09EF8CE61D7BF(iVar14, &Var16))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10495, Var16.f_1);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10495, 0);
			}
			if (func_23(0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10496, MISC::_CREATE_VAR_STRING(10, "SHOP_ITEM_VALUE", func_196(MISC::_0x2B6846401D68E563(fVar15, 2), joaat("COLOR_PURE_WHITE"))));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10496, "");
			}
			if (iVar14 == STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), 0))
			{
				func_71();
			}
			else
			{
				iVar51 = COLLECTION::_0x9ADEE485726025D4(iVar14);
				if (iVar51 != 0)
				{
					func_204(iVar14);
				}
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10494, func_30(Global_1939231->f_10477));
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10495, func_31(Global_1939231->f_10477));
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, "");
		}
	}
	if (!bVar0)
	{
		INVENTORY::_0x75CFAC49301E134F(Global_1939231->f_10501, 0, 0);
	}
	else
	{
		INVENTORY::_0x75CFAC49301E134F(Global_1939231->f_10501, iParam0, 0);
	}
	func_52(iParam0);
}

void func_65(int iParam0, int iParam1)
{
	if (!func_68(iParam1, 0))
	{
		return;
	}
	if ((!func_69(iParam1, 747873593) && !func_69(iParam1, joaat("CI_TAG_FOLDER_LETTERS"))) && !func_69(iParam1, joaat("CI_TAG_FOLDER_NOTES")))
	{
		return;
	}
	if (iParam1 != Global_1913146[iParam0 /*6*/])
	{
		((*Global_1913146)[iParam0 /*6*/])->f_1 = 3;
		(*Global_1913146)[iParam0 /*6*/] = iParam1;
		((*Global_1913146)[iParam0 /*6*/])->f_5 = 0;
	}
}

void func_66(int iParam0, int iParam1)
{
	Global_1939231->f_10475 = iParam0;
	if (func_20())
	{
		if (PED::_IS_PED_CARRYING(Global_34) == 0)
		{
			func_138(-1559802791);
		}
	}
	if (func_19())
	{
		func_138(-2074770370);
	}
	func_139(Global_1939231->f_10477, iParam1, 0);
}

void func_67(int iParam0, var uParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10494, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10495, func_205(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10502, iParam0);
	func_52(0);
	INVENTORY::_0x75CFAC49301E134F(Global_1939231->f_10501, 0, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10514, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10510, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10509, false);
	func_206(uParam1);
}

bool func_68(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_69(int iParam0, int iParam1)
{
	if (!func_68(iParam0, 0))
	{
		return func_208(func_207(iParam0), iParam1);
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

int func_70(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	bool bVar36;

	iVar0 = COLLECTION::_0xCC644BC1DD655269(iParam1, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_209(iVar0, -489628648, &Var1, &iVar32, 0, 1))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (&Var1[iVar33 /*2*/] == 0)
		{
		}
		else
		{
			if (&Var1[iVar33 /*2*/] == iParam0)
			{
				bVar36 = true;
			}
			iVar33++;
		}
	}
	if (!bVar36)
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (func_210(&(Var1[iVar33 /*2*/]), 1))
		{
			iVar34++;
		}
		iVar35++;
		iVar33++;
	}
	if (iVar34 >= iVar35)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar34, iVar35));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION", iVar34, iVar35));
	}
	return 1;
}

int func_71()
{
	int iVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	iVar0 = STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_209(iVar0, -489628648, &Var1, &iVar32, 0, 1))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (func_210(&(Var1[iVar33 /*2*/]), 1))
		{
			iVar34++;
		}
		iVar35++;
		iVar33++;
	}
	if (iVar34 >= iVar35)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar34, iVar35));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION", iVar34, iVar35));
	}
	return 1;
}

bool func_72(int iParam0, var uParam1)
{
	return ITEMDATABASE::_0xF8D09EF8CE61D7BF(iParam0, uParam1);
}

void func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	Global_1939231->f_10453 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1939231->f_10493);
	iVar0 = &Global_1939231->f_10454[Global_1939231->f_10453];
	if (iVar0 != Global_1939231->f_10477)
	{
		Global_1939231->f_38.f_203 = 0;
		Global_1939231->f_10475 = func_42(iVar0);
		iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939231->f_10488, iParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar1, "CurrentCategory", false);
		iVar2 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939231->f_10488, Global_1939231->f_10453);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar2, "CurrentCategory", true);
		func_139(iVar0, &iVar2, 0);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (&Global_1939231->f_10454[iVar3] == Global_1939231->f_10477)
			{
				iVar4 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939231->f_10488, Global_1939231->f_10453);
				if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar4, "CurrentCategory"))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar4, "CurrentCategory", true);
				}
			}
			else
			{
				iVar5 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939231->f_10488, Global_1939231->f_10453);
				if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar5, "CurrentCategory"))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar5, "CurrentCategory", false);
				}
			}
			iVar3++;
		}
	}
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_211(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_75(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_212(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_213(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_111(iParam0, bParam4, 0) };
	Var6 = { func_112(iParam0, Var1, Var1.f_4, bParam4) };
	return func_214(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

int func_76(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939231->f_7)
	{
		return 0;
	}
	if (((iParam0 != 1259508039 && iParam0 != joaat("KIT_CAMP")) && iParam0 != joaat("KIT_CAMP_SIMPLE")) && bParam1)
	{
		iVar0 = func_215(iParam0);
		if (func_69(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_216(1, iVar0))
		{
			return 0;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE"))
	{
		if (func_217())
		{
			return 0;
		}
	}
	if (!func_210(iParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	if (func_85(iParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(func_145(0), iParam0, func_23(0)))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("KIT_CAMP"):
		case joaat("KIT_CAMP_SIMPLE"):
			if (!Global_1956172->f_2)
			{
				func_218(1, 1);
				TELEMETRY::_0x565EAA726B2CE3B7(0);
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("KIT_HANDHELD_CATALOG"):
			if (Global_1915180->f_21989.f_5 != 0)
			{
				func_89(func_219(), 10000, 0, 0, 0, 1);
				Global_1915180->f_21989.f_5 = 0;
			}
			break;
	}
	return 1;
}

void func_78(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_79(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_80(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

int func_81(int iParam0)
{
	if (func_27() == 0 && func_221(func_220(iParam0), 1, 0) != 0)
	{
		func_89("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return 0;
	}
	return 1;
}

int func_82(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_222(iParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1912977 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}
	switch (func_6(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1245009814, 1, 0, -1082130432);
				return 1;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_223())
				{
					if (func_224(&Global_34))
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("APPLY_POMADE_WITH_HAT"), 1, 0, -1082130432);
					}
					else
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("APPLY_POMADE_WITH_NO_HAT"), 1, 0, -1082130432);
					}
					return 1;
				}
				else
				{
					func_89("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1087288635, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1912977 = MISC::GET_GAME_TIMER() + 3000;
			return 1;
		case 632545869:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -1401979141, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1912977 = MISC::GET_GAME_TIMER() + 3000;
			return 1;
		case -793205628:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 136592566, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1912977 = MISC::GET_GAME_TIMER() + 3000;
			return 1;
		case 1451036371:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_225(iParam0);
				}
				else
				{
					func_226(iParam0);
				}
				return 1;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_227(iParam0, 1);
				return 1;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_228(iParam0, 1);
				return 1;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_229(iParam0);
				return 1;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_225(iParam0);
				}
				else
				{
					func_230(iParam0);
				}
				return 1;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_225(iParam0);
				}
				else
				{
					func_231(iParam0);
				}
				return 1;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_225(iParam0);
				}
				else
				{
					func_232(iParam0);
				}
				return 1;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_225(iParam0);
				}
				else
				{
					func_233(iParam0);
				}
				return 1;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("POCKET_WATCH_INSPECT_UNHOLSTER"), 1, 0, -1082130432);
				return 1;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_234(iParam0);
				return 1;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_235(iParam0);
				return 1;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_236(iParam0);
				return 1;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_225(iParam0);
				return 1;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_237(iParam0, bParam3);
				return 1;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_238(iParam0, bParam3);
				return 1;
			}
			break;
	}
	return 0;
}

void func_83(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1938417->f_161 >= 10)
	{
		return;
	}
	if (!func_239(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_240(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1938417)[iVar0 /*16*/])->f_10)))
		{
			*((*Global_1938417)[iVar0 /*16*/]) = { Param0 };
			Global_1938417->f_161++;
			func_241(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_84()
{
	return Global_1893575 & 2 != 0;
}

int func_85(int iParam0)
{
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (func_87(iParam0) == joaat("EMOTE"))
	{
		return 1;
	}
	return 0;
}

int func_86(int iParam0)
{
	return func_242(iParam0);
}

int func_87(int iParam0)
{
	vector3 vVar0;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_88(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_87(iParam0) == joaat("CLOTHING"))
	{
		if (func_90(iParam0) == -999503751)
		{
		}
	}
	return 1;
}

int func_89(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	int iVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	iVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return iVar15;
}

int func_90(int iParam0)
{
	struct<2> Var0;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_91()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::_0xF49F14462F0AE27C(iVar0);
	iVar2 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(iVar2) || PED::IS_PED_SWIMMING(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(iVar2))
	{
		if (PED::_GET_HORSE_RIDER(iVar1, false) != iVar2)
		{
			return 0;
		}
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
	vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vVar6, true) < 2f && PED::_0xD543D3A8FDE4F185(iVar2, iVar1))
	{
		return 1;
	}
	return 0;
}

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar1 = PLAYER::_0xF49F14462F0AE27C(iParam0);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		if (PED::_GET_HORSE_RIDER(iVar1, false) == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

void func_93(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_243(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_244(Var0);
}

int func_94(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_245())
	{
		return 0;
	}
	if (!func_246(iParam0))
	{
		return 0;
	}
	if (func_247(iParam0))
	{
		iVar0 = 0;
		if (func_90(iParam0) == 81053684 || func_69(iParam0, -1348134986))
		{
			if (bParam1)
			{
				func_248(&iVar0, 2);
			}
		}
		return func_249(iParam0, iVar0);
	}
	return 0;
}

void func_95(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 10;
	iVar1 = &Global_1951141->f_1657.f_1[iVar0 /*3*/];
	if (iVar1 == iParam0)
	{
		PED::_0xCB9401F918CB0F75(Global_34, "PlayUnequipHatFidget", true, 15);
		func_96(Global_34, -2065815962 /* GXTEntry: "No Hat" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		func_97(iParam0, 0);
		return;
	}
	PED::_0xCB9401F918CB0F75(Global_34, "PlayEquipHatFidget", true, 15);
	func_96(Global_34, iParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (func_250(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_34, false, true, false, true);
		func_251();
		func_243(128);
		return;
	}
	if (iVar1 == &Global_1951141->f_81[iVar0 /*12*/])
	{
		func_97(iParam0, 1);
		return;
	}
	if (func_252(-2061583405, 0))
	{
		if (func_136(iVar1))
		{
			func_97(iVar1, 0);
		}
		else
		{
			func_253(iVar1, 1, 1, 0);
		}
		func_97(iParam0, 1);
		return;
	}
	if (func_136(iVar1))
	{
		func_97(iVar1, 0);
		func_97(iParam0, 1);
	}
	else if (func_136(iParam0))
	{
		if (iParam0 != func_254(0))
		{
			func_255(iParam0, iVar1);
			func_97(iParam0, 0);
			func_97(iVar1, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_34, false, true, false, true);
			func_243(128);
			func_97(iParam0, 1);
		}
	}
}

int func_96(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_111(iParam1, 1, 0) };
		iParam3 = func_256(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_258(iParam1, iParam2, func_257(iParam3, 1), bParam4, 1))
	{
		return 0;
	}
	func_259(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_260(iParam1, 0))
		{
			func_261(&(Global_1951141->f_1657.f_1[func_257(iParam3, 1) /*3*/]), 0);
		}
		else
		{
			func_261(iParam1, 1);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != &Global_1951141->f_81[func_257(iParam3, 1) /*12*/])
			{
				func_93(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_250(32768))
			{
				func_251();
				func_93(21, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_262(iParam3);
	if (bParam8)
	{
		func_263(&iVar5, 4);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_93(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_93(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_97(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_111(iParam0, 0, 0) };
	Var5 = { func_112(iParam0, Var0, Var0.f_4, 0) };
	if (func_264(iParam0, Var0, Var0.f_4, 0, 0, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_145(0), &Var5, bParam1);
}

int func_98(int iParam0, int iParam1)
{
	int iVar0;

	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_46(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_34) || PED::IS_PED_SWIMMING(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		if (PED::_GET_HORSE_RIDER(iVar0, false) == Global_34)
		{
			if (iParam1 == joaat("KIT_WARDROBE"))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_265(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0)
{
	int iVar0;

	iParam0 = func_158(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_46(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_266())
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_100()
{
	if (func_267())
	{
		return;
	}
	if (func_268())
	{
		TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432);
		Global_1915180->f_21989.f_1 = 1;
		Global_1051388->f_42 = 0;
		func_269();
	}
	else if (Global_1915180->f_21989.f_5 != 0)
	{
		func_89(func_219(), 10000, 0, 0, 0, 1);
		Global_1051388->f_3577 = 0;
		func_270(0);
		Global_1915180->f_21989.f_5 = 0;
	}
}

bool func_101(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_102(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_271() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return 0;
	}
	if (!func_272(16))
	{
		return 0;
	}
	if (func_273())
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
		{
			return 0;
		}
	}
	if (!func_274())
	{
		return 0;
	}
	if (func_275(16))
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0) || !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	if (iParam0 == 1 && func_211(Global_1131092->f_8, 1))
	{
		return 0;
	}
	if (func_105())
	{
		return 0;
	}
	return 1;
}

int func_103(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_276();
	}
	if (!func_277(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_278(iParam0);
	Global_1896726->f_386 = 1;
	Global_1896726->f_387 = bParam1;
	return 1;
}

bool func_104(int iParam0)
{
	return func_211(Global_1131092->f_8, iParam0);
}

int func_105()
{
	int iVar0;

	iVar0 = func_279(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (((*Global_1125276)[iVar0 /*27*/])->f_18.f_1 != 0 && func_211(((*Global_1125276)[iVar0 /*27*/])->f_18, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_106()
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_280(0) };
	if (func_281(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_282(PLAYER::PLAYER_ID(), 0);
			if (iVar2 != -1)
			{
				if (func_283(iVar2) == joaat("POSSE_VERSUS"))
				{
					func_89("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_89("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_89("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_89("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_107(int iParam0)
{
	struct<19> Var0;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_285(Var0, func_284(0, 8), 0, 0);
}

int func_108(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

void func_109(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_286(iParam0, &iVar0, &iVar1);
	if (!func_287(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_288(iVar0, iVar1);
}

void func_110(bool bParam0)
{
	if ((func_27() != -1 || !bParam0) || func_155(Global_34))
	{
		func_289();
		return;
	}
}

struct<5> func_111(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_290(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_87(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_112(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_291(bParam1) };
			if (bParam2 && func_292(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_293(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_293(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_294(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -1591664384;
			Var0 = { func_295(bParam1) };
			switch (func_90(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
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
		case joaat("DOG"):
			if (func_296(iParam0, -1823706425))
			{
				Var0 = { func_112(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_296(iParam0, -1483207246))
			{
				Var0 = { func_112(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_112(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_296(iParam0, -1653629781))
			{
				Var0 = { func_112(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
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
				Var28.f_9 = -1591664384;
				if (!func_297(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_296(iParam0, -1653629781))
			{
				Var0 = { func_112(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
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

struct<4> func_112(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_68(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_145(bParam6), &uParam1, iParam0, bParam5, &Var0);
	return Var0;
}

int func_113(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_114(0))
	{
		return func_298(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_297(Param0, &Var0, 0, 0, -1))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_145(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_114(bool bParam0)
{
	if (func_27() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_145(bParam0));
}

void func_115(bool bParam0, bool bParam1, int iParam2)
{
	Global_1939231->f_4 = bParam0;
	Global_1939231->f_34 = iParam2;
	if (bParam1 || (func_299() && iParam2 == 0))
	{
		func_14(1);
		func_300(1);
	}
}

void func_116()
{
	int iVar0;

	if (!func_216(1, 124032))
	{
		return;
	}
	iVar0 = WEAPON::_0xDA37A053C1522F5D(Global_34, false, 0, 0);
	if (func_301(iVar0))
	{
		func_303(1, iVar0, func_302());
	}
	else
	{
		func_89("HELP_CANNOT_USE_GUN_OIL", 10000, 0, 0, 0, 1);
	}
}

int func_117(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	struct<4> Var8;
	int iVar12;
	struct<16> Var13;

	iVar0 = -1;
	iVar1 = func_304(iParam0);
	iVar2 = func_305(iParam0);
	if (iVar2 != 0)
	{
		if (!func_114(0) || func_306())
		{
			if (bParam2)
			{
				func_308(func_307(joaat("BROKEN_DOWN"), joaat("SMALL_ANIMALS")), 1);
				return func_309(iVar2, iVar1, iParam0, iParam1);
			}
			Var3 = { func_111(iParam0, 1, 0) };
			Var8 = { func_112(iParam0, Var3, Var3.f_4, 1) };
			iVar12 = func_310(iParam0, &Var8, 1, -142743235, 0, 1);
			if (iVar12 != -1)
			{
				Var13.f_7 = -142743235;
				Var13 = 1;
				Var13.f_3 = 1;
				func_311(iVar12, Var13);
			}
			return 0;
		}
		if (func_128(iParam0, 1, 1, -142743235))
		{
			iVar0 = func_309(iVar2, iVar1, iParam0, iParam1);
		}
	}
	return iVar0;
}

int func_118(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == joaat("PROVISION_ROTTEN_MEAT") || iParam0 == joaat("CONSUMABLE_CORNEDBEEF_CAN"))
	{
		return 0;
	}
	if (func_69(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_69(iParam0, -839724752))
	{
		if (bParam2)
		{
			return func_69(iParam0, -1238310989);
		}
		else if (bParam1)
		{
			return !func_69(iParam0, -1238310989);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_119(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	iVar0 = func_6(iParam0, 1697966752);
	iVar1 = 0;
	if (iVar0 == 0)
	{
		return 0;
	}
	Var2 = { func_312(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar0, 0) };
	if (func_313(Var2, &iVar12, &iVar13, 0))
	{
		iVar14 = 0;
		while (iVar14 < iVar13)
		{
			iVar15 = func_314(iVar14, iVar12);
			if (func_68(iVar15, 0))
			{
				iVar1 = iVar15;
			}
			else
			{
				iVar14++;
			}
		}
		func_315(iVar12);
	}
	return iVar1;
}

int func_120(int iParam0)
{
	Global_1913166->f_1577 = iParam0;
	Global_1956172->f_2 = 1;
	func_316(268435456);
	if (func_317(8388608))
	{
		func_316(16777216);
		return 1;
	}
	else if ((func_210(joaat("KIT_CAMP_SIMPLE"), 1) && func_21(joaat("KIT_CAMP_SIMPLE"), 0, 0, 0, 1, 0, 0)) || (func_210(joaat("KIT_CAMP"), 1) && func_21(joaat("KIT_CAMP"), 0, 0, 0, 1, 0, 0)))
	{
		Global_1956172->f_4 = MISC::GET_GAME_TIMER();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
		return 1;
	}
	else
	{
		Global_1956172->f_2 = 0;
		func_318(268435456);
	}
	return 0;
}

int func_121(int iParam0)
{
	return PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
}

int func_122(int iParam0)
{
	return iParam0;
}

int func_123(int iParam0, int iParam1)
{
	if (func_27() == -1)
	{
		if (func_319(iParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	if (func_27() == 0)
	{
		if (func_319(iParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_124(int iParam0)
{
	if (func_69(iParam0, 566155764))
	{
		return 0;
	}
	if (func_69(iParam0, 2028734248))
	{
		return 1;
	}
	return 0;
}

bool func_125()
{
	return Global_17172.f_2954.f_21;
}

int func_126(int iParam0)
{
	if (Global_17172.f_2954.f_17 == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_127()
{
	func_320(&(Global_17172.f_2954), 3);
}

int func_128(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_321(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_322(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_323(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_210(iParam0, 1))
	{
		return 0;
	}
	Var5 = { func_324(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_188(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_188(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_128(iParam0, func_188(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_87(iParam0) == joaat("WEAPON"))
	{
		if (!func_325(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_75(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_111(iParam0, 0, 0) };
		if (func_114(0) && Var7.f_4 == 1084182731)
		{
			func_115(1, 0, 0);
		}
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1939067->f_21 = 0;
	}
	if (!func_114(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_323(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

int func_129(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iParam1 = func_326(iParam0, iParam1, 1, 1, -142743235, 0, 1);
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_327(iParam0, iParam1, bParam2, iParam3);
}

int func_130(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	if (bParam3)
	{
		if (!func_177())
		{
			return 0;
		}
	}
	if (!func_328(iParam0, iParam1, iParam4, iParam2, 1))
	{
		return 0;
	}
	func_329();
	return 1;
}

int func_131(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_188(iParam1, bParam2, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = (iVar0 + func_330(INVENTORY::_0x13D234A2A3F66E63(iParam0), iParam1));
	}
	if (bParam3)
	{
		iVar0 = (iVar0 + func_331(iParam1, bParam4));
	}
	return iVar0;
}

int func_132(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = DATAFILE::_0xD97D8D905F1562F2(iParam0);
	while ((!DATAFILE::_0x603AC35FD4602C76(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		if (Global_1572887->f_13 != -1)
		{
			bVar1 = func_144(bParam4, bParam5);
		}
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (Global_1572887->f_13 != -1)
	{
		bVar1 = func_144(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_332();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_133()
{
	if (func_27() == -1)
	{
		if (!func_333(18, &(Global_1939231->f_10515)))
		{
			return;
		}
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1939231->f_10515, 0, "satchel_elements/name(id=%x):texture0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1939231->f_10515, 1, "satchel_elements/name(id=%x):texturedictionary0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1939231->f_10515, 2, "satchel_elements/name(id=%x):name0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1939231->f_10515, 3, "satchel_elements/name(id=%x):description0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1939231->f_10515, 4, "satchel_elements/name(id=%x):category0");
}

int func_134()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (&Global_1939231->f_10454[iVar0] == Global_1939231->f_10477)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_135(var uParam0)
{
	Global_1939231->f_10452 = 0;
	if (!Global_1939231->f_8)
	{
		func_138(0);
		func_334();
	}
	else if (((((Global_1939231->f_10477 != -2074770370 && Global_1939231->f_10477 != -283002878) && Global_1939231->f_10477 != -889932290) && Global_1939231->f_10477 != 822208792) && Global_1939231->f_10477 != -182626652) && Global_1939231->f_10477 != -693134279)
	{
		func_35(Global_1939231->f_10477);
	}
	else
	{
		func_138(0);
		func_334();
	}
	func_335(uParam0, 0, "All", joaat("SATCHEL_NAV_ALL"));
	func_335(uParam0, -1666604090, "Provisions", joaat("SATCHEL_NAV_PROVISIONS"));
	func_335(uParam0, -96974025, "Remedies", joaat("SATCHEL_NAV_REMEDIES"));
	func_335(uParam0, -1268291907, "Ingredients", joaat("SATCHEL_NAV_INGREDIENTS"));
	func_335(uParam0, -1559802791, "Materials", joaat("SATCHEL_NAV_MATERIALS"));
	func_335(uParam0, -156634416, "Kit", joaat("SATCHEL_NAV_KIT"));
	func_335(uParam0, 1561961676, "Valuables", joaat("SATCHEL_NAV_VALUABLES"));
	func_335(uParam0, 1061777683, "Documents", joaat("SATCHEL_NAV_DOCUMENTS"));
	if (func_210(joaat("KIT_COLLECTORS_BAG"), 1))
	{
		func_335(uParam0, 1783698482, "Collections", -1401643540);
	}
	func_336(uParam0);
	func_337(uParam0);
	func_338(uParam0);
	if (func_23(0))
	{
		if (func_168() == 2)
		{
			func_138(-693134279);
		}
		else
		{
			func_138(-182626652);
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939231->f_10491, Global_1939231->f_10452);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939231->f_10493, func_134());
}

bool func_136(int iParam0)
{
	var uVar0;

	return func_339(iParam0, &uVar0);
}

int func_137(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1939231->f_10467;
	if (iVar0 >= 3)
	{
		return -1;
	}
	if (!func_163(sParam3, &((Global_1939231->f_10468[iVar0 /*2*/])->f_1), Global_1939231->f_10468[iVar0 /*2*/], iParam4, 0))
	{
		return -1;
	}
	Global_1939231->f_10467++;
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam0, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar1, "label", iParam2);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(iParam0, -1, -1287062382, iVar1);
	return iVar0;
}

void func_138(int iParam0)
{
	if (Global_1939231->f_10477 != iParam0)
	{
		Global_1939231->f_10477 = iParam0;
		Global_1939231->f_10486 = 1;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939231->f_10493, func_134());
	func_340((Global_1939231->f_10477 != -283002878 && Global_1939231->f_10477 != -889932290));
}

void func_139(int iParam0, int iParam1, bool bParam2)
{
	func_138(iParam0);
	if (!bParam2)
	{
		func_10(iParam0);
	}
}

int func_140()
{
	int iVar0;
	int iVar1;

	if (Global_1939231->f_37 == 0)
	{
		Global_1939231->f_10453 = 0;
	}
	else
	{
		iVar0 = Global_1939231->f_10453;
		iVar1 = (Global_1939231->f_10452 - 1);
		switch (Global_1939231->f_37)
		{
			case -2074770370:
			case -693134279:
			case -182626652:
				Global_1939231->f_10453 = iVar1;
				break;
		}
		if (Global_1939231->f_37 == -283002878)
		{
			if (func_23(0))
			{
				Global_1939231->f_10453 = (iVar1 - 1);
			}
			else
			{
				Global_1939231->f_10453 = iVar1;
			}
		}
		func_73(iVar0);
		return 1;
	}
	return 0;
}

bool func_141()
{
	return (Global_1915180->f_20135 || Global_1915180->f_21989.f_1);
}

void func_142()
{
	if (Global_1572887->f_13 == -1)
	{
		return;
	}
	Global_1070356->f_2 = 0;
}

void func_143(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);
	while (Global_1939231->f_10467 > 0)
	{
		Global_1939231->f_10467 = (Global_1939231->f_10467 - 1);
		func_162((Global_1939231->f_10468[Global_1939231->f_10467 /*2*/])->f_1);
	}
}

int func_144(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887->f_12)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_145(bool bParam0)
{
	if (func_27() == -1)
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

void func_146(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<14> Var17;

	if (func_341(Global_34))
	{
		bParam2 = true;
	}
	iVar0 = -1;
	iVar2 = 0;
	Var3.f_9 = -1591664384;
	Var17 = { func_342(0, 1084182731, -1591664384, -1591664384, 0, 0, 0) };
	if (func_343(&Var17, &iVar0, &iVar1, bParam3))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_148(&Var3, iVar2, iVar0, iVar1))
			{
				if (!func_344(Var3))
				{
				}
				else if (bParam1)
				{
					func_345(iParam0, Var3.f_4, 1);
				}
				else if (bParam2)
				{
					func_345(iParam0, Var3.f_4, 0);
				}
				else if (Var3.f_4 != 1259508039)
				{
					func_345(iParam0, Var3.f_4, func_346(Var3.f_4));
				}
			}
			iVar2++;
		}
		func_162(iVar0);
	}
}

void func_147(int iParam0)
{
	func_345(iParam0, joaat("WEAPON_KIT_BINOCULARS"), func_347(32));
	func_345(iParam0, joaat("WEAPON_KIT_BINOCULARS_IMPROVED"), func_347(32));
	func_345(iParam0, joaat("WEAPON_KIT_CAMERA"), func_347(64));
	func_345(iParam0, joaat("KIT_HORSE_BRUSH"), func_347(1024));
	func_345(iParam0, joaat("WEAPON_KIT_METAL_DETECTOR"), func_347(32768));
	func_348(iParam0, func_347(8192));
	func_349(iParam0, func_347(128));
	func_350(iParam0, func_347(4));
	func_351(iParam0, func_347(8));
	func_352(iParam0, func_347(1));
}

int func_148(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, iParam0))
	{
		return 0;
	}
	return 1;
}

int func_149(int iParam0)
{
	switch (iParam0)
	{
		case -1649851713:
		case -997505963:
		case 1005272:
		case 348853959:
		case 359221401:
		case 1045621973:
		case 1463321587:
		case 1583044470:
		case 1651573695:
			return 1;
	}
	return 0;
}

bool func_150(int iParam0, int iParam1)
{
	return iParam1 == func_6(iParam0, 1224357681);
}

int func_151(int iParam0)
{
	int iVar0;

	if (Global_1939231->f_14.f_16 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1939231->f_14.f_16)
		{
			if (&Global_1939231->f_14[iVar0 /*3*/] != iParam0)
			{
			}
			else if ((Global_1939231->f_14[iVar0 /*3*/])->f_1 & 1 != 0)
			{
				return 0;
			}
			iVar0++;
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY"):
			return 0;
		case joaat("DOCUMENT_PAMPHLET_INGREDIENTS_SATCHEL"):
			if (func_264(-1898006219 /* GXTEntry: "Ingredients Satchel Pamphlet" */, func_290(1), 1084182731, 0, 0, 0) > 0)
			{
				return 0;
			}
			break;
		case joaat("DOCUMENT_PAMPHLET_MATERIALS_SATCHEL"):
			if (func_264(-1898852053 /* GXTEntry: "Materials Satchel Pamphlet" */, func_290(1), 1084182731, 0, 0, 0) > 0)
			{
				return 0;
			}
			break;
	}
	if (func_23(0) && Global_1915180->f_19742 == 2)
	{
		if (!func_353(iParam0))
		{
			return 0;
		}
	}
	if (func_69(iParam0, -805003139))
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
		{
			return 0;
		}
	}
	if (func_87(iParam0) == joaat("UPGRADE"))
	{
		if (!func_69(iParam0, -1540973036) && !func_69(iParam0, 1192444843))
		{
			return 0;
		}
		else if (iParam0 == 1872063208 || iParam0 == 1309979101)
		{
			return 0;
		}
	}
	if (Global_1915180->f_19742 == 29)
	{
		if (func_198(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_152(struct<12> Param0, var uParam12, var uParam13)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;

	if (func_68(Param0.f_4, 0))
	{
		sVar0 = func_190(Param0.f_4);
		iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939231->f_10490, Global_1939231->f_10484);
		iVar2 = iVar1;
		sVar3 = func_354(Param0.f_4);
		if (func_69(Param0.f_4, 1397200408))
		{
			Param0.f_10 = 1;
		}
		if (func_212(Param0.f_4, joaat("DEFAULT")) != 0)
		{
			iVar4 = func_264(Param0.f_4, Param0.f_5, Param0.f_9, 0, 0, 0);
			if (Param0.f_9 != 1084182731 && iVar4 > Param0.f_11)
			{
				return;
			}
			Param0.f_11 = iVar4;
		}
		iVar5 = joaat("COLOR_PURE_WHITE");
		if (func_355(Param0.f_4))
		{
			if (func_69(Param0.f_4, 1816585950))
			{
				iVar5 = joaat("COLOR_YELLOW");
			}
		}
		DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, iVar2, sVar0, Param0.f_11, Param0.f_10, sVar3, iVar5);
		Global_1939231->f_10484++;
	}
}

bool func_153(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 176);
}

int func_154(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;

	iVar0 = func_356(iParam0);
	if (!func_201(iVar0))
	{
		return 0;
	}
	vVar1 = { (Global_1051388->f_69[iVar0 /*76*/])->f_3 };
	if (iParam0 == 150)
	{
		vVar1 = { func_357(PLAYER::GET_PLAYER_INDEX()) };
	}
	if (func_358(vVar1))
	{
		return 0;
	}
	if (iVar0 == 10)
	{
		fVar4 = 10f;
		fVar5 = func_359(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return 1;
		}
	}
	else if (iVar0 == 29)
	{
		fVar6 = 70f;
		fVar7 = func_359(iParam1, vVar1, 0);
		if (fVar7 < fVar6)
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_359(iParam1, vVar1, 0) < 75f)
		{
			return 1;
		}
	}
	return 0;
}

bool func_155(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_156(int iParam0)
{
	if (iParam0 == Global_1939231->f_37)
	{
		return 1;
	}
	return 0;
}

float func_157(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_360(Global_34, iParam0, bParam1, bParam2);
}

int func_158(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_277;
	}
	return iParam0;
}

int func_159(int iParam0)
{
	iParam0 = func_158(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1903007[iParam0 /*43*/]))
	{
		return 1;
	}
	return 0;
}

float func_160(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;

	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_361(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_362(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_362(iParam0) + 1;
	fVar6 = func_363(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(func_364(iVar0, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(func_364(iVar0, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_365(fVar3, fVar4, fVar11);
	return uVar12;
}

int func_162(int iParam0)
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

int func_163(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_145(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0, int iParam1)
{
	int iVar0;

	if (func_149(iParam0->f_9))
	{
		return 0;
	}
	if (!func_344(*iParam0))
	{
		return 0;
	}
	if (!func_366(iParam0->f_4, iParam1, 0))
	{
		return 0;
	}
	if (!func_151(iParam0->f_4))
	{
		return 0;
	}
	if (func_23(0))
	{
		if (!func_68(iParam0->f_4, 0))
		{
			return 0;
		}
		if (func_306())
		{
			iVar0 = func_367(iParam0->f_4, 1, 0, 0);
			if (iVar0 < func_264(iParam0->f_4, iParam0->f_5, iParam0->f_9, 0, 0, 0))
			{
				iParam0->f_11 = iVar0;
			}
		}
		if (iParam0->f_11 <= 0)
		{
			return 0;
		}
	}
	if (Global_1939231->f_10478 == 0 && !func_51())
	{
		func_52(iParam0->f_4);
	}
	else
	{
		func_300(0);
	}
	return 1;
}

void func_165(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = func_6(iParam0, 1224357681);
	bVar1 = func_354(iParam0);
	if (func_368(iVar0))
	{
		if (Global_1939231->f_38.f_1 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1939231->f_38.f_1)
			{
				if (iVar0 == &Global_1939231->f_38.f_2[iVar2 /*2*/])
				{
					func_369(iVar2, 1);
					return;
				}
				iVar2++;
			}
			func_370(iVar0, bVar1);
		}
		else
		{
			func_370(iVar0, bVar1);
		}
	}
}

int func_166()
{
	if (Global_1939231->f_10477 == -182626652)
	{
		switch (func_168())
		{
			case 10:
			case 15:
			case 16:
			case 29:
				return 1;
		}
	}
	else if (Global_1939231->f_10477 == -2074770370)
	{
		return func_20();
	}
	else if (Global_1939231->f_10477 == -693134279)
	{
		return 1;
	}
	return 0;
}

int func_167(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_IS_ENTITY_A_BIRD(iParam0))
	{
		iVar0 = func_371(&iParam0);
		if (!func_68(iVar0, 0))
		{
			iVar0 = func_372(iParam0);
		}
	}
	else
	{
		iVar0 = func_372(iParam0);
	}
	return iVar0;
}

int func_168()
{
	return Global_1915180->f_19742;
}

int func_169(bool bParam0)
{
	int iVar0;
	var uVar1;

	if (Global_1901929->f_638.f_31)
	{
		return 0;
	}
	if (func_27() == 0)
	{
		iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
	}
	else
	{
		iVar0 = func_121(0);
	}
	func_373(&iVar0, &uVar1, bParam0);
	return uVar1;
}

int func_170(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = func_46(0);
	iVar2 = func_46(1);
	func_373(&iVar1, &iVar0, bParam0);
	func_373(&iVar2, &iVar0, bParam0);
	return iVar0;
}

int func_171(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<14> Var5;

	if (Global_1901929->f_638.f_32)
	{
		return 0;
	}
	if (func_27() == 0)
	{
		iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::GET_PLAYER_INDEX());
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
		if (func_163("ALL SATCHEL", &iVar2, &iVar3, -2015960939, 1))
		{
			if (iVar3 < 1)
			{
			}
			else
			{
				Var5.f_9 = -1591664384;
				iVar4 = 0;
				while (iVar4 < iVar3)
				{
					if (!func_148(&Var5, iVar4, iVar2, iVar3))
					{
					}
					else if (!func_68(Var5.f_4, 0))
					{
					}
					else if (Var5.f_4 == 1259508039)
					{
					}
					else
					{
						iVar1++;
						if (bParam0)
						{
							if (!func_151(Var5.f_4))
							{
							}
							else
							{
								func_176(Var5, 1);
							}
						}
					}
					iVar4++;
				}
			}
			func_162(iVar2);
		}
		return iVar1;
	}
	return 0;
}

int func_172(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 < STATS::WEEKLY_COLLECTIBLE_GET_NUM_ITEMS_IN_SET(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), iParam0))
	{
		if (STATS::WEEKLY_COLLECTIBLE_GET_ITEM_IN_SET(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), iParam0, iVar0, &iVar1, &iVar2))
		{
			if (func_68(iVar1, 0))
			{
				iVar3 = func_188(iVar1, 0, 0, 0);
				if (iVar3 < iVar2)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_173(int iParam0)
{
	struct<12> Var0;
	int iVar14;
	var uVar15;

	if (!func_202(iParam0))
	{
		return;
	}
	Var0.f_9 = -1591664384;
	Var0.f_11 = func_374(iParam0);
	iVar14 = iParam0;
	func_375(iParam0, &uVar15, 0, 0, 0, 0);
	if (!func_23(0))
	{
		func_376(joaat("FOLDER_ITEM"), iVar14, &uVar15, 1, Var0.f_11, 0, 0, joaat("COLOR_PURE_WHITE"));
	}
	else
	{
		func_376(joaat("INVENTORY_ITEM"), iVar14, &uVar15, 1, Var0.f_11, 0, 0, joaat("COLOR_PURE_WHITE"));
	}
	Global_1939231->f_38.f_203++;
}

int func_174(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!func_210(joaat("KIT_COLLECTORS_BAG"), 1))
	{
		return 0;
	}
	iVar0 = COLLECTION::_0xCC644BC1DD655269(iParam0, 0);
	if (!func_202(iVar0))
	{
		return 0;
	}
	if (func_377(iVar0, -489628648, &uVar1))
	{
		return 1;
	}
	return 0;
}

void func_175(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0[16];
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;

	if (iParam3 == 0)
	{
		if (*uParam1 > 0)
		{
			iVar17 = (*uParam1 - 1);
			while (iVar17 >= 0)
			{
				if (!func_148(iParam2, iVar17, uParam1->f_1, *uParam1))
				{
				}
				else if (!func_68(iParam2->f_4, 0))
				{
				}
				else if (!func_164(iParam2, iParam3))
				{
				}
				else
				{
					iVar19 = iParam2->f_4;
					bVar20 = false;
					iVar21 = 0;
					iVar18 = 0;
					while (iVar18 < 16)
					{
						if (func_68(&(iVar0[iVar18]), 0))
						{
							iVar21++;
						}
						if (iVar19 == &iVar0[iVar18])
						{
							bVar20 = true;
						}
						iVar18++;
					}
					if (!bVar20)
					{
						if (iVar21 < 16)
						{
							iVar0[iVar21] = iVar19;
							iVar22 = 0;
							iVar22 = 15;
							while (iVar22 >= 1)
							{
								if (!func_68(&(iVar0[iVar22]), 0))
								{
								}
								else if (func_378(&(iVar0[iVar22])) > func_378(&(iVar0[(iVar22 - 1)])))
								{
									iVar23 = &iVar0[iVar22];
									iVar0[iVar22] = &iVar0[(iVar22 - 1)];
									iVar0[(iVar22 - 1)] = iVar23;
									func_379(&iVar0);
								}
								iVar22 = (iVar22 + -1);
							}
						}
						else if (func_378(iVar19) < func_378(&(iVar0[15])))
						{
						}
						else
						{
							iVar24 = 0;
							while (iVar24 < 16)
							{
								if (func_378(iVar19) > func_378(&(iVar0[iVar24])))
								{
									iVar25 = 14;
									while (iVar25 >= iVar24)
									{
										iVar0[iVar25 + 1] = &iVar0[iVar25];
										iVar25 = (iVar25 + -1);
									}
									iVar0[iVar24] = iVar19;
								}
								else
								{
									iVar24++;
								}
							}
							func_379(&iVar0);
						}
					}
				}
				iVar17 = (iVar17 + -1);
			}
			func_379(&iVar0);
			func_380(&iVar0);
		}
	}
}

void func_176(struct<12> Param0, var uParam12, var uParam13, bool bParam14)
{
	bool bVar0;
	char* sVar1;
	bool bVar2;
	vector3 vVar3;
	char* sVar6;
	int iVar7;

	if (func_68(Param0.f_4, 0))
	{
		bVar0 = func_354(Param0.f_4);
		if (func_32() || (func_381() && !bVar0))
		{
			return;
		}
		sVar1 = func_190(Param0.f_4);
		bVar2 = ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(Param0.f_4);
		vVar3 = { func_382(Param0.f_4) };
		sVar6 = func_383(Param0.f_4);
		if (!bParam14 && func_212(Param0.f_4, joaat("DEFAULT")) != 0)
		{
			Param0.f_11 = func_264(Param0.f_4, Param0.f_5, Param0.f_9, 0, 0, 0);
		}
		func_384(&Param0);
		iVar7 = joaat("COLOR_PURE_WHITE");
		if (func_355(Param0.f_4))
		{
			if (func_69(Param0.f_4, 1816585950))
			{
				iVar7 = joaat("COLOR_YELLOW");
			}
		}
		func_376(joaat("INVENTORY_ITEM"), sVar1, &vVar3, bVar0, Param0.f_11, bVar2, sVar6, iVar7);
		Global_1939231->f_38.f_203++;
	}
}

int func_177()
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_385(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_178(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;

	iVar0 = func_356(iParam0);
	vVar1 = { (Global_1051388->f_69[iVar0 /*76*/])->f_3 };
	if (iVar0 == 29)
	{
		vVar1 = { func_357(PLAYER::GET_PLAYER_INDEX()) };
	}
	if (func_358(vVar1))
	{
		return 0;
	}
	if (iVar0 == 10)
	{
		fVar4 = 10f;
		fVar5 = func_359(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return 1;
		}
	}
	else if (iVar0 == 29)
	{
		fVar6 = 70f;
		fVar7 = func_359(iParam1, vVar1, 0);
		if (fVar7 < fVar6)
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_359(iParam1, vVar1, 0) < 75f)
		{
			return 1;
		}
	}
	return 0;
}

void func_180()
{
	if (func_168() != 2)
	{
		if (func_210(joaat("WEAPON_KIT_BINOCULARS"), 1))
		{
			func_181(joaat("WEAPON_KIT_BINOCULARS"), 0, 0);
		}
		if (func_210(joaat("WEAPON_KIT_BINOCULARS_IMPROVED"), 1))
		{
			func_181(joaat("WEAPON_KIT_BINOCULARS_IMPROVED"), 0, 0);
		}
		if (func_210(joaat("WEAPON_KIT_CAMERA"), 1))
		{
			func_181(joaat("WEAPON_KIT_CAMERA"), 0, 0);
		}
		func_386();
		if (func_210(joaat("KIT_CAMP"), 1))
		{
			func_181(joaat("KIT_CAMP"), 0, 0);
		}
		else if (func_210(joaat("KIT_CAMP_SIMPLE"), 1))
		{
			func_181(joaat("KIT_CAMP_SIMPLE"), 0, 0);
		}
		func_387();
	}
}

void func_181(int iParam0, bool bParam1, int iParam2)
{
	struct<14> Var0;

	Var0.f_9 = -1591664384;
	Var0.f_4 = iParam0;
	Var0.f_11 = 1;
	if (!bParam1)
	{
		func_176(Var0, iParam2);
	}
	else
	{
		func_152(Var0);
	}
}

int func_182(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HERB_GINSENG"):
			return 2;
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
			return 4;
		case joaat("CONSUMABLE_HERB_BLACK_BERRY"):
			return 5;
		case joaat("CONSUMABLE_HERB_CURRANT"):
			return 6;
		case joaat("CONSUMABLE_HERB_BURDOCK_ROOT"):
			return 7;
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
			return 8;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
			return 11;
		case joaat("CONSUMABLE_HERB_CREEPING_THYME"):
			return 12;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
			return 15;
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
			return 16;
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
			return 20;
		case joaat("CONSUMABLE_HERB_MILKWEED"):
			return 23;
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
			return 26;
		case joaat("CONSUMABLE_HERB_OREGANO"):
			return 27;
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
			return 28;
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			return 29;
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
			return 31;
		case joaat("CONSUMABLE_HERB_RED_RASPBERRY"):
			return 33;
		case joaat("CONSUMABLE_HERB_SAGE"):
			return 34;
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return 37;
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
			return 38;
		case joaat("CONSUMABLE_HERB_WILD_CARROTS"):
			return 48;
		case joaat("CONSUMABLE_HERB_WILD_FEVERFEW"):
			return 49;
		case joaat("CONSUMABLE_HERB_WILD_MINT"):
			return 50;
		case joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
			return 51;
		case joaat("CONSUMABLE_HERB_YARROW"):
			return 52;
		case joaat("PROVISION_WLDFLWR_AGARITA"):
			return 39;
		case joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET"):
			return 40;
		case joaat("PROVISION_WLDFLWR_BITTERWEED"):
			return 41;
		case joaat("PROVISION_WLDFLWR_BLOOD_FLOWER"):
			return 42;
		case joaat("PROVISION_WLDFLWR_CARDINAL_FLOWER"):
			return 43;
		case joaat("PROVISION_WLDFLWR_CHOCOLATE_DAISY"):
			return 44;
		case joaat("PROVISION_WLDFLWR_CREEK_PLUM"):
			return 45;
		case joaat("PROVISION_WLDFLWR_WILD_RHUBARB"):
			return 46;
		case joaat("PROVISION_WLDFLWR_WISTERIA"):
			return 47;
	}
	return 0;
}

int func_183(int iParam0)
{
	if (!func_388(iParam0))
	{
		return 0;
	}
	return func_389(iParam0, 4, 1);
}

void func_184(int iParam0, var uParam1)
{
	if (func_32())
	{
		func_390(1);
		if (func_19())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_391(), 75706034);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_391(), -31549930);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10508, true);
	}
	else if (func_23(0) || func_32())
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939231->f_10505))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10504, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "focusable"));
		}
	}
	else
	{
		func_392(iParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_391(), func_393(iParam0));
		func_394(iParam0, uParam1);
	}
}

int func_185(int iParam0)
{
	if (func_186())
	{
		return 0;
	}
	if (Global_1939231->f_10480 == iParam0)
	{
		return 0;
	}
	if (!func_23(0) && !func_32())
	{
		if ((((func_189(iParam0, 0) == 1 || func_69(iParam0, 173360570)) || func_69(iParam0, 1291597743)) || func_69(iParam0, -928967997)) || func_69(iParam0, 747873593))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_186()
{
	return Global_1939231->f_11;
}

int func_187(int iParam0, bool bParam1)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	if (func_395(0, 0, 1))
	{
		return 1;
	}
	if (iParam0 == -171130052)
	{
		if (!func_210(joaat("KIT_COLLECTOR_SPADE"), 1))
		{
			return 3;
		}
	}
	else if ((iParam0 == 1133082501 || iParam0 == -944411166) || iParam0 == 1850181232)
	{
		if (!func_210(joaat("WEAPON_KIT_METAL_DETECTOR"), 1))
		{
			return 4;
		}
	}
	if (bParam1)
	{
		if (Global_17172.f_2954 > 0)
		{
			return 2;
		}
	}
	return 0;
}

int func_188(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_87(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_322(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_396(iParam0, 0);
	}
	if (func_212(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_145(bParam2), iParam0, bParam3);
	}
	else
	{
		Var3 = { func_397(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_145(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_189(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_111(iParam0, 0, 0) };
	return func_398(iParam0, &Var0, 0, bParam1);
}

int func_190(int iParam0)
{
	int iVar0;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_399(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

int func_191(int iParam0)
{
	int iVar0;

	iVar0 = func_182(iParam0);
	if ((iVar0 != 0 && !func_400(func_182(iParam0))) && !func_401(func_182(iParam0)))
	{
		if (!func_183(iVar0))
		{
			return -1994084079 /* GXTEntry: "The properties of this herb are not known yet." */;
		}
	}
	return func_402(iParam0);
}

int func_192(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	if (func_27() == 0)
	{
		iVar0 = func_403(iParam0, 816454899, 1, 0);
	}
	else
	{
		fVar1 = 1f;
		fVar2 = 1f;
		iVar3 = Global_1915180->f_19742.f_1;
		iVar4 = Global_1915180->f_19742;
		if (func_153(iVar3) && func_201(iVar4))
		{
			if (iVar4 == 10 || iVar4 == 15)
			{
				fVar2 = func_404(iVar3, iParam0);
			}
			fVar1 = func_405(&((Global_1915180->f_3[iVar4 /*447*/])->f_36), iParam0);
		}
		fVar5 = (fVar1 + fVar2);
		if (fVar1 <= 0f)
		{
			return 0;
		}
		fVar5 = (fVar5 - IntToFloat(BUILTIN::FLOOR(fVar5)));
		iVar6 = func_403(iParam0, 816454899, 1, 0);
		iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar6) + (BUILTIN::TO_FLOAT(iVar6) * fVar5)));
	}
	if (iVar0 <= 0)
	{
		return 0;
	}
	return iVar0;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_FAT"):
			return -2059491326;
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return -2054061821;
		case joaat("PROVISION_BUCK_ANTLERS"):
			return -2054061821;
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return -276530555;
		case joaat("PROVISION_ELK_ANTLERS"):
			return -276530555;
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return 1786362058;
		case joaat("PROVISION_MOOSE_ANTLER"):
			return 1786362058;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return -1925097470;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return -1925097470;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return -1925097470;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
			return -179784009;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return -179784009;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return -179784009;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return 547453549;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return 547453549;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return 547453549;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return -185670568;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return -185670568;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return -185670568;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return -68530554;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
			return -68530554;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
			return -68530554;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return -1882667332;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return -1882667332;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return -1882667332;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return 251523924;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return 251523924;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return 251523924;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return 128689452;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return 128689452;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return 128689452;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return -795926005;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return -795926005;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -795926005;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return 1766735806;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return 1766735806;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
			return 1766735806;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return -1260301848;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
			return -1260301848;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
			return -1260301848;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return 362062697;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return 362062697;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return 362062697;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return -557557374;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
			return -557557374;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return -557557374;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return 2145928766;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return 2145928766;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return 2145928766;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return 2103138183;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return 2103138183;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return 2103138183;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return 1176634776;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return 1176634776;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return 1176634776;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return -48308129;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return -48308129;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
			return -48308129;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return -234392368;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -234392368;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return -234392368;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return 489332694;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
			return 489332694;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return 489332694;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return -972505668;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return -972505668;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return -972505668;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return -1482721140;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return -1482721140;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return -1482721140;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return 1943206759;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return 1943206759;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return 1943206759;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return -479944273;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return -479944273;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return -479944273;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			return -1900245017;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
			return 996737485;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			return -317318063;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			return -1179145184;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
			return 49841414;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
			return 1853004765;
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			return -613244561;
		case joaat("PROVISION_FISH_MUSKIE"):
			return 998459086;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
			return -1185304294;
		case joaat("PROVISION_FISH_PERCH"):
			return 1606770041;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			return 592705199;
		case joaat("PROVISION_FISH_ROCK_BASS"):
			return 1001427351;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			return -2134757665;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			return 1296165525;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return -1389099466;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return -1389099466;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return -1389099466;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return 2032362047;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return 2032362047;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return 2032362047;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return -600158588;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return -600158588;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return -600158588;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return -348997013;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return -348997013;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return -348997013;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return -855155400;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return -855155400;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return -855155400;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return 1743453709;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return 1743453709;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return 1743453709;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return -1910050550;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return -1910050550;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return -1910050550;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return -1634769991;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return -1634769991;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return -1634769991;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return 556997951;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return 556997951;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return 556997951;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return 727714355;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return 727714355;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return 727714355;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return -71380070;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
			return -71380070;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return -71380070;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return -729503995;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return -729503995;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return -729503995;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return 1786644138;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return 1786644138;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return 1786644138;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return -1466769106;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return -1466769106;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return -1466769106;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return -2079514583;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return -2079514583;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return -2079514583;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return -409309194;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return -409309194;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -409309194;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return 2020893799;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return 2020893799;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return 2020893799;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return 195131818;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return 195131818;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
			return 195131818;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1445465787;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return 1445465787;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return 1445465787;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return -1817406451;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return -1817406451;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return -1817406451;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return 1521192478;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return 1521192478;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return 1521192478;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
			return -1517999735;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return -1517999735;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return -1517999735;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return -2084641708;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return -2084641708;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return -2084641708;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return -1125378664;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return -1125378664;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return -1125378664;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return 708951363;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return 708951363;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
			return 708951363;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return 714611525;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return 714611525;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 714611525;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 1699761828;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return 1699761828;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return 1699761828;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return -158140634;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
			return -158140634;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return -158140634;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return 1272884971;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return 1272884971;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return 1272884971;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return -1552076723;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return -1552076723;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return -1552076723;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return -334414989;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return -334414989;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return -334414989;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return -352732121;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return -352732121;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return -352732121;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 117556329;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return 117556329;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return 117556329;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return 469453151;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 469453151;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return 469453151;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return 621465116;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return 621465116;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return 621465116;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return -523607607;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return -523607607;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return -523607607;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return 1662628197;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return 1662628197;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return 1662628197;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return 2084847747;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return 2084847747;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return 2084847747;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return 1656226638;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return 1656226638;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
			return 1656226638;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return -1608525320;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return -1608525320;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
			return -1608525320;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return 1717540687;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
			return 1717540687;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			return 1717540687;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return 1622797153;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return 1622797153;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
			return 1622797153;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return -252750557;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return -252750557;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return -252750557;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return 513869240;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return 513869240;
			return 513869240;
			return -482152318;
			return -482152318;
			return -482152318;
			return -329015022;
			return -329015022;
			return -329015022;
			return 340488205;
			return 340488205;
			return 340488205;
			return 1228602887;
			return -1749311280;
			return -770230168;
			return -1761903019;
			return -202898890;
			return -324172879;
			return 221026557;
			return 2055874470;
			return 1383597214;
			return -695920779;
			return 1864240538;
			return 135251025;
			return -1380974753;
			return 1918940015;
			return 1606360364;
			return 949154977;
			return 1327585677;
			return -424223638;
			return -817814915;
			return 1324361660;
			return -1740875511;
			return -1114206422;
			return 1129016218;
			return 74265533;
			return -1687205102;
			return -2112352640;
			return -1179922595;
			return -1777044066;
			return -427774472;
			return -862133853;
			return -153093028;
			return 1961151934;
			return -1429428300;
			return 641025903;
			return 1014343203;
			return -977684174;
			return 753992067;
			return 975102591;
			return -742266708;
			return 1002050200;
			return 970250315;
			return 913562114;
			return 1415886451;
			return 1244458697;
			return 322165109;
			return -2083991045;
			return 709722347;
			return 709722347;
			return 709722347;
			return 144513283;
			return 144513283;
			return 144513283;
			return -78603574;
			return -78603574;
			return -78603574;
			return 956393401;
			return 956393401;
			return 956393401;
			return -1604538436;
			return -1604538436;
			return -1604538436;
			return -1583116953;
			return -1583116953;
			return -1583116953;
			return 1995645004;
			return 1995645004;
			return 1995645004;
			return 439094686;
			return 439094686;
			return 439094686;
			return 1069834732;
			return 1069834732;
			return 1069834732;
			return -1508151163;
			return -1508151163;
			return -1508151163;
			return 854098596;
			return 854098596;
			return 854098596;
			return 1467162138;
			return 1467162138;
			return 1467162138;
			return 1322026128;
			return 1322026128;
			return 1322026128;
			return 711086189;
			return 711086189;
			return 711086189;
			return -1334624683;
			return -1334624683;
			return -1334624683;
			return 2118150058;
			return 2118150058;
			return 2118150058;
			return 1889550255;
			return 1889550255;
			return 1889550255;
			return 1684561350;
			return 1684561350;
			return 1684561350;
			return 1763709491;
			return 1763709491;
			return 1763709491;
			return 1828340319;
			return 1828340319;
			return 1828340319;
			return 344414895;
			return 344414895;
			return 344414895;
			return -1875079046;
			return -1875079046;
			return -1875079046;
			return -1273558742;
			return -1273558742;
			return -1273558742;
			return -839975185;
			return -839975185;
			return -839975185;
			return -401745683;
			return -401745683;
			return -401745683;
			return -2096730839;
			return -2096730839;
			return -2096730839;
			return 1871609823;
			return 1871609823;
			return 1871609823;
			return -1028335922;
			return -1028335922;
			return -1028335922;
			return 172698521;
			return 172698521;
			return 172698521;
			return 212330241;
			return 212330241;
			return 212330241;
			return -555536739;
			return -555536739;
			return -555536739;
			return -1896091463;
			return -1896091463;
			return -1896091463;
			return 1854095100;
			return 1854095100;
			return 1854095100;
			return 1690246594;
			return 1690246594;
			return 1690246594;
			return -885435577;
			return -885435577;
			return -885435577;
			return -1923252111;
			return -1923252111;
			return -1923252111;
			return -470304000;
			return -1074986502;
			return -1042059910;
			return 1234479911;
			return -591134272;
			return 2092024647;
			return -1902618794;
			return 0;
		}

int func_194(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;

	if (!ITEMDATABASE::_0xEF254F1A4C08B7E6(iParam0))
	{
		return 0;
	}
	if (!func_68(iParam1, 0))
	{
		return 0;
	}
	iVar4 = ITEMDATABASE::_0x3FAA928A79591761(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (!ITEMDATABASE::_0x121D2005DD64496B(iParam0, iVar0, &Var1))
		{
		}
		else if (Var1 == iParam1)
		{
			return Var1.f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_195()
{
	return (Global_1140484->f_18706[60 /*195*/])->f_194;
}

char* func_196(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_406(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_197(int iParam0, int iParam1)
{
	if (iParam1 == 119)
	{
		return func_407(iParam0);
	}
	return func_408(iParam0, iParam1);
}

int func_198(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2[1];
	int iVar4[3];
	int iVar8;

	if (func_409(iParam0, &uVar0))
	{
		return 1;
	}
	if (!func_410(iParam0))
	{
		return 0;
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		func_411(Global_34, &uVar2, 1);
		iVar1 = func_412(&(uVar2[0]));
		if (iVar1 == iParam0)
		{
			if (ENTITY::_GET_IS_LOOTED(&(uVar2[0])))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (PED::_IS_PED_CARRYING(PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID())))
	{
		func_411(PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()), &iVar4, 3);
		iVar8 = 0;
		while (iVar8 < iVar4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(&(iVar4[iVar8])))
			{
			}
			else
			{
				iVar1 = func_371(iVar4[iVar8]);
				if (iVar1 == iParam0)
				{
					if (ENTITY::_GET_IS_LOOTED(&(iVar4[iVar8])))
					{
						return 1;
					}
				}
			}
			iVar8++;
		}
	}
	return 0;
}

char* func_199(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "COLLECTIBLE_MAP_ON_MISSION";
		case 2:
			return "COLLECTIBLE_MAP_ACTIVE_MAP";
		case 3:
			return "COLLECTIBLE_MAP_SPADE_MISSING";
		case 4:
			return "COLLECTIBLE_MAP_METAL_DETECTOR_MISSING";
		case 5:
			return "COLLECTIBLE_MAP_SEARCH_ITEMS_NOT_AVAILABLE";
	}
	return "NET_COLLECTIBLE_OPEN_MAP_RESULT_NONE";
}

int func_200()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
	{
		if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (!func_413(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	return 1;
}

bool func_201(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 39);
}

bool func_202(int iParam0)
{
	return iParam0 != 0;
}

int func_203(int iParam0)
{
	return func_194(iParam0, joaat("CURRENCY_CASH"));
}

int func_204(int iParam0)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;

	if (!func_209(iParam0, -489628648, &Var0, &iVar31, 0, 1))
	{
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_210(&(Var0[iVar32 /*2*/]), 1))
		{
			iVar33++;
		}
		iVar34++;
		iVar32++;
	}
	if (iVar33 >= iVar34)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar33, iVar34));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION", iVar33, iVar34));
	}
	return 1;
}

int func_205(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1939231->f_10515))
	{
		return 0;
	}
	Var0 = Global_1939231->f_10515;
	Var0.f_2 = 3;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_206(var uParam0)
{
	func_390(0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_391(), joaat("SATCHEL_PROMPT_OPEN"));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_414(), DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam0, "focusable"));
}

int func_207(int iParam0)
{
	return iParam0;
}

int func_208(int iParam0, int iParam1)
{
	if (!func_415(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_209(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_416(iParam0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, bParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_417(iParam0, bParam1, uParam2, *iParam3);
	}
	return 1;
}

bool func_210(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_68(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_87(iParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_418(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_419(iParam0))
			{
				return true;
			}
			break;
	}
	return func_188(iParam0, 0, 0, 0) >= iParam1;
}

bool func_211(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_212(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_213(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[5];
	int iVar32;
	int iVar33;
	int iVar34;
	struct<16> Var35;
	struct<16> Var51;

	if (func_420(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_212(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_114(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_421(&Var1, &iVar32, iParam0, iVar0, iParam1, 1) || iVar32 < 1)
		{
			return 0;
		}
		iVar34 = -1;
		Var35.f_9 = 1;
		Var35.f_11 = -1591664384;
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			Var35 = { func_422(iParam0, Var1[iVar33 /*6*/]) };
			Var35.f_12 = iParam2;
			iVar34 = func_423(joaat("USE"), &Var35, 1);
			if (iVar34 == -1)
			{
				return 0;
			}
			iVar33++;
		}
		if (iVar34 != -1)
		{
			Var51.f_7 = -142743235;
			Var51 = bParam3;
			Var51.f_7 = iParam2;
			func_311(iVar34, Var51);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_145(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_214(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		return 0;
	}
	if (func_420(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_297(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_114(bParam6))
	{
		iVar14 = -1;
		if (func_27() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_423(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_311(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_145(bParam6), iParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_215(int iParam0)
{
	if (func_69(iParam0, 1573112293))
	{
		return func_424(iParam0);
	}
	switch (func_90(iParam0))
	{
		case -77448735:
			if (func_425(iParam0))
			{
				return func_424(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_424(iParam0);
		case -1520388130:
		case 1802292908:
			return func_426();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_427();
		case -525676072:
			return func_427();
		case 1779021115:
			if (iParam0 == joaat("WEAPON_KIT_CAMERA"))
			{
				return func_428();
			}
			return func_429();
		case -1823706425:
			return func_430();
		case -854348463:
			return func_431();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_432();
		default:
			if (func_68(iParam0, 0))
			{
				if (func_69(iParam0, 1919582297))
				{
					return func_433();
				}
				else if (iParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE") || iParam0 == -1448210800)
				{
					return func_434();
				}
				else if (iParam0 == joaat("KIT_HORSE_BRUSH"))
				{
					return func_435();
				}
				else if (func_69(iParam0, 1147021565))
				{
					return func_436();
				}
			}
			return func_437();
	}
	return func_437();
}

int func_216(bool bParam0, int iParam1)
{
	int iVar0;

	if ((Global_1939178->f_6 || PED::IS_PED_DEAD_OR_DYING(Global_34, true)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	if (func_27() == 0)
	{
		if (func_438(131072))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 1))
	{
		if (func_438(1024))
		{
			return 0;
		}
	}
	if (Global_1939178->f_16)
	{
		return 0;
	}
	if (!func_101(iParam1, 2) && func_438(32))
	{
		return 0;
	}
	if (!func_101(iParam1, 4))
	{
		if (func_438(4096))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 8) && func_438(512))
	{
		return 0;
	}
	if (!func_101(iParam1, 512) && !func_439(bParam0))
	{
		return 0;
	}
	if (!func_101(iParam1, 262144) && !func_440(bParam0, func_101(iParam1, 524288)))
	{
		return 0;
	}
	if (!func_101(iParam1, 64) && !func_441(bParam0, iParam1, 1))
	{
		return 0;
	}
	if (!func_101(iParam1, 128))
	{
		if (func_442(Global_34, 1868526510) || func_443(Global_34))
		{
			if (bParam0)
			{
				func_89("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (!func_101(iParam1, 16))
	{
		if (func_443(Global_34))
		{
			iVar0 = PED::GET_MOUNT(Global_34);
			if (!func_444(iVar0, 1))
			{
				if (bParam0)
				{
					func_89("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return 0;
			}
		}
	}
	if (!func_101(iParam1, 256) && func_438(8192))
	{
		return 0;
	}
	if (!func_101(iParam1, 1024) && func_438(65536))
	{
		if (bParam0)
		{
			func_89("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!func_101(iParam1, 2048))
	{
		if (func_438(32768))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 4096))
	{
		if (func_438(16384))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 8192))
	{
		if (!func_438(16))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 16384))
	{
		if (func_438(256))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 32768))
	{
		if (func_445())
		{
			if (bParam0)
			{
				func_89("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (!func_101(iParam1, 131072))
	{
		if (!func_438(524288))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 65536))
	{
		if (!func_438(262144))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 1048576))
	{
		if (!func_438(2097152))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 2097152))
	{
		if (!func_438(8388608))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 4194304))
	{
		if (!func_438(16777216))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 8388608))
	{
		if (func_438(33554432))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 16777216))
	{
		if (func_438(67108864))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 33554432))
	{
		if (func_438(134217728))
		{
			return 0;
		}
	}
	if (func_438(64))
	{
		return 0;
	}
	else if (func_438(128))
	{
		return 0;
	}
	else if (func_438(1048576))
	{
		return 0;
	}
	else if (func_438(4))
	{
		return 0;
	}
	return 1;
}

int func_217()
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 0;
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_34);
		iVar1 = iVar0;
		if (iVar1 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL") && iVar1 != joaat("WORLD_PLAYER_MP_STEW_POT_DONATION"))
		{
			return 1;
		}
	}
	return 0;
}

bool func_218(int iParam0, int iParam1)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939231->f_1433.f_54.f_85);
}

char* func_219()
{
	switch (Global_1915180->f_21989.f_5)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 2:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 3:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 5:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 8:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
		case 6:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 7:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
		case 9:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 10:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
		case 20:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
		case 21:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
		case 22:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
		case 37:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
		default:
			break;
	}
	return "";
}

int func_220(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_446(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_221(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_447(iParam0))
	{
		return 1;
	}
	if (!func_448())
	{
		return 5;
	}
	if (!bParam1 && (Global_1199613->f_48[iParam0 /*21*/])->f_17)
	{
		if (bParam2 || Global_1199613->f_1.f_20 != 0)
		{
			return 2;
		}
	}
	if (!bParam2 && !func_449(iParam0))
	{
		return 3;
	}
	if (func_450(iParam0) && !func_451())
	{
		return 4;
	}
	return 0;
}

int func_222(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	switch (func_6(iParam0, -949239683))
	{
		case -1420737577:
			if (!bParam1)
			{
				iVar0 = 2129866661;
				if (bParam2)
				{
					iVar0 = 1607869040;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_223()
{
	return (Global_1951141->f_1657.f_1[1 /*3*/])->f_1 == joaat("POMADE");
}

int func_224(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (func_452(*uParam0, joaat("HATS"), 0))
	{
		return 1;
	}
	return 0;
}

void func_225(int iParam0)
{
	int iVar0;

	iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
	switch (func_453())
	{
		case 0:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_69(iParam0, 1573112293))
		{
			func_454(func_182(iParam0), 1, 1);
		}
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_226(int iParam0)
{
	int iVar0;

	iVar0 = 16939881;
	switch (func_453())
	{
		case 0:
			iVar0 = 16939881;
			break;
		case 1:
			iVar0 = -1165614444;
			break;
		case 3:
			iVar0 = 968591133;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_227(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -45077177;
	switch (func_453())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_228(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1700817728;
	switch (func_453())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_229(int iParam0)
{
	int iVar0;

	iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
	switch (func_453())
	{
		case 0:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_230(int iParam0)
{
	int iVar0;

	iVar0 = 2105609037;
	switch (func_453())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		case 3:
			iVar0 = -457187977;
			break;
		case 1:
			iVar0 = -1595716047;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_231(int iParam0)
{
	int iVar0;

	iVar0 = 1964324114;
	switch (func_453())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		case 3:
			iVar0 = -654111932;
			break;
		case 1:
			iVar0 = 1826089606;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_232(int iParam0)
{
	int iVar0;

	iVar0 = -1530144981;
	switch (func_453())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		case 3:
			iVar0 = -389189374;
			break;
		case 1:
			iVar0 = -312546963;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_233(int iParam0)
{
	int iVar0;

	iVar0 = -1074475556;
	switch (func_453())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		case 3:
			iVar0 = 392506445;
			break;
		case 1:
			iVar0 = -1846586910;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_234(int iParam0)
{
	int iVar0;

	iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
	switch (func_453())
	{
		case 0:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_235(int iParam0)
{
	int iVar0;

	iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
	switch (func_453())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_236(int iParam0)
{
	int iVar0;

	iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
	switch (func_453())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_237(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
	switch (func_453())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_455(Global_34, iParam0, iVar0, 1, 0) && bParam1)
		{
			func_456(iParam0);
			func_128(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_238(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
	switch (func_453())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_455(Global_34, iParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_456(iParam0);
			func_128(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

bool func_239(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_240(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1938417->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1938417)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_241(int iParam0)
{
	if (func_239(iParam0, 1))
	{
		func_457(1);
	}
}

int func_242(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
	return -1;
}

void func_243(int iParam0)
{
	Global_1951141 = (Global_1951141 || iParam0);
}

void func_244(struct<4> Param0)
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
			if (Global_1951141->f_916 >= 25)
			{
				return;
			}
			if (func_458(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1951141->f_916)
				{
					iVar1 = ((Global_1951141->f_921 + iVar0) % 25);
					if ((&Global_1951141->f_734[iVar1 /*4*/] == Param0 && (Global_1951141->f_734[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1951141->f_734[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_459(Param0);
			*(Global_1951141->f_734[Global_1951141->f_922 /*4*/]) = { Param0 };
			Global_1951141->f_916++;
			Global_1951141->f_922 = (Global_1951141->f_922 + 1 % 25);
			func_243(8);
			break;
		case 23:
		case 24:
		case 25:
			if (Global_1951141->f_917 >= 25)
			{
				return;
			}
			if (func_458(Param0))
			{
				return;
			}
			func_459(Param0);
			*(Global_1951141->f_633[Global_1951141->f_917 /*4*/]) = { Param0 };
			Global_1951141->f_917++;
			func_243(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1951141->f_918 >= 20)
			{
				return;
			}
			if (func_458(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1951141->f_918)
				{
					iVar1 = ((Global_1951141->f_919 + iVar0) % 20);
					if ((&Global_1951141->f_835[iVar1 /*4*/] == Param0 && (Global_1951141->f_835[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1951141->f_835[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_459(Param0);
			*(Global_1951141->f_835[Global_1951141->f_920 /*4*/]) = { Param0 };
			Global_1951141->f_918++;
			Global_1951141->f_920 = (Global_1951141->f_920 + 1 % 20);
			func_243(8);
			break;
			break;
	}
}

bool func_245()
{
	return Global_1951141->f_3252;
}

int func_246(int iParam0)
{
	if (func_460())
	{
		return 0;
	}
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (!func_210(iParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

bool func_247(int iParam0)
{
	return func_461(iParam0);
}

void func_248(int iParam0, int iParam1)
{
	func_462(iParam0, iParam1);
}

int func_249(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_463(iParam0);
	if (func_69(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_464(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_465();
			}
			else
			{
				iVar0 = func_466();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_467();
		}
		else
		{
			iVar0 = func_468();
		}
	}
	else if (func_469(&iVar2))
	{
		if (func_69(iVar2, -1303648999))
		{
			iVar0 = func_465();
		}
		else
		{
			iVar0 = func_466();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_467();
	}
	else
	{
		iVar0 = func_468();
	}
	if (iVar0 != 0)
	{
		Global_1951141->f_3251 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_34, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_250(int iParam0)
{
	return (Global_1951141 && iParam0) != 0;
}

void func_251()
{
	Global_1951141->f_3235 = 0;
	Global_1951141->f_3235.f_1 = 0;
	Global_1951141->f_3235.f_8 = 0;
	Global_1951141->f_3235.f_2 = 0;
	Global_1951141->f_3235.f_3[0] = 0;
	Global_1951141->f_3235.f_3[1] = 0;
	Global_1951141->f_3235.f_3[2] = 0;
	Global_1951141->f_3235.f_3[3] = 0;
	Global_1951141->f_3235.f_9 = 0;
	Global_1951141->f_3235.f_10 = 0;
	Global_1951141->f_3235.f_11 = 0;
	if (Global_1951141->f_3235.f_12)
	{
		PED::_0x13E7320C762F0477(Global_1951141->f_3235.f_13);
	}
	Global_1951141->f_3235.f_12 = 0;
	func_470(32768);
	func_471(1108822547, 8, 6);
}

bool func_252(int iParam0, bool bParam1)
{
	return func_472(iParam0, 0) < func_473(iParam0, bParam1);
}

void func_253(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_90(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_474(iParam0, &(Global_1951141->f_3109.f_27), Global_1951141->f_3109.f_32.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_474(iParam0, &(Global_1951141->f_3109.f_29), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_474(iParam0, &(Global_1951141->f_3109.f_26), Global_1951141->f_3109.f_32, bParam1);
			break;
		case -525676072:
			bVar1 = func_474(iParam0, &(Global_1951141->f_3109.f_28), Global_1951141->f_3109.f_32.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_474(iParam0, &(Global_1951141->f_3109.f_30), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_474(iParam0, &(Global_1951141->f_3109.f_30), 1, bParam1);
			break;
		default:
			if (func_69(iParam0, -1348134986))
			{
				bVar1 = func_474(iParam0, &(Global_1951141->f_3109.f_29), 1, bParam1);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_254(0))
	{
		func_475(iParam0, 1);
		if (func_476() == 1160113249)
		{
			func_475(func_254(-2125499975), 0);
		}
		else
		{
			func_475(func_254(1160113249), 0);
		}
	}
	func_477();
	if (func_478(iVar0) || (iVar0 != -999503751 && func_69(iParam0, -166674229)))
	{
		INVENTORY::_0x766315A564594401(func_145(0), iParam0, 0);
	}
	func_97(iParam0, bParam3);
	if (bParam2)
	{
		func_479(0, 0);
	}
}

int func_254(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_476();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

void func_255(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_90(iParam1);
	if (iVar0 == func_90(iParam0) || (func_69(iParam0, -1348134986) && func_69(iParam1, -1348134986)))
	{
		func_480(iParam0, iParam1, 1);
		return;
	}
}

int func_256(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1951141->f_81[iVar0 /*12*/])->f_9 == iParam0)
		{
			return func_481(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_257(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case -1197751823:
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case -1130865351:
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case -893163968:
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case 304805134:
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case 735520874:
			return 5;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
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

int func_258(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_482();
	if (iParam2 == 39)
	{
		Var0 = { func_111(iParam0, 1, 0) };
		iParam2 = func_257(func_256(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_250(32768) && iParam2 == 10)
	{
		func_483(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_484(iParam2);
	func_485(iParam2, iVar5);
	func_486(Global_1951141->f_1538.f_1[iParam2 /*3*/], 4, 6);
	func_486(Global_1951141->f_1657.f_1[iParam2 /*3*/], 4, 6);
	func_487(&(Global_1951141->f_1538), iParam0, iParam2, bParam4);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1951141->f_1538.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1951141->f_1538.f_1[iParam2 /*3*/] = iParam0;
	(Global_1951141->f_1538.f_1[iParam2 /*3*/])->f_1 = func_488(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1951141->f_2760)
		{
			if (&Global_1951141->f_2760.f_2[iVar6 /*2*/] >= 0 && &Global_1951141->f_2760.f_2[iVar6 /*2*/] < 39)
			{
				Global_1951141->f_2627[&Global_1951141->f_2760.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1951141->f_2627[&Global_1951141->f_2760.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_471(func_481(&(Global_1951141->f_2760.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_259(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_489(&(Global_1951141->f_2760), bParam0, bParam1, bParam2, bParam3);
}

int func_260(int iParam0, bool bParam1)
{
	if (!func_68(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == joaat("CLOTHING_ITEM_HAIR_NONE") || iParam0 == joaat("CLOTHING_ITEM_BEARD_NONE")))
	{
		return 0;
	}
	if (func_69(iParam0, 265372629))
	{
		return 1;
	}
	return 0;
}

int func_261(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<5> Var4;
	int iVar9;

	Var4 = { func_111(iParam0, 0, 0) };
	if (func_260(iParam0, 0))
	{
		iVar9 = func_490(Var4, Var4.f_4, 0, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_111(iVar9, 0, 0) };
			Var0 = { func_112(iVar9, Var4, Var4.f_4, 0) };
			return func_113(Var0, 0);
		}
		return 1;
	}
	Var0 = { func_112(iParam0, Var4, Var4.f_4, 0) };
	return func_113(Var0, iParam1);
}

int func_262(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_257(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1951141->f_1657.f_1[iVar1 /*3*/] == &Global_1951141->f_81[iVar1 /*12*/] || &Global_1951141->f_1538.f_1[iVar1 /*3*/] == &Global_1951141->f_81[iVar1 /*12*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_263(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_264(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_212(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_112(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_145(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_145(bParam6), iParam0, bParam8);
	}
	return iVar0;
}

int func_265(int iParam0)
{
	int iVar0;

	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_46(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (func_491(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_266()
{
	return Global_39.f_277.f_3019;
}

bool func_267()
{
	return Global_1915180->f_21989.f_1;
}

bool func_268()
{
	return Global_1915180->f_21989;
}

void func_269()
{
	PAD::_0x2804658EB7D8A50B(4, joaat("HANDHELDCATALOGUE"));
}

void func_270(int iParam0)
{
	Global_1051388->f_3578 = iParam0;
}

int func_271()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_3;
}

bool func_272(int iParam0)
{
	return func_211(((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_73, iParam0);
}

int func_273()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_274()
{
	return !func_272(2);
}

bool func_275(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

void func_276()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

int func_277(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_493(bParam2, func_492(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_278(int iParam0)
{
	Global_1896726->f_390 = iParam0;
}

int func_279(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

struct<2> func_280(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_281(struct<2> Param0)
{
	if (!func_494(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_495(Param0))
	{
		return 0;
	}
	return 1;
}

int func_282(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if ((Global_1184573->f_1[iVar1 /*26*/])->f_1 != -1 && func_496(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (&Global_1185132->f_66[iVar1 /*20*/] >= 2)
					{
						return (Global_1184573->f_1[iVar1 /*26*/])->f_1;
					}
				}
				else if (&Global_1185132->f_66[iVar1 /*20*/] >= 5)
				{
					return (Global_1184573->f_1[iVar1 /*26*/])->f_1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_283(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1185132->f_1[iParam0 /*4*/]);
}

var func_284(int iParam0, int iParam1)
{
	return func_497(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_285(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	struct<21> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_498(&(Global_1070356->f_21258), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_287(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_499(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_500(iParam0))
	{
		return 0;
	}
	if (func_501(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_502(iParam0, 1)) || func_503(32768))
	{
		if (!func_502(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_504())
	{
		return 0;
	}
	return 1;
}

void func_288(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

void func_289()
{
	Global_1913166->f_1583 = MISC::GET_GAME_TIMER();
	Global_1913166->f_1581 = 1;
}

struct<4> func_290(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_145(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_112(joaat("CHARACTER"), func_302(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_112(joaat("CHARACTER"), func_302(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_112(joaat("CHARACTER"), func_302(), -1591664384, bParam0);
}

struct<4> func_291(bool bParam0)
{
	int iVar0;

	iVar0 = func_145(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_112(923904168, func_290(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_112(923904168, func_290(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_112(923904168, func_290(bParam0), -740156546, 0);
}

int func_292(int iParam0, bool bParam1)
{
	if (func_90(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_505();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_293(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_264(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

int func_294(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (func_506(iParam0, &uVar0, iParam1, iParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_295(bool bParam0)
{
	int iVar0;

	iVar0 = func_145(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_112(271701509, func_290(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_112(271701509, func_290(bParam0), 12999093, 0);
}

int func_296(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_90(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &bVar0))
		{
			if (func_507(iParam0, iParam1, bVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_297(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_508(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_298(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<25> Var44;
	struct<17> Var69;
	struct<16> Var86;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_297(Param0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_87(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_509(Param0, 1, 0) };
		Var16.f_10 = iParam4;
		iVar0 = func_510(joaat("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("COACH"))
	{
		Var44 = { func_511(Param0, 1, 0) };
		Var44.f_10 = iParam4;
		iVar0 = func_512(joaat("UPDATE"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var69 = { func_513(Param0, 1, 0) };
		Var69.f_10 = iParam4;
		iVar0 = func_514(joaat("UPDATE"), &Var69, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_515(&Var1, 0) };
		Var86.f_10 = iParam4;
		iVar0 = func_423(joaat("UPDATE"), &Var86, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_299()
{
	if ((Global_1939231->f_10485 != (Global_1939231->f_38.f_203 - 1) || func_131(func_121(0), Global_1939231->f_10478, 0, 1, 1) > 0) || Global_1939231->f_10485 == 15)
	{
		return 1;
	}
	func_62();
	if (Global_1939231->f_6)
	{
		return 1;
	}
	return 0;
}

void func_300(int iParam0)
{
	Global_1939231->f_9 = iParam0;
}

bool func_301(int iParam0)
{
	return func_87(iParam0) == joaat("WEAPON");
}

struct<4> func_302()
{
	struct<4> Var0;

	return Var0;
}

void func_303(int iParam0, int iParam1, struct<4> Param2)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	if (PED::IS_PED_ON_MOUNT(Global_34) && !func_443(Global_34))
	{
		return;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_34))
	{
		return;
	}
	else if (PED::IS_PED_RELOADING(Global_34))
	{
		return;
	}
	if (iParam0 == 1)
	{
		iVar0 = iParam1;
		if (!Global_1939067->f_9 && !PED::_0x4912DFE492DB98CD(Global_34, "inInspectionMode"))
		{
			TASK::_TASK_ITEM_INTERACTION_3(PLAYER::PLAYER_PED_ID(), iVar0, &Param2, 0, 0, 0, -1082130432);
			Global_1939067->f_8 = 1;
			Global_1939067->f_66 = { Param2 };
		}
	}
}

int func_304(int iParam0)
{
	if (func_69(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_69(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_69(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_305(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			iVar0 = joaat("A_C_FISHBLUEGIL_01_SM");
			break;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			iVar0 = joaat("A_C_FISHBULLHEADCAT_01_SM");
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHCHAINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			iVar0 = joaat("A_C_FISHCHANNELCATFISH_01_LG");
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			iVar0 = joaat("A_C_FISHLAKESTURGEON_01_LG");
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			iVar0 = joaat("A_C_FISHLARGEMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			iVar0 = joaat("A_C_FISHLONGNOSEGAR_01_LG");
			break;
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			iVar0 = joaat("A_C_FISHMUSKIE_01_LG");
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			iVar0 = joaat("A_C_FISHNORTHERNPIKE_01_LG");
			break;
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			iVar0 = joaat("A_C_FISHPERCH_01_SM");
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHREDFINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			iVar0 = joaat("A_C_FISHROCKBASS_01_SM");
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			iVar0 = joaat("A_C_FISHSMALLMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			iVar0 = joaat("A_C_FISHSALMONSOCKEYE_01_MS");
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			iVar0 = joaat("A_C_FISHRAINBOWTROUT_01_MS");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			iVar0 = joaat("A_C_BAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			iVar0 = joaat("A_C_BLUEJAY_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			iVar0 = joaat("A_C_FROGBULL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			iVar0 = joaat("A_C_CARDINAL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			iVar0 = joaat("A_C_CEDARWAXWING_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CHIPMUNK_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			iVar0 = joaat("A_C_CRAB_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			iVar0 = joaat("A_C_CROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ORIOLE_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CAROLINAPARAKEET_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			iVar0 = joaat("A_C_PIGEON");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			iVar0 = joaat("A_C_QUAIL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			iVar0 = joaat("A_C_RAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ROBIN_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			iVar0 = joaat("A_C_SONGBIRD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			iVar0 = joaat("A_C_SPARROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			iVar0 = joaat("A_C_SQUIRREL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			iVar0 = joaat("A_C_TOAD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			iVar0 = joaat("A_C_WOODPECKER_01");
			break;
	}
	return iVar0;
}

int func_306()
{
	if (INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return 0;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

struct<2> func_307(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_308(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_309(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<2> Var1;
	var uVar13[15];
	int iVar29;
	int iVar30;

	if (!func_114(0) || func_306())
	{
		iVar0 = iParam0;
		Var1.f_1 = 10;
		func_517(iParam1, func_516(iParam2), &Var1, 1);
		if (func_518(iVar0, &Var1, 0))
		{
		}
		func_109(499, 0);
		return 0;
	}
	PED::_0xB29C553BA582D09E(&uVar13, iParam0, iParam1, func_516(iParam2));
	iVar29 = 0;
	while (iVar29 < 15)
	{
		if ((func_68(&(uVar13[iVar29]), 0) && !func_69(&(uVar13[iVar29]), 1286414894)) && !&uVar13[iVar29] == iParam2)
		{
			func_519(&(uVar13[iVar29]), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (iParam3 != 0)
			{
				if (iParam3 == &uVar13[iVar29])
				{
					iVar30++;
				}
			}
			else
			{
				iVar30++;
			}
		}
		iVar29++;
	}
	func_115(func_114(0), 0, 0);
	return iVar30;
}

int func_310(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<12> Var0;
	struct<16> Var14;
	int iVar30;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		return -1;
	}
	if (func_420(iParam0))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_297(*iParam1, &Var0, 1, 0, -1))
	{
		return -1;
	}
	if (iParam2 < 0)
	{
		iParam2 = Var0.f_11;
	}
	else if (iParam2 > Var0.f_11)
	{
		iParam2 = Var0.f_11;
	}
	Var14 = { func_515(&Var0, 0) };
	Var14.f_9 = iParam2;
	Var14.f_12 = iParam3;
	iVar30 = -1;
	iVar30 = func_423(joaat("USE"), &Var14, bParam5);
	if (bParam4 && iVar30 != -1)
	{
		Var31.f_7 = -142743235;
		Var31 = 1;
		func_311(iVar30, Var31);
	}
	return iVar30;
}

void func_311(int iParam0, struct<16> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 1 || (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 5)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

struct<10> func_312(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

int func_313(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12)
{
	*uParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_314(int iParam0, int iParam1)
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

int func_315(int iParam0)
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

void func_316(int iParam0)
{
	if (!func_317(iParam0))
	{
		Global_1956172 = (Global_1956172 || iParam0);
	}
}

bool func_317(int iParam0)
{
	return (Global_1956172 && iParam0) != 0;
}

void func_318(int iParam0)
{
	if (func_317(iParam0))
	{
		Global_1956172 = (&Global_1956172 - (Global_1956172 && iParam0));
	}
}

int func_319(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (func_520(iParam0))
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (func_520(iParam0) && TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (func_521(iVar0, iParam0))
		{
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	if (func_522() == 1)
	{
		func_523(iVar0);
		func_524(iParam0);
		func_525(1);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_320(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_321(int iParam0)
{
	return func_87(iParam0) == joaat("CONSUMABLE");
}

int func_322(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_87(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_69(iParam0, 1399091007))
	{
		func_526(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_323(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	int iVar18;
	char* sVar19;
	char cVar20[128];

	if (!func_68(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_527() || bParam6)
	{
		func_528(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_529(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_529(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_530(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_87(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if (((((((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER")) && iParam0 != joaat("AMMO_HATCHET_HUNTER")) && iParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && iParam0 != joaat("AMMO_BOLAS")) && iParam0 != joaat("AMMO_POISONBOTTLE")) && iParam0 != joaat("AMMO_MOONSHINEJUG_MP"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_90(iParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_531(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar13 = joaat("COLOR_PURE_WHITE");
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = joaat("COLOR_GREYMID");
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_69(iParam0, 474910316))
	{
		sVar17 = func_532(iParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	if (func_69(iParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	iVar18 = func_190(iParam0);
	if ((func_533(iVar12) && func_69(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_534(iParam0);
	}
	sVar19 = func_406(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (((((iParam1 == 1 || func_69(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && iParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && iParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && iParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, func_535(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		if (!func_69(iParam0, 920823793))
		{
			StringCopy(&cVar20, "", 128);
			if (func_536(iParam0, &cVar20))
			{
				sVar19 = func_196(func_537(cVar20), joaat("COLOR_PURE_WHITE"));
			}
		}
	}
	func_538(sVar19, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_324(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_68(iParam0, 0))
	{
		return Var0;
	}
	if (func_69(iParam0, -305066475))
	{
		if (func_27() == -1)
		{
			if (func_69(iParam0, -537818634))
			{
				return func_539(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_539(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_69(iParam0, -537818634))
	{
		return func_539(joaat("MEDICINE_ITEMS"));
	}
	if (func_69(iParam0, 2084895747))
	{
		return func_539(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

int func_325(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_342(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_540(&Var0, func_291(0));
	}
	if (!func_343(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_148(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_214(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_162(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_326(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = func_121(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = func_541(iVar0, iParam0);
		if (iParam1 < iVar1)
		{
			iVar1 = iParam1;
		}
		iParam1 = (iParam1 - iVar1);
		func_542(&iVar0, iParam0, &iVar1, bParam3, iParam4, iParam5);
		iParam1 = (iParam1 + iVar1);
	}
	iParam1 = func_543(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, iParam5);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	return iParam1;
}

int func_327(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_188(iParam0, 0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!func_128(iParam0, iVar1, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_544(iParam0, iVar1, 0);
		}
	}
	if (iVar2 > 0)
	{
		if (!func_545(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_544(iParam0, iVar1, 0);
		}
		if (!bParam2)
		{
			func_89("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

int func_328(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_290(bParam4) };
	Var0.f_4 = -2015960939;
	Var5 = { func_112(iParam0, Var0, Var0.f_4, bParam4) };
	return func_214(iParam0, &Var5, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_329()
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (((*Global_1225057)[iVar0 /*686*/])->f_638 != 0)
		{
			uVar1 = func_546(((*Global_1225057)[iVar0 /*686*/])->f_638, 1);
			((*Global_1225057)[iVar0 /*686*/])->f_637 = uVar1;
		}
		iVar0++;
	}
}

int func_330(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_68(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_547(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, false);
	return iVar4;
}

int func_331(int iParam0, bool bParam1)
{
	if (!bParam1 || func_177())
	{
		return func_264(iParam0, func_290(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

void func_332()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_333(int iParam0, var uParam1)
{
	if (!func_548(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1915131[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

void func_334()
{
	int iVar0;

	iVar0 = func_549();
	if (func_549() == 822208792)
	{
		iVar0 = 0;
	}
	if (func_23(0))
	{
		if (func_168() == 2)
		{
			iVar0 = -693134279;
		}
		else
		{
			iVar0 = -182626652;
		}
	}
	if (func_32())
	{
		iVar0 = -2074770370;
	}
	func_35(iVar0);
}

void func_335(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(uParam0, Global_1939231->f_10452);
	bVar1 = func_156(iParam1);
	iVar2 = iParam1;
	iVar3 = iVar0;
	if (bVar1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939231->f_10492, Global_1939231->f_10452);
		Global_1939231->f_10453 = Global_1939231->f_10452;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(8, iVar3, sParam2, sParam3, iVar2, bVar1);
	Global_1939231->f_10454[Global_1939231->f_10452] = iParam1;
	Global_1939231->f_10452++;
}

void func_336(var uParam0)
{
	if (func_45())
	{
		func_335(uParam0, -283002878, "Horse", joaat("SATCHEL_NAV_HORSE"));
	}
}

void func_337(var uParam0)
{
	if (func_59())
	{
		func_335(uParam0, -889932290, "Wagon", joaat("SATCHEL_NAV_HORSE"));
	}
}

void func_338(var uParam0)
{
	if (func_23(0))
	{
		if (func_168() == 2)
		{
			func_335(uParam0, -693134279, "Send", joaat("SATCHEL_NAV_SEND"));
		}
		else
		{
			func_335(uParam0, -182626652, "Sell", joaat("SATCHEL_NAV_SELL"));
		}
	}
	else if (func_32())
	{
		func_335(uParam0, -2074770370, "Donations", joaat("SATCHEL_NAV_DONATE"));
	}
}

int func_339(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1951141->f_3109.f_25)
	{
		if (iParam0 == &Global_1951141->f_3109[*iParam1])
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

void func_340(bool bParam0)
{
	if (bParam0)
	{
		HUD::_SHOW_PLAYER_CORES(true);
		HUD::_SHOW_HORSE_CORES(false);
	}
	else
	{
		HUD::_SHOW_PLAYER_CORES(false);
		HUD::_SHOW_HORSE_CORES(true);
	}
}

int func_341(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = func_550();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

struct<14> func_342(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

int func_343(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_145(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_344(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;

	if (Param0.f_9 != 1084182731 && Param0.f_9 != -1162387149)
	{
		return 0;
	}
	iVar0 = func_87(Param0.f_4);
	if ((iVar0 == joaat("WEAPON") && !WEAPON::_IS_WEAPON_BINOCULARS(Param0.f_4)) && Param0.f_4 != joaat("WEAPON_KIT_CAMERA"))
	{
		return 0;
	}
	switch (iVar0)
	{
		case joaat("HORSE_EQUIPMENT"):
		case joaat("COUPON"):
		case joaat("HORSE"):
		case joaat("EMOTE"):
		case joaat("WEAPON_MOD"):
		case joaat("FEE"):
		case joaat("ACTIVE_CARD"):
		case joaat("AMMO"):
		case joaat("WEAPON_DECORATION"):
		case joaat("ABILITY_CARD"):
		case joaat("GOLD"):
		case joaat("COMPONENT"):
		case joaat("MINIGAME"):
		case joaat("ADVERT"):
		case joaat("CORE_ITEM"):
		case joaat("PASSIVE_CARD"):
			return 0;
		case joaat("CLOTHING"):
			switch (func_90(Param0.f_4))
			{
				case -525676072:
					if (Param0.f_4 == joaat("KIT_MASK_GREY_CLOTH"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case 81053684:
					return 1;
				case 1477698721:
					if (func_69(Param0.f_4, -1348134986))
					{
						return 1;
					}
					return 0;
				default:
					return 0;
			}
			break;
	}
	if (func_90(Param0.f_4) == -829303394)
	{
		return 0;
	}
	return 1;
}

void func_345(int iParam0, int iParam1, bool bParam2)
{
	if (func_68(iParam1, 0))
	{
		if (bParam2)
		{
			INVENTORY::_0x6A564540FAC12211(iParam0, iParam1);
		}
		else
		{
			INVENTORY::_0x766315A564594401(iParam0, iParam1, 0);
		}
	}
}

bool func_346(int iParam0)
{
	return func_551(func_90(iParam0), iParam0);
}

bool func_347(int iParam0)
{
	return func_552(iParam0);
}

void func_348(int iParam0, bool bParam1)
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
	Var0.f_4 = -854348463;
	func_553(iParam0, Var0, bParam1, 0);
}

void func_349(int iParam0, bool bParam1)
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
	Var0.f_4 = -1823706425;
	func_553(iParam0, Var0, bParam1, 0);
}

void func_350(int iParam0, bool bParam1)
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
	Var0.f_1 = 1835126290;
	Var0.f_4 = 81053684;
	func_553(iParam0, Var0, bParam1, 0);
}

void func_351(int iParam0, bool bParam1)
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
	Var0.f_4 = -525676072;
	func_553(iParam0, Var0, bParam1, 0);
}

void func_352(int iParam0, bool bParam1)
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
	Var0.f_4 = -1719060085;
	func_553(iParam0, Var0, bParam1, 0);
}

int func_353(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!func_202(iVar0))
	{
		return 0;
	}
	if (((((((((((((iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("COINS"), 0) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("WILD_FLOWERS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("FAMILY_HEIRLOOMS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("ARROWHEADS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("ANTIQUE_BOTTLES"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("BIRD_EGGS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_RINGS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_BRACELETS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_NECKLACES"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_EARRINGS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_CUPS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_PENTACLES"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_SWORDS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_WANDS"), 0))
	{
		return 1;
	}
	return 0;
}

int func_354(int iParam0)
{
	int iVar0;

	if (func_22())
	{
		return func_366(iParam0, -2074770370, 0);
	}
	else if (func_19())
	{
		if (func_69(iParam0, 96549393))
		{
			return 0;
		}
		if (func_69(iParam0, -111938901) || func_6(iParam0, -949239683) == -1337515701)
		{
			return 1;
		}
		if (func_69(iParam0, -121341956))
		{
			return 1;
		}
		return 0;
	}
	else if (func_20())
	{
		if (((((((func_69(iParam0, 1765172170) || func_69(iParam0, -458578204)) || func_69(iParam0, -1919515848)) || func_69(iParam0, 1443104131)) || func_69(iParam0, 1490540191)) || func_69(iParam0, 1573112293)) || func_69(iParam0, 1939071949)) || func_69(iParam0, 845883585))
		{
			return 0;
		}
		if (((!func_69(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) && !func_69(iParam0, -839724752)) && !func_69(iParam0, -1457797660)) && !func_69(iParam0, 1286414894))
		{
			return 0;
		}
		if (func_554(iParam0) == 0)
		{
			return 0;
		}
	}
	if (func_23(0))
	{
		if (Global_1915180->f_19742 == 2)
		{
			return 1;
		}
		else if (!func_197(iParam0, Global_1915180->f_19742.f_1))
		{
			return 0;
		}
		else if (Global_1915180->f_19742 == 29)
		{
			if (func_198(iParam0))
			{
				return 0;
			}
		}
		else if (Global_1915180->f_19742 == 10)
		{
		}
	}
	if (func_69(iParam0, 949916894) || iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		if (!func_346(iParam0))
		{
			return 0;
		}
	}
	if (INVENTORY::_0x3D10D7179D7034AF(func_145(0), iParam0, func_23(0)))
	{
		return 0;
	}
	if ((func_27() == 0 && func_69(iParam0, -1551542038)) && !func_274())
	{
		return 0;
	}
	if (func_69(iParam0, -1242251796))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) && PED::_0x4E76CB57222A00E5(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return 0;
		}
		iVar0 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (iVar0 != PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX()))
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_355(int iParam0)
{
	if (!func_68(iParam0, 0))
	{
		return false;
	}
	return func_90(iParam0) == 1802292908;
}

int func_356(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 176))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 149:
			return 28;
		case 150:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 151:
		case 155:
		case 160:
		case 164:
		case 168:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 152:
		case 156:
		case 161:
		case 165:
		case 169:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 153:
		case 157:
		case 162:
		case 166:
		case 170:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 159:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 172:
			return 19;
		case 173:
			return 20;
		case 174:
			return 21;
		case 12:
		case 60:
			return 18;
		case 148:
			return 34;
		case 154:
		case 158:
		case 163:
		case 167:
		case 171:
			return 23;
		case 175:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		default:
			break;
	}
	return -1;
}

Vector3 func_357(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_358(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_359(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_360(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

int func_361(int iParam0)
{
	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_9;
}

int func_362(int iParam0)
{
	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_369;
}

float func_363(int iParam0)
{
	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_369.f_1;
}

int func_364(int iParam0, int iParam1)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iParam0, 7, iParam1);
	return iVar0;
}

float func_365(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_366(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if ((iParam1 == 0 || func_23(0)) || bParam2)
	{
		bVar0 = true;
	}
	if (!bParam2)
	{
		if ((!func_68(iParam0, 0) || iParam0 == 1259508039) || iParam0 == joaat("KIT_WARDROBE"))
		{
			return 0;
		}
	}
	if (!bVar0 && func_555(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case -889932290:
		case -283002878:
		case 0:
			if (!func_23(0))
			{
				if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
				{
					return 1;
				}
				if (((((((((((func_366(iParam0, -1559802791, 1) || func_366(iParam0, -1268291907, 1)) || func_366(iParam0, -96974025, 1)) || func_366(iParam0, -1666604090, 1)) || func_366(iParam0, 1561961676, 1)) || func_366(iParam0, -156634416, 1)) || func_366(iParam0, 1061777683, 1)) || func_366(iParam0, -2074770370, 1)) || func_366(iParam0, -693134279, 1)) || func_366(iParam0, -182626652, 1)) || func_366(iParam0, 1783698482, 1)) || func_556(iParam0))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		case -1559802791:
			return (func_69(iParam0, 1422457563) && !func_69(iParam0, 474910316));
		case -1268291907:
			return (func_69(iParam0, 1360707454) && !func_69(iParam0, 474910316));
		case -96974025:
			return (func_69(iParam0, 1009210113) && !func_69(iParam0, 474910316));
		case -1666604090:
			return (func_69(iParam0, -193035453) && !func_69(iParam0, 474910316));
		case 1561961676:
			return (func_69(iParam0, -111938901) && !func_69(iParam0, 474910316));
		case -156634416:
			return (func_69(iParam0, -928967997) && !func_69(iParam0, 474910316));
		case 1061777683:
			return (func_69(iParam0, 747873593) && !func_69(iParam0, 474910316));
		case 1783698482:
			return (func_69(iParam0, 474910316) && !func_23(0));
		case -2074770370:
			if (Global_1939231->f_36 == 1 || Global_1939231->f_36 == 2)
			{
				return func_557(iParam0, iParam1);
			}
			else if (func_6(iParam0, -949239683) == -1337515701 && iParam0 != joaat("KIT_PLAYER_POCKETWATCH"))
			{
				return 1;
			}
			else
			{
				return func_69(iParam0, -111938901);
			}
			break;
		case -693134279:
			return func_530(iParam0, 8388608);
		case -182626652:
			if (func_197(iParam0, Global_1915180->f_19742.f_1))
			{
				func_345(func_145(0), iParam0, 1);
				return 1;
			}
			break;
	}
	return 0;
}

int func_367(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_558(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_145(bParam1), iParam0, bParam3);
}

bool func_368(int iParam0)
{
	return iParam0 != 0;
}

void func_369(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		(Global_1939231->f_38.f_2[iParam0 /*2*/])->f_1 = bParam1;
	}
}

void func_370(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = Global_1939231->f_38.f_1;
	func_559(iVar0, iParam0);
	func_369(iVar0, bParam1);
	if (func_32())
	{
		if (!func_560(iVar0))
		{
			func_561(iVar0);
			return;
		}
	}
	func_562(iParam0);
}

int func_371(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_563(iVar0);
}

int func_372(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = func_563(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

void func_373(int iParam0, int iParam1, bool bParam2)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<14> Var18;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
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
	Var0.f_1 = 1084182731;
	iVar14 = -1;
	iVar17 = INVENTORY::_0x13D234A2A3F66E63(*iParam0);
	Var18.f_9 = -1591664384;
	if (func_564(iVar17, &Var0, &iVar14, &iVar15))
	{
		iVar16 = 0;
		iVar16 = 0;
		while (iVar16 < iVar15)
		{
			if (func_148(&Var18, iVar16, iVar14, iVar15))
			{
				if (func_68(Var18.f_4, 0) && Var18.f_4 != 1259508039)
				{
					*iParam1++;
					if (bParam2 && func_151(Var18.f_4))
					{
						func_176(Var18, 1);
					}
				}
			}
			iVar16++;
		}
		func_162(iVar14);
	}
}

int func_374(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	if (!func_202(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	if (func_209(iParam0, -489628648, &Var2, &iVar1, 0, 1))
	{
		iVar0 = 99;
		iVar33 = 0;
		while (iVar33 < iVar1)
		{
			if (&Var2[iVar33 /*2*/] == 0)
			{
			}
			else
			{
				iVar34 = func_188(&(Var2[iVar33 /*2*/]), 0, 0, 0);
				if (iVar34 < iVar0)
				{
					iVar0 = iVar34;
				}
				iVar33++;
			}
		}
	}
	if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_375(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_0xF8D09EF8CE61D7BF(iParam0, &Var3))
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

void func_376(int iParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939231->f_10489, Global_1939231->f_10483);
	iVar1 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, iVar1, sParam1, uParam2->f_1, *uParam2, sParam4, bParam3, bParam5, sParam6, sParam7);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_HASH_ALIAS(Global_1939231->f_10489, Global_1939231->f_10483, iParam0);
	Global_1939231->f_10483++;
}

int func_377(int iParam0, bool bParam1, var uParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_209(iParam0, bParam1, &Var0, &iVar31, 0, 1))
	{
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			if (&Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH"))
			{
				if (!func_565((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (&Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
			{
				if (!func_566((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (func_188(&(Var0[iVar32 /*2*/]), 0, 0, 1) < (Var0[iVar32 /*2*/])->f_1)
			{
				*uParam2 = { *(Var0[iVar32 /*2*/]) };
				return 0;
			}
			iVar32++;
		}
	}
	return 1;
}

int func_378(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (!INVENTORY::_0x112BCA290D2EB53C(func_145(0), iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_567(&uVar6, iVar0);
	func_568(&uVar6, iVar1);
	func_569(&uVar6, iVar2);
	func_570(&uVar6, iVar3);
	func_571(&uVar6, iVar4);
	func_572(&uVar6, iVar5);
	return uVar6;
}

void func_379(int iParam0)
{
}

void func_380(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_573(iParam0[iVar0], func_131(func_121(0), iParam0[iVar0], 0, 1, 1), 0, 0);
		iVar0++;
	}
}

int func_381()
{
	if (func_141())
	{
		if (Global_1915180->f_19742 == 29)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_382(int iParam0)
{
	vector3 vVar0;

	if (!func_574(iParam0, &vVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		vVar0.f_1 = joaat("INVENTORY_ITEMS");
		vVar0.x = joaat("_PLACEHOLDER");
	}
	return vVar0;
}

int func_383(int iParam0)
{
	if (!INVENTORY::_0x245D07651B1D183B(iParam0, 1879048192))
	{
		return 0;
	}
	if (INVENTORY::_0x245D07651B1D183B(iParam0, 268435456))
	{
		return 1;
	}
	if (INVENTORY::_0x245D07651B1D183B(iParam0, 536870912))
	{
		return 2;
	}
	return 3;
}

void func_384(var uParam0)
{
	if ((uParam0->f_4 == Global_1939231->f_10481 && func_45()) && func_131(func_121(0), Global_1939231->f_10481, 0, 1, 1) > 0)
	{
		uParam0->f_11++;
	}
}

int func_385(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("HUNTERCART01"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_386()
{
	if (func_27() != -1)
	{
		return;
	}
	if (func_210(joaat("KIT_CAMP"), 1))
	{
		if (func_575())
		{
			func_128(joaat("KIT_CAMP"), 1, 1, -142743235);
			func_519(joaat("KIT_CAMP_SIMPLE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else if (func_210(joaat("KIT_CAMP_SIMPLE"), 1))
	{
		if (!func_575())
		{
			func_128(joaat("KIT_CAMP_SIMPLE"), 1, 1, -142743235);
			func_519(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
}

void func_387()
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
	Var0.f_1 = 1835126290;
	Var0.f_4 = 81053684;
	func_576(&Var0, 0, 1, 0);
}

bool func_388(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_389(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_388(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_13 != -1)
	{
		return (Global_17172[iParam0] && iParam1) != 0;
	}
	return (Global_39.f_4458[iParam0] && iParam1) != 0;
}

void func_390(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10508, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10507, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10504, !bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10505, !bParam0);
}

var func_391()
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939231->f_10508))
	{
		return Global_1939231->f_10506;
	}
	return Global_1939231->f_10503;
}

void func_392(int iParam0)
{
	if (func_90(iParam0) == -854348463)
	{
		func_390(0);
	}
	else if (((((((((((((((func_69(iParam0, 1101678925) || func_69(iParam0, 1686880204)) || func_69(iParam0, 173360570)) || func_69(iParam0, -121341956)) || func_69(iParam0, 2000026003)) || func_69(iParam0, -1540973036)) || func_69(iParam0, 1192444843)) || func_6(iParam0, 1224357681) == joaat("CI_TAG_FOLDER_KIT_KEYCHAIN")) || (func_410(iParam0) && !func_69(iParam0, 316290104))) || ((func_27() == 0 && func_118(iParam0, 1, 0)) && !func_69(iParam0, 316290104))) || iParam0 == joaat("CONSUMABLE_COFFEE_GNDS_REG")) || iParam0 == joaat("KIT_GUN_OIL")) || iParam0 == joaat("CONSUMABLE_LOCK_BREAKER")) || iParam0 == joaat("KIT_COLLECTOR_SPADE")) || iParam0 == joaat("KIT_PLACED_EXPLOSIVES")) || iParam0 == joaat("PROVISION_MOONSHINE_POISON"))
	{
		func_577();
	}
	else if ((func_90(iParam0) == 1802292908 && func_6(iParam0, -949239683) == 0) && !iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		func_577();
	}
	else if (func_410(iParam0))
	{
		if (func_69(iParam0, 316290104))
		{
			func_390(1);
		}
		else
		{
			func_390(1);
		}
	}
	else if (func_69(iParam0, 316290104) || func_118(iParam0, 1, 0))
	{
		func_390(1);
	}
	else
	{
		func_390(0);
	}
}

int func_393(int iParam0)
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939231->f_10508))
	{
		if (func_69(iParam0, 316290104))
		{
			return joaat("SATCHEL_PROMPT_BREAKDOWN");
		}
		else if (func_118(iParam0, 1, 0))
		{
			return -2086473757 /* GXTEntry: "Cook" */;
		}
	}
	else if (func_69(iParam0, 1147021565))
	{
		if (func_69(iParam0, -1242251796))
		{
			return -31549930 /* GXTEntry: "Use" */;
		}
		switch (func_6(iParam0, -949239683))
		{
			case -273840653:
			case 238865292:
			case 999632878:
			case 1130235258:
			case 1177617310:
				return -1925143884 /* GXTEntry: "Drink" */;
			case -1915958659:
			case -809056541:
			case 89124942:
			case 1451036371:
			case 1859991422:
			case 1891031775:
				return 356040554 /* GXTEntry: "Eat" */;
			case -1919515848:
			case -262371497:
			case 845883585:
			case 1443104131:
				return -31549930 /* GXTEntry: "Use" */;
		}
	}
	else if (func_6(iParam0, 1224357681) == joaat("CI_TAG_FOLDER_KIT_WATCHES"))
	{
		return -1948542959 /* GXTEntry: "Equip" */;
	}
	return -31549930 /* GXTEntry: "Use" */;
}

void func_394(int iParam0, var uParam1)
{
	bool bVar0;
	struct<10> Var1;
	struct<4> Var15;

	bVar0 = true;
	switch (func_90(iParam0))
	{
		case -1793506273:
		case 235313564:
		case 320213863:
			if (((!func_69(iParam0, 949916894) && !func_69(iParam0, 747873593)) && !func_6(iParam0, -949239683) == -1337515701) && !func_69(iParam0, 1147021565))
			{
				bVar0 = false;
			}
			break;
	}
	if (func_87(iParam0) == joaat("MONEY"))
	{
		bVar0 = false;
	}
	if (joaat("KIT_COLLECTOR_SPADE") == iParam0)
	{
		bVar0 = false;
	}
	if (-492264119 == iParam0 && !func_200())
	{
		bVar0 = false;
	}
	if (func_6(iParam0, -949239683) == -1337515701)
	{
		Var1.f_9 = -1591664384;
		Var15 = { func_111(iParam0, 0, 0) };
		if (func_578(Var15, -1162387149, &Var1, 0, -1))
		{
			if (Var1.f_4 == iParam0)
			{
				bVar0 = false;
			}
		}
	}
	if (func_69(iParam0, 316290104))
	{
		bVar0 = true;
	}
	else if (func_118(iParam0, 1, 0))
	{
		if (func_27() == 0 || !func_579())
		{
			bVar0 = false;
		}
		else
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
		}
	}
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "focusable"))
	{
		bVar0 = false;
	}
	if (MISC::IS_BIT_SET(&Global_1051078, 0) && func_69(iParam0, 1573112293))
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_414(), bVar0);
}

int func_395(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900718->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900718->f_68;
		}
		if (func_580())
		{
			return 1;
		}
		if (Global_1070356->f_3 && !Global_1572887->f_9)
		{
			if ((((*Global_1055966)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_428 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900718->f_67;
		}
		else
		{
			return Global_1900718->f_68;
		}
	}
	if (iParam0 == 0 && func_281(func_280(0)))
	{
		return 1;
	}
	if ((Global_1939178 && 81919 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1900853)
		{
			return 1;
		}
	}
	switch (func_581(func_280(0)))
	{
		case -1:
			return 0;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return 0;
}

int func_396(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_342(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_540(&Var0, func_291(0));
	}
	if (!func_343(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_162(iVar14);
	return uVar15;
}

struct<4> func_397(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_111(iParam0, bParam1, 0) };
	return func_112(iParam0, Var0, Var0.f_4, bParam1);
}

int func_398(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_68(iParam0, 0) && !func_415(func_207(iParam0), 2))
	{
		return 0;
	}
	if (func_87(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_212(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, iParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_145(bParam3), iParam0);
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

int func_400(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return 1;
		default:
			return 0;
	}
	return 0;
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			return 1;
	}
	return 0;
}

int func_402(int iParam0)
{
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0xA4550FE9C512E3DD(iParam0);
}

int func_403(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[10];
	int iVar21;
	int iVar22;

	if (!func_582(iParam0, iParam1, &Var0, &iVar21, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar22 = 0;
	while (iVar22 < iVar21)
	{
		if (&Var0[iVar22 /*2*/] == joaat("CURRENCY_CASH"))
		{
			return (Var0[iVar22 /*2*/])->f_1;
		}
		else if (&Var0[iVar22 /*2*/] == 0)
		{
		}
		else
		{
			iVar22++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

float func_404(int iParam0, int iParam1)
{
	float fVar0;

	fVar0 = 1f;
	if (!func_68(iParam1, 0))
	{
		return fVar0;
	}
	if (!func_583(iParam0, iParam1, &fVar0))
	{
	}
	return fVar0;
}

float func_405(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	float fVar3;
	float fVar4;

	fVar1 = 1f;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		bVar2 = false;
		switch (((*uParam0)[iVar0 /*7*/])->f_1)
		{
			case 1:
				if (iParam1 == ((*uParam0)[iVar0 /*7*/])->f_2)
				{
					return ((*uParam0)[iVar0 /*7*/])->f_6;
				}
				break;
			case 2:
				if (func_87(iParam1) == ((*uParam0)[iVar0 /*7*/])->f_3)
				{
					bVar2 = true;
				}
				break;
			case 3:
				fVar3 = BUILTIN::TO_FLOAT(func_584(iParam1, -915411861, 1, 0, 1, 0));
				if (((*uParam0)[iVar0 /*7*/])->f_5 <= 0f)
				{
					fVar4 = (fVar3 + 1f);
				}
				else
				{
					fVar4 = ((*uParam0)[iVar0 /*7*/])->f_5;
				}
				if (fVar3 <= fVar4 && fVar3 >= ((*uParam0)[iVar0 /*7*/])->f_4)
				{
					bVar2 = true;
				}
				break;
			case 4:
				bVar2 = true;
				break;
			case 0:
				break;
		}
		if (bVar2)
		{
			fVar1 = (fVar1 * ((*uParam0)[iVar0 /*7*/])->f_6);
		}
		iVar0++;
	}
	return fVar1;
}

char* func_406(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_407(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1915180->f_20144.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (&Global_1915180->f_20144.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_408(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_356(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_333(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_585(iVar5);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar6 = iParam0;
		Var0.f_2 = 549615901;
		Var0.f_3 = iVar6;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_409(int iParam0, var uParam1)
{
	*uParam1 = func_586(iParam0);
	return *uParam1 != 0;
}

int func_410(int iParam0)
{
	if (!func_68(iParam0, 0))
	{
	}
	if (func_69(iParam0, 1286414894))
	{
		return 1;
	}
	return 0;
}

int func_411(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!PED::_IS_PED_CARRYING(iParam0))
	{
		return iVar4;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else
		{
			(*iParam1)[iVar4] = iVar1;
			iVar4++;
			if (iVar4 == iParam2)
			{
			}
			else
			{
				iVar2++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iVar4;
		}
	}

int func_412(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_IS_ENTITY_A_BIRD(iParam0))
	{
		iVar0 = func_371(&iParam0);
		if (!func_68(iVar0, 0))
		{
			iVar0 = func_372(iParam0);
		}
	}
	else
	{
		iVar0 = func_372(iParam0);
	}
	return iVar0;
}

int func_413(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_IN_SESSION())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if ((Global_1131092->f_9[iVar0 /*10*/])->f_4.f_2 != 0 && (Global_1131092->f_9[iVar0 /*10*/])->f_2 == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
		if (bParam1)
		{
			func_89("GC_H_PLACE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
	if (func_588(func_587(iVar1)))
	{
		return 1;
	}
	if (bParam1)
	{
		func_89("GC_H_PLACE", 10000, 0, 0, 0, 1);
	}
	return 0;
}

var func_414()
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939231->f_10508))
	{
		return Global_1939231->f_10507;
	}
	return Global_1939231->f_10504;
}

int func_415(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_416(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

void func_417(int iParam0, bool bParam1, var uParam2, int iParam3)
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
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xE81D0378A384E755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
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
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
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
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_418(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_322(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_163("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_148(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_589(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_162(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_162(iVar1);
	}
	return 0;
}

bool func_419(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_68(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_90(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_590(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_591(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_592(iParam0);
	iVar2 = func_591(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_420(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_421(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;

	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_212(iParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return 0;
		}
	}
	uVar0 = 5;
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, &uVar0, 5))
	{
		return 0;
	}
	if (!func_593(uParam0, iParam1, &uVar0, iParam4, bParam5))
	{
		return 0;
	}
	return 1;
}

struct<16> func_422(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_112(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_423(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_594(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_595(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_596(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

int func_424(int iParam0)
{
	if (func_68(iParam0, 0))
	{
		if (func_69(iParam0, -1242251796))
		{
			if (func_69(iParam0, 2060589226))
			{
				return func_597();
			}
			return func_598();
		}
		else if (func_69(iParam0, 1919582297))
		{
			return func_433();
		}
		else if (func_69(iParam0, 1647670816))
		{
			return func_599();
		}
		else if (func_69(iParam0, 1147021565))
		{
			return func_436();
		}
	}
	if (Global_1939067->f_12)
	{
		return func_598();
	}
	else
	{
		return func_436();
	}
	return func_436();
}

int func_425(int iParam0)
{
	if ((((((((((func_69(iParam0, 1147021565) || func_69(iParam0, -136654233)) || func_69(iParam0, -524514947)) || func_69(iParam0, -1238310989)) || func_69(iParam0, 1765172170)) || func_69(iParam0, 1490540191)) || func_69(iParam0, 1573112293)) || func_69(iParam0, -1242251796)) || func_69(iParam0, 1919582297)) || func_69(iParam0, -2085281117)) || iParam0 == joaat("CONSUMABLE_OFFAL"))
	{
		return 1;
	}
	return 0;
}

int func_426()
{
	return 32759936;
}

int func_427()
{
	return 33012981;
}

int func_428()
{
	return 24885248;
}

int func_429()
{
	return 33269904;
}

int func_430()
{
	return 16228343;
}

int func_431()
{
	return 33269760;
}

int func_432()
{
	return 33030143;
}

int func_433()
{
	return 33274887;
}

int func_434()
{
	return 32189572;
}

int func_435()
{
	return 31080423;
}

int func_436()
{
	return 33012951;
}

int func_437()
{
	return 33022080;
}

bool func_438(int iParam0)
{
	return func_211(Global_1939067->f_7, iParam0);
}

int func_439(bool bParam0)
{
	int iVar0;

	if (func_438(1) && !Global_1956172->f_2)
	{
		if (bParam0)
		{
			func_89("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((func_438(2) && !Global_1956172->f_2) && MISC::GET_GAME_TIMER() >= Global_17150)
	{
		if (bParam0)
		{
			iVar0 = func_600(Global_34);
			if (iVar0 != 0)
			{
				if (ENTITY::_0x9A100F1CF4546629(iVar0))
				{
					func_89("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return 0;
				}
			}
			func_89("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_438(4194304))
	{
		return 0;
	}
	return 1;
}

int func_440(bool bParam0, bool bParam1)
{
	struct<2> Var0;

	if (PED::_IS_PED_CARRYING(Global_34))
	{
		PED::_0x6B67320E0D57856A(Global_34, &Var0, 2, 0);
		if (bParam1)
		{
			switch (Var0.f_1)
			{
				case 4:
					return 1;
				default:
					break;
			}
		}
		if (bParam0)
		{
			func_89("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_441(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (PED::_0x1D46B417F926D34D(Global_34))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_34, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_34);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case joaat("ROWBOAT"):
			case joaat("HANDCART"):
				if (bParam0)
				{
					func_89("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return 0;
			case joaat("BREACH_CANNON"):
			case joaat("GATLING_GUN"):
			case joaat("GATLINGMAXIM02"):
			case joaat("HOTCHKISS_CANNON"):
				if (bParam0)
				{
					func_89("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return 0;
		}
		if (!func_101(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_34))
		{
			if (bParam2 || VEHICLE::_0x2963B5C1637E8A27(iVar0) == Global_34)
			{
				return 0;
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_34))
	{
		return 0;
	}
	return 1;
}

int func_442(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_443(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_444(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			return 0;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return 1;
	}
	return 0;
}

bool func_445()
{
	return (Global_1939231->f_1 || &Global_1939231 == 1);
}

int func_446(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&(Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0] != 0 && &(Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_447(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

int func_448()
{
	if (Global_17172.f_2954 == 1)
	{
		return 0;
	}
	if (func_601(4))
	{
		return 0;
	}
	if (func_451())
	{
		return 1;
	}
	if (func_602())
	{
		return 0;
	}
	if (func_603(1, 255))
	{
		return 0;
	}
	if (func_281(func_604()) && Global_1199613->f_1.f_20 != 3)
	{
		return 0;
	}
	return 1;
}

int func_449(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&(Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0] != 0 && func_210(&((Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0]), 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_450(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&(Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0] != 0 && func_605(&((Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_451()
{
	return func_606(func_280(0));
}

bool func_452(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_IS_METAPED_USING_COMPONENT(iParam0, iParam1);
}

int func_453()
{
	int iVar0;
	int iVar1;

	if (PED::_IS_PED_CARRYING(Global_34))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("WEAPON_UNARMED"))
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_607(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_34, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_34, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_607(iVar0)) || WEAPON::_IS_WEAPON_LASSO(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_454(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_608(iParam0);
	iVar1 = func_182(iVar0);
	if (iVar1 != iParam0)
	{
		func_609(iVar1, 4);
	}
	if (!func_388(iParam0))
	{
		return;
	}
	if (func_183(iParam0))
	{
		return;
	}
	func_609(iParam0, 4);
	func_610(iParam0, bParam1);
	if (!func_611(iParam0))
	{
		func_612(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_395(0, 0, 1))
		{
			func_613(1, 6);
		}
	}
}

int func_455(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (TASK::_0x2D19BC4DF626CBE7(iParam0, iParam1, iParam2, iParam3))
	{
		TASK::_TASK_ITEM_INTERACTION(iParam0, iParam1, iParam2, iParam3, 0, -1082130432);
		Global_1939067->f_26 = 1;
		return 1;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	return 0;
}

void func_456(int iParam0)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;

	Var0.f_1 = 20;
	if ((func_69(iParam0, 1573112293) || func_69(iParam0, 672467738)) || func_69(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_87(iParam0) == joaat("CONSUMABLE"))
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar29]), &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				uVar30 = func_614(0, Var22.f_2);
				func_615(Var22.f_2);
				bVar39 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				uVar31 = func_614(2, Var22.f_2);
				func_616(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				uVar32 = func_614(1, Var22.f_2);
				func_617(Var22.f_2);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == Var22.f_1)
			{
				fVar33 = func_618(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_619(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == Var22.f_1)
			{
				fVar34 = func_618(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_619(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == Var22.f_1)
			{
				fVar35 = func_618(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_619(1, fVar35, 1, 1, bVar37);
			}
			else if (joaat("EFFECT_HEALTH_CORE_GOLD") == Var22.f_1)
			{
				fVar36 = func_620(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_621(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE_GOLD") == Var22.f_1)
			{
				fVar36 = func_620(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_621(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE_GOLD") == Var22.f_1)
			{
				fVar36 = func_620(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_621(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_620(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_621(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_620(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_621(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_620(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_621(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_622(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_69(iParam0, -537818634))
		{
			func_308(func_539(joaat("MEDICINE_ITEMS_USED")), 1);
		}
		if (func_69(iParam0, -1457797660))
		{
			func_308(func_539(joaat("PROVISION_ITEMS_USED")), 1);
		}
		if (bVar38)
		{
			func_308(func_539(joaat("DEADEYE_ITEMS_USED")), 1);
		}
		if (iParam0 == -241345764 || iParam0 == -1735850413)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_SALOONSNACK_00"), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(uVar30, uVar32, uVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

void func_457(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

bool func_458(int iParam0)
{
	return &Global_1951141->f_593[iParam0] > 0;
}

void func_459(int iParam0)
{
	Global_1951141->f_593[iParam0] = &Global_1951141->f_593[iParam0] + 1;
}

int func_460()
{
	if (Global_1951141->f_3253)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1951141->f_3251)) < 1250)
	{
		return 1;
	}
	if (func_623())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34))
	{
		return 1;
	}
	return 0;
}

int func_461(int iParam0)
{
	int iVar0;

	iVar0 = func_90(iParam0);
	if ((iVar0 == 81053684 || iVar0 == -525676072) || func_69(iParam0, -1348134986))
	{
		return 1;
	}
	return 0;
}

void func_462(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_463(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_469(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_464(int iParam0)
{
	if (-1829635046 == func_624(81053684))
	{
		if (func_469(iParam0))
		{
			return 1;
		}
	}
	else if (func_625(-525676072, iParam0))
	{
		if (func_469(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_465()
{
	int iVar0;

	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_453())
	{
		case 0:
			iVar0 = joaat("MASK_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_466()
{
	int iVar0;

	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_453())
	{
		case 0:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_467()
{
	int iVar0;

	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_453())
	{
		case 0:
			iVar0 = joaat("MASK_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_468()
{
	int iVar0;

	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_453())
	{
		case 0:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_469(int iParam0)
{
	if (func_625(81053684, iParam0))
	{
		return 1;
	}
	if (func_625(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_470(int iParam0)
{
	Global_1951141 = (&Global_1951141 - (Global_1951141 && iParam0));
}

void func_471(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[func_257(iParam0, 1) /*12*/])->f_11 = ((Global_1951141->f_81[func_257(iParam0, 1) /*12*/])->f_11 - ((Global_1951141->f_81[func_257(iParam0, 1) /*12*/])->f_11 && iParam1));
}

int func_472(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1951141->f_3109.f_27;
		case 81053684:
			return Global_1951141->f_3109.f_29;
		case -525676072:
			return Global_1951141->f_3109.f_28;
		case -1719060085:
			return Global_1951141->f_3109.f_30;
		case -413129408:
			return Global_1951141->f_3109.f_31;
		case -999503751:
			if (bParam1)
			{
				return Global_1951141->f_3109.f_26;
			}
			else
			{
				return func_626();
			}
			break;
	}
	return 0;
}

int func_473(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1951141->f_3109.f_32.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1951141->f_3109.f_32.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1951141->f_3109.f_32;
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

int func_474(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1951141->f_3109.f_25 >= 24)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_339(iVar1, &uVar0))
	{
		return 0;
	}
	if (!func_627(iParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_628(iParam0, 0))
	{
		return 0;
	}
	Global_1951141->f_3109[Global_1951141->f_3109.f_25] = iVar1;
	Global_1951141->f_3109.f_25++;
	*uParam1++;
	return 1;
}

int func_475(int iParam0, int iParam1)
{
	return 1;
}

int func_476()
{
	return Global_1951141->f_1;
}

void func_477()
{
	int iVar0;

	if (func_27() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1951141->f_3109.f_25)
		{
			Global_11553[iVar0] = &Global_1951141->f_3109[iVar0];
			iVar0++;
		}
		Global_11553.f_26 = Global_1951141->f_3109.f_26;
		Global_11553.f_27 = Global_1951141->f_3109.f_27;
		Global_11553.f_28 = Global_1951141->f_3109.f_28;
		Global_11553.f_29 = Global_1951141->f_3109.f_29;
		Global_11553.f_30 = Global_1951141->f_3109.f_30;
		Global_11553.f_25 = Global_1951141->f_3109.f_25;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1951141->f_3109.f_25)
	{
		Global_17172.f_54.f_644[iVar0] = &Global_1951141->f_3109[iVar0];
		iVar0++;
	}
	Global_17172.f_54.f_644.f_26 = Global_1951141->f_3109.f_26;
	Global_17172.f_54.f_644.f_27 = Global_1951141->f_3109.f_27;
	Global_17172.f_54.f_644.f_28 = Global_1951141->f_3109.f_28;
	Global_17172.f_54.f_644.f_29 = Global_1951141->f_3109.f_29;
	Global_17172.f_54.f_644.f_30 = Global_1951141->f_3109.f_30;
	Global_17172.f_54.f_644.f_25 = Global_1951141->f_3109.f_25;
}

bool func_478(int iParam0)
{
	return func_630(func_629(iParam0));
}

void func_479(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_631();
	}
	if (bParam0)
	{
		func_243(8);
		func_243(512);
	}
	else
	{
		func_243(8);
		func_243(16);
	}
}

void func_480(int iParam0, int iParam1, bool bParam2)
{
	func_632(iParam0, 0, 0);
	func_253(iParam1, 1, bParam2, 0);
}

int func_481(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return 735520874;
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
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
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
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

void func_482()
{
	int iVar0;

	Global_1951141->f_1538 = Global_1951141->f_1657;
	Global_1951141->f_1534 = Global_1951141->f_1536;
	Global_1951141->f_1534.f_1 = Global_1951141->f_1536.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1951141->f_1538.f_1[iVar0 /*3*/]) = { *(Global_1951141->f_1657.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_483(int iParam0)
{
	func_471(iParam0, 8, 6);
}

void func_484(int iParam0)
{
	func_633(&(Global_1951141->f_2760), iParam0);
}

void func_485(int iParam0, int iParam1)
{
	func_634(&(Global_1951141->f_2760), iParam0, iParam1);
}

void func_486(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_487(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar2 = 0;
	iVar3 = iParam1;
	iVar4 = func_90(iVar3);
	iVar5 = 0;
	if (func_476() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar2 = 1;
	}
	if (bParam3)
	{
		iVar5 = 3;
	}
	switch (iVar4)
	{
		case 1297434125:
			if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
				{
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 0 || (uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("BASE"))
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
					}
					else
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 1334603721;
					}
					func_485(iVar0, iVar5);
				}
				Jump @3216; //curOff = 253
				if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
				{
				}
				else
				{
					iVar0 = 34;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("BASE");
						func_485(iVar0, iVar5);
					}
					iVar0 = 36;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
						func_485(iVar0, iVar5);
					}
					iVar0 = 37;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, -1278198125))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_485(iVar0, iVar5);
					}
					iVar0 = 18;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
					{
						iVar1 = &uParam0->f_1[iVar0 /*3*/];
						if (912453393 == func_90(iVar1) && (uParam0->f_1[iVar0 /*3*/])->f_1 != -2081918609)
						{
							(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							func_485(iVar0, iVar5);
						}
					}
					Jump @3216; //curOff = 543
					if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
					{
					}
					else
					{
						iVar0 = 36;
						func_485(iVar0, iVar5);
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, -1473580422))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_69(iVar1, 1469783911))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							}
							else if (func_635(&(uParam0->f_1[iVar0 /*3*/]), iVar2, -2081918609) != -1)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							}
							else
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("BASE");
							}
						}
						iVar0 = 18;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, 1583165364))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_90(iVar1) == 912453393)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
								func_485(iVar0, iVar5);
							}
						}
						iVar0 = 35;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, -1650340550))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_90(iVar1) == 1769055947)
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_485(iVar0, iVar5);
							}
						}
						Jump @3216; //curOff = 918
						if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
						{
						}
						else
						{
							iVar0 = 36;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, 1718965018))
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("BASE");
							}
							func_485(iVar0, iVar5);
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_485(iVar0, iVar5);
							}
							iVar0 = 20;
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if ((&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar1, 1090938458)) && func_69(iVar3, 475297062))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_485(iVar0, iVar5);
							}
							Jump @3216; //curOff = 1171
							func_485(36, iVar5);
							iVar0 = 18;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_485(iVar0, iVar5);
							}
							iVar0 = 17;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_485(iVar0, iVar5);
							}
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && 1769055947 == func_90(&(uParam0->f_1[iVar0 /*3*/])))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_485(iVar0, iVar5);
							}
							iVar0 = 29;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_485(iVar0, iVar5);
							}
							Jump @3216; //curOff = 1454
							func_485(16, iVar5);
							if (func_260(iVar3, 0))
							{
							}
							else
							{
								iVar0 = 29;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, 1126863852))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									func_485(iVar0, iVar5);
								}
								iVar0 = 16;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, -985549034))
								{
									if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("BASE");
									}
									else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
									}
								}
								iVar0 = 12;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, -1527414429))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									func_485(iVar0, iVar5);
								}
								Jump @3216; //curOff = 1747
								if (func_260(iVar3, 0))
								{
								}
								else
								{
									iVar0 = 12;
									if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, -1527414429))
									{
										uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
										(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
										func_485(iVar0, iVar5);
									}
									iVar0 = 16;
									if (((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721) && func_69(iVar3, -985549034))
									{
										if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("BASE");
											func_485(iVar0, iVar5);
										}
										else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
											func_485(iVar0, iVar5);
										}
									}
									Jump @3216; //curOff = 1988
									if (func_260(iVar3, 0))
									{
									}
									else
									{
										iVar0 = 17;
										if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
										{
											uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
											(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
											func_485(iVar0, iVar5);
										}
										if ((uParam0->f_1[iParam2 /*3*/])->f_1 != -2081918609)
										{
											iVar0 = 34;
											iVar1 = &uParam0->f_1[iVar0 /*3*/];
											if (func_69(iVar1, 1583165364))
											{
												(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
												func_485(iParam2, iVar5);
											}
											else
											{
												iVar0 = 35;
												iVar1 = &uParam0->f_1[iVar0 /*3*/];
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && 1769055947 == func_90(iVar1))
												{
													(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
													func_485(iParam2, iVar5);
												}
											}
										}
										Jump @3216; //curOff = 2214
										if (func_260(iVar3, 0))
										{
										}
										else
										{
											iVar0 = 12;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_485(iVar0, iVar5);
											}
											iVar0 = 13;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_485(iVar0, iVar5);
											}
											iVar0 = 25;
											if (&Global_1951141->f_1657.f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, 675650051))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_485(iVar0, iVar5);
											}
											Jump @3216; //curOff = 2438
											if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
											{
												iVar0 = 37;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_485(iVar0, iVar5);
												}
												iVar0 = 38;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_485(iVar0, iVar5);
												}
												iVar0 = 35;
												if (-923693316 == func_90(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_485(iVar0, iVar5);
												}
											}
											else
											{
												iVar0 = 35;
												iVar1 = &uParam0->f_1[iVar0 /*3*/];
												if ((func_69(iVar3, 813132419) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/]) && func_90(iVar1) == -923693316)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_485(iVar0, iVar5);
												}
												if ((func_69(iVar3, -1650340550) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/]) && func_90(iVar1) == 1769055947)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_485(iVar0, iVar5);
												}
												iVar0 = 37;
												if (func_69(iVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_485(iVar0, iVar5);
												}
											}
											Jump @3216; //curOff = 2921
											iVar0 = 37;
											if (func_69(iVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_485(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3003
											iVar0 = 10;
											if (-525676072 == func_90(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_485(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3067
											iVar0 = 12;
											if (81053684 == func_90(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_485(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3131
											if (!func_69(iVar3, -1348134986))
											{
											}
											else
											{
												iVar0 = 10;
												if (-525676072 == func_90(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_485(iVar0, iVar5);
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
			switch (func_481(iParam2, 1))
			{
				case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
					if (func_636(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) && func_69(iVar3, -1230785684))
					{
						iVar0 = 27;
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_485(iVar0, iVar5);
					}
					break;
				case 1742327865:
					iVar0 = 16;
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("BASE");
						func_485(iVar0, iVar5);
					}
					else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
						func_485(iVar0, iVar5);
					}
					break;
				case 1250092473:
					iVar0 = 12;
					if (joaat("NECKTIES") == PED::_GET_PED_COMPONENT_CATEGORY(&(uParam0->f_1[iVar0 /*3*/]), iVar2, true))
					{
						if ((iParam1 == &Global_1951141->f_81[iParam2 /*12*/] || func_69(iVar3, 1872585553)) || iVar4 == 1882579758)
						{
							uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
							(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							func_485(iVar0, iVar5);
						}
					}
					iVar0 = 17;
					if (!func_260(&(uParam0->f_1[iVar0 /*3*/]), 0) && func_69(iVar3, 1467402774))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_485(iVar0, iVar5);
					}
					iVar0 = 29;
					if (!func_260(&(uParam0->f_1[iVar0 /*3*/]), 0) && func_69(iVar3, 1126863852))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_485(iVar0, iVar5);
					}
					break;
				case joaat("MP_COMPONENT_TYPE_HAIR"):
					if (iParam1 == -230310728 || iParam1 == 1326838792)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("BASE");
					}
					break;
				case joaat("MP_COMPONENT_TYPE_BEARD"):
					if (iParam1 == joaat("CLOTHING_ITEM_M_BEARD_STUBBLE"))
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("BASE");
					}
					break;
			}
		}

int func_488(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (func_476() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_635(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_637(iParam0, func_481(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_489(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_250(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_638(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1951141->f_1657 != 491602716 || !func_639(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_69(Global_1951141->f_1657, -166674229) && (Global_1951141->f_1657 != 491602716 || !func_639(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1951141->f_1657 = 491602716; /* GXTEntry: "Custom Outfit" */
			Global_1951141->f_1538 = 491602716; /* GXTEntry: "Custom Outfit" */
			func_640(-1, 0, 6);
			func_93(27, 0, 0, 0, 0);
		}
	}
	if (bParam3)
	{
		func_479(0, 1);
	}
}

int func_490(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_641(&uParam0, bParam4, bParam5, iParam6);
}

int func_491(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (func_360(Global_34, iParam0, 0, 1) < 2f && PED::_0xD543D3A8FDE4F185(Global_34, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_492()
{
	return Global_1915180->f_20141;
}

int func_493(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!bParam7 && UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return 0;
	}
	iVar0 = &Global_1275573->f_154[&Global_1275573];
	iVar1 = Global_1275573->f_8;
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = PED::_0xB655DB7582AEC805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::_0xEC7E480FF8BD0BED(Global_34))
			{
				return 0;
			}
			if (PED::_0x4912DFE492DB98CD(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			if (bParam6 && Global_1099294->f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915180->f_20136 || Global_1915180->f_21989.f_1)
		{
			return 0;
		}
		if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_642())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1939067->f_10 || Global_1939067->f_11) || Global_1939067->f_12) || Global_1939067->f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1225057->f_9330 != -1)
		{
			return 0;
		}
		if (((*Global_1122836)[iVar4 /*54*/])->f_34 & 1 != 0 && ((*Global_1122836)[iVar4 /*54*/])->f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1124829->f_293)
		{
			return 0;
		}
		if (Global_1572887->f_106.f_75 > 10 && Global_1572887->f_106.f_75 < 14)
		{
			return 0;
		}
		else if (Global_1572887->f_106.f_75 > 14)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if ((Global_1048576 || Global_2883584) /* PointerArith */)
			{
				return 0;
			}
			if (&Global_1048581)
			{
				return 0;
			}
			if (&Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1070356->f_634.f_601;
		case 3:
			return Global_1070356->f_634.f_2103;
		case 4:
			return Global_1070356->f_634.f_12605;
		case 5:
			return Global_1070356->f_634.f_12907;
		case 6:
			return Global_1070356->f_634.f_15909;
		case 7:
			return Global_1070356->f_634.f_15980;
		case 8:
			return Global_1070356->f_634.f_17182;
		default:
			break;
	}
	return -1;
}

bool func_496(int iParam0, int iParam1, int iParam2)
{
	return func_211((*Global_1184801)[iParam2 /*10*/][iParam0], iParam1);
}

var func_497(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_643() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1275573->f_10;
	iVar6 = Global_1275573->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_644());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_644());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_644());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_645(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar2])))
		{
			iVar10 = &Global_1275573->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_646(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1275573->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_647(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_648(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_0xF256A75210C5C0EB(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

int func_498(var uParam0, struct<21> Param1)
{
	if (!func_649(uParam0))
	{
		return 0;
	}
	*(uParam0->f_2[*uParam0 /*21*/]) = { Param1 };
	*uParam0++;
	return 1;
}

bool func_499(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_500(int iParam0)
{
	if (func_502(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_501(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 98304 == 0)
	{
		return 0;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3327)
	{
		if ((Global_39.f_3327[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3327[iVar0 /*3*/] - iVar1);
			if ((Global_39.f_3327[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && (Global_1904613->f_31[iParam0 /*9*/])->f_2 & 32768 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_502(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_503(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_504()
{
	if (!func_273())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

bool func_505()
{
	return (func_367(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_490(func_112(joaat("WARDROBE"), func_290(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_506(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_145(0);
	*iParam1 = { func_112(iParam0, func_291(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, iParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_507(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, bParam2);
}

int func_508(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_145(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

struct<28> func_509(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_145(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_515(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_510(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_594(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_595(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28), iVar0, uParam1);
		}
	}
	else
	{
		return func_596(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_511(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<25> Var0;
	struct<24> Var25;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_145(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_515(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_512(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_595(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 25), iVar0, uParam1);
		}
	}
	else
	{
		return func_596(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_513(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_145(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_515(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_514(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_594(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_595(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17), iVar0, uParam1);
		}
	}
	else
	{
		return func_596(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_515(var uParam0, bool bParam1)
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
	if (bParam1)
	{
		Var0.f_15 = func_212(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_302() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_516(int iParam0)
{
	if (func_69(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_69(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_69(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

struct<12> func_517(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("SKINNING_DAMAGE_POOR_QUALITY_POOR");
					break;
				case 1:
					iVar0 = joaat("SKINNING_DAMAGE_POOR_QUALITY_GOOD");
					break;
				case 2:
					iVar0 = joaat("SKINNING_DAMAGE_POOR_QUALITY_PERFECT");
					break;
				case 3:
					iVar0 = joaat("SKINNING_DAMAGE_POOR_QUALITY_RARE");
					break;
				case 4:
					iVar0 = joaat("SKINNING_DAMAGE_POOR_QUALITY_LEGENDARY");
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("SKINNING_DAMAGE_GOOD_QUALITY_POOR");
					break;
				case 1:
					iVar0 = joaat("SKINNING_DAMAGE_GOOD_QUALITY_GOOD");
					break;
				case 2:
					iVar0 = joaat("SKINNING_DAMAGE_GOOD_QUALITY_PERFECT");
					break;
				case 3:
					iVar0 = joaat("SKINNING_DAMAGE_GOOD_QUALITY_RARE");
					break;
				case 4:
					iVar0 = joaat("SKINNING_DAMAGE_GOOD_QUALITY_LEGENDARY");
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_POOR");
					break;
				case 1:
					iVar0 = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_GOOD");
					break;
				case 2:
					iVar0 = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_PERFECT");
					break;
				case 3:
					iVar0 = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_RARE");
					break;
				case 4:
					iVar0 = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_LEGENDARY");
					break;
			}
			break;
	}
	if (bParam3)
	{
		func_650(uParam2, joaat("LOOT_TYPE_BREAKDOWN"));
	}
	else
	{
		func_650(uParam2, joaat("LOOT_TYPE_SKINNING"));
	}
	func_650(uParam2, iVar0);
	return *uParam2;
}

int func_518(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (0 == iParam0)
	{
		return 0;
	}
	return func_651(iParam0, uParam1, &uVar0, iParam2);
}

int func_519(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<13> Var6;
	int iVar29;
	struct<2> Var30;
	bool bVar32;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (!func_652(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_653(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_654(iParam0, bParam2);
	iVar2 = 0;
	if (func_87(iParam0) == joaat("CLOTHING"))
	{
		if (!func_69(iParam0, 866047851) && !func_69(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_530(iParam0, 8388608) && !func_655(27))
	{
		func_656(27);
	}
	func_657(iParam0);
	if (!bVar3)
	{
		if (func_69(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_659(func_658(iParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(iVar1))
			{
				if (func_27() == -1)
				{
					func_660(iVar1);
				}
				if (func_114(0) && func_661(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_662(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_663(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_87(iParam0) == joaat("WEAPON"))
		{
			if (!func_664(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_87(iParam0) == joaat("AMMO") && func_558(iParam0))
		{
			if (!func_665(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_69(iParam0, 866047851))
		{
		}
		else if (func_69(iParam0, 2000026003))
		{
		}
		else if (func_69(iParam0, -103750053))
		{
			func_308(func_666(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_308(func_307(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_69(iParam0, -121341956) && !func_69(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR"))
			{
				func_109(534, 0);
			}
			if (func_69(iParam0, -2017733358) || func_69(iParam0, -1369131378))
			{
			}
		}
		else if (func_69(iParam0, -136654233))
		{
			if (func_69(iParam0, -1021472396))
			{
			}
		}
		else if (func_69(iParam0, -1466706512) && func_69(iParam0, 1147021565))
		{
			func_109(517, 0);
		}
		else if (func_69(iParam0, 1147021565) && func_69(iParam0, -524514947))
		{
		}
		else if (func_69(iParam0, 554195525))
		{
		}
		else if (func_69(iParam0, 589988438))
		{
			if (func_667())
			{
				func_668(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_69(iParam0, 787083290) && func_69(iParam0, 949916894))
		{
			func_669(iParam0);
		}
		else if (func_69(iParam0, -1718133314))
		{
			func_670(iParam0);
		}
		else if (func_69(iParam0, -1738650224))
		{
			func_671(iParam0);
		}
		else if (func_69(iParam0, -1112814642) && func_69(iParam0, 949916894))
		{
			func_672(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1939067->f_21 = 0;
		}
		else if (func_69(iParam0, 1841149704))
		{
			func_673();
		}
		else if (func_69(iParam0, -1979000645))
		{
		}
		else if (func_69(iParam0, 606799272))
		{
		}
		else if (func_69(iParam0, -1112814642) && func_69(iParam0, -1697809989))
		{
		}
		else if (func_69(iParam0, -2017733358) || func_69(iParam0, -1369131378))
		{
		}
		else if (func_69(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_69(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_210(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_519(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_210(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_519(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_210(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_519(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_210(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_519(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_210(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_519(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_210(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_519(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_69(iParam0, -839724752) && func_530(iParam0, 4))
		{
		}
		else if (func_69(iParam0, 1399091007))
		{
			func_674(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
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
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("REWARD_ABANDONED_LOOT_MALE");
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
			case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_675(271, func_190(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_675(269, func_190(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_675(270, func_190(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_676(683, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_676(683, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_676(683, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_676(683, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
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
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_676(684, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_676(684, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_109(524, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_109(527, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_655(1))
				{
					func_109(520, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_109(519, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_27() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_109(532, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar5 = iParam0;
		func_677(&iVar5);
		if (!func_663(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_114(0))
		{
			return 1;
		}
		if (func_87(iParam0) == joaat("CLOTHING"))
		{
			func_678(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_114(0) && !func_306())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_519(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_679(iVar2, 0);
		}
	}
	Var30 = { func_324(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_0x6A0184E904CDF25E(&Var30, iVar0);
	}
	func_680(iParam0);
	if (fParam6 > 0f)
	{
		if (func_69(iParam0, -839724752))
		{
			func_681(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_323(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_520(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"):
		case joaat("CONSUMABLE_HORSE_REVIVER"):
			return 1;
	}
	return 0;
}

int func_521(int iParam0, int iParam1)
{
	ATTRIBUTE::_0xD962F8579D702DB5();
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0;
	}
	if (PED::_0x7FC84E85D98F063D(Global_34))
	{
		return 0;
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 176, true);
	TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
	TASK::TASK_REVIVE_TARGET(Global_34, iParam0, iParam1);
	func_128(iParam1, 1, 0, 562618531);
	return 1;
}

int func_522()
{
	return &Global_1904591;
}

void func_523(int iParam0)
{
	Global_1904591->f_2 = iParam0;
}

void func_524(int iParam0)
{
	Global_1904591->f_1 = iParam0;
}

void func_525(int iParam0)
{
	Global_1904591->f_5 = iParam0;
}

void func_526(int iParam0, int iParam1, var uParam2)
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

bool func_527()
{
	return !&Global_1912978;
}

void func_528(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1912978->f_3)
	{
		if ((((&Global_1912978->f_4[iVar0 /*6*/] == iParam0 && (Global_1912978->f_4[iVar0 /*6*/])->f_2 == bParam2) && (Global_1912978->f_4[iVar0 /*6*/])->f_3 == bParam3) && (Global_1912978->f_4[iVar0 /*6*/])->f_4 == bParam4) && (Global_1912978->f_4[iVar0 /*6*/])->f_5 == bParam5)
		{
			(Global_1912978->f_4[iVar0 /*6*/])->f_1 = ((Global_1912978->f_4[iVar0 /*6*/])->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1912978->f_3 < 19)
	{
		Global_1912978->f_4[Global_1912978->f_3 /*6*/] = iParam0;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_1 = iParam1;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_2 = bParam2;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_3 = bParam3;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_4 = bParam4;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_5 = bParam5;
		Global_1912978->f_3++;
	}
}

char* func_529(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_530(int iParam0, int iParam1)
{
	if (!func_68(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_531(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_532(int iParam0)
{
	if (func_69(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_69(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_69(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_69(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_69(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_69(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_69(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_69(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	return "";
}

int func_533(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_534(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if ((Var0.f_18[iVar35 /*2*/])->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35 /*2*/] != 0)
				{
					return &(Var0.f_18[iVar35 /*2*/]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_535(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_682(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

int func_536(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	StringCopy(sParam1, func_683(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_684(iParam0))
	{
		return 0;
	}
	StringCopy(&cVar1, func_685(iParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return 0;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return 0;
	}
	*sParam1 = { cVar1 };
	return 1;
}

char* func_537(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

var func_538(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_686(sParam0, sParam1, iParam2);
	return uVar20;
}

struct<2> func_539(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_540(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_541(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return func_330(INVENTORY::_0x13D234A2A3F66E63(iParam0), iParam1);
	}
	return 0;
}

int func_542(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<2> Var0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (func_687(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var0 = { func_324(iParam1) };
		if (STATS::_STAT_ID_IS_VALID(&Var0))
		{
			STATS::_0xBD861AE8A5181ED7(&Var0, *iParam2);
		}
		*iParam2 = func_543(*iParam0, iParam1, *iParam2, 1, iParam5);
		if (*iParam2 > 0)
		{
			if (func_688(iParam1))
			{
				if (!func_689(0, iParam1, *iParam2))
				{
				}
				if (func_690(PLAYER::PLAYER_ID(), 1, 0))
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 32, true);
				}
				else
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 32, false);
				}
				*iParam2 = func_691(*iParam0, iParam1, *iParam2);
			}
		}
		*iParam2 = 0;
		func_115(1, 0, 0);
		return 1;
	}
	return 0;
}

int func_543(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<11> Var6;
	var uVar101;

	if (!PED::_IS_PED_CARRYING(iParam0))
	{
		return iParam2;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var6.f_10 = 10;
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		if (iParam2 == 0)
		{
		}
		else
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
			}
			else
			{
				iVar0 = func_412(iVar2);
				if (!func_409(iVar0, &uVar101))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar2))
					{
						if ((iParam4 == 2 && ENTITY::_GET_IS_LOOTED(iVar2)) || (iParam4 == 1 && !ENTITY::_GET_IS_LOOTED(iVar2)))
						{
						}
						else if (iVar0 == iParam1)
						{
							iVar5 = 0;
							while (iVar5 < 3)
							{
								if ((Global_1270530->f_1002.f_245[iVar5 /*4*/])->f_3 == iVar2)
								{
									func_692(&Var6, Global_1903929->f_131[iVar5 /*95*/]);
								}
								else
								{
									iVar5++;
								}
							}
							if (bParam3)
							{
								func_693(iVar2);
								if (((Global_1915180->f_20136 || Global_1915180->f_21989.f_1) && Global_1915180->f_19742 == 29) && ENTITY::IS_ENTITY_A_PED(iVar2))
								{
									STATS::_0x831BF01C56149A8A(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2));
								}
								ENTITY::_0x0D0DB2B6AF19A987(&iVar2);
							}
							else
							{
								PED::_0xED00D72F81CF7278(iVar2, 0, 0);
							}
							iParam2 = (iParam2 - 1);
						}
						iVar3++;
						ITEMSET::DESTROY_ITEMSET(iVar1);
						return iParam2;
					}
				}
			}
		}
	}

void func_544(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (Global_1915180->f_20135)
	{
		if (Global_1915180->f_19742 == 29)
		{
			if (func_410(iParam0))
			{
				iVar1 = 0;
				if (bParam2)
				{
					switch (func_694(iParam0))
					{
						case 2:
							iVar1 = 1;
							break;
						case 4:
							iVar1 = 3;
							break;
						case 8:
							iVar1 = 4;
							break;
					}
				}
				iVar0 = 0;
				while (iVar0 <= (iParam1 - 1))
				{
					STATS::_0x7C2ABF6E556B21FC(func_695(iParam0), iVar1, func_69(iParam0, 1064293907), 0);
					iVar0++;
				}
			}
		}
	}
}

bool func_545(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;

	Var0 = { func_324(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var0))
	{
		STATS::_0xBD861AE8A5181ED7(&Var0, iParam1);
	}
	func_696(iParam0, iParam1);
	return func_697(iParam0, iParam1, bParam2, iParam3);
}

int func_546(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_698(iParam0);
	if (iVar0 <= 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (func_699(&Var3))
	{
		if (Var3.f_1 != 0)
		{
			if (func_700(Var3.f_1, &iVar1, bParam1))
			{
				iVar2 = (iVar2 + iVar1);
			}
		}
	}
	return iVar2;
}

struct<4> func_547(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_701(iParam0) };
	return func_702(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_548(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_549()
{
	return Global_1939231->f_37;
}

var func_550()
{
	return Global_1903007->f_379;
}

bool func_551(int iParam0, int iParam1)
{
	if (func_69(iParam1, 1573112293))
	{
		return func_703(iParam1);
	}
	switch (iParam0)
	{
		case -77448735:
			if (func_425(iParam1))
			{
				return func_703(iParam1);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_703(iParam1);
		case -1520388130:
		case 1802292908:
			return func_552(16);
		case 81053684:
		case 1477698721:
			return func_552(4);
		case -525676072:
			return func_552(8);
		case 1779021115:
			if (func_68(iParam1, 0))
			{
				if (iParam1 == joaat("WEAPON_KIT_CAMERA"))
				{
					return func_552(64);
				}
			}
			return func_552(32);
		case -1823706425:
			return func_552(128);
		case -854348463:
			return func_552(8192);
		default:
			if (func_68(iParam1, 0))
			{
				if (func_69(iParam1, 1919582297))
				{
					return func_552(4096);
				}
				else if (iParam1 == joaat("UPGRADE_UPG_MORTAR_PESTLE") || iParam1 == -1448210800)
				{
					return func_552(2048);
				}
				else if (iParam1 == joaat("KIT_HORSE_BRUSH"))
				{
					return func_552(1024);
				}
				else if (func_69(iParam1, 1147021565))
				{
					return func_552(2);
				}
			}
			return func_552(1);
	}
	return func_552(1);
}

bool func_552(int iParam0)
{
	return func_211(Global_1939067->f_38, iParam0);
}

void func_553(int iParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;

	iVar0 = -1;
	Var3.f_9 = -1591664384;
	if (func_343(&uParam1, &iVar0, &iVar1, bParam16))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_148(&Var3, iVar2, iVar0, iVar1))
			{
				func_345(iParam0, Var3.f_4, bParam15);
			}
			iVar2++;
		}
	}
	func_162(iVar0);
}

int func_554(int iParam0)
{
	if (func_530(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_555(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1939231->f_38.f_1)
	{
		if (func_150(iParam0, &(Global_1939231->f_38.f_2[iVar0 /*2*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_556(int iParam0)
{
	if (func_69(iParam0, -839724752))
	{
		return func_69(iParam0, 1937586541);
	}
	return 0;
}

int func_557(int iParam0, int iParam1)
{
	switch (Global_1939231->f_36)
	{
		case 1:
			if (iParam1 == -2074770370)
			{
				if ((func_69(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_69(iParam0, -839724752)) || func_69(iParam0, -136654233))
				{
					return 1;
				}
			}
			break;
		case 2:
			if (iParam1 == -2074770370)
			{
				if ((((((((func_69(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_69(iParam0, -839724752)) || func_69(iParam0, -136654233)) || func_69(iParam0, 554195525)) || func_69(iParam0, -1238310989)) || func_69(iParam0, 2127114599)) || func_69(iParam0, -1864584831)) || func_69(iParam0, 1068498601)) || func_69(iParam0, 1967571132))
				{
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_558(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_559(int iParam0, int iParam1)
{
	Global_1939231->f_38.f_2[iParam0 /*2*/] = iParam1;
}

bool func_560(int iParam0)
{
	return (Global_1939231->f_38.f_2[iParam0 /*2*/])->f_1;
}

void func_561(int iParam0)
{
	Global_1939231->f_38.f_2[iParam0 /*2*/] = 0;
	(Global_1939231->f_38.f_2[iParam0 /*2*/])->f_1 = 0;
}

void func_562(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = iParam0;
	Var1.f_1 = func_704(iVar0);
	Var1 = func_705(iVar0);
	iVar4 = 1;
	iVar5 = func_706(iVar0);
	iVar6 = COLLECTION::_0xCC644BC1DD655269(iVar5, 0);
	if (func_202(iVar6))
	{
		iVar4 = func_374(iVar6);
	}
	func_376(joaat("FOLDER_ITEM"), iParam0, &Var1, func_707(iParam0), iVar4, 0, 0, joaat("COLOR_PURE_WHITE"));
	Global_1939231->f_38.f_203++;
	Global_1939231->f_38.f_1++;
}

int func_563(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = PED::_GET_PED_DAMAGE(iVar0);
	iVar2 = func_708(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	if (iVar4 < iVar3)
	{
		iVar1 = iVar4;
	}
	if (!PED::_0x9E7738B291706746(&iVar5, iVar0, iVar1))
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (PED::_IS_METAPED_USING_COMPONENT(iVar0, 43391475) || ENTITY::_GET_IS_LOOTED(iVar0))
		{
			iVar6 = func_709(iVar5);
			if (iVar6 != 0)
			{
				return iVar6;
			}
		}
		return iVar5;
	}
	switch (iVar1)
	{
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
		default:
			break;
	}
	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

int func_564(int iParam0, var uParam1, int iParam2, int iParam3)
{
	*iParam2 = INVENTORY::_0x640F890C3E5A3FFD(iParam0, uParam1, iParam3);
	if (*iParam2 >= 0)
	{
		return 1;
	}
	return 0;
}

bool func_565(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_27() == 0)
	{
		return func_710(iParam0);
	}
	return iParam0 <= func_711();
}

bool func_566(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

void func_567(int iParam0, int iParam1)
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

void func_568(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_569(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_712(*iParam0);
	iVar1 = func_713(*iParam0);
	if (iParam1 < 1 || iParam1 > func_714(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_570(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_571(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_572(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_573(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;

	Var0.f_9 = -1591664384;
	Var0.f_4 = uParam0;
	Var0.f_11 = iParam1;
	if (!bParam2)
	{
		func_176(Var0, iParam3);
	}
	else
	{
		func_152(Var0);
	}
}

int func_574(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_575()
{
	int iVar0;
	float fVar1;

	iVar0 = func_46(7);
	fVar1 = -1f;
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (func_361(7) != 0)
		{
			fVar1 = func_161(7);
			if (fVar1 != -1f)
			{
				if (func_715(Global_34, iVar0, fVar1, 1))
				{
					return 0;
				}
			}
		}
	}
	if (func_716() != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1903007->f_379))
		{
			if (func_715(Global_34, Global_1903007->f_379, 5f, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_576(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;

	iVar0 = -1;
	Var3.f_9 = -1591664384;
	if (func_343(uParam0, &iVar0, &iVar1, bParam1))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_148(&Var3, iVar2, iVar0, iVar1))
			{
				if (!func_164(&Var3, 0))
				{
				}
				else if (bParam2)
				{
					func_181(Var3.f_4, bParam3, 0);
				}
				else
				{
					func_165(Var3.f_4);
				}
			}
			iVar2++;
		}
	}
	func_162(iVar0);
}

void func_577()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10508, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10507, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10504, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10505, false);
}

bool func_578(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_717(&uParam0, bParam4, iParam5, bParam6, iParam7);
}

int func_579()
{
	int iVar0;
	int iVar1;

	if (Global_1956172->f_2)
	{
		return 0;
	}
	if (func_718())
	{
		return 0;
	}
	if (func_84())
	{
		return 0;
	}
	if (Global_1939067->f_10)
	{
		return 0;
	}
	if (Global_1939067->f_11)
	{
		return 0;
	}
	if (Global_1939067->f_12)
	{
		return 0;
	}
	if (func_141())
	{
		return 0;
	}
	if (func_719())
	{
		return 0;
	}
	if (func_317(8388608))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_34);
		iVar1 = iVar0;
		if (((iVar1 == joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1") || iVar1 == joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2")) || iVar1 == joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3")) || iVar1 == joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4"))
		{
			return 1;
		}
		return 0;
	}
	if (!func_218(0, 1))
	{
		return 0;
	}
	return 1;
}

int func_580()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_2883584)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (!func_281(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_581(var uParam0, var uParam1)
{
	return uParam0;
}

int func_582(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	int iVar25;

	*uParam3 = 0;
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SELL_PRICE(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	if (!bParam5)
	{
	}
	*uParam3 = Var0.f_3;
	if (*uParam2 < Var0.f_3)
	{
		return 0;
	}
	iVar25 = 0;
	while (iVar25 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*((*uParam2)[iVar25 /*2*/]) = { *(Var0.f_4[iVar25 /*2*/]) };
		iVar25++;
	}
	if (bParam4)
	{
		func_720(iParam0, iParam1, uParam2, *uParam3);
	}
	return 1;
}

int func_583(int iParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;
	var uVar5;
	int iVar6;

	*bParam2 = 1f;
	if (!func_153(iParam0))
	{
		return 0;
	}
	if (!func_68(iParam1, 0))
	{
		return 0;
	}
	if (!func_333(22, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -1023752283;
	Var0.f_3 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar6 = func_721(iParam0);
		func_722(iVar6, &uVar5);
		Var0.f_2 = uVar5;
		DATAFILE::_DATAFILE_GET_FLOAT(bParam2, &Var0);
		if (*bParam2 < 1f)
		{
			*bParam2 = 1f;
		}
		return 1;
	}
	return 0;
}

int func_584(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && bParam1 == -915411861) && func_723(iParam0, 59806960))
	{
		bParam1 = 59806960;
	}
	if (func_724(iParam0))
	{
		return func_726(func_725(iParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_727(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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
			if (iParam5 != 0 && &Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return (Var0[iVar32 /*2*/])->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}

int func_585(int iParam0)
{
	if (func_27() != -1)
	{
		if (Global_1070356->f_10)
		{
			if (iParam0 == 3)
			{
				return joaat("ST_GENERAL_INTRO");
			}
		}
	}
	return func_728(iParam0);
}

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_DEER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_FOX_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_GILA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_HERON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_LOON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_OWL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PIG_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_RAM_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR");
		default:
			break;
	}
	return 0;
}

int func_587(int iParam0)
{
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return -1;
	}
	if (iParam0 == _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return func_279(PLAYER::PLAYER_ID());
	}
	return func_729(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0));
}

int func_588(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

bool func_589(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_590(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case -28107610:
			return -2118203104;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_591(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if (((*uParam0)[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_592(int iParam0)
{
	int iVar0;

	iVar0 = func_90(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_593(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 5)
	{
		return 0;
	}
	else if (*uParam2 != 5)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iParam3 < 1)
		{
			Jump @200; //curOff = 49
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @191; //curOff = 67
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_5 == 0)
		{
		}
		else
		{
			*((*uParam0)[*iParam1 /*6*/]) = { *((*uParam2)[iVar0 /*6*/]) };
			((*uParam0)[*iParam1 /*6*/])->f_4 = ((*uParam2)[iVar0 /*6*/])->f_4;
			if (((*uParam2)[iVar0 /*6*/])->f_5 > iParam3)
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = iParam3;
				iParam3 = 0;
			}
			else
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = ((*uParam2)[iVar0 /*6*/])->f_5;
				iParam3 = (iParam3 - ((*uParam0)[*iParam1 /*6*/])->f_5);
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam4 && iParam3 > 0)
	{
		*iParam1 = 0;
		return 0;
	}
	return 1;
}

int func_594(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if (func_211(iVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_211(iVar0, 8))
	{
		return 0;
	}
	else if (func_211(iVar0, 16))
	{
		return 0;
	}
	else if (func_211(iVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_595(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_730(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_730(iParam1, 2, 0, 0);
	return -1;
}

int func_596(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_730(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_597()
{
	return 31014903;
}

int func_598()
{
	return 31113207;
}

int func_599()
{
	return 28818647;
}

int func_600(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

bool func_601(int iParam0)
{
	return func_211(Global_1199613->f_1196, iParam0);
}

bool func_602()
{
	return Global_262996[&Global_1275573 /*70*/] > 2;
}

bool func_603(int iParam0, int iParam1)
{
	if (!Global_1070356->f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1185577[iParam1 /*12*/] && iParam0) != 0;
}

struct<2> func_604()
{
	if (Global_1184439->f_129 <= 0)
	{
		return func_280(0);
	}
	if (Global_1184439->f_130 < 0 || Global_1184439->f_131 == 0)
	{
		return func_280(0);
	}
	return ((*Global_1184439)[Global_1184439->f_130 /*4*/])->f_1;
}

int func_605(int iParam0)
{
	if (func_731(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

bool func_606(struct<2> Param0)
{
	return func_732(Param0, 1, 4);
}

bool func_607(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

int func_608(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 3:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 4:
			return joaat("CONSUMABLE_HERB_BAY_BOLETE");
		case 5:
			return joaat("CONSUMABLE_HERB_BLACK_BERRY");
		case 6:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 7:
			return joaat("CONSUMABLE_HERB_BURDOCK_ROOT");
		case 8:
			return joaat("CONSUMABLE_HERB_CHANTERELLES");
		case 11:
			return joaat("CONSUMABLE_HERB_COMMON_BULRUSH");
		case 12:
			return joaat("CONSUMABLE_HERB_CREEPING_THYME");
		case 13:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 15:
			return joaat("CONSUMABLE_HERB_ENGLISH_MACE");
		case 16:
			return joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 19:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 20:
			return joaat("CONSUMABLE_HERB_INDIAN_TOBACCO");
		case 23:
			return joaat("CONSUMABLE_HERB_MILKWEED");
		case 26:
			return joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
		case 27:
			return joaat("CONSUMABLE_HERB_OREGANO");
		case 28:
			return joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM");
		case 29:
			return joaat("CONSUMABLE_HERB_PRAIRIE_POPPY");
		case 31:
			return joaat("CONSUMABLE_HERB_RAMS_HEAD");
		case 33:
			return joaat("CONSUMABLE_HERB_RED_RASPBERRY");
		case 34:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 37:
			return joaat("CONSUMABLE_HERB_VANILLA_FLOWER");
		case 38:
			return joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP");
		case 48:
			return joaat("CONSUMABLE_HERB_WILD_CARROTS");
		case 49:
			return joaat("CONSUMABLE_HERB_WILD_FEVERFEW");
		case 50:
			return joaat("CONSUMABLE_HERB_WILD_MINT");
		case 51:
			return joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY");
		case 52:
			return joaat("CONSUMABLE_HERB_YARROW");
		case 39:
			return joaat("PROVISION_WLDFLWR_AGARITA");
		case 40:
			return joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET");
		case 41:
			return joaat("PROVISION_WLDFLWR_BITTERWEED");
		case 42:
			return joaat("PROVISION_WLDFLWR_BLOOD_FLOWER");
		case 43:
			return joaat("PROVISION_WLDFLWR_CARDINAL_FLOWER");
		case 44:
			return joaat("PROVISION_WLDFLWR_CHOCOLATE_DAISY");
		case 45:
			return joaat("PROVISION_WLDFLWR_CREEK_PLUM");
		case 46:
			return joaat("PROVISION_WLDFLWR_WILD_RHUBARB");
		case 47:
			return joaat("PROVISION_WLDFLWR_WISTERIA");
		default:
			break;
	}
	return 0;
}

void func_609(int iParam0, int iParam1)
{
	if (!func_388(iParam0))
	{
		return;
	}
	if (func_27() != -1)
	{
		Global_17172[iParam0] = (Global_17172[iParam0] || iParam1);
		return;
	}
	Global_39.f_4458[iParam0] = (Global_39.f_4458[iParam0] || iParam1);
}

void func_610(int iParam0, bool bParam1)
{
	if (!func_388(iParam0))
	{
		return;
	}
	if (func_733(iParam0))
	{
		return;
	}
	func_609(iParam0, 2);
	if (bParam1)
	{
		if (!func_395(0, 0, 1))
		{
			if (func_27() == -1)
			{
				func_613(1, 6);
			}
			else
			{
				func_734(1, 1017438712);
			}
		}
	}
}

int func_611(int iParam0)
{
	if (!func_388(iParam0))
	{
		return 0;
	}
	return func_389(iParam0, 1, 1);
}

void func_612(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_388(iParam0))
	{
		return;
	}
	if (func_611(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_400(iParam0);
	}
	if (!bParam1)
	{
		func_735(iParam0);
	}
	func_609(iParam0, 1);
	func_610(iParam0, 1);
	if (bParam2)
	{
		if (!func_395(0, 0, 1))
		{
			func_613(1, 6);
		}
	}
}

void func_613(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_736(&Global_0, 8);
	}
	if (!func_737() || func_27() != -1)
	{
		return;
	}
	func_736(&Global_0, 1);
}

float func_614(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_34));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_34, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_GET_PED_STAMINA(Global_34);
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_34);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_615(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_738(2);
	func_739(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_616(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_740(2);
	func_741(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_617(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_742(2);
	func_743(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

float func_618(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_619(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_744(iParam0, fParam1, 1);
	}
	func_746(iParam0, (func_745(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_620(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

int func_621(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_747(iParam0, fParam1, bParam2, bParam3);
}

void func_622(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_748(13, 2);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_749())
	{
		iVar1 = func_750(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_750(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1954472->f_1331.f_107 = func_751();
			func_752(&(Global_1954472->f_1331.f_107), 0, 0, 1, 0, 0, 0, 0);
		}
		func_754(13, func_753(fVar0, 0f, 100f), 2);
	}
	if (bParam1)
	{
		Global_17172.f_54.f_2438.f_41++;
		if (5 == Global_17172.f_54.f_2438.f_41)
		{
			func_109(109, 0);
		}
	}
}

bool func_623()
{
	int iVar0;

	iVar0 = &Global_1951141->f_593[8];
	iVar0 = (&Global_1951141->f_593[10] + iVar0);
	iVar0 = (&Global_1951141->f_593[1] + iVar0);
	iVar0 = (&Global_1951141->f_593[2] + iVar0);
	iVar0 = (&Global_1951141->f_593[5] + iVar0);
	iVar0 = (&Global_1951141->f_593[25] + iVar0);
	iVar0 = (&Global_1951141->f_593[22] + iVar0);
	iVar0 = (&Global_1951141->f_593[18] + iVar0);
	iVar0 = (&Global_1951141->f_593[19] + iVar0);
	return iVar0 > 0;
}

int func_624(int iParam0)
{
	int iVar0;

	iVar0 = func_257(func_755(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1951141->f_1657.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_625(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_257(func_755(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1951141->f_1657.f_1[iVar1 /*3*/] != 0 && &Global_1951141->f_1657.f_1[iVar1 /*3*/] != &Global_1951141->f_81[iVar1 /*12*/])
	{
		iVar0 = &Global_1951141->f_1657.f_1[iVar1 /*3*/];
		if (func_90(iVar0) == iParam0 || (iParam0 == 81053684 && func_69(iVar0, -1348134986)))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	*iParam1 = 0;
	return 0;
}

int func_626()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1951141->f_3109.f_25)
	{
		iVar1 = &Global_1951141->f_3109[iVar0];
		if (func_90(iVar1) == -999503751)
		{
			if (func_756() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_627(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = func_757(0);
	}
	if (func_90(iParam0) == -999503751 && func_758(iParam0) != -1)
	{
		return 1;
	}
	if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		return func_69(iParam0, -287432114);
	}
	else if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		return func_69(iParam0, -133342564);
	}
	return 0;
}

int func_628(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_111(iParam0, 0, 0) };
	Var5 = { func_112(iParam0, Var0, Var0.f_4, 0) };
	if (func_264(iParam0, Var0, Var0.f_4, 0, 0, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_145(0), &Var5, iParam1);
	return 1;
}

int func_629(int iParam0)
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

bool func_630(var uParam0)
{
	return (Global_1951141->f_3109.f_32.f_6 && uParam0) != 0;
}

void func_631()
{
	Global_1951141->f_1054 = 0;
}

void func_632(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;
	var uVar119;
	int iVar120;
	int iVar121;

	switch (func_90(iParam0))
	{
		case -2061583405:
			func_759(iParam0, &(Global_1951141->f_3109.f_27));
			break;
		case 81053684:
			func_759(iParam0, &(Global_1951141->f_3109.f_29));
			break;
		case -999503751:
			func_759(iParam0, &(Global_1951141->f_3109.f_26));
			if (func_69(iParam0, -166674229))
			{
				Var0.f_1 = 39;
				if (func_760(&Var0, iParam0, &uVar119, 0, 1, 0, 0, 0))
				{
					iVar120 = 0;
					while (iVar120 < 39)
					{
						iVar121 = &Var0.f_1[iVar120 /*3*/];
						if (func_68(iVar121, 0))
						{
							func_632(iVar121, 0, 0);
						}
						iVar120++;
					}
				}
			}
			break;
		case -525676072:
			func_759(iParam0, &(Global_1951141->f_3109.f_28));
			break;
		case -1719060085:
			func_759(iParam0, &(Global_1951141->f_3109.f_30));
			break;
		case -413129408:
			func_759(iParam0, &(Global_1951141->f_3109.f_31));
			break;
		default:
			if (func_69(iParam0, -1348134986))
			{
				func_759(iParam0, &(Global_1951141->f_3109.f_29));
			}
			break;
	}
	if (bParam2)
	{
		func_477();
	}
	if (bParam1)
	{
		func_479(0, 0);
	}
}

void func_633(var uParam0, int iParam1)
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
			if ((func_761(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_761(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_762(uParam0->f_2[iVar0 /*2*/], 2, 6);
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

void func_634(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_763(uParam0, 1))
	{
		func_764(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			(uParam0->f_2[iVar0 /*2*/])->f_1 = iParam2;
			return;
		}
		if ((Global_1951141->f_81[&uParam0->f_2[iVar0 /*2*/] /*12*/])->f_2 > (Global_1951141->f_81[iParam1 /*12*/])->f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				*(uParam0->f_2[iVar1 /*2*/]) = { *(uParam0->f_2[(iVar1 - 1) /*2*/]) };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			(uParam0->f_2[iVar0 /*2*/])->f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

int func_635(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, iParam1, 1))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, iParam1, 1) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_636(int iParam0)
{
	return &Global_1951141->f_1657.f_1[func_257(iParam0, 1) /*3*/] != &Global_1951141->f_81[func_257(iParam0, 1) /*12*/];
}

int func_637(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return 1;
}

void func_638(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1951141->f_1657.f_1[iParam0 /*3*/]) = { *(Global_1951141->f_1538.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	func_765(Global_1951141->f_1657.f_1[iParam0 /*3*/], iParam0, Global_17172.f_54.f_644.f_1776);
}

int func_639(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17172.f_54.f_644.f_1776;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17172.f_54.f_644.f_32[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

void func_640(int iParam0, bool bParam1, int iParam2)
{
	func_766(&(Global_1951141->f_1538), iParam0);
	func_767(2, iParam0, 6);
	if (bParam1)
	{
		func_479(0, 1);
	}
}

int func_641(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_717(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_642()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_26285) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_26285, 0));
}

int func_643()
{
	return Global_1051202->f_12;
}

char* func_644()
{
	return "unnamed";
}

int func_645(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

int func_646(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_768(35, iParam0);
}

int func_647(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1275573->f_22[iParam0])
	{
		return ((*Global_1097610)[iParam0 /*51*/])->f_1;
	}
	return 26;
}

bool func_648(int iParam0)
{
	if (func_769(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_770(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_649(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return 0;
	}
	return 1;
}

void func_650(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (&uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_MALE") || &uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_FEMALE"))
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (&uParam0->f_1[iVar1] == joaat("LOOT_TYPE_NORMAL") || &uParam0->f_1[iVar1] == joaat("LOOT_TYPE_SKINNING"))
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((&uParam0->f_1[iVar1] == joaat("FISHING_RESULT_NORMAL") || &uParam0->f_1[iVar1] == joaat("FISHING_RESULT_RUINED")) || &uParam0->f_1[iVar1] == joaat("FISHING_RESULT_LEGENDARY"))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_651(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_771(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_772(uParam2, iParam0, Var1);
	return 1;
}

int func_652(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_27() == -1)
	{
		if (func_301(iParam0) && func_773(iParam0))
		{
			func_774(iParam0, iParam1, 1, &bParam2, iParam3);
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

int func_653(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_775(iParam0, iParam1);
	Var0 = { func_111(iParam0, 0, 1) };
	iVar5 = func_398(iParam0, &Var0, 0, 0);
	iVar6 = func_367(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_69(iParam0, -2051813666))
		{
			func_109(672, 1);
		}
		else if (func_27() == -1)
		{
			func_109(671, 0);
		}
	}
	if (func_776(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_654(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_777())
	{
		return;
	}
	switch (func_6(iParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
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
			Global_1939067->f_70.f_5 = 1;
			Global_1939067->f_70.f_6 = 0;
			Global_1939067->f_70.f_1 = iParam0;
			break;
	}
}

int func_655(int iParam0)
{
	if (!func_778(iParam0))
	{
		return 0;
	}
	return func_779(iParam0);
}

void func_656(int iParam0)
{
	if (!func_778(iParam0))
	{
		return;
	}
	func_780(iParam0);
	func_781(iParam0);
}

void func_657(int iParam0)
{
	if (func_69(iParam0, -1522723129))
	{
		func_782(-848633709, 0, 255, 0, 0);
	}
	else if (func_69(iParam0, -283942357))
	{
		func_782(-981153234, 0, 255, 0, 0);
	}
	else if (func_69(iParam0, 683680997))
	{
		func_782(-756350192, 0, 255, 0, 0);
	}
	else if (func_69(iParam0, 1307628809))
	{
		func_782(603094518, 0, 255, 0, 0);
	}
}

int func_658(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_CONFUSE"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DISORIENT"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DRAIN"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_TRAIL"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_WOUND"):
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
		case joaat("AMMO_BOLAS"):
			iVar0 = joaat("WEAPON_THROWN_BOLAS");
			break;
		case joaat("AMMO_POISONBOTTLE"):
			iVar0 = joaat("WEAPON_THROWN_POISONBOTTLE");
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
	if (func_68(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_783(iVar0) || func_784(iVar0))
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

int func_659(int iParam0, bool bParam1)
{
	if (!func_68(iParam0, 0))
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

void func_660(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_589(iParam0))
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

int func_661(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		Var0 = { func_111(iParam0, 0, 1) };
		if (func_293(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_294(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_112(iParam0, Var0, Var0.f_4, 0) };
				func_214(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_114(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
		{
			return 0;
		}
		func_662(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
		func_785(iParam0, iParam1);
		return 1;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		return 0;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

int func_662(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_558(iParam0))
	{
		return 0;
	}
	if (!func_114(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

int func_663(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_212(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_786(iParam0, iParam1, iParam2);
	}
	Var1 = { func_111(iParam0, 0, 1) };
	Var6 = { func_112(iParam0, Var1, Var1.f_4, 0) };
	return func_787(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

int func_664(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_659(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_27() == -1)
		{
			func_660(iVar0);
			if (iParam1 == 1248274121)
			{
				func_788(iVar0);
			}
		}
		if (!func_776(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_774(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_789(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_661(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
			{
				func_661(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(iVar0))
			{
				func_661(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_790())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_791(iVar0))
				{
					func_661(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_661(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_792(Global_34, 2, 0, 1);
				if ((((func_589(iVar7) && !Global_26386) && iVar7 != iVar0) && !func_210(joaat("UPGRADE_OFFHAND_HOLSTER"), 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_34, iVar7);
				}
				if (func_589(iVar7) && func_210(joaat("UPGRADE_OFFHAND_HOLSTER"), 1))
				{
					if (!func_661(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_661(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_661(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_109(513, 1);
	}
	return 1;
}

int func_665(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_558(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	if (func_589(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_34, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == joaat("WEAPON_BOW"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
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
		func_675(func_793(iParam0), func_190(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_114(0))
	{
		if (func_662(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_663(iParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_666(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_667()
{
	return 0;
}

int func_668(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_27() == 0)
	{
		func_679(iParam0, 0);
		return 0;
	}
	iVar0 = func_794(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_795(iVar0, sParam4, iParam5, 0);
	}
	func_796(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_669(int iParam0)
{
}

void func_670(int iParam0)
{
}

void func_671(int iParam0)
{
}

void func_672(int iParam0)
{
}

void func_673()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_674(int iParam0, int iParam1)
{
	var uVar0;

	func_526(iParam0, iParam1, &uVar0);
}

void func_675(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_286(iParam0, &iVar0, &iVar1);
	if (!func_287(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_502(iParam0, 1024))
	{
		return;
	}
	func_288(iVar0, iVar1);
	(Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = sParam1;
	((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_676(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_286(iParam0, &iVar0, &iVar1);
	if (!func_287(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_502(iParam0, 1024))
	{
		return;
	}
	func_288(iVar0, iVar1);
	(Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

void func_677(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

void func_678(int iParam0)
{
	if (func_27() != -1)
	{
		return;
	}
}

int func_679(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_650(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_651(iParam0, &Var4, &uVar0, iParam1);
}

void func_680(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_681(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_797(Global_1902942->f_37);
	func_538(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_798(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_682(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if ((Var0[iVar43 /*2*/])->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_683(int iParam0)
{
	int iVar0;

	if (!func_68(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_190(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_684(int iParam0)
{
	if (func_90(iParam0) == -126813555 || func_90(iParam0) == 1946043663)
	{
		return 1;
	}
	return 0;
}

char* func_685(int iParam0)
{
	int iVar0;

	if (!func_68(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_534(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

void func_686(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_687(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_799(INVENTORY::_0x13D234A2A3F66E63(iParam0), iParam1, iParam2, bParam3, iParam4);
}

int func_688(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_800(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		iVar1 = func_801(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_689(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_802(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = func_803(iVar0, 1);
		if (iVar1 > -1)
		{
			iVar2 = &Global_1903929->f_417[iVar1];
			if (iVar2 > 0)
			{
				iVar3 = iParam2;
				if (iVar3 > iVar2)
				{
					iVar3 = iVar2;
				}
				if (!func_804(iVar3, 0))
				{
				}
				Global_1903929->f_417[iVar1] = (&Global_1903929->f_417[iVar1] - iVar3);
				return 1;
			}
		}
	}
	return 0;
}

bool func_690(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return iParam1;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return iParam1;
	}
	return func_805(iVar0, bParam2) >= func_806(bParam2);
}

int func_691(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iParam2;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (iParam0 != PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()) || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			iVar1 = PED::_0x0CEEB6F4780B1F2F(iParam0, iVar0);
			if (iVar1 == iParam1)
			{
				PED::_0x627F7F3A0C4C51FF(iParam0, iParam1);
				iParam2 = (iParam2 - 1);
			}
		}
		else
		{
			iVar1 = &((*Global_1269869)[PLAYER::PLAYER_ID() /*20*/])->f_16[iVar0];
			if (iVar1 == iParam1)
			{
				((*Global_1269869)[PLAYER::PLAYER_ID() /*20*/])->f_16[iVar0] = 0;
				iParam2 = (iParam2 - 1);
			}
		}
		if (iParam2 <= 0)
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	return iParam2;
}

void func_692(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(iParam1, iParam0, 95);
}

void func_693(int iParam0)
{
	int iVar0;
	var uVar1[10];
	int iVar12;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	func_807(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), &uVar1);
	iVar12 = 0;
	while (iVar12 < 10)
	{
		if (func_68(&(uVar1[iVar12]), 0))
		{
			if (func_69(&(uVar1[iVar12]), -1690954218))
			{
				func_808(iVar0, -1760041550 /* GXTEntry: "High Quality Beef Stew" */);
			}
			else if (func_69(&(uVar1[iVar12]), 1149630095))
			{
				func_808(iVar0, -1760041550 /* GXTEntry: "High Quality Beef Stew" */);
			}
			else if (func_69(&(uVar1[iVar12]), 194498509))
			{
				func_808(iVar0, 116793994 /* GXTEntry: "Medium Quality Beef Stew" */);
			}
			else if (func_69(&(uVar1[iVar12]), 43251425))
			{
				func_808(iVar0, 1869130580 /* GXTEntry: "Low Quality Beef Stew" */);
			}
			else
			{
				func_808(iVar0, 1869130580 /* GXTEntry: "Low Quality Beef Stew" */);
			}
		}
		iVar12++;
	}
}

int func_694(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_409(iParam0, &iVar1))
	{
		iParam0 = iVar1;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SATCHEL_DATA(iParam0, &iVar0))
	{
		return -1;
	}
	switch (iVar0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 4;
		case 4:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_695(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			return joaat("AT_FBLUEGIL");
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			return joaat("AT_FBULLHEADCATFISH");
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			return joaat("AT_FCHAINPICKEREL");
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			return joaat("AT_FCHANNELCATFISH");
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			return joaat("AT_FLAKESTURGEON");
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			return joaat("AT_FLARGEMOUTHBASS");
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			return joaat("AT_FLONGNOSEGAR");
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			return joaat("AT_FMUSKIE");
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			return joaat("AT_FNORTHERNPIKE");
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			return joaat("AT_FPERCH");
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			return joaat("AT_FREDFINPICKEREL");
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			return joaat("AT_FROCKBASS");
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			return joaat("AT_FSMALLMOUTHBASS");
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			return joaat("AT_FSALMONSOCKEYE");
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			return joaat("AT_FRAINBOWTROUT");
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return joaat("AT_BAT");
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return joaat("AT_BLUEJAY");
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return joaat("AT_BULLFROG");
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return joaat("AT_CEDARWAXWING");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return joaat("AT_CORMORANT");
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return joaat("AT_CAROLINAPARAKEET");
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return joaat("AT_CROW");
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			return joaat("AT_SQUIRREL");
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return joaat("AT_CARDINAL");
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return joaat("AT_CHIPMUNK");
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return joaat("AT_CRAB");
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_HIGH_QUALITY"):
			return joaat("AT_CRAYFISH");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("AT_GILAMONSTER");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return joaat("AT_IGUANA");
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return joaat("AT_ORIOLE");
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return joaat("AT_PIGEON");
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return joaat("AT_QUAIL");
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return joaat("AT_RAT");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("AT_REDFOOTEDBOOBY");
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return joaat("AT_ROBIN");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("AT_ROSESPOONBILL");
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return joaat("AT_SPARROW");
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return joaat("AT_SONGBIRD");
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return joaat("AT_TOAD");
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			return joaat("AT_WOODPECKER_PILEATED");
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("AT_GATOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return joaat("AT_ARMADILLO");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return joaat("AT_BADGER");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return joaat("AT_BEAVER");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("AT_SHEEP");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return joaat("AT_BUCK");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return joaat("AT_CALIFORNIACONDOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return joaat("AT_CHICKEN");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return joaat("AT_COUGAR");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return joaat("AT_COYOTE");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return joaat("AT_CRANE");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("AT_DEER");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return joaat("AT_DUCK");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("AT_EAGLE");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return joaat("AT_EGRET");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return joaat("AT_FOX");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("AT_GOAT");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("AT_GOOSE");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return joaat("AT_HAWK");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return joaat("AT_HERON");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("AT_LOON");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return joaat("AT_MUSKRAT");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return joaat("AT_POSSUM");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return joaat("AT_OWL");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("AT_PANTHER");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return joaat("AT_PARROT");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return joaat("AT_PELICAN");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("AT_PHEASANT");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return joaat("AT_PIG");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return joaat("AT_CHICKEN_PRAIRIE");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return joaat("AT_PRONGHORN");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("AT_RABBIT");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return joaat("AT_RACCOON");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return joaat("AT_RAM_DESERT");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return joaat("AT_RAVEN");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("AT_ROOSTER");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("AT_SEAGULL");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("AT_SHEEP");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return joaat("AT_SKUNK");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("AT_SNAKE_BLACK");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("AT_SNAKE_BOA");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("AT_SNAKE_COPPER_NORTH");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("AT_SNAKE_FERDELANCE");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return joaat("AT_SNAKE_BLACK");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("AT_SNAKE_WATER");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return joaat("AT_TURKEY");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("AT_TURTLE_SNAP");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return joaat("AT_VULTURE");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return joaat("AT_WOLF");
		default:
			break;
	}
	return joaat("SMALL_ANIMALS");
}

void func_696(int iParam0, int iParam1)
{
	int iVar0;

	if (func_27() == -1)
	{
		iVar0 = func_46(7);
	}
	else
	{
		iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	}
	func_691(iVar0, iParam0, iParam1);
}

int func_697(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_290(0) };
	Var0.f_4 = 724026534;
	Var5 = { func_112(iParam0, Var0, Var0.f_4, 0) };
	return func_214(iParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

var func_698(int iParam0)
{
	var uVar0;

	if (Local_0.f_12)
	{
		func_809();
	}
	func_810(&Local_0);
	func_811(&Local_0);
	switch (iParam0)
	{
		case joaat("A_C_DEER_01"):
			if (((((!func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT")) || !func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"))) || !func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"))) || !func_812(&Local_0, joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT"))) || !func_812(&Local_0, joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY"))) || !func_812(&Local_0, joaat("PROVISION_SKINNED_CARCASS_DEER_POOR")))
			{
			}
			break;
		case joaat("A_C_PRONGHORN_01"):
			if (((((!func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT")) || !func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"))) || !func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"))) || !func_812(&Local_0, joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT"))) || !func_812(&Local_0, joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY"))) || !func_812(&Local_0, joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR")))
			{
			}
			break;
		case joaat("A_C_TURKEYWILD_01"):
			if (((((!func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR")) || !func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"))) || !func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"))) || !func_812(&Local_0, joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT"))) || !func_812(&Local_0, joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY"))) || !func_812(&Local_0, joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR")))
			{
			}
			break;
		case joaat("A_C_FOX_01"):
			if (((((!func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT")) || !func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"))) || !func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"))) || !func_812(&Local_0, joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT"))) || !func_812(&Local_0, joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY"))) || !func_812(&Local_0, joaat("PROVISION_SKINNED_CARCASS_FOX_POOR")))
			{
			}
			break;
		case joaat("A_C_DUCK_01"):
			if ((!func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT")) || !func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"))) || !func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR")))
			{
			}
			break;
		case joaat("A_C_CALIFORNIACONDOR_01"):
			if ((!func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT")) || !func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"))) || !func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR")))
			{
			}
			break;
		case joaat("A_C_TURTLESNAPPING_01"):
			if ((!func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT")) || !func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"))) || !func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR")))
			{
			}
			break;
		case joaat("P_CS_PELT_XLARGE_ELK"):
			if ((!func_812(&Local_0, joaat("PROVISION_ELK_FUR_PRISTINE")) || !func_812(&Local_0, joaat("PROVISION_ELK_FUR"))) || !func_812(&Local_0, joaat("PROVISION_ELK_FUR_POOR")))
			{
			}
			break;
		case joaat("P_CS_PELT_XLARGE_ALLIGATOR"):
			if (((!func_812(&Local_0, joaat("PROVISION_ALLIGATOR_LEGENDARY_SKIN_PRISTINE")) || !func_812(&Local_0, joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"))) || !func_812(&Local_0, joaat("PROVISION_ALLIGATOR_SKIN"))) || !func_812(&Local_0, joaat("PROVISION_ALLIGATOR_SKIN_POOR")))
			{
			}
			break;
		case joaat("A_C_IGUANADESERT_01"):
			if ((!func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY")) || !func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"))) || !func_812(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR")))
			{
			}
			break;
		case joaat("P_CS_PELT_XLARGE_BUFFALO"):
			if ((((!func_812(&Local_0, joaat("PROVISION_TAKANTA_BUFFALO_LEGENDARY_FUR_PRISTINE")) || !func_812(&Local_0, joaat("PROVISION_WHITE_BUFFALO_LEGENDARY_FUR_PRISTINE"))) || !func_812(&Local_0, joaat("PROVISION_BUFFALO_FUR"))) || !func_812(&Local_0, joaat("PROVISION_BUFFALO_FUR_POOR"))) || !func_812(&Local_0, joaat("PROVISION_BUFFALO_FUR_PRISTINE")))
			{
			}
			break;
	}
	uVar0 = func_813(&Local_0);
	Local_0.f_12 = 1;
	return uVar0;
}

int func_699(var uParam0)
{
	if (!func_814())
	{
		return 0;
	}
	*uParam0 = Local_0.f_11;
	uParam0->f_1 = &Local_0[*uParam0];
	Local_0.f_11++;
	return 1;
}

int func_700(int iParam0, int iParam1, bool bParam2)
{
	*iParam1 = 0;
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (!bParam2 || func_177())
	{
		*iParam1 = func_264(iParam0, func_290(1), -2015960939, 1, 1, 0);
		return *iParam1 > 0;
	}
	return 0;
}

struct<5> func_701(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_702(iParam0, joaat("CHARACTER"), func_302(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_702(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_68(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, bParam6, &Var0);
	return Var0;
}

bool func_703(int iParam0)
{
	if (func_68(iParam0, 0))
	{
		if (func_69(iParam0, -1242251796))
		{
			if (func_69(iParam0, 2060589226))
			{
				return func_552(512);
			}
			return func_552(256);
		}
		else if (func_69(iParam0, 1919582297))
		{
			return func_552(4096);
		}
		else if (func_69(iParam0, 1647670816))
		{
			return func_552(16384);
		}
	}
	if (Global_1939067->f_12)
	{
		return func_552(256);
	}
	else
	{
		return func_552(2);
	}
	return func_552(2);
}

int func_704(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1939231->f_10515))
	{
		return 0;
	}
	Var0 = Global_1939231->f_10515;
	Var0.f_2 = 1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

int func_705(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1939231->f_10515))
	{
		return 0;
	}
	Var0 = Global_1939231->f_10515;
	Var0.f_2 = 0;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

int func_706(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1939231->f_10515))
	{
		return 0;
	}
	Var0 = Global_1939231->f_10515;
	Var0.f_2 = 4;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_STRING(&uVar5, &Var0);
	return MISC::GET_HASH_KEY(&uVar5);
}

int func_707(int iParam0)
{
	if (func_815(iParam0))
	{
		return func_347(16);
	}
	else if (func_816(iParam0))
	{
		return func_817();
	}
	else if (func_818(iParam0))
	{
		return func_347(2);
	}
	return 1;
}

int func_708(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iVar0;
	}
	iVar1 = PED::_GET_PED_QUALITY(iParam0);
	switch (iVar1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case -1:
		case 2:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_709(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR");
		default:
			break;
	}
	return 0;
}

bool func_710(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_711()
{
	if (func_27() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_712(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_713(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_819(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_714(int iParam0, int iParam1)
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

int func_715(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

int func_716()
{
	return Global_39.f_277.f_3019.f_1;
}

int func_717(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_145(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		return 0;
	}
	if (!func_508(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_718()
{
	return Global_1900718->f_67;
}

bool func_719()
{
	return (Global_1893575 & 1 != 0 && func_820() != -1);
}

void func_720(int iParam0, int iParam1, var uParam2, int iParam3)
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
	struct<2> Var21[10];

	if (*uParam2 < 10)
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
								(Var21[iVar0 /*2*/])->f_1 = ((Var21[iVar0 /*2*/])->f_1 + (Var19.f_1 - 1f));
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

int func_721(int iParam0)
{
	return func_822(func_821(iParam0));
}

void func_722(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = -153135980;
			break;
		case 1:
			*uParam1 = 12851681;
			break;
		case 2:
			*uParam1 = 1386325051;
			break;
		case 3:
			*uParam1 = 43722464;
			break;
		case 4:
			*uParam1 = -581476215;
			break;
		case 5:
			*uParam1 = -1906982261;
			break;
		case 9:
			*uParam1 = -1035806543;
			break;
		case 10:
			*uParam1 = 1579284209;
			break;
		case 11:
			*uParam1 = -1172613177;
			break;
		case 12:
			*uParam1 = 495869290;
			break;
		case 16:
			*uParam1 = -1382561665;
			break;
		case 15:
			*uParam1 = 684071069;
			break;
		case 14:
			*uParam1 = 1357371535;
			break;
		case 13:
			*uParam1 = -1221865546;
			break;
	}
}

bool func_723(int iParam0, bool bParam1)
{
	if (!func_68(iParam0, 0))
	{
		return false;
	}
	if (func_724(iParam0))
	{
		return func_823(func_725(iParam0, 0), bParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, bParam1) > 0;
}

int func_724(int iParam0)
{
	if (func_69(iParam0, 75135761))
	{
		return 1;
	}
	return 0;
}

int func_725(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_68(iParam0, 0))
	{
		return func_824(func_207(iParam0), bParam1);
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && NETWORK::_0xFBE782B3165AC8EC(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_726(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_209(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || &Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR")) || &Var0[iVar32 /*2*/] == joaat("CHARACTER_ROLE_TOKEN"))
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
	if (!bParam2)
	{
	}
	return 0;
}

int func_727(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	*uParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, bParam1);
	if (*uParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, bParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_825(iParam0, bParam1, uParam2, *uParam3);
	}
	return 1;
}

int func_728(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ST_DOCTOR");
		case 3:
			return joaat("ST_GENERAL");
		case 4:
			return joaat("ST_FENCE");
		case 33:
			return joaat("ST_MOONSHINE_STILL");
		case 6:
			return joaat("ST_GUNSMITH");
		case 7:
			return joaat("ST_TAILOR");
		case 8:
			return joaat("ST_BARBER");
		case 1:
			return joaat("ST_TRAIN_STATION");
		case 2:
			return joaat("ST_POST_OFFICE");
		case 9:
			return joaat("ST_HORSE_SHOP");
		case 10:
			return joaat("ST_BUTCHER");
		case 11:
			return joaat("ST_DYNAMIC");
		case 22:
			return joaat("ST_QUARTERMASTER");
		case 23:
			return joaat("ST_HORSE_TRAINER");
		case 24:
			return joaat("ST_BLACKSMITH");
		case 25:
			return joaat("ST_BOUNTYHUNTING_MP_RETURN");
		case 26:
			return joaat("ST_COACH");
		case 5:
			return joaat("ST_HORSE_FENCE");
		case 12:
			return joaat("ST_BANK");
		case 14:
			return joaat("ST_BAIT");
		case 30:
			return joaat("ST_BARTENDER");
		case 31:
			return joaat("ST_PIANIST");
		case 32:
			return joaat("ST_MUSICIAN");
		case 15:
			return joaat("ST_TRAPPER");
		case 16:
			return joaat("ST_PEARSON");
		case 17:
			return joaat("ST_HOTEL");
		case 27:
			return joaat("ST_WILDERNESS_SUPPLIES");
		case 28:
			return joaat("ST_CAMP_LOCKBOX");
		case 29:
			return joaat("ST_CAMP_BUTCHERTABLE");
		case 34:
			return joaat("ST_HANDHELD");
		case 19:
			return joaat("ST_WEAPON_MOD_STORE");
		case 20:
			return joaat("ST_CLOTHING");
		case 21:
			return joaat("ST_CAMP_SHAVING");
		case 18:
			return joaat("ST_PHOTO_STUDIO");
		case 35:
			return joaat("ST_HONOR_MP");
		case 36:
			return joaat("ST_THEATER_MP");
		case 38:
			return joaat("ST_TRAVELLING_SALESMAN");
		case 37:
			return joaat("ST_MOONSHINE_PROPERTY");
		default:
			break;
	}
	return 0;
}

int func_729(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1125276->f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (((*Global_1125276)[iVar0 /*27*/])->f_9 == iParam0 && Global_1125276[iVar0 /*27*/] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_730(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_2 = iParam2;
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_826(iParam0, iParam1, iParam2, iParam3);
}

int func_731(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_5"):
			return 0;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_5"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_3"):
			return 1;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_5"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_1"):
			return 2;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_5"):
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_732(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_281(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_827(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_733(int iParam0)
{
	if (!func_388(iParam0))
	{
		return 0;
	}
	return func_389(iParam0, 2, 1);
}

int func_734(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_828())
	{
		return 0;
	}
	if (!func_273())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_736(&Global_0, 8);
	}
	func_736(&Global_0, 1);
	return 1;
}

void func_735(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_109(239, 0);
			break;
		case 16:
			func_109(240, 0);
			break;
		case 33:
			func_109(241, 0);
			break;
		case 51:
			func_109(242, 0);
			break;
		case 2:
			func_109(243, 0);
			break;
		case 3:
			func_109(244, 0);
			break;
		case 52:
			func_109(245, 0);
			break;
		case 15:
			func_109(246, 0);
			break;
		case 23:
			func_109(247, 0);
			break;
		case 37:
			func_109(248, 0);
			break;
		case 26:
			func_109(249, 0);
			break;
		case 13:
			func_109(250, 0);
			break;
		case 19:
			func_109(251, 0);
			break;
		case 34:
			func_109(252, 0);
			break;
		case 38:
			func_109(253, 0);
			break;
		case 49:
			func_109(254, 0);
			break;
		case 7:
			func_109(255, 0);
			break;
		case 20:
			func_109(256, 0);
			break;
		case 18:
			func_109(257, 0);
			break;
		case 6:
			func_109(258, 0);
			break;
		case 29:
			func_109(259, 0);
			break;
		case 48:
			func_109(260, 0);
			break;
		case 11:
			break;
		case 4:
			func_109(262, 0);
			break;
		case 8:
			func_109(263, 0);
			break;
		case 28:
			func_109(264, 0);
			break;
		case 31:
			func_109(265, 0);
			break;
		case 12:
			func_109(266, 0);
			break;
		case 27:
			func_109(267, 0);
			break;
		case 50:
			func_109(268, 0);
			break;
	}
}

void func_736(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_737()
{
	return 1;
	if (Global_1572887->f_13 == 0)
	{
		return 1;
	}
	return Global_39.f_1;
}

int func_738(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_829(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446;
		case 1:
			return Global_1954472->f_1465.f_136;
		default:
			break;
	}
	return -1;
}

void func_739(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

int func_740(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_829(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446.f_1;
		case 1:
			return Global_1954472->f_1465.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_741(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_830(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if ((PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

int func_742(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_829(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446.f_2;
		case 1:
			return Global_1954472->f_1465.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_743(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_CHARGE_PED_STAMINA(iParam1, fParam0);
}

float func_744(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_751();
	func_831(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_832(iParam0, 2);
	if (func_834(iVar0, func_833(iParam0, 2), 1))
	{
		func_835(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_109(103, bParam2);
		return 0f;
	}
	func_836(iParam0, func_751(), 2);
	func_835(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_745(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_829(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_6[iParam0 /*3*/]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/]);
		default:
			break;
	}
	return -1f;
}

int func_746(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_829(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_837(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_838(iParam0, 7000, iParam5);
		}
		func_839(iVar0, iParam0, fParam1);
		func_840(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

int func_747(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_841(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_842(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_615(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			Global_17172.f_54.f_2438.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_842(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_843(joaat("STATUS_EFFECT__TRACKING"));
			func_617(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			Global_17172.f_54.f_2438.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_842(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_616(-1, 0);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			Global_17172.f_54.f_2438.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_843(joaat("STATUS_EFFECT__POISON"));
			func_844(0, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			(Global_17172.f_54.f_2438.f_34[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_844(1, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			(Global_17172.f_54.f_2438.f_34[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_844(2, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			(Global_17172.f_54.f_2438.f_34[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

float func_748(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_829(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_26[iParam0]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_749()
{
	if (Global_1954472->f_1331.f_107 == -15)
	{
		return 1;
	}
	return func_845(Global_1954472->f_1331.f_107, 0);
}

int func_750(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

int func_751()
{
	return &Global_1902689;
}

void func_752(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_713(*iParam0);
	iVar1 = func_712(*iParam0);
	iVar2 = func_846(*iParam0);
	iVar3 = func_847(*iParam0);
	iVar4 = func_848(*iParam0);
	iVar5 = func_849(*iParam0);
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
	iVar6 = func_714(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_714(iVar1, iVar0);
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
	func_850(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

float func_753(float fParam0, float fParam1, float fParam2)
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

int func_754(int iParam0, float fParam1, int iParam2)
{
	if (!func_851(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_829(2);
	}
	func_852(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1275573->f_8))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1275573->f_8, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

int func_755(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_256(iVar0);
}

int func_756()
{
	return Global_1951141->f_1657;
}

int func_757(bool bParam0)
{
	struct<4> Var0;
	int iVar14;
	struct<4> Var15;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<14> Var22;

	Var0.f_9 = -1591664384;
	iVar14 = 0;
	Var15 = { func_112(joaat("WARDROBE"), func_290(1), 1034665895, 1) };
	iVar19 = func_490(Var15, 552979403, 1, -1);
	if (iVar19 != 0)
	{
		if (iVar19 == joaat("CLOTHING_MP_FEMALE_PLAYER_CHARACTER"))
		{
			iVar14 = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
		}
		else if (iVar19 == joaat("CLOTHING_MP_MALE_PLAYER_CHARACTER"))
		{
			iVar14 = joaat("MPC_PLAYER_TYPE_MP_MALE");
		}
		return iVar14;
	}
	Var22 = { func_342(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_343(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_148(&Var0, 0, iVar20, iVar21))
		{
			if (Var0.f_4 == joaat("CLOTHING_MP_FEMALE_PLAYER_CHARACTER"))
			{
				iVar14 = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
			}
			else if (Var0.f_4 == joaat("CLOTHING_MP_MALE_PLAYER_CHARACTER"))
			{
				iVar14 = joaat("MPC_PLAYER_TYPE_MP_MALE");
			}
			else
			{
				func_162(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_113(Var0, 1);
			}
			func_162(iVar20);
			return iVar14;
		}
		func_162(iVar20);
	}
	return 0;
}

int func_758(int iParam0)
{
	switch (iParam0)
	{
		case 491602716: /* GXTEntry: "Custom Outfit" */
			return 0;
		case 217155793: /* GXTEntry: "Outfit One" */
			return 1;
		case 97391779: /* GXTEntry: "Outfit Two" */
			return 2;
		case -808817534: /* GXTEntry: "Outfit Three" */
			return 3;
		case 1270922359: /* GXTEntry: "Outfit Four" */
			return 4;
		case -2011879201: /* GXTEntry: "Outfit Five" */
			return 5;
		case -1063340820: /* GXTEntry: "Outfit Six" */
			return 6;
		case 2127262701: /* GXTEntry: "Outfit Seven" */
			return 7;
		case -1323870201: /* GXTEntry: "Outfit Eight" */
			return 8;
		case 1632140501: /* GXTEntry: "Outfit Nine" */
			return 9;
		case 967218463: /* GXTEntry: "Outfit Ten" */
			return 10;
		default:
			break;
	}
	return -1;
}

int func_759(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_339(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1951141->f_3109.f_25 == 1)
	{
		Global_1951141->f_3109.f_25 = 0;
		*uParam1 = 0;
		Global_1951141->f_3109[0] = 0;
		return 1;
	}
	Global_1951141->f_3109.f_25 = (Global_1951141->f_3109.f_25 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1951141->f_3109[iVar0] = &Global_1951141->f_3109[Global_1951141->f_3109.f_25];
	Global_1951141->f_3109[Global_1951141->f_3109.f_25] = 0;
	func_628(iParam0, 1);
	return 1;
}

int func_760(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_853(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_855(uParam0, func_854(iVar0), 1, 1, bParam7);
	}
	if (bVar2 && DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, -1212855483))
	{
		iVar11 = func_854(iVar0);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_257(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bVar2 && iVar11 != 0)
				{
					func_856(iVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("BASE");
					}
					else
					{
						Jump @361; //curOff = 296
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_857(iVar3) && func_637(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2 && iVar11 != 0)
					{
						func_859(uParam0, iVar11, func_858(iParam1) != 0);
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

bool func_761(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_762(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_763(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_764(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_765(var uParam0, int iParam1, int iParam2)
{
	*((Global_17172.f_54.f_644.f_32[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
}

void func_766(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = Global_17172.f_54.f_644.f_1776;
	}
	(Global_17172.f_54.f_644.f_32[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_765(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_767(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17172.f_54.f_644.f_1776;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17172.f_54.f_644.f_32[iParam1 /*120*/] = (Global_17172.f_54.f_644.f_32[iParam1 /*120*/] || iParam0);
	}
}

int func_768(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_860(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_861())
	{
		return func_860(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_860(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_769(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_770(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1275573->f_22[iVar0])
	{
		func_862(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_863(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

void func_771(var uParam0)
{
	func_650(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_476() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_650(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_650(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_772(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_864(uParam0))
	{
		return;
	}
	if (Global_1272170->f_2518 < 20)
	{
		Global_1272170->f_2518++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_2518.f_1[iVar0 /*21*/]) = { *(Global_1272170->f_2518.f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1272170->f_2518.f_1[(Global_1272170->f_2518 - 1) /*21*/]) = { Var1 };
}

int func_773(int iParam0)
{
	var uVar0;

	if (func_27() != -1)
	{
		return 0;
	}
	if (func_530(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_776(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_210(iParam0, 1);
}

void func_774(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_87(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_659(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_784(iVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iVar0, 0, false) && func_188(iParam0, 0, 0, 0) == 0))
		{
			if (func_27() == -1)
			{
				func_660(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_323(iParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_775(int iParam0, int iParam1)
{
	if (func_69(iParam0, 58855631))
	{
		func_865(iParam0, -915411861, iParam1, 1);
	}
}

int func_776(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_866(&iParam0);
	if (!func_68(iParam0, 0) && !func_415(func_207(iParam0), 2))
	{
		return 0;
	}
	if (!bParam3 && func_212(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam3 = true;
	}
	if (func_301(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_291(0) };
		Var4.f_9 = -1591664384;
		if (!func_293(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return 0;
		}
		else if (func_294(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return 0;
		}
		if (func_292(iParam0, 1))
		{
			if (!func_293(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return 0;
			}
			else if (func_294(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return 0;
			}
		}
		return 1;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_398(iParam0, iParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return 0;
	}
	else if (iVar26 == 0)
	{
		return 1;
	}
	iVar27 = func_264(iParam0, *iParam1, iParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return 1;
	}
	return 0;
}

int func_777()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_34)) && !func_867(Global_34, 1369124074)) && !func_867(Global_34, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_34)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return 1;
	}
	return 0;
}

int func_778(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_779(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_39.f_3434[iVar1]), iVar2);
}

void func_780(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_39.f_3434[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_39.f_3434[iVar1] = uVar3;
}

void func_781(int iParam0)
{
	switch (iParam0)
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
			func_868(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_869(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_869(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_869(3);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_870(1);
			break;
		case 33:
			func_871(1);
			break;
		case 34:
			func_872(1);
			break;
		case 35:
			break;
		case 36:
			func_873(0);
			break;
		case 37:
			func_874(0);
			break;
		case 38:
			func_875(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (func_737() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_876("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_109(675, 0);
			break;
		case 3:
			if (func_737() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_876("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_109(676, 0);
			break;
		case 4:
			if (func_737() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_876("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_109(677, 0);
			break;
		case 5:
			if (func_737() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_876("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_109(678, 0);
			break;
		case 23:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			if (func_27() == -1)
			{
				if (!func_210(1013902307, 1))
				{
					func_663(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_27() == -1)
			{
				if (!func_210(1013902307, 1))
				{
					func_663(1013902307, 1, 752097756);
				}
				if (!func_210(142640135, 1))
				{
					func_663(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_27() == -1)
			{
				if (!func_210(786809402, 1))
				{
					func_663(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_27() == -1)
			{
				if (!func_210(786809402, 1))
				{
					func_663(786809402, 1, 752097756);
				}
				if (!func_210(-518019409, 1))
				{
					func_663(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 24:
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
		case 43:
			break;
		case 44:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1939178->f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), true);
			break;
		case 51:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

int func_782(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_877(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

int func_783(int iParam0)
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

int func_784(int iParam0)
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

void func_785(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar2 = func_878(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

int func_786(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_212(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_111(iParam0, 0, 0) };
	if (func_776(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_114(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_145(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_787(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam2))
	{
		return 0;
	}
	if (func_776(iParam0, iParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_114(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_145(0), uParam1, iParam2, iParam0, iParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_788(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || Global_1939178->f_6)
	{
		return;
	}
	if (WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_IS_WEAPON_PISTOL(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_34, sVar0, iParam0);
	iVar2 = func_751();
	func_752(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_34, sVar1, iVar2);
}

int func_789(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_607(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, joaat("AMMO_ARROW")) <= 0)
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
		if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
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

int func_790()
{
	return 0;
}

bool func_791(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_792(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_793(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_655(49))
			{
				if (!func_655(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_655(50))
			{
				if (!func_655(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

int func_794(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (func_27() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_210(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_34, 1, 1, iParam0, &Var1, 0);
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
			if (func_68(iVar25, 0) && func_69(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_795(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_879(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_538(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_796(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_880() || func_881())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_538(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_538(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_308(func_539(joaat("CAREER_CASH")), iVar1);
	}
}

char* func_797(int iParam0)
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

int func_798(int iParam0)
{
	var uVar0;

	if (!func_574(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

int func_799(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_68(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_882(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_324(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((func_330(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((func_330(iParam0, iParam1) - iParam2) < 0)
		{
			func_799(iParam0, iParam1, func_188(iParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_883(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_323(iParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

int func_800(int iParam0)
{
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x4AEF1FB5B9011D75(iParam0);
}

int func_801(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_ALLIGATOR_SKIN");
		case 1:
			return joaat("PROVISION_ALLIGATOR_SKIN_POOR");
		case 2:
			return joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE");
		case 3:
			return joaat("PROVISION_BEAVER_FUR");
		case 4:
			return joaat("PROVISION_BEAVER_FUR_POOR");
		case 5:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
		case 6:
			return joaat("PROVISION_BOAR_SKIN");
		case 7:
			return joaat("PROVISION_BOAR_SKIN_POOR");
		case 8:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
		case 9:
			return joaat("PROVISION_BUCK_FUR");
		case 10:
			return joaat("PROVISION_BUCK_FUR_POOR");
		case 11:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
		case 12:
			return joaat("PROVISION_COUGAR_FUR");
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
		case 15:
			return joaat("PROVISION_COYOTE_FUR");
		case 16:
			return joaat("PROVISION_COYOTE_FUR_POOR");
		case 17:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
		case 18:
			return joaat("PROVISION_DEER_HIDE");
		case 19:
			return joaat("PROVISION_DEER_HIDE_POOR");
		case 20:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
		case 21:
			return joaat("PROVISION_FOX_FUR");
		case 22:
			return joaat("PROVISION_FOX_FUR_POOR");
		case 23:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
		case 24:
			return joaat("PROVISION_GOAT_HAIR");
		case 25:
			return joaat("PROVISION_GOAT_HAIR_POOR");
		case 26:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
		case 27:
			return joaat("PROVISION_JAVELINA_SKIN");
		case 28:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
		case 29:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
		case 30:
			return joaat("PROVISION_LOANSHARK_SKINS");
		case 31:
			return joaat("PROVISION_PANTHER_FUR");
		case 32:
			return joaat("PROVISION_PANTHER_FUR_POOR");
		case 33:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
		case 34:
			return joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE");
		case 35:
			return joaat("PROVISION_PIG_SKIN");
		case 36:
			return joaat("PROVISION_PIG_SKIN_POOR");
		case 37:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
		case 38:
			return joaat("PROVISION_PRONGHORN_FUR");
		case 39:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
		case 40:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
		case 41:
			return joaat("PROVISION_RAM_HIDE");
		case 42:
			return joaat("PROVISION_RAM_HIDE_POOR");
		case 43:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
		case 44:
			return joaat("PROVISION_SHEEP_WOOL");
		case 45:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
		case 46:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
		case 47:
			return joaat("PROVISION_WOLF_FUR");
		case 48:
			return joaat("PROVISION_WOLF_FUR_POOR");
		case 49:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
		case 50:
			return 0;
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

int func_802(int iParam0)
{
	if (!func_688(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_803(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAVER_FUR"):
			return 3;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 8;
		case joaat("PROVISION_DEER_HIDE"):
			return 18;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 26;
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 2;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 4;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 16;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 40;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 27;
		case joaat("PROVISION_SHEEP_WOOL"):
			return 44;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 37;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 20;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 39;
		case joaat("PROVISION_BUCK_FUR"):
			return 9;
		case joaat("PROVISION_ALLIGATOR_SKIN"):
			return 0;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 17;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 11;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 19;
		case joaat("PROVISION_RAM_HIDE"):
			return 41;
		case joaat("PROVISION_PANTHER_FUR"):
			return 31;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 36;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 28;
		case joaat("PROVISION_PIG_SKIN"):
			return 35;
		case 0:
			return 50;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 48;
		case joaat("PROVISION_FOX_FUR"):
			return 21;
		case joaat("PROVISION_COUGAR_FUR"):
			return 12;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 23;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return 38;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 49;
		case joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE"):
			return 34;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 25;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 5;
		case joaat("PROVISION_WOLF_FUR"):
			return 47;
		case joaat("PROVISION_COYOTE_FUR"):
			return 15;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 7;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 46;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 32;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 10;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 22;
		case joaat("PROVISION_GOAT_HAIR"):
			return 24;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 45;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 43;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 42;
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 1;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 29;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 33;
		case joaat("PROVISION_LOANSHARK_SKINS"):
			return 30;
		case joaat("PROVISION_BOAR_SKIN"):
			return 6;
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

int func_804(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return 0;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	if (func_805(iVar1, bParam1) == 0)
	{
		return 0;
	}
	iVar2 = iParam0;
	if (iVar2 > func_805(iVar1, bParam1))
	{
		iVar2 = func_805(iVar1, bParam1);
	}
	if (!bParam1)
	{
		((*Global_1269869)[iVar1 /*20*/])->f_8 = (((*Global_1269869)[iVar1 /*20*/])->f_8 - iVar2);
	}
	else
	{
		((*Global_1269869)[iVar1 /*20*/])->f_9 = (((*Global_1269869)[iVar1 /*20*/])->f_9 - iVar2);
	}
	if (func_805(iVar1, bParam1) < 0)
	{
		if (!bParam1)
		{
			((*Global_1269869)[iVar1 /*20*/])->f_8 = 0;
		}
		else
		{
			((*Global_1269869)[iVar1 /*20*/])->f_9 = 0;
		}
	}
	else if (func_805(iVar1, bParam1) > func_806(bParam1))
	{
		if (!bParam1)
		{
			((*Global_1269869)[iVar1 /*20*/])->f_8 = func_806(bParam1);
		}
		else
		{
			((*Global_1269869)[iVar1 /*20*/])->f_9 = func_806(bParam1);
		}
	}
	return 1;
}

int func_805(int iParam0, bool bParam1)
{
	return func_819(bParam1, ((*Global_1269869)[iParam0 /*20*/])->f_9, ((*Global_1269869)[iParam0 /*20*/])->f_8);
}

int func_806(bool bParam0)
{
	return func_819(bParam0, Global_1901929->f_638.f_30, Global_1901929->f_638.f_29);
}

int func_807(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_IS_ENTITY_A_BIRD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_GET_PED_DAMAGE(iParam0);
	iVar1 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (iVar1 == 2)
	{
		iVar2 = 4;
	}
	else if (iVar1 == 1)
	{
		iVar2 = 3;
	}
	else
	{
		iVar3 = PED::_GET_PED_QUALITY(iParam0);
		switch (iVar3)
		{
			case 0:
				iVar2 = 0;
				break;
			case 1:
				iVar2 = 1;
				break;
			case -1:
			case 2:
				iVar2 = 2;
				break;
		}
	}
	if (Global_17095.f_2 != 3)
	{
		iVar1 = Global_17095.f_2;
	}
	uVar4 = PED::_0x6B89FAA36FC909A3(uParam1, iParam0, iVar0, iVar2);
	return uVar4;
}

void func_808(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1[10];
	int iVar12;
	int iVar13;

	iVar1[0] = 878851736; /* GXTEntry: "Beef Stew" */
	iVar1[1] = 1762298001; /* GXTEntry: "Beef and Eggs Stew" */
	iVar1[2] = 1869130580; /* GXTEntry: "Low Quality Beef Stew" */
	iVar1[3] = 1336518004; /* GXTEntry: "Low Quality Beef and Eggs Stew" */
	iVar1[4] = 116793994; /* GXTEntry: "Medium Quality Beef Stew" */
	iVar1[5] = 515084529; /* GXTEntry: "Medium Quality Beef and Eggs Stew" */
	iVar1[6] = -1760041550; /* GXTEntry: "High Quality Beef Stew" */
	iVar1[7] = -1977068039; /* GXTEntry: "High Quality Beef and Eggs Stew" */
	iVar1[8] = -1708424762; /* GXTEntry: "Regional Beef Stew" */
	iVar1[9] = -399865011; /* GXTEntry: "Regional Beef and Eggs Stew" */
	iVar12 = 0;
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (iParam1 == &iVar1[iVar13])
		{
			if (iVar13 > iVar12)
			{
				uVar0 = &iVar1[iVar13];
			}
		}
		iVar13++;
	}
	func_884(iParam0, &uVar0);
	func_885(&uVar0);
}

void func_809()
{
	struct<9> Var0;

	Var0 = 7;
	Var0.f_8 = -1;
	MISC::_COPY_MEMORY(&Local_0, &Var0, 13);
}

void func_810(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

int func_811(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			uParam0->f_8 = 0;
			break;
		case 1:
			uParam0->f_8 = (uParam0->f_10 - 1);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_812(var uParam0, int iParam1)
{
	if (!func_886(uParam0))
	{
		return 0;
	}
	if (iParam1 != 0)
	{
		(*uParam0)[uParam0->f_8] = iParam1;
		if (!func_887(uParam0))
		{
		}
		return 1;
	}
	return 0;
}

int func_813(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (uParam0->f_9)
	{
		case 0:
			return uParam0->f_8;
		case 1:
			iVar0 = ((uParam0->f_10 - uParam0->f_8) - 1);
			if (iVar0 < 0)
			{
				iVar0 = 0;
			}
			else if (iVar0 != uParam0->f_10)
			{
			}
			break;
	}
	return iVar0;
}

int func_814()
{
	if (Local_0.f_11 < 0 || Local_0.f_11 >= 7)
	{
		return 0;
	}
	if (Local_0.f_9 == 0)
	{
		if (Local_0.f_11 >= func_813(&Local_0))
		{
			return 0;
		}
	}
	return 1;
}

int func_815(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_TAXIDERMIST_ORDERS"):
		case joaat("CI_TAG_FOLDER_LETTERS"):
		case joaat("CI_TAG_FOLDER_TREASURE_MAPS"):
		case joaat("CI_TAG_FOLDER_PHOTOGRAPHS"):
		case joaat("CI_TAG_FOLDER_COLLECTOR_MAPS"):
		case joaat("CI_TAG_FOLDER_RECIPE_PAMPHLETS"):
		case joaat("CI_TAG_FOLDER_NEWSPAPER_SCRAPS"):
		case joaat("CI_TAG_FOLDER_BUSINESS_CARDS"):
		case joaat("CI_TAG_FOLDER_NEWSPAPERS"):
		case joaat("CI_TAG_FOLDER_DINOSAUR_NOTES"):
		case joaat("CI_TAG_FOLDER_ROCK_CARVING_NOTES"):
		case joaat("CI_TAG_FOLDER_BOOKS"):
		case joaat("CI_TAG_FOLDER_DRAWINGS"):
		case joaat("CI_TAG_FOLDER_BOUNTY_POSTERS"):
		case joaat("CI_TAG_FOLDER_MAPS"):
		case joaat("CI_TAG_FOLDER_NOTES"):
			return 1;
	}
	if (func_888(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_816(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_KIT_WATCHES"):
			return 1;
	}
	return 0;
}

bool func_817()
{
	return func_347(1);
}

int func_818(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_GAMEY_BIRD"):
		case joaat("CI_TAG_FOLDER_BIG_GAME"):
		case joaat("CI_TAG_FOLDER_GRISTLY_MUTTON"):
		case joaat("CI_TAG_FOLDER_HERPTILE_MEAT"):
		case joaat("CI_TAG_FOLDER_SUCCULENT_FISH"):
		case joaat("CI_TAG_FOLDER_STRINGY_MEAT"):
		case joaat("CI_TAG_FOLDER_MATURE_VENISON"):
		case joaat("CI_TAG_FOLDER_GAME"):
		case joaat("CI_TAG_FOLDER_CRUSTACEAN"):
		case joaat("CI_TAG_FOLDER_FLAKEY_FISH"):
		case joaat("CI_TAG_FOLDER_PLUMP_BIRD"):
		case joaat("CI_TAG_FOLDER_PRIME_BEEF"):
		case joaat("CI_TAG_FOLDER_GRITTY_FISH"):
		case joaat("CI_TAG_FOLDER_TENDER_PORK"):
		case joaat("CI_TAG_FOLDER_EXOTIC_BIRD"):
			return 1;
	}
	return 0;
}

int func_819(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_820()
{
	return Global_1893575->f_2;
}

int func_821(int iParam0)
{
	if (!func_153(iParam0))
	{
		return -1;
	}
	if (iParam0 == 40 && func_820() == 137)
	{
		return 137;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 129:
			return 83;
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
		case 122:
		case 123:
			return 40;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 140:
			return 74;
		case 26:
			return 3;
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 124:
		case 125:
			return 5;
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 126:
			return 111;
		case 27:
		case 28:
			return 23;
		case 41:
			return 107;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 127:
			return 26;
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 120:
		case 121:
			return 81;
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 128:
			return 98;
		case 3:
			return 13;
		case 151:
		case 152:
		case 153:
		case 154:
			return 84;
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
			return 104;
		case 4:
			return 14;
		case 160:
		case 161:
		case 162:
		case 163:
			return 76;
		case 164:
		case 165:
		case 166:
		case 167:
			return 4;
		case 40:
			return 95;
		case 168:
		case 169:
		case 170:
		case 171:
			return 9;
		case 76:
			return 119;
		case 99:
		case 100:
		case 101:
			return 28;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
			return 121;
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			return 127;
		case 115:
		case 116:
			return 130;
		case 117:
		case 118:
			return 123;
		case 132:
			return 87;
		case 130:
		case 131:
			return 135;
		case 64:
			return 76;
		case 65:
			return 104;
		case 66:
			return 9;
		case 67:
			return 84;
		case 113:
			return 96;
		case 114:
			return 29;
		case 135:
			return 126;
		case 136:
			return 133;
		case 137:
			return 136;
		case 138:
			return 39;
		case 139:
			return 16;
		case 141:
			return 76;
		case 142:
			return 61;
		case 143:
			return 100;
		case 144:
			return 34;
		case 145:
			return 43;
		case 146:
			return 85;
		case 20:
			return -1;
		case 134:
			return -1;
		default:
			break;
	}
	return -1;
}

int func_822(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 133)
	{
		return 15;
	}
	else if (iParam0 <= 136)
	{
		return 16;
	}
	return -1;
}

int func_823(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_416(iParam0))
	{
		return 0;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, bParam1) == 0)
	{
		return 0;
	}
	if (bParam2)
	{
		return !func_889(iParam0, bParam1);
	}
	return 1;
}

int func_824(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_415(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && NETWORK::_0xFBE782B3165AC8EC(iVar0))
	{
		return 0;
	}
	return iVar0;
}

void func_825(int iParam0, bool bParam1, var uParam2, int iParam3)
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
	float fVar21[15];

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
		fVar21[iVar0] = 1f;
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
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
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
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

void func_826(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<20> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1272170->f_20 < 20)
	{
		Global_1272170->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_20.f_1[iVar0 /*20*/]) = { *(Global_1272170->f_20.f_1[iVar0 + 1 /*20*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1.f_4.f_7 = -142743235;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Var1.f_2 = iParam2;
		Var1.f_3 = iParam3;
	}
	*(Global_1272170->f_20.f_1[(Global_1272170->f_20 - 1) /*20*/]) = { Var1 };
}

int func_827(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_890(Param0);
	}
	return -1;
}

bool func_828()
{
	return !Global_1572887->f_9;
}

int func_829(int iParam0)
{
	return func_892(func_891(iParam0));
}

bool func_830(int iParam0)
{
	float fVar0;

	fVar0 = (func_893(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

void func_831(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_713(*iParam0);
	iVar1 = func_712(*iParam0);
	iVar2 = func_846(*iParam0);
	iVar3 = func_847(*iParam0);
	iVar4 = func_848(*iParam0);
	iVar5 = func_849(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_714(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_850(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_832(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_829(2);
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_2;
		case 1:
			return (Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_2;
		default:
			break;
	}
	return -1;
}

int func_833(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_829(2);
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_1;
		case 1:
			return (Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_1;
		default:
			break;
	}
	return -15;
}

bool func_834(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_894(iParam1) || !func_894(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_835(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_829(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_836(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_829(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_1 = iParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_837(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_895(iParam1), BUILTIN::CEIL(fParam2));
	return 1;
}

void func_838(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_829(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_16[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_839(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_896(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_897(iParam1), fParam2, -1);
	}
}

void func_840(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_829(2);
	}
	uVar0 = Global_1275573->f_21;
	func_898(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_899(iParam0, uVar0, iParam3);
	}
}

int func_841(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

char* func_842(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_843(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	iVar1 = Global_1140484->f_41657.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1140484->f_41657.f_1[iVar2 /*2*/];
		iVar3 = func_900(iVar0, 1);
		if (&Global_1140484->f_30603.f_847[iVar3 /*12*/] == iParam0)
		{
			func_901(iVar0);
			Global_1140484->f_41657.f_1.f_42 = (Global_1140484->f_41657.f_1.f_42 - 1);
		}
		else
		{
			*(Var6[iVar4 /*2*/]) = { *(Global_1140484->f_41657.f_1[iVar2 /*2*/]) };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		*(Global_1140484->f_41657.f_1[iVar5 /*2*/]) = { *(Var6[iVar5 /*2*/]) };
		iVar5++;
	}
}

void func_844(int iParam0, bool bParam1, bool bParam2)
{
	func_746(iParam0, 100f, bParam1, bParam2, 1, 2);
}

bool func_845(int iParam0, bool bParam1)
{
	return func_834(func_751(), iParam0, bParam1);
}

int func_846(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_847(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_848(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_849(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

void func_850(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_567(iParam0, iParam6);
	func_568(iParam0, iParam5);
	func_569(iParam0, iParam4);
	func_570(iParam0, iParam3);
	func_571(iParam0, iParam2);
	func_572(iParam0, iParam1);
}

int func_851(int iParam0)
{
	if (func_841(iParam0))
	{
		return 1;
	}
	else if (func_902(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_852(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 <= 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_829(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

int func_853(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_476();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		return -1806335803;
	}
	else if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		return -971050805;
	}
	return 0;
}

int func_854(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_855(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_903(uParam0->f_1[iVar0 /*3*/], 2))
		{
			if (func_904(iVar0, iParam1))
			{
				vVar4 = { func_905(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1951141->f_81[iVar0 /*12*/]) && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_906(iVar0, 4))
				{
					func_907(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_908(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = &Global_1951141->f_81[iVar0 /*12*/];
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar1 };
				}
			}
			iVar0++;
		}
	}

void func_856(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[func_257(iParam0, 1) /*12*/])->f_11 = ((Global_1951141->f_81[func_257(iParam0, 1) /*12*/])->f_11 || iParam1);
}

int func_857(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1951141->f_1040.f_2 = 0;
	iVar0 = 1226838104;
	func_909(&(Global_1951141->f_1040), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1951141->f_1040));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1951141->f_1040), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_858(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(iParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

void func_859(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_69(&(uParam0->f_1[34 /*3*/]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (&(Global_1951141->f_81[iVar0 /*12*/])->f_3[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else if (!bParam2 && func_858(&(uParam0->f_1[iVar0 /*3*/])) != 0)
		{
		}
		else if (!func_904(iVar0, iParam1))
		{
		}
		else if (func_906(iVar0, 16))
		{
			func_907(iVar0, 16, 6);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
			(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
		}
		iVar0++;
	}
}

bool func_860(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_861()
{
	return Global_1099294->f_339;
}

void func_862(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_863(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_863(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_864(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_865(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_68(iParam0, 0) && !func_415(func_207(iParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, bParam1, &Var0))
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

int func_866(int iParam0)
{
	if (!func_68(*iParam0, 0))
	{
		return 0;
	}
	if (!func_910(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		default:
			return 0;
	}
	return 1;
}

int func_867(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_868(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
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

void func_869(bool bParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1954472->f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954472->f_5.f_7) > bParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954472->f_5.f_7, bParam0);
		if (iVar0 == &Global_1954472->f_5.f_14[bParam0 /*82*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954472->f_5.f_7, bParam0, "pause_info_panel_list", &(Global_1954472->f_5.f_14[bParam0 /*82*/]));
}

void func_870(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 440, !bParam0);
}

void func_871(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 439, !bParam0);
}

void func_872(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 438, !bParam0);
}

void func_873(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_HIDE_HUD_COMPONENT(iVar0);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(iVar0);
	}
}

void func_874(bool bParam0)
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

void func_875(bool bParam0)
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

var func_876(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_877(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && _NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_911(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_912(uParam1, iParam0, Var3);
	return 1;
}

int func_878(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_879(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_913())
	{
		Global_1912978->f_125 = MISC::GET_GAME_TIMER();
		Global_1912978->f_126 = iParam1;
	}
	Global_1912978->f_127 = (Global_1912978->f_127 + iParam0);
}

bool func_880()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_881()
{
	return DLC::IS_DLC_PRESENT(joaat("DLC_ULTIMATEEDITION"));
}

bool func_882(int iParam0, int iParam1, int iParam2)
{
	if (!func_68(iParam1, 0))
	{
		return false;
	}
	return func_330(iParam0, iParam1) >= iParam2;
}

int func_883(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_68(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_701(iParam0) };
	Var5 = { func_702(iParam0, iParam1, Var0, Var0.f_4) };
	return func_914(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

void func_884(int iParam0, var uParam1)
{
}

void func_885(var uParam0)
{
}

int func_886(var uParam0)
{
	if (uParam0->f_8 < 0 || uParam0->f_8 >= 7)
	{
		return 0;
	}
	return 1;
}

int func_887(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			uParam0->f_8++;
			break;
		case 1:
			if (uParam0->f_10 <= 0)
			{
				return 0;
			}
			uParam0->f_8 = (uParam0->f_8 - 1);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_888(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_CIG_CARD_SPT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_AML_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_GUN_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_GRL_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_LND_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_ACT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_PLT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_INV_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_ART_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_PAM_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_HOR_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_VEH_SET"):
			return 1;
	}
	return 0;
}

int func_889(int iParam0, bool bParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return 0;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (&Var0[iVar474 /*47*/] == bParam1)
		{
			iVar473 = (Var0[iVar474 /*47*/])->f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = &(Var0[iVar474 /*47*/])->f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return 1;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return 0;
}

int func_890(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_915(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

bool func_891(int iParam0)
{
	return func_860(&(Global_1954472->f_1465), iParam0, 1);
}

int func_892(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_893(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_916(2)));
}

int func_894(int iParam0)
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
	iVar0 = func_849(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_848(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_847(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_713(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_712(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_846(iParam0);
	if (iVar5 < 1 || iVar5 > func_714(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_895(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

char* func_896(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_897(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_898(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_829(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_6[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_899(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_829(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		default:
			break;
	}
}

int func_900(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2006026692:
			return 166;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 163;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1631930150:
			return 161;
		case -1629969648:
			return 164;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 162;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 167;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 171;
		case 320758674:
			return 158;
		case 352539363:
			return 169;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 165;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1498983922:
			return 84;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1614000521:
			return 170;
		case 1636352616:
			return 151;
		case 1662680949:
			return 168;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

int func_901(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_917(iParam0))
	{
		return 0;
	}
	iVar0 = func_900(iParam0, 1);
	if (!func_918(&(Global_1140484->f_30603.f_847[iVar0 /*12*/])))
	{
		return 1;
	}
	iVar3 = func_919(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603[iVar3 /*6*/])->f_5)
	{
		iVar1 = Global_1140484->f_30603[iVar3 /*6*/][iVar4];
		switch (func_920(iParam0, iVar1))
		{
			case 0:
				func_921(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1140484->f_30603.f_10924)
				{
					if (&Global_1140484->f_30603.f_8871[iVar5 /*3*/] != iVar1 || (Global_1140484->f_30603.f_8871[iVar5 /*3*/])->f_1 != iParam0)
					{
					}
					else
					{
						func_921(iVar1, iParam0, iVar4);
						func_922(Global_1140484->f_30603.f_8871[iVar5 /*3*/]);
						Global_1140484->f_30603.f_10924 = (Global_1140484->f_30603.f_10924 - 1);
						*(Global_1140484->f_30603.f_8871[iVar5 /*3*/]) = { *(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]) };
						func_922(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @554; //curOff = 357
				iVar2 = func_923(iVar1, 1);
				func_924(iVar2, -1);
				if ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_29 <= 0)
				{
					func_925(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1140484->f_30603.f_8870)
					{
						if (&Global_1140484->f_30603.f_8683[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1140484->f_30603.f_8683[iVar6] = -1;
							Global_1140484->f_30603.f_8870 = (Global_1140484->f_30603.f_8870 - 1);
							Global_1140484->f_30603.f_8683[iVar6] = &Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870];
							Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1140484->f_30603.f_847[iVar0 /*12*/] = -1;
			func_926(Global_1140484->f_30603.f_847[iVar0 /*12*/]);
			return 1;
		}

int func_902(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		case 13:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_903(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_904(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return ((Global_1951141->f_81[iParam0 /*12*/])->f_10 && iParam1) != 0;
}

Vector3 func_905(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17172.f_54.f_644.f_1776;
	}
	return *((Global_17172.f_54.f_644.f_32[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

bool func_906(int iParam0, int iParam1)
{
	return ((Global_1951141->f_81[iParam0 /*12*/])->f_11 && iParam1) != 0;
}

void func_907(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[iParam0 /*12*/])->f_11 = ((Global_1951141->f_81[iParam0 /*12*/])->f_11 - ((Global_1951141->f_81[iParam0 /*12*/])->f_11 && iParam1));
}

void func_908(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[iParam0 /*12*/])->f_11 = ((Global_1951141->f_81[iParam0 /*12*/])->f_11 || iParam1);
}

void func_909(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_910(int iParam0)
{
	return func_69(iParam0, 1279601681);
}

void func_911(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_RAGE_STORE_N_SR >= 11)
	{
		return;
	}
}

void func_912(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_864(uParam0))
	{
		return;
	}
	if (Global_1272170->f_1991 < 20)
	{
		Global_1272170->f_1991++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_1991.f_1[iVar0 /*24*/]) = { *(Global_1272170->f_1991.f_1[iVar0 + 1 /*24*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1272170->f_1991.f_1[(Global_1272170->f_1991 - 1) /*24*/]) = { Var1 };
}

bool func_913()
{
	return Global_1912978->f_127 == 0;
}

int func_914(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam2))
	{
		return 0;
	}
	if (func_420(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_927(iParam0, *iParam2, &Var0, 0))
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
	if (!INVENTORY::_0x3E4E811480B3AE79(iParam0, iParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_915(struct<2> Param0, int iParam2)
{
	if (!func_281(Param0))
	{
		return 0;
	}
	func_928(iParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634[Param0.f_1 /*3*/], 3);
			return 1;
		case 3:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_602[Param0.f_1 /*3*/], 3);
			return 1;
		case 4:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_2104[Param0.f_1 /*3*/], 3);
			return 1;
		case 5:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_12606[Param0.f_1 /*3*/], 3);
			return 1;
		case 6:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_12908[Param0.f_1 /*3*/], 3);
			return 1;
		case 7:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_15910[Param0.f_1 /*3*/], 3);
			return 1;
		case 8:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_15981[Param0.f_1 /*3*/], 3);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_916(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_738(2) * 2;
		case 1:
			return func_742(2) * 2;
		case 2:
			return func_740(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_917(int iParam0)
{
	int iVar0;

	iVar0 = func_900(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 171)
	{
		return 0;
	}
	return 1;
}

int func_918(int iParam0)
{
	int iVar0;

	iVar0 = func_919(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 141)
	{
		return 0;
	}
	return 1;
}

int func_919(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 127;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 130;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 138;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 128;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 122;
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 134;
		case -1105699593:
			return 141;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 131;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 123;
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 133;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 117;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 119;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 115;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
		case joaat("CONTENT__HUNTED__MASKED"):
			return 136;
		case joaat("CONTENT__PASSIVE_MODE"):
			return 126;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 118;
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 140;
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 132;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 124;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 125;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 139;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 135;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 120;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 129;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 137;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 121;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 116;
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return 91;
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

int func_920(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_929(iParam0);
	iVar1 = &Global_1275573;
	iVar2 = func_923(iParam1, 1);
	switch ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_1)
	{
		case joaat("ON_DISABLE"):
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("DURATION"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_921(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_917(iParam1))
	{
		return 0;
	}
	if (!func_930(iParam0))
	{
		return 0;
	}
	iVar0 = func_923(iParam0, 1);
	func_931(iParam0, iParam1, iParam2);
	if (func_932(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])) && func_933(iParam0, (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4))
	{
		vVar1 = { func_934((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4) };
		if (func_935(vVar1))
		{
			if (func_936(vVar1.x, vVar1.y, vVar1.z))
			{
				func_937((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_938((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
			}
		}
		else
		{
			func_938((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
		}
	}
	return 1;
}

void func_922(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_923(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 170;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 183;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 177;
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 151;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 172;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
		case -1394912816:
			return 186;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 163;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 174;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 182;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 171;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 175;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 155;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 162;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 150;
		case -97000889:
			return 86;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 159;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 167;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 165;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 161;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 185;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 184;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 168;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 160;
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 176;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 181;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 173;
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 152;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 166;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 179;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 158;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 178;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 180;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 153;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 169;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 157;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 156;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 164;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 154;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return 14;
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

void func_924(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = ((Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 + iParam1);
}

void func_925(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = iParam1;
}

void func_926(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		(uParam0->f_1[iVar0 /*2*/])->f_1 = 0;
		iVar0++;
	}
}

int func_927(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam0, &uParam1, iParam5, !bParam6))
	{
		return 0;
	}
	return 1;
}

void func_928(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
}

int func_929(int iParam0)
{
	if (func_939(iParam0))
	{
		return (func_940(iParam0) % 32);
	}
	return &Global_1275573;
}

int func_930(int iParam0)
{
	int iVar0;

	iVar0 = func_923(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 186)
	{
		return 0;
	}
	return 1;
}

int func_931(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_900(iParam1, 1);
	iVar1 = func_923(iParam0, 1);
	iVar2 = func_919(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1140484->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	if (!&(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_941(iVar3, 1);
		if (!func_942(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = (&(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] - 1);
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 - func_943((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_944(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_945(iVar6))
		{
		}
		else
		{
			iVar8 = func_946(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = (Global_1140484->f_18706[iVar8 /*195*/][iVar1] - 1);
			if (Global_1140484->f_18706[iVar8 /*195*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187)))
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 0;
				func_947(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_932(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_933(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_930(iParam0))
	{
		return false;
	}
	if (!func_948(iParam1))
	{
		return false;
	}
	iVar0 = func_949(iParam1, 1);
	return &Global_1140484->f_30603.f_8667[iVar0 /*3*/] == iParam0;
}

Vector3 func_934(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_950(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *(Global_1140484->f_30603.f_8871[iVar0 /*3*/]);
}

int func_935(vector3 vParam0)
{
	if (!func_930(vParam0.x))
	{
		return 0;
	}
	if (!func_917(vParam0.y))
	{
		return 0;
	}
	if (!func_951(vParam0.z))
	{
		return 0;
	}
	return 1;
}

int func_936(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_900(iParam1, 1);
	iVar1 = func_923(iParam0, 1);
	iVar2 = func_919(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1140484->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	((Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])->f_1 = Global_1275573->f_21;
	if (&(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_941(iVar3, 1);
		if (!func_942(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = &(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] + 1;
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 + func_943((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_952(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_945(iVar6))
		{
		}
		else if (!func_953((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/]))
		{
		}
		else
		{
			iVar8 = func_946(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = Global_1140484->f_18706[iVar8 /*195*/][iVar1] + 1;
			MISC::_0xE84AAC1B22A73E99(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			if (!(Global_1140484->f_18706[iVar8 /*195*/])->f_194)
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 1;
				func_954(iVar6);
			}
		}
		iVar7++;
	}
	func_955((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_2);
	return 1;
}

void func_937(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_948(iParam0))
	{
		return;
	}
	iVar0 = func_949(iParam0, 1);
	if (!func_930(iParam1))
	{
		return;
	}
	if (!func_917(iParam2))
	{
		return;
	}
	if (!func_951(iParam3))
	{
		return;
	}
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = iParam1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = iParam2;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = iParam3;
}

void func_938(int iParam0)
{
	int iVar0;

	if (!func_948(iParam0))
	{
		return;
	}
	iVar0 = func_949(iParam0, 1);
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = -1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = 0;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = -1;
}

int func_939(int iParam0)
{
	int iVar0;

	iVar0 = func_900(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return 1;
	}
	return 0;
}

int func_940(int iParam0)
{
	int iVar0;

	iVar0 = func_900(iParam0, 1);
	if (func_939(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_956(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_957(iParam0))
	{
		return (iVar0 - 161);
	}
	else if (func_958(iParam0))
	{
		return (iVar0 - 162);
	}
	else if (func_959(iParam0))
	{
		return (iVar0 - 170);
	}
	else if (func_960(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_941(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("MDEFENSE__BULLET"):
			return 49;
		case -1936069272:
			return 47;
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 61;
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
		case -1575020444:
			return 86;
		case -1572802418:
			return 67;
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 74;
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
		case -1349331938:
			return 43;
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
		case joaat("MHORSE__DEFENSE"):
			return 56;
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
		case joaat("MDEFENSE__RANGED"):
			return 46;
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 64;
		case joaat("MDEFENSE__FIRE"):
			return 52;
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 63;
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
		case joaat("MSTAMINA__REGEN_RATE"):
			return 71;
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 69;
		case joaat("MACCURACY__AI_MODIFIER"):
			return 59;
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 62;
		case joaat("MSKILL__PERCEPTION"):
			return 76;
		case -1:
			return 0;
		case 66478954:
			return 85;
		case joaat("MSKILL__DISTILLER"):
			return 83;
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 68;
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 78;
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 66;
		case joaat("MSKILL__DIVINATION"):
			return 82;
		case 410940916:
			return 84;
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 60;
		case joaat("MSKILL__INTUITION"):
			return 81;
		case joaat("MDAMAGE__MELEE"):
			return 30;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 79;
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
		case 874892169:
			return 87;
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 65;
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 72;
		case joaat("MDEFENSE__MELEE"):
			return 45;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
		case joaat("MSKILL__FOCUS"):
			return 75;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 70;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
		case 1546732394:
			return 34;
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
		case joaat("MDAMAGE__BULLETS"):
			return 32;
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 73;
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
		case joaat("MDAMAGE__THROWN"):
			return 31;
		case joaat("MSKILL__AWARENESS"):
			return 77;
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
		case joaat("MSKILL__POTENTIAL"):
			return 80;
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

int func_942(int iParam0)
{
	int iVar0;

	iVar0 = func_941(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 87)
	{
		return 0;
	}
	return 1;
}

float func_943(var uParam0)
{
	var uVar0;

	if (uParam0->f_2 != 0)
	{
		uVar0 = func_961(794259616, uParam0->f_2, uParam0->f_1, "");
		return uVar0;
	}
	return uParam0->f_1;
}

void func_944(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_942(iParam0))
	{
		return;
	}
	iVar0 = func_941(iParam0, 1);
	if (!func_962(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = ((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] - 1);
	if ((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] > 0)
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = 0;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 0;
	if (!func_963((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_964((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = (&((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] - 1);
	if (&((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < (Global_1140484->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1140484->f_41529[iVar1 /*25*/][iVar2] != &Global_1140484->f_2001[iVar0 /*192*/])
		{
		}
		else
		{
			(*Global_1140484->f_41529[iVar1 /*25*/])[iVar2] = -1;
			(Global_1140484->f_41529[iVar1 /*25*/])->f_23 = ((Global_1140484->f_41529[iVar1 /*25*/])->f_23 - 1);
			(*Global_1140484->f_41529[iVar1 /*25*/])[iVar2] = Global_1140484->f_41529[iVar1 /*25*/][(Global_1140484->f_41529[iVar1 /*25*/])->f_23];
			(*Global_1140484->f_41529[iVar1 /*25*/])[(Global_1140484->f_41529[iVar1 /*25*/])->f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

int func_945(int iParam0)
{
	int iVar0;

	iVar0 = func_946(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 61)
	{
		return 0;
	}
	return 1;
}

int func_946(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 49;
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 60;
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 50;
		case -1730553768:
			return 3;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
		case joaat("LASSO_IMMUNITY"):
			return 5;
		case joaat("DISABLE_JUMPING"):
			return 45;
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
		case -1026481003:
			return 6;
		case joaat("TAGGING_IMMUNITY"):
			return 13;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 55;
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
		case joaat("CONFUSION_EFFECT"):
			return 14;
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
		case -350459285:
			return 61;
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
		case -199042163:
			return 56;
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 51;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
		case -1:
			return 0;
		case joaat("TRAIL_EFFECT"):
			return 17;
		case joaat("POISON_EFFECT"):
			return 20;
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 57;
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
		case joaat("DISORIENT_EFFECT"):
			return 18;
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
		case joaat("WOUND_EFFECT"):
			return 15;
		case 718630298:
			return 52;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
		case joaat("NED_KELLY_BASE"):
			return 21;
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
		case 1159158432:
			return 58;
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
		case 1242495215:
			return 9;
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS"):
			return 59;
		case 1341326366:
			return 54;
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
		case joaat("PULSE_REPOST_STATE"):
			return 38;
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 53;
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
		case joaat("DRAIN_EFFECT"):
			return 16;
		case 2067881273:
			return 8;
		case joaat("DISABLE_DROWNING"):
			return 47;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return 29;
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

void func_947(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_965();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_966();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_0xA5950E16B8F31052(iVar0, 0, 0);
			GRAPHICS::_0xC5CB91D65852ED7E(func_967(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_967(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_967(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_109(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_967(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case joaat("PULSE_REPOST_STATE"):
			NETWORK::_0x442B4347B6EC36E8(iVar0, 0, true);
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_0x3FC4C027FD0936F4(15);
			break;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_0x5F8E0303C229C84B(iVar1, "");
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_969(func_968(iParam0));
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_0xAF4D239B8903FCBE();
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_0xCE285A4413B00B7F(iVar1, 1);
			break;
		case joaat("NED_KELLY_BASE"):
			func_970();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_962(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_962(16);
			break;
	}
}

int func_948(int iParam0)
{
	int iVar0;

	iVar0 = func_949(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_949(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case joaat("QUITE_AN_INSPIRATION"):
			return 3;
		case 0:
			return 0;
		case 1938826026:
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

int func_950(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_971(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1140484->f_30603.f_10924)
	{
		iVar64 = func_923(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), 1);
		if ((Global_1140484->f_30603.f_2900[iVar64 /*31*/])->f_4 != iParam0)
		{
		}
		else if (&Global_1140484->f_30603.f_8871[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_972(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), (Global_1140484->f_30603.f_8871[iVar65 /*3*/])->f_1))
		{
		}
		else
		{
			Var1 = { func_973(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/])) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

int func_951(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return 1;
}

void func_952(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_942(iParam0))
	{
		return;
	}
	iVar0 = func_941(iParam0, 1);
	if (!func_962(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = (*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] + 1;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 1;
	if (!func_963((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_964((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = &((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] + 1;
	iVar2 = 0;
	while (iVar2 < (Global_1140484->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1140484->f_41529[iVar1 /*25*/][iVar2] == &Global_1140484->f_2001[iVar0 /*192*/])
		{
			return;
		}
		iVar2++;
	}
	(*Global_1140484->f_41529[iVar1 /*25*/])[(Global_1140484->f_41529[iVar1 /*25*/])->f_23] = &Global_1140484->f_2001[iVar0 /*192*/];
	(Global_1140484->f_41529[iVar1 /*25*/])->f_23++;
}

int func_953(var uParam0)
{
	var uVar0;

	if (uParam0->f_1 != 0)
	{
		uVar0 = func_974(794259616, uParam0->f_1, 1, "");
		return uVar0;
	}
	return 1;
}

void func_954(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_965();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_966();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 2.019411E-41f, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_0xA5950E16B8F31052(iVar0, 1, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_967(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_967(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_967(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_109(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_967(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_0xFB6E111908502871(15);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_0x5F8E0303C229C84B(iVar1, "focusfire");
			break;
		case joaat("SLIPPERY_BASTARD_VFX"):
			iVar2 = func_968(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_975(iParam0, 0));
			func_976(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_975(iParam0, 1));
			func_976(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_975(iParam0, 2));
			func_976(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_975(iParam0, 3));
			func_976(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_968(iParam0);
			func_976(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_968(iParam0);
			func_976(iVar2, 4, 1, -1, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_0x249CD6B7285536F2(0f, 2f, 2f);
			PLAYER::_0x768E81AE285A4B67(iVar1, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_0xCE285A4413B00B7F(iVar1, 0);
			break;
		case joaat("NED_KELLY_BASE"):
			func_977();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_962(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_962(16);
			break;
	}
}

void func_955(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_978(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_979(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1275573->f_8, sVar1, false, 0, 0);
}

int func_956(int iParam0)
{
	int iVar0;

	iVar0 = func_900(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_957(int iParam0)
{
	int iVar0;

	iVar0 = func_900(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_958(int iParam0)
{
	int iVar0;

	iVar0 = func_900(iParam0, 1);
	if (iVar0 >= 162 && iVar0 <= 169)
	{
		return 1;
	}
	return 0;
}

int func_959(int iParam0)
{
	int iVar0;

	iVar0 = func_900(iParam0, 1);
	if (iVar0 >= 170 && iVar0 <= 170)
	{
		return 1;
	}
	return 0;
}

int func_960(int iParam0)
{
	int iVar0;

	iVar0 = func_900(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 160)
	{
		return 1;
	}
	return 0;
}

float func_961(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_980(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

int func_962(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1140484->f_1998), iParam0))
	{
		return 1;
	}
	if (Global_1140484->f_1997 >= 21)
	{
		return 0;
	}
	Global_1140484->f_1975[Global_1140484->f_1997] = iParam0;
	Global_1140484->f_1997++;
	return 1;
}

int func_963(int iParam0)
{
	int iVar0;

	iVar0 = func_964(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_964(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
		case joaat("NEARBY_ALLIES"):
			return 2;
		case 1416591065:
			return 1;
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

void func_965()
{
	bool bVar0;
	bool bVar1;

	if ((Global_1140484->f_18706[3 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 550, bVar0);
	if ((Global_1140484->f_18706[4 /*195*/])->f_194)
	{
		bVar1 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 556, bVar1);
}

void func_966()
{
	bool bVar0;

	bVar0 = false;
	if ((Global_1140484->f_18706[12 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 263, bVar0);
}

char* func_967(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_968(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -843895567;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return joaat("MOMENT_TO_RECUPERATE_VFX");
		case joaat("SLOW_AND_STEADY_VFX"):
			return joaat("SLOW_AND_STEADY_VFX");
		default:
			break;
	}
	return 0;
}

void func_969(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (((*Global_1182208)[iVar0 /*8*/])->f_5 == iParam0)
		{
			((*Global_1182208)[iVar0 /*8*/])->f_7 = 1;
			((*Global_1182208)[iVar0 /*8*/])->f_5 = 0;
		}
		iVar0++;
	}
}

void func_970()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1275573->f_8);
}

int func_971(int iParam0)
{
	int iVar0;

	if (!func_948(iParam0))
	{
		return -1;
	}
	iVar0 = func_949(iParam0, 1);
	return &(Global_1140484->f_30603.f_8667[iVar0 /*3*/]);
}

int func_972(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_930(iParam0))
	{
		return 0;
	}
	iVar0 = func_923(iParam0, 1);
	iVar2 = (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4;
	if (func_932(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])))
	{
		iVar3 = &Global_1140484->f_30603.f_8667[func_949(iVar2, 1) /*3*/];
		Var4 = { func_973(iVar3) };
		if (iVar3 != iParam0 && (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_5 <= Var4.f_5)
		{
			return 0;
		}
	}
	switch (&Global_1140484->f_30603.f_2900[iVar0 /*31*/])
	{
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			return 1;
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_981() && !func_982())
			{
				return 0;
			}
			return 1;
		case -2010146101:
			if (!func_981())
			{
				return 0;
			}
			return 1;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_929(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			return 1;
		case -2129621195:
			iVar1 = func_929(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			if (!_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1275573->f_154[&Global_1275573])))
			{
				return 0;
			}
			if (!_NAMESPACE26::_0x81FB74C83C2ED69F(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			return 1;
		case joaat("ALLY_ENTER_DEADEYE"):
			iVar1 = func_929(iParam1);
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (iVar1 != &Global_1275573 && !func_648(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (!func_983(512, iVar1))
			{
				return 0;
			}
			return 1;
		case -1503245593:
			if (!&Global_1954472->f_1616[8])
			{
				return 0;
			}
			iVar1 = func_929(iParam1);
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (PED::_0x0C31C51168E80365(Global_1275573->f_8) != PLAYER::GET_PLAYER_PED(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			return 1;
		default:
			break;
	}
	return 0;
}

struct<31> func_973(int iParam0)
{
	int iVar0;

	iVar0 = func_923(iParam0, 1);
	return *(Global_1140484->f_30603.f_2900[iVar0 /*31*/]);
}

bool func_974(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_980(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_975(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_976(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1182208[iVar0 /*8*/]) && !((*Global_1182208)[iVar0 /*8*/])->f_6)
		{
			((*Global_1182208)[iVar0 /*8*/])->f_5 = iParam0;
			((*Global_1182208)[iVar0 /*8*/])->f_1 = iParam1;
			((*Global_1182208)[iVar0 /*8*/])->f_2 = iParam2;
			((*Global_1182208)[iVar0 /*8*/])->f_3 = iParam3;
			((*Global_1182208)[iVar0 /*8*/])->f_4 = iParam4;
			((*Global_1182208)[iVar0 /*8*/])->f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_977()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1275573->f_8, 0.7f);
}

char* func_978(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_979(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

int func_980(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = joaat("NAME");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("NAME")))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("TYPE"));
		uParam2->f_10.f_3 = func_984(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_10), &Var0, joaat("DEFAULT")))
				{
				}
				break;
			case 1:
				if (!DATAFILE::_0xB2B42607F7867576(&(uParam2->f_10.f_1), &Var0, joaat("DEFAULT")))
				{
				}
				break;
			case 2:
				if (!DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_10.f_2), &Var0, joaat("DEFAULT")))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_14), &Var0, joaat("MIN"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_14.f_1), &Var0, joaat("MIN"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_14.f_2), &Var0, joaat("MIN"));
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_18), &Var0, joaat("MAX"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_18.f_1), &Var0, joaat("MAX"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_18.f_2), &Var0, joaat("MAX"));
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return 1;
	}
	return 0;
}

bool func_981()
{
	return Global_1572887->f_6;
}

int func_982()
{
	if (!&Global_1048577)
	{
		return 0;
	}
	if (!func_281(func_280(0)))
	{
		return 0;
	}
	if (&Global_3145858 != -504335712)
	{
		return 0;
	}
	if (func_985(Global_524288->f_39792))
	{
		return 1;
	}
	return 0;
}

bool func_983(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

int func_984(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("INT"):
			iVar0 = 0;
			break;
		case joaat("FLOAT"):
			iVar0 = 1;
			break;
		case joaat("BOOL"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

bool func_985(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

