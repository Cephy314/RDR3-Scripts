#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	bool bLocal_22 = false;
	struct<31> Local_23 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_54 = 0;
	var uLocal_55 = 1;
	var uLocal_56 = -1;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 4;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 4;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 1;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	if (((func_1(0, 0, 1) && !func_2()) || func_3(0)) || func_4(0, 0))
	{
		Global_1913166->f_1582 = 0;
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar0 = ScriptParam_0.f_3;
	Local_23.f_25 = ScriptParam_0.f_4;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		iLocal_21 = 3;
	}
	while (true)
	{
		if (func_5())
		{
			iLocal_21 = 3;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HITCH_ANIMAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_ANIMAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
		switch (iLocal_21)
		{
			case 0:
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				Local_23.f_29 = 1;
				Local_23.f_30 = 1;
				func_6(&Local_23, 2);
				iLocal_21 = 2;
				break;
			case 1:
				if ((!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 0) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336)) && !func_7(Global_34))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
					{
						if (func_7(Global_34))
						{
							WEAPON::_0xFCCC886EDE3C63EC(Global_34, 2, 0);
							bLocal_22 = true;
							iLocal_21 = 2;
						}
						else if (!PED::IS_PED_ON_MOUNT(Global_34) && PED::IS_PED_ON_FOOT(Global_34))
						{
							if (bVar0)
							{
								iLocal_21 = 3;
							}
							else if (!func_8(Global_34, 993674639))
							{
								bVar1 = true;
								if (func_9(0) || func_9(1))
								{
									bVar1 = false;
								}
								if (bVar1)
								{
									PED::_0xD65FDC686A031C83(Global_34, joaat("DYNAMIC_KNEEL_QUICK_ENTER"), 2f);
								}
								if (PED::IS_PED_MALE(Global_34))
								{
									TASK::_TASK_START_SCENARIO_IN_PLACE(Global_34, joaat("WORLD_PLAYER_DYNAMIC_KNEEL"), 0, true, joaat("WORLD_PLAYER_DYNAMIC_KNEEL_ARTHUR"), -1f, false);
								}
								else
								{
									TASK::_TASK_START_SCENARIO_IN_PLACE(Global_34, joaat("WORLD_PLAYER_DYNAMIC_KNEEL"), 0, true, joaat("WORLD_PLAYER_DYNAMIC_KNEEL_MP_FEMALE_A"), -1f, false);
								}
							}
						}
					}
				}
				else
				{
					bLocal_22 = true;
					iLocal_21 = 2;
				}
				break;
			case 2:
				func_10(&Local_23, 0);
				if (func_11(&Local_23) != 0)
				{
					if (func_11(&Local_23) != 12)
					{
					}
					else if (((!bLocal_22 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 0)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336)) && !func_7(Global_34))
					{
						iLocal_21 = 1;
					}
					else
					{
						bLocal_22 = true;
					}
				}
				else
				{
					iLocal_21 = 3;
				}
				break;
			case 3:
				func_12(&Local_23, 0, 1);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

int func_1(int iParam0, bool bParam1, bool bParam2)
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
		if (func_13())
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
	if (iParam0 == 0 && func_15(func_14(0)))
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
	switch (func_16(func_14(0)))
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

bool func_2()
{
	return Global_1913166->f_1578;
}

bool func_3(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

int func_4(bool bParam0, bool bParam1)
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

int func_5()
{
	if (func_4(0, 0))
	{
		return 1;
	}
	if (func_3(0))
	{
		return 1;
	}
	if (func_1(0, 0, 1) && !func_2())
	{
		return 1;
	}
	if (func_17())
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (PED::_0x3AA24CCC0D451379(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (PED::_0x9682F850056C9ADE(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	if (PED::_0x1D46B417F926D34D(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (func_18())
		{
			return 1;
		}
	}
	if (func_19())
	{
		return 1;
	}
	if (bLocal_22)
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_7(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		else if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(PLAYER::PLAYER_PED_ID(), 1) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336))
		{
			return 1;
		}
	}
	if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

void func_6(var uParam0, int iParam1)
{
	if (uParam0->f_9 != iParam1)
	{
		uParam0->f_9 = iParam1;
		func_20(uParam0);
	}
}

int func_7(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_8(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &bVar0, true, iParam0, false))
	{
		if (func_21(bVar0, 0))
		{
			if (WEAPON::_0x0556E9D2ECF39D01(bVar0) || func_22(bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_10(var uParam0, int iParam1)
{
	var uVar0[1];
	int iVar2;
	vector3 vVar3;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	uVar0[0] = uParam0[1];
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || Global_1939178->f_6)
	{
		func_12(uParam0, 0, 1);
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_34, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_34, 0, 1);
	if (func_23() != -1 && func_24())
	{
		if (func_25(uParam0[0], 0))
		{
			func_26(uParam0);
			func_20(uParam0);
		}
		return;
	}
	if (uParam0->f_54)
	{
		HUD::_0xC9CAEAEEC1256E54(-469828803);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	switch (func_11(uParam0))
	{
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_27(uParam0))
			{
				func_28(uParam0);
				func_29(uParam0);
				func_30(uParam0);
			}
			if (func_31(uParam0))
			{
				func_6(uParam0, 3);
			}
			break;
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_23() == 0 && CAM::_0x251241CAEC707106())
			{
				func_26(uParam0);
				return;
			}
			if (func_27(uParam0))
			{
				func_26(uParam0);
				func_30(uParam0);
				if (func_32())
				{
					func_33(0);
				}
			}
			if (((uParam0->f_30 || func_34(uParam0[0], 1)) || func_35(8192)) || uParam0->f_31)
			{
				func_36(uParam0);
			}
			break;
		case 4:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_37(uParam0))
			{
				uParam0->f_58 = 1;
				func_6(uParam0, 5);
			}
			break;
		case 5:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_38(uParam0))
			{
				func_6(uParam0, 6);
			}
			break;
		case 6:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_39(uParam0))
			{
				func_6(uParam0, 7);
			}
			break;
		case 7:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_27(uParam0))
			{
				func_40(uParam0);
				func_30(uParam0);
				return;
			}
			if (UIAPPS::_IS_APP_ACTIVE(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_RUNNING(joaat("PAUSE_MENU")))
			{
				return;
			}
			if (func_41(uParam0, 0))
			{
				if (func_42(uParam0, 0) || (uParam0->f_25 && UIAPPS::_IS_APP_ACTIVE(joaat("CRAFTING"))))
				{
					func_6(uParam0, 8);
				}
				else if (uParam0->f_28)
				{
					func_6(uParam0, 1);
				}
				else
				{
					func_6(uParam0, 0);
				}
			}
			break;
		case 15:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (!uParam0->f_58)
			{
				func_6(uParam0, 4);
				return;
			}
			if (UIAPPS::_IS_APP_ACTIVE(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_RUNNING(joaat("PAUSE_MENU")))
			{
				return;
			}
			if (func_43(uParam0))
			{
				func_42(uParam0, 1);
				func_6(uParam0, 8);
			}
			break;
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (UIAPPS::_IS_APP_ACTIVE(joaat("CRAFTING")))
			{
				if (UISTATEMACHINE::_0xF7C180F57F85D0B8(joaat("CRAFTING")))
				{
					Global_1913166->f_1580 = 0;
					func_6(uParam0, 10);
				}
			}
			break;
		case 9:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (UIAPPS::_IS_APP_ACTIVE(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_RUNNING(joaat("PAUSE_MENU")))
			{
				return;
			}
			if (func_27(uParam0))
			{
				func_40(uParam0);
				func_30(uParam0);
				return;
			}
			if (func_41(uParam0, 1))
			{
				func_6(uParam0, 10);
			}
			break;
		case 10:
			func_44(0);
			if (func_27(uParam0))
			{
				func_45(uParam0);
				func_30(uParam0);
			}
			if (func_46(uParam0))
			{
				return;
			}
			if (Global_1913166->f_1580)
			{
				Global_1913166->f_1580 = 0;
				ATTRIBUTE::_0xD962F8579D702DB5();
				func_47(uParam0);
				uParam0->f_73 = 0;
				uParam0->f_74 = 0;
				func_48(uParam0, 0, 0);
				func_49(uParam0[5], 0, 1, 1);
				func_6(uParam0, 9);
			}
			else if (func_50(uParam0[2], 1) || !UIAPPS::_IS_APP_RUNNING(joaat("CRAFTING")))
			{
				if (uParam0->f_30)
				{
					func_6(uParam0, 18);
				}
				else
				{
					func_51(uParam0, 0);
					func_52("Exit", "SSCRFT_Sounds", 1);
					if (uParam0->f_31)
					{
						uParam0->f_31 = 0;
						func_6(uParam0, 1);
					}
					else
					{
						func_6(uParam0, 3);
					}
				}
			}
			else if (func_34(uParam0[7], 1))
			{
				func_53(uParam0);
			}
			else if (func_34(uParam0[1], 1))
			{
				func_54(uParam0);
			}
			else if (func_34(uParam0[3], 1))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_53 = !uParam0->f_53;
				func_47(uParam0);
				func_52("toggle_craftable_all", "SSCRFT_Sounds", 1);
				uParam0->f_73 = 0;
				uParam0->f_74 = 0;
				func_48(uParam0, 0, 0);
				func_49(uParam0[5], 0, 1, 1);
				func_6(uParam0, 9);
			}
			else if (func_55(uParam0[5], 0, 1))
			{
				if (uParam0->f_75)
				{
					func_52("Nav_Left", "SSCRFT_Sounds", 1);
					func_56(uParam0, 0);
				}
			}
			else if (func_55(uParam0[5], 1, 1))
			{
				if (uParam0->f_75)
				{
					func_52("Nav_Right", "SSCRFT_Sounds", 1);
					func_56(uParam0, 1);
				}
			}
			else if (func_50(uParam0[6], 1))
			{
				func_52("toggle_ingredients_effects", "SSCRFT_Sounds", 1);
				func_57(uParam0, 1);
			}
			else
			{
				iVar2 = -813979060;
				while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar2))
				{
					if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar2, &vVar3))
					{
						if (vVar3.x == 703281244 || vVar3.x == -722926211)
						{
							func_58(uParam0);
						}
						else if (vVar3.x == -1740156697)
						{
							func_59(uParam0, &vVar3);
						}
						else if (vVar3.x == -1203660660)
						{
							if (vVar3.z == -2127505795)
							{
								func_54(uParam0);
							}
						}
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar2);
					}
				}
			}
			break;
		case 11:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			break;
		case 12:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_73), 1, 0, 0, 0);
			func_44(0);
			iVar7 = PED::_0xC22AA08A8ADB87D4(Global_34);
			iVar8 = func_60(uParam0->f_73, -1636519629);
			if (iVar7 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar7 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
			{
				if (!PED::_0x68821369A2CEADD5(Global_34, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1")))
				{
					PED::_0xD65FDC686A031C83(Global_34, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 6f);
					PED::_0x6D07B371E9439019(Global_34);
				}
				return;
			}
			if (iVar8 != -715814988)
			{
				if ((PED::_0xC488B8C0E52560D8(Global_34) || PED::_0x2DC0E8DCBD3546E9(Global_34)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1944546609))
				{
					return;
				}
				if (iVar7 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar7 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					if (!PED::_0x68821369A2CEADD5(Global_34, joaat("KNIFE1_TRANS_KNEEL1")))
					{
						PED::_0xD65FDC686A031C83(Global_34, joaat("KNIFE1_TRANS_KNEEL1"), 6f);
						PED::_0x6D07B371E9439019(Global_34);
					}
					return;
				}
				else
				{
					WEAPON::_0xFCCC886EDE3C63EC(Global_34, 2, 0);
				}
				if (((((((((iVar8 == 414472632 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_59, 1, 0)) || (iVar8 == -1136843638 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_62, 1, 0))) || (uParam0->f_85 != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_85))) || (iVar8 == -732326901 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_64, 1, 0))) || (iVar8 == 786205940 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_63, 1, 0))) || (iVar8 == -1141771998 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_65, 1, 0))) || (iVar8 == 364689687 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_66, 1, 0))) || (iVar8 == -842117252 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_67, 1, 0))) || (iVar8 == -1610298873 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_68, 1, 0)))
				{
					return;
				}
				else if (uParam0->f_60)
				{
					func_61(uParam0);
					uParam0->f_60 = 0;
				}
			}
			else
			{
				if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_61, 1, 0) || (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 0)))
				{
					return;
				}
				else if (uParam0->f_60)
				{
					func_61(uParam0);
					uParam0->f_60 = 0;
				}
				if (iVar7 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") && iVar7 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					if (uParam0->f_28)
					{
						if ((PED::_0xC488B8C0E52560D8(Global_34) || PED::_0x2DC0E8DCBD3546E9(Global_34)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1944546609))
						{
							return;
						}
						if (!PED::_0x68821369A2CEADD5(Global_34, joaat("KNEEL1_TRANS_KNIFE1")))
						{
							PED::_0xD65FDC686A031C83(Global_34, joaat("KNEEL1_TRANS_KNIFE1"), 2f);
							PED::_0x6D07B371E9439019(Global_34);
						}
						return;
					}
				}
			}
			if (func_27(uParam0))
			{
				func_30(uParam0);
				func_62(uParam0, 0, &uVar0);
				func_61(uParam0);
				if (func_63(uParam0[1]))
				{
					func_64((*uParam0)[1], 1, 1);
				}
				if (func_65(iVar8))
				{
					uParam0->f_49 = 250;
					(*uParam0)[1] = func_66("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_49, uParam0->f_49 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_48(uParam0, uParam0->f_73, uParam0->f_74);
					func_67(uParam0[1], -1067771379, 0, 1);
					func_68(uParam0[1], 10, 1, 1);
					func_68(uParam0[1], 11, 1, 1);
					func_49(uParam0[1], 0, 1, 1);
				}
				else
				{
					(*uParam0)[1] = func_66("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 250, 251, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_67(uParam0[1], -1067771379, 0, 1);
					func_69(uParam0[1], 1, 1);
					func_68(uParam0[1], 10, 1, 1);
					func_68(uParam0[1], 11, 1, 1);
					func_49(uParam0[1], 0, 1, 1);
				}
				return;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -563455375))
			{
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (func_65(iVar8))
			{
				if (!uParam0->f_32)
				{
					if (func_25(uParam0[1], 0))
					{
						if (func_70(uParam0[1], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT")))
						{
							uParam0->f_32 = 1;
							func_49(uParam0[1], 0, 1, 1);
							func_49(uParam0[4], 0, 1, 1);
						}
					}
				}
				if ((((((iVar8 == -1136843638 || iVar8 == -732326901) || iVar8 == 786205940) || iVar8 == -1141771998) || iVar8 == 364689687) || iVar8 == -842117252) || iVar8 == -1610298873)
				{
					if (uParam0->f_85 != 0)
					{
						if ((uParam0->f_85 == joaat("S_CFT_ARROW_SMALLGAME") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1011038463)) || (uParam0->f_85 != joaat("S_CFT_ARROW_SMALLGAME") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 2024314131)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_81))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_81));
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_81);
								}
							}
							if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
							{
								if (func_71(uParam0->f_73, -1588156645) && iVar8 != -842117252)
								{
									uParam0->f_81 = WEAPON::_CREATE_WEAPON_OBJECT(func_72(uParam0->f_73, 0), 1, Global_35, true, 1f);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
									if (iVar8 == -1610298873)
									{
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_73(uParam0, iVar8), "DYNAMITE", uParam0->f_81, 0);
									}
								}
								else
								{
									uParam0->f_81 = OBJECT::CREATE_OBJECT(uParam0->f_85, Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
								}
								if (iVar8 == 786205940)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -1141771998 || iVar8 == -1610298873)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -842117252)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -1136843638 && !PED::IS_PED_MALE(Global_34))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
							}
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 966057053))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_81))
							{
								OBJECT::DELETE_OBJECT(&(uParam0->f_81));
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_81);
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
						{
							if (iVar8 == -732326901 || iVar8 == 364689687)
							{
								uParam0->f_81 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_35, true, 1f);
							}
							else if (iVar8 == -1141771998)
							{
								uParam0->f_81 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_TOMAHAWK"), 1, Global_35, true, 1f);
							}
							else if (iVar8 == -842117252)
							{
								if (uParam0->f_73 == joaat("AMMO_POISONBOTTLE"))
								{
									uParam0->f_81 = OBJECT::CREATE_OBJECT(400517539, Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
								}
								else
								{
									uParam0->f_81 = OBJECT::CREATE_OBJECT(joaat("P_MOLOTOVEMPTY01X"), Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
								}
							}
							else if (iVar8 == -1610298873)
							{
								uParam0->f_81 = OBJECT::CREATE_OBJECT(joaat("W_STICK_DYNAMITE01"), Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
								if (iVar8 == -1610298873)
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_73(uParam0, iVar8), "DYNAMITE", uParam0->f_81, 0);
								}
							}
							else
							{
								uParam0->f_81 = OBJECT::CREATE_OBJECT(joaat("S_CFT_ARROW"), Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
							}
						}
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
						if (iVar8 == 786205940)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if ((iVar8 == -1141771998 || iVar8 == -1610298873) || iVar8 == -842117252)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if (iVar8 == -1136843638 && !PED::IS_PED_MALE(Global_34))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1394836706))
					{
						func_74(&(uParam0->f_81), &(uParam0->f_82));
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1471149551))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_83))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_83, true);
						}
					}
				}
				else if (iVar8 == 414472632 || iVar8 == -715814988)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 966057053))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_79, true);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -61921192))
				{
					if (func_75(0) && !func_76())
					{
						func_78(uParam0->f_73, uParam0->f_74, 1, func_77(), 0);
						func_79(uParam0->f_73, 1, 0, 1, 0);
					}
					if (iVar8 == -842117252)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
						{
							func_74(&(uParam0->f_81), &(uParam0->f_82));
						}
					}
					uParam0->f_21++;
					uParam0->f_34++;
					if ((!func_80(uParam0->f_73, uParam0->f_74, 0, func_77(), 0) || func_81(uParam0->f_73, 1, 0)) || uParam0->f_21 >= uParam0->f_33)
					{
						if (!func_75(0) || func_76())
						{
							uParam0->f_22 = func_82(uParam0->f_73, uParam0->f_74, uParam0->f_34);
							uParam0->f_34 = 0;
						}
						func_83(uParam0, iVar8, 0);
						return;
					}
				}
				if (!uParam0->f_32)
				{
					if (!(func_25(uParam0[1], 0) && PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT"))))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, joaat("SAFETOBREAKOUT")))
						{
							if (!func_75(0) || func_76())
							{
								uParam0->f_22 = func_82(uParam0->f_73, uParam0->f_74, uParam0->f_34);
								uParam0->f_34 = 0;
							}
							func_83(uParam0, iVar8, 1);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1290366555) && uParam0->f_21 < (uParam0->f_33 - 1))
				{
					func_49(uParam0[1], 1, 1, 1);
					func_49(uParam0[4], 1, 1, 1);
					uParam0->f_32 = 0;
				}
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(func_73(uParam0, iVar8), "player"))
				{
					if (!func_75(0) || func_76())
					{
						uParam0->f_22 = func_82(uParam0->f_73, uParam0->f_74, uParam0->f_34);
						uParam0->f_34 = 0;
					}
					func_83(uParam0, iVar8, 0);
				}
			}
			else if (func_84(&(uParam0->f_86), (IntToFloat(uParam0->f_49) / 1000f)))
			{
				if (!func_75(0) || func_76())
				{
					if (uParam0->f_22 == -1)
					{
						uParam0->f_22 = func_82(uParam0->f_73, uParam0->f_74, 1);
						if (uParam0->f_22 == -1)
						{
							func_83(uParam0, iVar8, 0);
						}
					}
					else if (func_85(uParam0->f_22))
					{
					}
					uParam0->f_22 = -1;
				}
				else
				{
					func_78(uParam0->f_73, uParam0->f_74, 1, func_77(), 0);
					func_79(uParam0->f_73, 1, 1, 1, 0);
				}
				uParam0->f_33 = -1;
				uParam0->f_34 = 0;
				func_86(131072);
				func_74(&(uParam0->f_81), &(uParam0->f_82));
				uParam0->f_51 = 0;
				bVar9 = true;
				if (!func_80(uParam0->f_73, uParam0->f_74, 0, func_77(), 0) || func_81(uParam0->f_73, 1, 0))
				{
					bVar9 = false;
				}
				func_83(uParam0, iVar8, bVar9);
			}
			break;
		case 0:
			if (func_32())
			{
				func_33(0);
			}
			if (func_27(uParam0))
			{
				func_26(uParam0);
				func_30(uParam0);
			}
			break;
		case 13:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_73), 1, 0, 0, 0);
			func_44(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -2015667492))
				{
					func_74(&(uParam0->f_83), &(uParam0->f_84));
				}
			}
			if (!func_87(128))
			{
				if (!func_25(uParam0[2], 0))
				{
					func_49(uParam0[2], 1, 1, 1);
					func_69(uParam0[2], 0, 1);
				}
				if (!func_25(uParam0[4], 0))
				{
					func_49(uParam0[4], 1, 1, 1);
					func_69(uParam0[4], 1, 1);
				}
			}
			if (func_50(uParam0[2], 1))
			{
				func_26(uParam0);
				func_88(&(uParam0->f_86));
				func_6(uParam0, 14);
				return;
			}
			else if (func_89(uParam0[4], 1))
			{
				func_26(uParam0);
				func_74(&(uParam0->f_81), &(uParam0->f_82));
				func_74(&(uParam0->f_79), &(uParam0->f_80));
				func_74(&(uParam0->f_83), &(uParam0->f_84));
				iVar10 = PED::_0x569F1E1237508DEB(Global_34);
				if (iVar10 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") && iVar10 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				iVar8 = func_60(uParam0->f_73, -1636519629);
				iVar11 = func_73(uParam0, iVar8);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar11, "player", Global_34);
				func_51(uParam0, 0);
				func_52("Exit", "SSCRFT_Sounds", 1);
				if (uParam0->f_28)
				{
					func_6(uParam0, 1);
				}
				else
				{
					func_6(uParam0, 0);
				}
				return;
			}
			else if (func_34(uParam0[1], 1))
			{
				func_49(uParam0[4], 0, 1, 1);
				func_49(uParam0[2], 0, 1, 1);
				func_49(uParam0[1], 0, 1, 1);
				iVar8 = func_60(uParam0->f_73, -1636519629);
				iVar12 = func_73(uParam0, iVar8);
				if (iVar12 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(iVar12, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(iVar12);
				}
				func_88(&(uParam0->f_86));
				uParam0->f_32 = 0;
				func_6(uParam0, 12);
				return;
			}
			if (func_90(uParam0[4], 1))
			{
				if (!func_91(&(uParam0->f_86)))
				{
					func_92(&(uParam0->f_86));
				}
				else if (func_84(&(uParam0->f_86), 0.1f))
				{
					func_93(uParam0[4], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_91(&(uParam0->f_86)))
				{
					func_88(&(uParam0->f_86));
				}
				func_93(uParam0[4], "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_73), 1, 0, 0, 0);
			func_44(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -2015667492))
				{
					func_74(&(uParam0->f_83), &(uParam0->f_84));
				}
			}
			iVar8 = func_60(uParam0->f_73, -1636519629);
			iVar13 = func_73(uParam0, iVar8);
			if ((iVar13 == 0 || (!ANIMSCENE::_0x25557E324489393C(iVar13) || ANIMSCENE::_0xF94692EB9DC15D74(iVar13, 0))) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336))
			{
				func_74(&(uParam0->f_81), &(uParam0->f_82));
				func_74(&(uParam0->f_79), &(uParam0->f_80));
				func_74(&(uParam0->f_83), &(uParam0->f_84));
				iVar14 = PED::_0x569F1E1237508DEB(Global_34);
				if (iVar14 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") && iVar14 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar13, "player", Global_34);
				func_6(uParam0, 15);
			}
			break;
		case 16:
			iVar15 = func_94();
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				uParam0->f_22 = func_82(uParam0->f_73, uParam0->f_74, 1);
				func_6(uParam0, 17);
			}
			else if (NETWORK::_0x255A5EF65EDA9167(iVar15) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar15))
			{
				func_6(uParam0, 10);
			}
			else if (func_84(&(uParam0->f_86), 5f))
			{
				func_88(&(uParam0->f_86));
				func_6(uParam0, 10);
			}
			break;
		case 17:
			if (!func_85(uParam0->f_22))
			{
				if (func_95(uParam0->f_22) != 3)
				{
					func_96(0);
				}
				else
				{
					func_97(uParam0->f_73);
					PED::_0xD65FDC686A031C83(Global_34, joaat("STEWPOT_ACTION"), 1f);
					func_98(uParam0);
					if (func_71(uParam0->f_73, -2011345500))
					{
						func_99(-1266356243, 0, 255, 0, 0);
					}
					uParam0->f_27 = uParam0->f_73;
				}
				func_6(uParam0, 15);
			}
			else
			{
				func_100(1);
				HUD::_0xF1622CE88A1946FB();
				PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			}
			break;
		case 1:
			if (func_32())
			{
				func_33(0);
			}
			if (func_27(uParam0))
			{
				if (func_63(uParam0[0]))
				{
					func_49(uParam0[0], 0, 1, 1);
				}
				func_30(uParam0);
			}
			break;
		case 18:
			if (func_32())
			{
				func_33(0);
			}
			if (func_27(uParam0))
			{
				func_30(uParam0);
			}
			if (uParam0->f_25)
			{
				TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
			}
			func_51(uParam0, 0);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_35);
			Global_1913166->f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
}

int func_11(var uParam0)
{
	return uParam0->f_9;
}

void func_12(var uParam0, bool bParam1, bool bParam2)
{
	func_26(uParam0);
	if (bParam2)
	{
		func_51(uParam0, 0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_35);
	}
	if (func_32())
	{
		func_33(0);
	}
	if (bParam1)
	{
		func_101(uParam0);
		return;
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_18)))
	{
		HUD::_TEXT_DATABASE_DELETE(&(uParam0->f_18));
	}
	if (uParam0->f_23)
	{
		if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_59))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_59);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_61))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_61);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_62))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_62);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_63))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_63);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_64))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_64);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_65))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_65);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_66))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_66);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_67))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_67);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_68))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_68);
	}
	func_74(&(uParam0->f_79), &(uParam0->f_80));
	func_74(&(uParam0->f_81), &(uParam0->f_82));
	func_74(&(uParam0->f_83), &(uParam0->f_84));
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1913166->f_1576 = 0;
	if (uParam0->f_25)
	{
		TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
	}
	if (func_23() == -1)
	{
		func_6(uParam0, 18);
	}
	else
	{
		if (uParam0->f_9 == 11)
		{
			if (uParam0->f_22 == -1)
			{
				func_82(uParam0->f_73, uParam0->f_74, 1);
				func_102(uParam0->f_73, uParam0->f_21);
			}
		}
		if (!func_75(0) || func_76())
		{
			if (uParam0->f_34 > 0 && func_21(uParam0->f_73, 0))
			{
				uParam0->f_22 = func_82(uParam0->f_73, uParam0->f_74, uParam0->f_34);
				uParam0->f_34 = 0;
			}
		}
		uParam0->f_22 = -1;
		func_6(uParam0, 0);
	}
}

int func_13()
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
	if (!func_15(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

struct<2> func_14(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_15(struct<2> Param0)
{
	if (!func_103(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_104(Param0))
	{
		return 0;
	}
	return 1;
}

int func_16(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_17()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_26285) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_26285, 0));
}

int func_18()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_TRAIN(Global_34))
	{
		return 0;
	}
	return 0;
}

int func_19()
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 0;
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
	{
		iVar0 = TASK::_0x2D0571BB55879DA2(Global_34);
		iVar1 = iVar0;
		if (iVar1 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL") && iVar1 != joaat("WORLD_PLAYER_MP_STEW_POT_DONATION"))
		{
			return 1;
		}
	}
	return 0;
}

void func_20(var uParam0)
{
	uParam0->f_19 = 1;
}

bool func_21(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_22(bool bParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(bParam0);
}

int func_23()
{
	return Global_1572887->f_13;
}

bool func_24()
{
	return Global_1896726->f_382;
}

bool func_25(int iParam0, bool bParam1)
{
	if (bParam1 && !func_63(iParam0))
	{
		return false;
	}
	return !func_105(iParam0, 4);
}

void func_26(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_64((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

bool func_27(var uParam0)
{
	return uParam0->f_19;
}

void func_28(var uParam0)
{
	StringCopy(&(uParam0->f_18), "CAMP", 8);
}

void func_29(var uParam0)
{
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_18)))
	{
		HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_18));
	}
	TXD::REQUEST_STREAMED_TEXTURE_DICT("satchel_textures", false);
	if (uParam0->f_25)
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	STREAMING::REQUEST_ANIM_DICT("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A");
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_RIFLE"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_REPEATER"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_45MM"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_9MM"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_SHOTGUN"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_ARROW"), false);
	STREAMING::REQUEST_MODEL(joaat("W_MELEE_TOMAHAWK01"), false);
	STREAMING::REQUEST_MODEL(joaat("W_MELEE_KNIFE05"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_RAG01X"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_MOLOTOV01"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_MOLOTOV02"), false);
	STREAMING::REQUEST_MODEL(joaat("P_MOLOTOVEMPTY01X"), false);
	STREAMING::REQUEST_MODEL(joaat("W_STICK_DYNAMITE01"), false);
	STREAMING::REQUEST_MODEL(400517539, false);
	STREAMING::REQUEST_MODEL(joaat("MP006_S_CFT_POISONBOTTLE01"), false);
	func_106(uParam0);
	if (uParam0->f_28)
	{
		STREAMING::REQUEST_MODEL(joaat("P_WHITEFISHFILET01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDFISHFILET01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_WHITEFLESHYMEAT01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDBIRDBREAST01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDEFLESHYMEAT01XB"), false);
	}
}

void func_30(var uParam0)
{
	uParam0->f_19 = 0;
}

int func_31(var uParam0)
{
	if (func_107(&(uParam0->f_18)))
	{
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_18)))
		{
			return 0;
		}
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("satchel_textures"))
	{
		return 0;
	}
	if (uParam0->f_25)
	{
		return 1;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A"))
	{
		return 0;
	}
	if (!func_108(uParam0, &(uParam0->f_59)))
	{
		return 0;
	}
	if (!func_108(uParam0, &(uParam0->f_61)))
	{
		return 0;
	}
	if (!func_108(uParam0, &(uParam0->f_62)))
	{
		return 0;
	}
	if (!func_108(uParam0, &(uParam0->f_63)))
	{
		return 0;
	}
	if (!func_108(uParam0, &(uParam0->f_64)))
	{
		return 0;
	}
	if (!func_108(uParam0, &(uParam0->f_65)))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_RIFLE")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_REPEATER")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_45MM")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_9MM")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_CFT_ARROW")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_MELEE_TOMAHAWK01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_MELEE_KNIFE05")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_SHOTGUN")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_MOLOTOVEMPTY01X")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_CFT_MOLOTOV01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_CFT_MOLOTOV02")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_STICK_DYNAMITE01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(400517539))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("MP006_S_CFT_POISONBOTTLE01")))
	{
		return 0;
	}
	if (uParam0->f_28)
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_WHITEFISHFILET01XB")))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_REDFISHFILET01XB")))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_WHITEFLESHYMEAT01XB")))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_REDBIRDBREAST01XB")))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_REDEFLESHYMEAT01XB")))
		{
			return 0;
		}
	}
	return 1;
}

int func_32()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");
	}
	return 0;
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1913166->f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_34, "player_crafting_active", bParam0);
}

bool func_34(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_63(iParam0))
	{
		return false;
	}
	iVar0 = func_109(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

bool func_35(int iParam0)
{
	return (Global_1956172 && iParam0) != 0;
}

void func_36(var uParam0)
{
	func_33(1);
	func_6(uParam0, 4);
}

int func_37(var uParam0)
{
	int iVar0;

	if (uParam0->f_25)
	{
		Global_1913166->f_1576 = 0;
		uParam0->f_51 = 0;
		iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913166)[0 /*9*/])->f_1))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1913166)[0 /*9*/])->f_1);
		}
		uParam0->f_26 = func_110(iVar0);
		uParam0->f_27 = func_111(iVar0);
		func_112(uParam0, uParam0->f_26, 1472825031);
		func_112(uParam0, -1171462349 /* GXTEntry: "Superior Quality Stew" */, 1472825031);
		func_112(uParam0, 1689071181 /* GXTEntry: "High Quality Stew" */, 1472825031);
		func_112(uParam0, -1612693182 /* GXTEntry: "Medium Quality Stew" */, 1472825031);
		func_112(uParam0, 1856073229 /* GXTEntry: "Low Quality Stew" */, 1472825031);
		return 1;
	}
	if (uParam0->f_50 == 0)
	{
		Global_1913166->f_1576 = 0;
		uParam0->f_51 = 0;
		func_113(uParam0, 600942249);
		uParam0->f_50++;
		return 0;
	}
	else if (uParam0->f_50 == 1)
	{
		func_113(uParam0, -257768755);
		uParam0->f_50++;
		return 0;
	}
	else
	{
		func_113(uParam0, -214678071);
		uParam0->f_50 = 0;
	}
	uParam0->f_51 = 0;
	return 1;
}

int func_38(var uParam0)
{
	int iVar0;
	char cVar1[16];

	uParam0->f_55 = 0;
	uParam0->f_56 = 0;
	if (uParam0->f_25 && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_35))
	{
		return 1;
	}
	uParam0->f_35 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "CraftingDatastore");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_35, "filter", func_115(uParam0->f_25, joaat("RECIPES"), func_114(uParam0->f_48)));
	if (uParam0->f_25)
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterCount", true);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterIndex", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_35, "headerText", -1710561039);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterCount", 5 + 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterIndex", uParam0->f_48);
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_35, "tipText", "");
	uParam0->f_47 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_35, "recipes_lines");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "variantVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_35, "variantText", " ");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "variantCount", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "variantIndex", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_35, "RPGDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "ingredient", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		func_116(uParam0->f_37[iVar0], &cVar1, uParam0);
		StringCopy(&cVar1, "tip", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_42[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_35, &cVar1);
		StringCopy(&cVar1, "Text", 16);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_42[iVar0]), &cVar1, "");
		StringCopy(&cVar1, "Enabled", 16);
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_42[iVar0]), &cVar1, false);
		iVar0++;
	}
	return 1;
}

int func_39(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_77();
	bVar0 = uParam0->f_51;
	while (bVar0 <= (Global_1913166->f_1576 - 1))
	{
		if (func_21(((*Global_1913166)[bVar0 /*9*/])->f_6, 0))
		{
			func_117(uParam0, 0, bVar0, bVar2, 1, 0);
			if (iVar1 >= 10)
			{
				uParam0->f_51 = bVar0 + 1;
				return 0;
			}
			iVar1++;
		}
		bVar0++;
	}
	uParam0->f_51 = 0;
	if (uParam0->f_56 == 0)
	{
		uParam0->f_53 = 0;
	}
	uParam0->f_52 = 0;
	return 1;
}

void func_40(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_36))
	{
		uParam0->f_36 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_35, "recipes");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_36);
	}
	uParam0->f_72 = 600942249;
	uParam0->f_71 = 0;
	uParam0->f_70 = 0;
}

int func_41(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = func_77();
	bVar0 = uParam0->f_51;
	while (bVar0 <= (Global_1913166->f_1576 - 1))
	{
		if ((uParam0->f_53 && ((*Global_1913166)[bVar0 /*9*/])->f_2) || !uParam0->f_53)
		{
			if (Global_1913166->f_1585 != 0)
			{
				bVar3 = func_71(((*Global_1913166)[bVar0 /*9*/])->f_6, Global_1913166->f_1585);
				if (uParam0->f_77 == bVar3)
				{
				}
				else
				{
					func_117(uParam0, 1, bVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_51 = bVar0 + 1;
						return 0;
					}
					iVar1++;
				}
				bVar0++;
				uParam0->f_51 = 0;
				if (!uParam0->f_77 && Global_1913166->f_1585 != 0)
				{
					uParam0->f_77 = 1;
					return 0;
				}
				uParam0->f_52 = 0;
				uParam0->f_77 = 0;
				return 1;
			}
		}
	}

int func_42(var uParam0, bool bParam1)
{
	int iVar0;

	uParam0->f_54 = 1;
	if (bParam1 && UIAPPS::_IS_APP_ACTIVE(joaat("CRAFTING")))
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("CRAFTING"), 1014850361))
		{
			func_118(8);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar0 = UIAPPS::_LAUNCH_APP_BY_HASH(joaat("CRAFTING"));
		if (iVar0 == 0)
		{
			func_118(8);
			return 1;
		}
	}
	return 0;
}

int func_43(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_77();
	iVar0 = uParam0->f_51;
	while (iVar0 <= (Global_1913166->f_1576 - 1))
	{
		func_119(uParam0, iVar0, bVar2, 0, 1, 0, 1);
		if (iVar1 >= 50)
		{
			uParam0->f_51 = iVar0 + 1;
			return 0;
		}
		iVar1++;
		iVar0++;
	}
	uParam0->f_57 = 0;
	uParam0->f_51 = 0;
	return 1;
}

void func_44(bool bParam0)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	iVar0 = func_120(Global_34);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_UP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_LS"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_STICK_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_STICK_UP"), false);
	}
}

void func_45(var uParam0)
{
	int iVar0;

	func_26(uParam0);
	func_121(uParam0, 1);
	(*uParam0)[2] = func_66("CAMP_REC_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (func_87(32))
	{
		func_49(uParam0[2], 0, 1, 1);
	}
	else
	{
		func_49(uParam0[2], 1, 1, 1);
	}
	(*uParam0)[1] = func_66("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (!uParam0->f_25)
	{
		if (func_21(uParam0->f_71, 0))
		{
			uParam0->f_73 = uParam0->f_71;
			uParam0->f_74 = uParam0->f_72;
			func_122(uParam0, &(uParam0->f_70));
		}
		else
		{
			uParam0->f_73 = 0;
		}
		if (func_21(uParam0->f_71, 0))
		{
			if (func_123(uParam0->f_71))
			{
				func_93(uParam0[1], "CAMP_REC_COOK", 1);
			}
			else if (func_60(uParam0->f_71, -1636519629) == -701492487)
			{
				func_93(uParam0[1], "CAMP_REC_BREW", 1);
			}
			else
			{
				func_93(uParam0[1], "CAMP_REC_MAKE", 1);
			}
		}
		(*uParam0)[3] = func_66(func_124(uParam0), joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		(*uParam0)[7] = func_66("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	(*uParam0)[5] = func_125("RECIPE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
	func_126(uParam0[5], joaat("INPUT_GAME_MENU_LEFT"));
	func_126(uParam0[5], joaat("INPUT_GAME_MENU_RIGHT"));
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_69))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iNumCostVariants");
	}
	if (iVar0 > 1 && func_21(uParam0->f_73, 0))
	{
		func_49(uParam0[5], 1, 1, 1);
	}
	else
	{
		func_49(uParam0[5], 0, 1, 1);
	}
	(*uParam0)[6] = func_66("INFO", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 2, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (!uParam0->f_78)
	{
		func_93(uParam0[6], "INFO", 1);
	}
	else
	{
		func_93(uParam0[6], "INGREDIENTS", 1);
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_36) == 0)
	{
		func_47(uParam0);
		func_49(uParam0[6], 0, 1, 1);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_NO_REC_TIP"));
	}
	func_48(uParam0, uParam0->f_73, uParam0->f_74);
}

int func_46(var uParam0)
{
	int iVar0;

	if (!uParam0->f_25)
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (uParam0->f_27 != func_111(iVar0))
	{
		uParam0->f_27 = func_111(iVar0);
		func_6(uParam0, 15);
		return 1;
	}
	if (uParam0->f_26 != func_110(iVar0))
	{
		func_6(uParam0, 4);
		return 1;
	}
	return 0;
}

void func_47(var uParam0)
{
	int iVar0;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_47);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_37[iVar0]), "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_37[iVar0]), "inUse", false);
		iVar0++;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "variantVisible", false);
}

void func_48(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;

	if (!func_21(bParam1, 0))
	{
		if (func_63(uParam0[1]))
		{
			func_49(uParam0[1], 0, 1, 1);
		}
		return;
	}
	bVar2 = func_77();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1913166->f_1579 && func_127(bParam1, bParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!func_128(bParam1, bParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0) || func_85(uParam0->f_22))
	{
		bVar3 = false;
	}
	else if (uParam0->f_25 && !func_129(bParam1))
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		if ((bParam1 != joaat("CONSUMABLE_COFFEE") && func_81(bParam1, 1, 0)) || (!uParam0->f_28 && ((uParam0->f_76 || bParam2 == -214678071) || bParam2 == joaat("COST_CRAFTING_GRILL"))))
		{
			bVar3 = false;
		}
		else if (!func_130(2) && func_60(bParam1, -1636519629) == -701492487)
		{
			bVar3 = false;
		}
		else if (uParam0->f_33 == -1)
		{
			bVar6 = func_131(bParam1, 0, 0, 0);
			iVar7 = func_132(bParam1, 0);
			bVar8 = func_133(bParam1, bParam2, bVar2);
			if (iVar7 == -1)
			{
				iVar7 = bVar8;
			}
			else
			{
				iVar7 = (iVar7 - bVar6);
			}
			uParam0->f_33 = func_134(iVar7, bVar8);
		}
	}
	if (func_63(uParam0[1]))
	{
		if (uParam0->f_25)
		{
			func_93(uParam0[1], "DONATE_ING", 1);
		}
		else if (func_123(bParam1))
		{
			func_93(uParam0[1], "CAMP_REC_COOK", 1);
		}
		else if (func_60(bParam1, -1636519629) == -701492487)
		{
			func_93(uParam0[1], "CAMP_REC_BREW", 1);
		}
		else
		{
			func_93(uParam0[1], "CAMP_REC_MAKE", 1);
		}
		func_49(uParam0[1], bVar3, 1, 1);
	}
	func_135(bParam1, bParam2, uParam0, iVar5, bVar4);
	if (func_63(uParam0[6]))
	{
		func_49(uParam0[6], !bVar4, 1, 1);
	}
	func_136(uParam0);
}

void func_49(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_63(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	if (bParam1)
	{
		func_137(iParam0, 4);
		if (bParam3)
		{
			func_138(iVar0, 1);
		}
		func_139(iVar0, 1);
	}
	else
	{
		func_140(iParam0, 4);
		func_139(iVar0, 0);
	}
}

bool func_50(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_63(iParam0))
	{
		return false;
	}
	iVar0 = func_109(iParam0);
	return HUD::_UIPROMPT_IS_JUST_RELEASED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("CRAFTING"), 1383188602))
		{
		}
		else
		{
			UIAPPS::_CLOSE_APP_BY_HASH(joaat("CRAFTING"));
		}
	}
	else
	{
		UIAPPS::_CLOSE_APP_BY_HASH(joaat("CRAFTING"));
	}
	uParam0->f_54 = 0;
	func_86(8);
	ATTRIBUTE::_0xD962F8579D702DB5();
}

void func_52(char* sParam0, char* sParam1, int iParam2)
{
	int iVar0;

	iVar0 = AUDIO::GET_SOUND_ID();
	if (iVar0 != -1)
	{
		AUDIO::_0xCE5D0FFE83939AF1(iVar0, sParam0, sParam1, iParam2);
		(*Global_1956139)[Global_1956139->f_25] = iVar0;
		Global_1956139->f_25 = (Global_1956139->f_25 + 1 % 24);
	}
}

void func_53(var uParam0)
{
	int iVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	bool bVar34;
	char* sVar35;
	bool bVar36;
	bool bVar37;
	struct<2> Var38;
	char* sVar41;

	if (func_21(uParam0->f_73, 0))
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(8, uParam0->f_73))
		{
			return;
		}
		UILOG::_UILOG_ADD_ENTRY_HASH(8, uParam0->f_73, Global_35, uParam0->f_73, -2136842124, 0);
		func_141(uParam0->f_73, uParam0->f_74, &Var1, &iVar0, 1, 0);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, uParam0->f_73, 0, "CAMP_RECIPE_LOG_ALL_OBJ", false, true, false);
		iVar33 = 0;
		while (iVar33 < iVar0)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				bVar34 = &Var1[iVar33 /*2*/];
				if (func_21(bVar34, 0))
				{
					bVar36 = func_131(bVar34, 0, 0, 0);
					sVar35 = MISC::_CREATE_VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", bVar36, (Var1[iVar33 /*2*/])->f_1, MISC::_CREATE_VAR_STRING(0, bVar34));
					bVar37 = func_142(bVar34, (Var1[iVar33 /*2*/])->f_1);
					if (bVar37)
					{
						iVar32++;
					}
					UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, uParam0->f_73, bVar34, sVar35, bVar37, true, true);
				}
				iVar33++;
			}
		}
		if (func_143(uParam0->f_73, &Var38, joaat("INVENTORY"), 0, 0, 0))
		{
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(8, uParam0->f_73, Var38, Var38.f_1);
			UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(8, uParam0->f_73, Var38, Var38.f_1);
		}
		Global_1131092->f_339.f_16 = uParam0->f_73;
		Global_1131092->f_339.f_17 = uParam0->f_74;
		sVar41 = MISC::_CREATE_VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar32, iVar0);
		UILOG::_0x763637F9B838B0A7(8, uParam0->f_73, sVar41);
	}
	func_136(uParam0);
}

void func_54(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_25(uParam0[1], 0))
	{
		return;
	}
	if (uParam0->f_25)
	{
		if (func_21(uParam0->f_73, 0))
		{
			func_96(1);
			func_92(&(uParam0->f_86));
			func_6(uParam0, 16);
		}
		return;
	}
	func_51(uParam0, 1);
	func_64((*uParam0)[1], 1, 1);
	func_64((*uParam0)[5], 1, 1);
	func_64((*uParam0)[6], 1, 1);
	func_64((*uParam0)[3], 1, 1);
	func_64((*uParam0)[7], 1, 1);
	uParam0->f_32 = 1;
	if (!uParam0->f_76 && !func_123(uParam0->f_73))
	{
		func_118(131072);
		iVar0 = func_60(uParam0->f_73, -1636519629);
		iVar1 = func_73(uParam0, iVar0);
		if (iVar1 != 0)
		{
			uParam0->f_32 = 0;
			ANIMSCENE::RESET_ANIM_SCENE(iVar1, "pl_craft");
			ANIMSCENE::LOAD_ANIM_SCENE(iVar1);
			uParam0->f_85 = 0;
			if (iVar0 != -1610298873)
			{
				if (iVar0 == -842117252)
				{
					if (uParam0->f_73 == joaat("AMMO_POISONBOTTLE"))
					{
						uParam0->f_85 = joaat("MP006_S_CFT_POISONBOTTLE01");
					}
					else
					{
						uParam0->f_85 = joaat("S_CFT_MOLOTOV01");
					}
				}
				else if (func_71(uParam0->f_73, -1588156645))
				{
					uParam0->f_85 = func_144(func_72(uParam0->f_73, 0));
				}
				else if (func_71(uParam0->f_73, 457423347))
				{
					uParam0->f_85 = joaat("S_CFT_ARROW_DYNAMITE");
				}
				else if (func_71(uParam0->f_73, -1846429632))
				{
					uParam0->f_85 = joaat("S_CFT_ARROW_FIRE");
				}
				else if (func_71(uParam0->f_73, -1067199465))
				{
					uParam0->f_85 = joaat("S_CFT_ARROW_SMALLGAME");
				}
				else
				{
					uParam0->f_85 = func_144(uParam0->f_73);
				}
			}
			if (uParam0->f_85 != 0)
			{
				STREAMING::REQUEST_MODEL(uParam0->f_85, false);
			}
		}
		func_93(uParam0[2], "CAMP_REC_BACK", 1);
		func_67(uParam0[2], -1067771379, 0, 1);
		func_49(uParam0[2], 0, 1, 1);
		func_69(uParam0[2], 0, 1);
		(*uParam0)[4] = func_66("CAMP_REC_BACK", joaat("INPUT_GAME_MENU_CANCEL"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
		func_145((*uParam0)[4], "INPUT_PCRAFT_EXIT");
		func_67(uParam0[4], -1067771379, 0, 1);
		func_49(uParam0[4], 0, 1, 1);
		func_68(uParam0[4], 19, 1, 1);
		func_68(uParam0[4], 20, 1, 1);
		func_68(uParam0[4], 13, 1, 1);
		func_68(uParam0[2], 13, 1, 1);
		if (func_63(uParam0[2]))
		{
			func_67(uParam0[2], -1067771379, 0, 1);
		}
		uParam0->f_34 = 0;
		func_6(uParam0, 12);
	}
	else
	{
		func_6(uParam0, 11);
	}
}

bool func_55(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_63(iParam0))
	{
		return false;
	}
	iVar0 = func_109(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1);
}

void func_56(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	struct<37> Var19;
	int iVar66;
	int iVar67;
	int iVar68;

	ATTRIBUTE::_0xD962F8579D702DB5();
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_69))
	{
		bVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iCurCostVariant");
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_74 == -214678071 || uParam0->f_74 == joaat("COST_CRAFTING_GRILL"))
		{
			if (bParam1)
			{
				bVar0++;
			}
			else
			{
				bVar0 = (bVar0 - 1);
			}
			if (bVar0 < 0)
			{
				bVar0 = (iVar1 - 1);
			}
			else if (bVar0 >= iVar1)
			{
				bVar0 = false;
			}
			Var5 = -1;
			Var5.f_1 = -1;
			Var5.f_2 = -1;
			Var5.f_3 = -1;
			Var5.f_4 = -1;
			Var5.f_5 = -1;
			Var5.f_6 = -1;
			Var5.f_7 = -1;
			Var5.f_8 = -1;
			if (bVar0 == 0)
			{
				Var5 = { func_146(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, func_60(uParam0->f_73, 1697966752), 0) };
				if (func_147(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_74 = -214678071;
						uParam0->f_73 = func_148(0, iVar3);
						bVar2 = true;
					}
					func_149(iVar3);
				}
			}
			else
			{
				Var5 = { func_146(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, func_60(uParam0->f_73, 1697966752), 0) };
				if (func_147(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						if (bVar0 == 1)
						{
							iVar15 = 2127114599;
						}
						else if (bVar0 == 2)
						{
							iVar15 = -1864584831;
						}
						else if (bVar0 == 3)
						{
							iVar15 = 1967571132;
						}
						iVar16 = 0;
						while (iVar16 < iVar4)
						{
							bVar17 = func_148(iVar16, iVar3);
							if (func_71(bVar17, iVar15))
							{
								uParam0->f_74 = joaat("COST_CRAFTING_GRILL");
								uParam0->f_73 = bVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					func_149(iVar3);
				}
			}
		}
		else
		{
			iVar18 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_73);
			Var19.f_4 = 15;
			Var19.f_36 = 10;
			while ((((Var19.f_2 != joaat("COST_TYPE_CRAFT") || Var19 == -489628648) || Var19 == -2141192156) || (!Global_1913166->f_1579 && func_127(uParam0->f_73, Var19, 1))) && iVar66 < iVar18)
			{
				iVar66++;
				if (bParam1)
				{
					bVar0++;
				}
				else
				{
					bVar0 = (bVar0 - 1);
				}
				if (bVar0 < 0)
				{
					bVar0 = (iVar18 - 1);
				}
				else if (bVar0 >= iVar18)
				{
					bVar0 = false;
				}
				if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(uParam0->f_73, bVar0, &Var19))
				{
				}
			}
			uParam0->f_74 = Var19;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_69, "eCost", uParam0->f_74);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_69, "eOutputItem", uParam0->f_73);
		iVar67 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iIndex");
		if (iVar67 >= 0 && iVar67 < &Global_1913166)
		{
			iVar68 = ((*Global_1913166)[iVar67 /*9*/])->f_8;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_69, "iCurCostVariant", bVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_35, "variantIndex", (bVar0 + 1 - iVar68));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_73));
		uParam0->f_33 = -1;
		uParam0->f_21 = 0;
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription"))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_73, 1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "RPGDescription", func_150(uParam0->f_73));
		func_119(uParam0, -1, func_77(), uParam0->f_69, 0, bVar2, 0);
		func_48(uParam0, uParam0->f_73, uParam0->f_74);
	}
}

void func_57(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		uParam0->f_78 = !uParam0->f_78;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription", uParam0->f_78);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowIngredients", !uParam0->f_78);
	if (!uParam0->f_78)
	{
		if (func_63(uParam0[6]))
		{
			func_93(uParam0[6], "INFO", 1);
		}
		ATTRIBUTE::_0xD962F8579D702DB5();
		func_151(uParam0);
	}
	else
	{
		if (func_63(uParam0[6]))
		{
			func_93(uParam0[6], "INGREDIENTS", 1);
		}
		func_152(uParam0);
	}
	if (uParam0->f_74 == -214678071)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "enabled") == 1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iNumCostVariants") <= 1 && uParam0->f_78)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				iVar0 = func_133(uParam0->f_73, uParam0->f_74, func_77());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar0));
			}
		}
	}
}

void func_58(var uParam0)
{
	if (uParam0->f_25)
	{
		return;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	func_153(uParam0);
	func_47(uParam0);
	func_151(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowIngredients", false);
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	func_48(uParam0, 0, 0);
	func_6(uParam0, 9);
}

void func_59(var uParam0, int iParam1)
{
	func_47(uParam0);
	func_151(uParam0);
	func_122(uParam0, &(iParam1->f_3));
}

int func_60(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar41, 20))
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

void func_61(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_60(uParam0->f_73, -1636519629);
	if (iVar0 == 414472632)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_79))
		{
			iVar1 = func_154(uParam0->f_73);
			if (iVar1 != 0)
			{
				uParam0->f_79 = OBJECT::CREATE_OBJECT(iVar1, Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_79, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_79, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_59, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_59);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_59, "pl_craft", true);
	}
	else if (iVar0 == -1136843638)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_62, "arrow", uParam0->f_81, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_62, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_62);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_62, "pl_craft", true);
	}
	else if (iVar0 == 786205940)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_63, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_63);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_63, "pl_craft", true);
	}
	else if (iVar0 == -715814988)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_61, "player", Global_34, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_79))
		{
			iVar2 = func_154(uParam0->f_73);
			if (iVar2 != 0)
			{
				uParam0->f_79 = OBJECT::CREATE_OBJECT(iVar2, Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_79, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_79, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_79, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), func_155(uParam0->f_73), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_61, "bullet", uParam0->f_79, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_61);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_61, "pl_craft", true);
	}
	else if (iVar0 == -732326901)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
		{
			uParam0->f_81 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_35, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_81, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_64, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_64);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_64, "pl_craft", true);
	}
	else if (iVar0 == -1141771998)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
		{
			uParam0->f_81 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_TOMAHAWK"), 1, Global_35, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_81, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_65, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_65);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_65, "pl_craft", true);
	}
	else if (iVar0 == 364689687)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
		{
			uParam0->f_81 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_35, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_81, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_83))
		{
			uParam0->f_83 = OBJECT::CREATE_OBJECT(joaat("P_CS_RAG01X"), Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_83, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_83, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "RAG", uParam0->f_83, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_66);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_66, "pl_craft", true);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_65, "pl_craft", true);
	}
	else if (iVar0 == -842117252)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_67, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_67);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_67, "pl_craft", true);
	}
	else if (iVar0 == -1610298873)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_68);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_68, "pl_craft", true);
	}
	else
	{
		uParam0->f_49 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_156(uParam0->f_73), func_157(uParam0->f_73)) * 1000f));
		func_92(&(uParam0->f_86));
		TASK::TASK_PLAY_ANIM(Global_34, func_156(uParam0->f_73), func_157(uParam0->f_73), 8f, -8f, -1, 67108880, 0f, false, 4096, false, "Satchel_Only_filter", false);
	}
}

void func_62(var uParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_63(uParam0[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (func_63(uParam2[iVar1]))
				{
					if (uParam0[iVar0] == uParam2[iVar1])
					{
					}
				}
				iVar1++;
			}
			func_49(uParam0[iVar0], bParam1, 1, 1);
		}
		iVar0++;
	}
}

bool func_63(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (((*Global_1949759)[iParam0 /*23*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3);
}

void func_64(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_63(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_109(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_158(iVar0);
	*uParam0 = 0;
}

int func_65(int iParam0)
{
	if ((((((((iParam0 == -715814988 || iParam0 == -1136843638) || iParam0 == -732326901) || iParam0 == 786205940) || iParam0 == -1141771998) || iParam0 == 364689687) || iParam0 == 414472632) || iParam0 == -842117252) || iParam0 == -1610298873)
	{
		return 1;
	}
	return 0;
}

int func_66(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_105(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_159(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_67(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_63(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, iParam2);
}

void func_68(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_63(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, bParam2);
}

void func_69(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_63(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	func_138(iVar0, bParam1);
}

bool func_70(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_63(iParam0))
	{
		return false;
	}
	iVar0 = func_109(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_71(bool bParam0, int iParam1)
{
	if (!func_21(bParam0, 0))
	{
		return func_161(func_160(bParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

bool func_72(bool bParam0, bool bParam1)
{
	bool bVar0;

	switch (bParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_CONFUSE"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DISORIENT"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DRAIN"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_TRAIL"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_WOUND"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			bVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			bVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			bVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			bVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_BOLAS"):
			bVar0 = joaat("WEAPON_THROWN_BOLAS");
			break;
		case joaat("AMMO_POISONBOTTLE"):
			bVar0 = joaat("WEAPON_THROWN_POISONBOTTLE");
			break;
		case joaat("AMMO_HATCHET"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			bVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			bVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_21(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_162(bVar0) || func_163(bVar0))
			{
				return bVar0;
			}
		}
		else
		{
			return bVar0;
		}
	}
	return bParam0;
}

int func_73(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -715814988:
			return uParam0->f_61;
		case -732326901:
			return uParam0->f_64;
		case -1136843638:
			return uParam0->f_62;
		case 786205940:
			return uParam0->f_63;
		case -1141771998:
			return uParam0->f_65;
		case 364689687:
			return uParam0->f_66;
		case 414472632:
			return uParam0->f_59;
		case -842117252:
			return uParam0->f_67;
		case -1610298873:
			return uParam0->f_68;
		default:
			break;
	}
	return 0;
}

int func_74(int* iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
		return 1;
	}
	*uParam1 = 1;
	NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*iParam0);
	return 0;
}

int func_75(bool bParam0)
{
	if (func_23() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_164(bParam0));
}

int func_76()
{
	if (INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return 0;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

int func_77()
{
	int iVar0;
	int iVar1;

	iVar0 = func_165(7);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (func_166(Global_34, iVar0, 1) < 400f)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

int func_78(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	TELEMETRY::_0x78C2E029DB205A3A(bParam0, bParam1);
	return func_167(bParam0, bParam1, bParam2, bParam3, iParam4);
}

void func_79(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (!func_75(0) || func_76())
	{
		return;
	}
	if (!func_21(bParam0, 0))
	{
		return;
	}
	func_169(func_168(joaat("ITEMS_CRAFTED")), bParam1);
	if (bParam3)
	{
		if (func_23() == -1)
		{
			if (func_71(bParam0, -1588156645))
			{
				bVar0 = func_170(func_72(bParam0, 0), 0);
				if (WEAPON::IS_WEAPON_VALID(bVar0))
				{
					func_171(bVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_172(bParam0) == joaat("HORSE_EQUIPMENT"))
			{
				if (func_173(bParam0, 0))
				{
					func_174(bParam0, 1, 0, 1, 0, 0, 0);
				}
			}
			else
			{
				func_175(bParam0, bParam1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else
		{
			func_176(bParam0, iParam4, bParam1);
		}
	}
	func_177(bParam0, bParam1);
	Global_1051083 = bParam0;
}

bool func_80(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	var uVar0;
	var uVar1;
	var uVar2;

	return func_128(bParam0, bParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, iParam4);
}

bool func_81(bool bParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;

	Var0 = { func_178(bParam0, 0, 0) };
	return func_179(bParam0, &Var0, iParam1, 0, bParam2, -1, 0);
}

int func_82(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	bool bVar6;
	struct<16> Var7;
	struct<16> Var23;

	if (!func_21(bParam0, 0))
	{
		return -1;
	}
	if (func_133(bParam0, bParam1, 0) < iParam2)
	{
		return -1;
	}
	Var0 = { func_178(bParam0, 1, 0) };
	if (func_179(bParam0, &Var0, iParam2, 0, 1, -1, 0))
	{
		return -1;
	}
	bVar6 = func_71(bParam0, 1992556171);
	if (bVar6)
	{
		iVar5 = func_180(bParam0, "SPEND STEW FEE", 1, 1, 0, bParam1);
	}
	else
	{
		Var7 = { func_181(bParam0, Var0, Var0.f_4, iParam2, 1) };
		Var7.f_13 = bParam1;
		Var7.f_12 = 1248274121;
		iVar5 = func_182(2113164098, &Var7, 1);
	}
	if (iVar5 == -1)
	{
		return -1;
	}
	Var23.f_7 = -142743235;
	Var23.f_1 = 1;
	func_183(iVar5, Var23);
	TELEMETRY::_0x78C2E029DB205A3A(bParam0, bParam1);
	return iVar5;
}

void func_83(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	uParam0->f_51 = 0;
	func_118(262144);
	func_74(&(uParam0->f_81), &(uParam0->f_82));
	func_74(&(uParam0->f_79), &(uParam0->f_80));
	iVar0 = func_73(uParam0, iParam1);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "bStopLoop", true, false);
	if (!func_87(128))
	{
		func_49(uParam0[2], 1, 1, 1);
		func_49(uParam0[4], 1, 1, 1);
	}
	func_69(uParam0[2], 0, 1);
	func_69(uParam0[4], 1, 1);
	func_184(uParam0[1], 1);
	func_64((*uParam0)[1], 1, 1);
	(*uParam0)[1] = func_66("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_49, uParam0->f_49 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	func_68(uParam0[1], 11, 1, 1);
	func_68(uParam0[1], 19, 1, 1);
	func_67(uParam0[1], -1067771379, 0, 1);
	func_49(uParam0[1], bParam2, 1, 1);
	func_6(uParam0, 13);
}

int func_84(var uParam0, float fParam1)
{
	if (!func_91(uParam0))
	{
		return 0;
	}
	if (func_185(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

int func_85(int iParam0)
{
	int iVar0;

	iVar0 = func_95(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return 1;
	}
	return 0;
}

void func_86(int iParam0)
{
	if (func_35(iParam0))
	{
		Global_1956172 = (&Global_1956172 - (Global_1956172 && iParam0));
	}
}

bool func_87(int iParam0)
{
	return (Global_1956172->f_1 && iParam0) != 0;
}

void func_88(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_89(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_63(iParam0))
	{
		return false;
	}
	iVar0 = func_109(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iVar0 /*23*/])->f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3))
		{
			iVar3 = (iVar1 - ((*Global_1949759)[iVar0 /*23*/])->f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(((*Global_1949759)[iVar0 /*23*/])->f_18) * (1f - ((*Global_1949759)[iVar0 /*23*/])->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			((*Global_1949759)[iVar0 /*23*/])->f_21 = iVar1;
			((*Global_1949759)[iVar0 /*23*/])->f_22 = uVar2;
		}
	}
	if (HUD::_0xCD072523791DDC1B(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

bool func_90(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_63(iParam0))
	{
		return false;
	}
	iVar0 = func_109(iParam0);
	if (!HUD::_0xB60C9F9ED47ABB76(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, ((*Global_1949759)[iVar0 /*23*/])->f_4);
	}
	return HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

bool func_91(var uParam0)
{
	return func_186(*uParam0, 1);
}

void func_92(var uParam0)
{
	func_187(uParam0, 0f);
}

void func_93(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_63(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949759)[iVar0 /*23*/])->f_3, sParam1);
}

int func_94()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_2;
	}
	return 255;
}

int func_95(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			return (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_96(bool bParam0)
{
	struct<14> Var0;
	int iVar14;

	if (bParam0)
	{
		iVar14 = 14;
	}
	else
	{
		iVar14 = 15;
	}
	func_189(iVar14, Var0, func_188(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))));
}

void func_97(var uParam0)
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		func_190(iVar0, 1);
		func_191(iVar0, uParam0);
		func_193(func_192(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())), uParam0);
	}
	else
	{
		func_96(0);
		func_194(uParam0);
	}
}

void func_98(var uParam0)
{
	var uVar0;
	vector3 vVar4;

	if (TELEMETRY::_0xF184B3ECE36219CF(uParam0->f_22, &uVar0))
	{
		vVar4 = { func_195(&Global_1275573) };
		TELEMETRY::_0xDF516E598D966D06(&uVar0, 0, vVar4.z, 0, 1, 1084182731, joaat("STEW_POT"), uParam0->f_73, func_71(uParam0->f_73, -2011345500));
	}
}

bool func_99(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_196(bParam0, &uVar25, &Var12, &Var0, bParam1, iParam2, iParam3, bParam4);
}

void func_100(int iParam0)
{
	if (Global_1939067->f_102.f_2 >= iParam0)
	{
		return;
	}
	Global_1939067->f_102.f_2 = iParam0;
}

void func_101(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_59))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_59, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_61))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_61, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_62))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_62, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_63))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_63, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_64))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_64, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_65))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_65, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_66))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_66, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_67))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_67, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_68))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_68, 0);
	}
	func_74(&(uParam0->f_79), &(uParam0->f_80));
	func_74(&(uParam0->f_81), &(uParam0->f_82));
	func_74(&(uParam0->f_83), &(uParam0->f_84));
}

void func_102(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_197(11, 1, 0);
		iVar0++;
	}
	if (func_198(bParam0, 0))
	{
		func_199(40);
	}
	else
	{
		func_199(39);
	}
}

int func_103(int iParam0)
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

int func_104(int iParam0)
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

bool func_105(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_106(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_59))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_59 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_59 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_59);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_61))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_61 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_61 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_61);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_62))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_62 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_62 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_62);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_63))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_63 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_63 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_63);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_64))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_64 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_64 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_64);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_65))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_65 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_65 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_65);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_66))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_66 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_66 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_66);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_67))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_67 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_67 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_67);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_68))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_68 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_68 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_68);
	}
}

bool func_107(char* sParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

int func_108(var uParam0, var uParam1)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam1))
	{
		if (!ANIMSCENE::_0x477122B8D05E7968(*uParam1, 1, 0))
		{
			if (ANIMSCENE::_0x59606519FF9D3EC2(*uParam1, 1))
			{
				return 0;
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				return 0;
			}
		}
	}
	else
	{
		func_106(uParam0);
		return 0;
	}
	return 1;
}

int func_109(int iParam0)
{
	return iParam0;
}

int func_110(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return ((*Global_1128435)[iParam0 /*83*/])->f_38.f_28;
}

int func_111(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return ((*Global_1128435)[iParam0 /*83*/])->f_38.f_28.f_1;
}

void func_112(var uParam0, bool bParam1, bool bParam2)
{
	((*Global_1913166)[uParam0->f_51 /*9*/])->f_5 = bParam2;
	((*Global_1913166)[uParam0->f_51 /*9*/])->f_6 = bParam1;
	((*Global_1913166)[uParam0->f_51 /*9*/])->f_7 = 1;
	((*Global_1913166)[uParam0->f_51 /*9*/])->f_8 = 0;
	Global_1913166->f_1576++;
	uParam0->f_51++;
	if ((bParam2 == 600942249 || bParam2 == -257768755) || bParam2 == 1472825031)
	{
		func_200(uParam0, bParam1, bParam2);
	}
	else if (bParam2 == -214678071)
	{
		func_201(uParam0, bParam1);
	}
}

int func_113(var uParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;

	Var0 = { func_146(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, Global_1913166->f_1584, 0) };
	if (func_147(Var0, &iVar10, &iVar11, 0))
	{
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = func_148(iVar12, iVar10);
			if (func_21(bVar13, 0))
			{
				if (uParam0->f_51 >= 175)
				{
				}
				else
				{
					if (Global_1913166->f_1584 == 0 && func_71(bVar13, 302810039))
					{
						if (!(Global_1913166->f_1585 != 0 && func_71(bVar13, Global_1913166->f_1585)))
						{
						}
						else if (func_71(bVar13, 266762988))
						{
						}
						else
						{
							func_112(uParam0, bVar13, iParam1);
							func_202(uParam0, bVar13, iParam1);
						}
						iVar12++;
						func_203(&iVar10);
						return 1;
						return 0;
					}
				}
			}
		}
	}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1795740370 /* GXTEntry: "Provisions" */;
		case 1:
			return 461149715 /* GXTEntry: "Tonics" */;
		case 2:
			return 210507310 /* GXTEntry: "Ammo" */;
		case 3:
			return -1182908601 /* GXTEntry: "Weapons" */;
		case 4:
			return 1647118377 /* GXTEntry: "Hunting" */;
		case 5:
			return -867280435 /* GXTEntry: "Horse Care" */;
		default:
			break;
	}
	return 0;
}

int func_115(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_116(var uParam0, char* sParam1, var uParam2)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_35, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", true);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
}

void func_117(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;

	bVar0 = ((*Global_1913166)[bParam2 /*9*/])->f_6;
	if ((iParam4 || uParam0->f_25) || func_198(bVar0, uParam0->f_48))
	{
		if (bParam1)
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913166)[bParam2 /*9*/])->f_1))
			{
				if (bParam5)
				{
					func_119(uParam0, -1, bParam3, ((*Global_1913166)[bParam2 /*9*/])->f_1, 1, 0, 1);
				}
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_36, uParam0->f_52, -2047994727, ((*Global_1913166)[bParam2 /*9*/])->f_1);
			}
			else
			{
				func_204(uParam0, bParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913166)[bParam2 /*9*/])->f_1))
			{
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1913166)[bParam2 /*9*/])->f_1);
			}
			func_204(uParam0, bParam2, 0, bParam3);
		}
		if (uParam0->f_52 == 0)
		{
			uParam0->f_71 = ((*Global_1913166)[bParam2 /*9*/])->f_6;
			uParam0->f_72 = ((*Global_1913166)[bParam2 /*9*/])->f_5;
			uParam0->f_70 = ((*Global_1913166)[bParam2 /*9*/])->f_1;
		}
		uParam0->f_52++;
	}
}

void func_118(int iParam0)
{
	if (!func_35(iParam0))
	{
		Global_1956172 = (Global_1956172 || iParam0);
	}
}

void func_119(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	char[] cVar8[8];
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	struct<2> Var15;
	struct<2> Var18;
	bool bVar40;
	int iVar41;
	struct<7> Var42;
	bool bVar49;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam3))
	{
		iParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam3, "iIndex");
	}
	iVar0 = ((*Global_1913166)[iParam1 /*9*/])->f_1;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eOutputItem");
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eCost");
	bVar3 = iVar1;
	bVar4 = iVar2;
	iVar5 = func_133(bVar3, bVar4, bParam2);
	bVar6 = func_131(bVar3, 0, 0, 0);
	iVar7 = func_132(bVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - bVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, func_134(iVar7, iVar5), 8);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "count", &cVar8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "visible", false);
	if (uParam0->f_25)
	{
		bVar9 = func_115((iVar5 > 0 && func_129(bVar3)), 1, 0);
	}
	else
	{
		bVar9 = func_115((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (bVar9 == 0 && func_205(bVar3))
	{
		if (func_206(bVar3, bVar4, uParam0, bParam2, &bVar11, &bVar12, &bVar13))
		{
			bVar9 = true;
			bVar10 = true;
			if (bParam6)
			{
				bVar3 = bVar11;
				bVar4 = bVar12;
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", bVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eOutputItem", bVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eCost", bVar12);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "iCurCostVariant", bVar13);
				bParam5 = true;
			}
		}
	}
	if (!uParam0->f_28)
	{
		if ((bVar4 == -214678071 || bVar4 == joaat("COST_CRAFTING_GRILL")) || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			bVar9 = false;
		}
	}
	if (!Global_1913166->f_1579 && func_127(bVar3, bVar4, 1))
	{
		bVar9 = false;
		bVar14 = true;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "lockVisible", bVar14);
	if (bVar9 == 1)
	{
		if (!func_130(2) && func_60(bVar3, -1636519629) == -701492487)
		{
			((*Global_1913166)[iParam1 /*9*/])->f_2 = 0;
			bVar9 = false;
		}
		else
		{
			((*Global_1913166)[iParam1 /*9*/])->f_2 = 1;
		}
	}
	else
	{
		if (((uParam0->f_53 && bVar9 == 0) && ((*Global_1913166)[iParam1 /*9*/])->f_2) && bParam4)
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_36, iVar0);
		}
		((*Global_1913166)[iParam1 /*9*/])->f_2 = 0;
	}
	if (bParam5)
	{
		if (func_207(bVar3, &Var15, joaat("INVENTORY"), 0, 0, 0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "texture", Var15);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "textureDictionary", Var15.f_1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", bVar3);
		Var18.f_1 = 20;
		bVar40 = false;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", false);
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bVar3, &Var18))
		{
			iVar41 = 0;
			while (iVar41 < Var18)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var18.f_1[iVar41]), &Var42))
				{
					bVar49 = Var42.f_2;
					switch (Var42.f_1)
					{
						case -1104847406:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", bVar49);
							break;
						case 1857353317:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", bVar49);
							break;
						case -826379728:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", Var42.f_6);
							break;
						case 1342237631:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", Var42.f_6);
							break;
						case -943921969:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", bVar49);
							break;
						case -416929031:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", bVar49);
							break;
						case 1869697234:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", Var42.f_6);
							break;
						case 2062242710:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", Var42.f_6);
							break;
						case 381158954:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", bVar49);
							break;
						case 1681823811:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", bVar49);
							break;
						case -1191740624:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", Var42.f_6);
							break;
						case -1240225157:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", Var42.f_6);
							break;
						case 978049229:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", bVar49);
							break;
						case -778289619:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", Var42.f_6);
							break;
						case -1918697215:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", bVar49);
							break;
						case 1136630075:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", Var42.f_6);
							break;
						case 855745648:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", bVar49);
							break;
						case 1365603835:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", Var42.f_6);
							break;
						case 1497139093:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", Var42.f_6);
							break;
					}
				}
				iVar41++;
			}
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "overpower", bVar40);
	}
	if (!uParam0->f_28)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			bVar9 = false;
		}
	}
	if (bVar10 && !bParam6)
	{
		bVar9 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "enabled", bVar9);
}

int func_120(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_121(var uParam0, bool bParam1)
{
	int iVar0;

	if (TASK::_0x841475AC96E794D1(uParam0->f_10))
	{
		iVar0 = TASK::_0x7467165EE97D3C68(uParam0->f_10);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar0, bParam1, false);
	}
}

void func_122(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	ATTRIBUTE::_0xD962F8579D702DB5();
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eOutputItem");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eCost");
	bVar2 = iVar0;
	ATTRIBUTE::_0xD962F8579D702DB5();
	if (func_21(bVar2, 0) && (uParam0->f_25 || func_198(bVar2, uParam0->f_48)))
	{
		uParam0->f_33 = -1;
		uParam0->f_21 = 0;
		uParam0->f_73 = bVar2;
		uParam0->f_74 = iVar1;
		func_64((*uParam0)[1], 1, 1);
		bVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
		if (bVar3 > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "variantVisible", true);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_73));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_35, "variantCount", bVar3);
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < &Global_1913166)
			{
				iVar6 = ((*Global_1913166)[iVar5 /*9*/])->f_8;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_35, "variantIndex", (iVar4 + 1 - iVar6));
			uParam0->f_75 = 1;
			if (func_63(uParam0[5]))
			{
				func_49(uParam0[5], 1, 1, 1);
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "variantVisible", false);
			uParam0->f_75 = 0;
			if (func_63(uParam0[5]))
			{
				func_49(uParam0[5], 0, 1, 1);
			}
		}
		uParam0->f_49 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_156(uParam0->f_73), func_157(uParam0->f_73)) * 1000f));
		uParam0->f_76 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting");
		uParam0->f_69 = *uParam1;
		(*uParam0)[1] = func_66("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_48(uParam0, uParam0->f_73, uParam0->f_74);
		func_68(uParam0[1], 11, 1, 1);
		if (Global_1913166->f_1579 || !func_127(uParam0->f_73, uParam0->f_74, 1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "RPGDescription", func_150(bVar2));
			func_57(uParam0, 0);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "RPGDescription", false);
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription"))
		{
			if (Global_1913166->f_1579 || !func_127(uParam0->f_73, uParam0->f_74, 1))
			{
				func_152(uParam0);
			}
		}
	}
}

int func_123(bool bParam0)
{
	if (func_172(bParam0) == joaat("CONSUMABLE") && INVENTORY::_0x245D07651B1D183B(bParam0, 16777216))
	{
		return 1;
	}
	return 0;
}

char* func_124(var uParam0)
{
	if (uParam0->f_53)
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

int func_125(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_105(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_159(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

void func_126(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_63(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ALLOWED_ACTION(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1);
}

int func_127(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_21(bParam0, 0))
	{
		return func_208(func_160(bParam0), bParam1, bParam2);
	}
	if (func_209(bParam0))
	{
		return func_211(func_210(bParam0, 1), bParam1);
	}
	if ((bParam2 && func_23() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(bParam0))
	{
		return 1;
	}
	if (!func_212(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

int func_128(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	struct<2> Var0;

	*uParam2 = 0;
	*uParam3 = 0;
	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if ((!Global_1913166->f_1579 && func_127(bParam0, bParam1, 1)) && !bParam5)
	{
		return 0;
	}
	if (!func_213(bParam0, 1, bParam1, &Var0, iParam4, bParam6, iParam7))
	{
		*uParam2 = Var0;
		*uParam3 = Var0.f_1;
		return 0;
	}
	return 1;
}

bool func_129(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_215(func_214());
	iVar1 = func_215(bParam0);
	return iVar1 > iVar0;
}

bool func_130(int iParam0)
{
	return func_216(Global_1939067->f_38, iParam0);
}

int func_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_172(bParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		bVar2 = func_217(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, bVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_218(bParam0, 0);
	}
	if (func_219(bParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_164(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_220(bParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_164(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_132(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_178(bParam0, 0, 0) };
	return func_221(bParam0, &Var0, 0, bParam1);
}

bool func_133(bool bParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	int iVar36;

	if (!func_141(bParam0, bParam1, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar33 = (func_75(0) && !func_76());
	bVar34 = -1;
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 0)
		{
			Jump @268; //curOff = 73
		}
		else
		{
			bVar35 = func_131(&(Var0[iVar32 /*2*/]), 0, !bVar33, 0);
			if (bVar33)
			{
				if (func_222(&(Var0[iVar32 /*2*/])) || func_223(&(Var0[iVar32 /*2*/])))
				{
					bVar35 = (bVar35 + func_224(&(Var0[iVar32 /*2*/]), 0));
					if (bParam2)
					{
						iVar36 = 0;
						bVar35 = (bVar35 + func_225(7, &(Var0[iVar32 /*2*/]), &iVar36));
					}
				}
				else if (bParam2)
				{
					bVar35 = (bVar35 + (func_226(7, &(Var0[iVar32 /*2*/])) + func_227(&(Var0[iVar32 /*2*/]))));
				}
			}
			if (bVar35 < (Var0[iVar32 /*2*/])->f_1)
			{
				return false;
			}
			bVar35 = (bVar35 / (Var0[iVar32 /*2*/])->f_1);
			if (bVar34 == -1 || bVar35 < bVar34)
			{
				bVar34 = bVar35;
			}
		}
		iVar32++;
	}
	return bVar34;
}

int func_134(int iParam0, bool bParam1)
{
	if (iParam0 > bParam1)
	{
		return bParam1;
	}
	return iParam0;
}

bool func_135(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<2> Var0[15];
	bool bVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<2> Var35;
	bool bVar38;
	bool bVar39;
	char* sVar40;
	char cVar41[16];
	bool bVar43;
	int iVar44;
	bool bVar45;
	int iVar46;
	var uVar47;
	int iVar48;
	bool bVar49;

	bVar34 = !bParam4;
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam2->f_47);
	iVar33 = 0;
	while (iVar33 < 4)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam2->f_47, &(uParam2->f_42[iVar33]));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "inUse", false);
		iVar33++;
	}
	if (!bParam4 && func_141(bParam0, bParam1, &Var0, &iVar32, 1, 0))
	{
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				bVar31 = &Var0[iVar33 /*2*/];
				if (func_21(bVar31, 0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "visible", true);
					if (func_207(bVar31, &Var35, joaat("INVENTORY"), 0, 0, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_37[iVar33]), "texture", Var35);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_37[iVar33]), "textureDictionary", Var35.f_1);
					}
					bVar38 = func_131(bVar31, 0, 0, 0);
					bVar39 = bVar38 >= (Var0[iVar33 /*2*/])->f_1;
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_37[iVar33]), "count", bVar38);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_37[iVar33]), "enabled", func_115(bVar39, 1, 0));
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "inUse", true);
					if (!bVar39)
					{
						bVar34 = false;
					}
					sVar40 = MISC::_CREATE_VAR_STRING(10, "CRFT_ING_LIST", MISC::_CREATE_VAR_STRING(0, &(Var0[iVar33 /*2*/])), (Var0[iVar33 /*2*/])->f_1);
					StringCopy(&cVar41, "Text", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_42[iVar33]), &cVar41, sVar40);
					StringCopy(&cVar41, "Enabled", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_42[iVar33]), &cVar41, func_115(bVar39, 1, 0));
					DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_47, -1, 309940639, &(uParam2->f_42[iVar33]));
				}
				iVar33++;
			}
		}
	}
	if (bVar34)
	{
		if (!uParam2->f_28 && ((uParam2->f_76 || uParam2->f_74 == -214678071) || uParam2->f_74 == joaat("COST_CRAFTING_GRILL")))
		{
			bVar34 = false;
			if (func_123(bParam0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
			}
		}
		else
		{
			bVar43 = func_131(bParam0, 0, 0, 0);
			iVar44 = func_132(bParam0, 0);
			if (uParam2->f_25 && !func_129(bParam0))
			{
				bVar34 = false;
				bVar45 = func_214();
				if (bParam0 == bVar45)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE_BETTER"));
				}
			}
			else if ((iVar44 - bVar43) > 0 || iVar44 == -1)
			{
				iVar46 = func_60(bParam0, -1636519629);
				if (!func_130(2) && iVar46 == -701492487)
				{
					bVar34 = false;
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_CONS"));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam3))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(34, "CRFT_BREAK", 1, MISC::_CREATE_VAR_STRING(0, PLAYER::_0x0139637A3BFF8B6D(iParam3, &uVar47))));
				}
				else
				{
					iVar48 = func_133(bParam0, uParam2->f_74, func_77());
					if (uParam2->f_25)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, func_228(bParam0)));
					}
					else if (uParam2->f_74 == -214678071)
					{
						if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam2->f_69, "iNumCostVariants") <= 1 && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam2->f_35, "ShowRpgDescription"))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CAMP_MEAT_POOR"));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar48));
						}
					}
					else if (uParam2->f_74 == joaat("COST_CRAFTING_GRILL"))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar48));
					}
					else if (iVar46 == -701492487)
					{
						if (iVar48 == 1)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "BREW_ING_HAVE1", iVar48));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "BREW_ING_HAVE", iVar48));
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_HAVE", iVar48));
					}
				}
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(130, "CRFT_ING_MAX", bVar43, iVar44, MISC::_CREATE_VAR_STRING(0, bParam0)));
				bVar34 = false;
			}
		}
	}
	else if (bParam4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_LOCK"));
	}
	else if (!uParam2->f_28 && ((uParam2->f_76 || uParam2->f_74 == -214678071) || uParam2->f_74 == joaat("COST_CRAFTING_GRILL")))
	{
		bVar34 = false;
		if (func_123(bParam0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
		}
	}
	else if (uParam2->f_25 && !func_129(bParam0))
	{
		bVar49 = func_214();
		if (bParam0 == bVar49)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE_BETTER"));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_NEED"));
	}
	return bVar34;
}

void func_136(var uParam0)
{
	if (uParam0->f_25)
	{
		if (!func_71(uParam0->f_73, -2011345500))
		{
			func_64((*uParam0)[7], 1, 1);
			return;
		}
		if (!func_63(uParam0[7]))
		{
			(*uParam0)[7] = func_66("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if ((uParam0->f_33 > 0 || uParam0->f_73 == Global_1131092->f_339.f_16) || !func_129(uParam0->f_73))
		{
			func_49(uParam0[7], 0, 1, 1);
		}
		else
		{
			func_49(uParam0[7], 1, 1, 1);
		}
	}
}

void func_137(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_138(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_105(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, bParam1);
		}
	}
}

void func_139(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, bParam1);
	}
}

void func_140(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

int func_141(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, bParam1);
	if (*iParam3 == 0)
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
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(bParam0, bParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
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
		func_229(bParam0, bParam1, uParam2, *iParam3);
	}
	return 1;
}

bool func_142(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_172(bParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, bParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_230(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_231(bParam0))
			{
				return true;
			}
			break;
	}
	return func_131(bParam0, 0, 0, 0) >= bParam1;
}

int func_143(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
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
					*iParam1 = iVar1;
					iParam1->f_1 = iVar2;
					iParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_144(bool bParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

void func_145(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_63(*uParam0))
	{
		iVar0 = func_109(*uParam0);
		if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
		{
			HUD::_UIPROMPT_SET_TAG(((*Global_1949759)[iVar0 /*23*/])->f_3, sParam1);
		}
	}
}

struct<10> func_146(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	if (bParam4 != 0)
	{
		Var0.f_4 = bParam4;
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

int func_147(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_148(int iParam0, int iParam1)
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

int func_149(int iParam0)
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

int func_150(bool bParam0)
{
	struct<19> Var0;

	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

void func_151(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", false);
}

void func_152(var uParam0)
{
	if ((func_71(uParam0->f_73, 1147021565) || uParam0->f_25) && !func_71(uParam0->f_73, 1919582297))
	{
		if (func_198(uParam0->f_73, 5))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_73, 2);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", false);
		}
		else
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_73, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", true);
		}
	}
	else
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", false);
	}
}

void func_153(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_35, "filterIndex");
	uParam0->f_48 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "filter", func_114(uParam0->f_48));
}

int func_154(bool bParam0)
{
	bool bVar0;

	bVar0 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	if (WEAPON::_0xDDC64F5E31EEDAB6(bVar0))
	{
		return joaat("S_AMMO_9MM");
	}
	else if (WEAPON::_0xC212F1D05A8232BB(bVar0))
	{
		return joaat("S_AMMO_45MM");
	}
	else if (WEAPON::_0x0A82317B7EBFC420(bVar0))
	{
		return joaat("S_AMMO_RIFLE");
	}
	else if (WEAPON::_0xDDB2578E95EF7138(bVar0))
	{
		return joaat("S_AMMO_REPEATER");
	}
	else if (WEAPON::_0xC75386174ECE95D5(bVar0))
	{
		return joaat("S_AMMO_SHOTGUN");
	}
	return 0;
}

Vector3 func_155(bool bParam0)
{
	bool bVar0;

	bVar0 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	if (WEAPON::_0xDDC64F5E31EEDAB6(bVar0))
	{
		return 0f, 0f, 0f;
	}
	else if (WEAPON::_0xC212F1D05A8232BB(bVar0))
	{
		return -0.005f, 0f, 0f;
	}
	else if (WEAPON::_0x0A82317B7EBFC420(bVar0))
	{
		return -0.03f, 0f, 0f;
	}
	else if (WEAPON::_0xDDB2578E95EF7138(bVar0))
	{
		return 0.005f, 0f, 0f;
	}
	else if (WEAPON::_0xC75386174ECE95D5(bVar0))
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

char* func_156(var uParam0)
{
	if (PED::IS_PED_MALE(Global_34))
	{
		return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
	}
	return "MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A";
}

char* func_157(var uParam0)
{
	return "craft_trans_stow";
}

void func_158(int iParam0)
{
	if (!func_232(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1949759)[iParam0 /*23*/])->f_3);
	}
	((*Global_1949759)[iParam0 /*23*/])->f_4 = 0;
	(*Global_1949759)[iParam0 /*23*/] = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = 0f;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_2 = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_15 = -1f;
}

void func_159(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1949759)[iParam0 /*23*/])->f_4 = iParam1;
	(*Global_1949759)[iParam0 /*23*/] = iParam4;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1949759)[iParam0 /*23*/])->f_2 = iParam5;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { vParam6 };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = fParam9;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = iParam10;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = iParam11;
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_5 = iParam12;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 2;
	((*Global_1949759)[iParam0 /*23*/])->f_17 = -1;
	((*Global_1949759)[iParam0 /*23*/])->f_18 = iParam16;
	((*Global_1949759)[iParam0 /*23*/])->f_19 = iParam15;
	((*Global_1949759)[iParam0 /*23*/])->f_20 = bParam25;
	((*Global_1949759)[iParam0 /*23*/])->f_22 = 0f;
	if (bParam25)
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::_GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, true);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1949759)[iParam0 /*23*/])->f_3 = iVar0;
	func_138(iParam0, 1);
	func_139(iParam0, 1);
	func_140(iParam0, 128);
}

bool func_160(bool bParam0)
{
	return bParam0;
}

int func_161(bool bParam0, int iParam1)
{
	if (!func_233(bParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_162(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
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

int func_163(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
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

int func_164(bool bParam0)
{
	if (func_23() == -1)
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

int func_165(int iParam0)
{
	iParam0 = func_234(iParam0);
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

float func_166(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_235(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_167(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	struct<2> Var0[15];
	bool bVar31;
	bool bVar33;
	int iVar34;
	var uVar35;
	int iVar36;
	bool bVar37;
	int iVar38;
	int iVar39;

	if (!func_75(0))
	{
		return 0;
	}
	else if (func_76())
	{
		return 0;
	}
	if (iParam4 != 0)
	{
		bParam3 = false;
	}
	if (!func_213(bParam0, 1, bParam1, &bVar31, &uVar35, bParam3, iParam4))
	{
		bVar33 = bVar31;
		return 0;
	}
	if (func_141(bParam0, bParam1, &Var0, &iVar34, 1, 0))
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			bVar33 = &Var0[iVar36 /*2*/];
			if (func_21(bVar33, 0))
			{
				if (bVar33 == joaat("CURRENCY_CASH"))
				{
					func_236((Var0[iVar36 /*2*/])->f_1, 0, 0, bParam2, 0);
				}
				else if (bParam3)
				{
					if (func_222(bVar33) || func_223(bVar33))
					{
						if (!func_142(bVar33, (Var0[iVar36 /*2*/])->f_1))
						{
							bVar37 = func_237(7, bVar33, (Var0[iVar36 /*2*/])->f_1);
						}
						func_238(bVar33, bVar37, 562618531, 0, 0);
						(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - bVar37);
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							if (!func_142(bVar33, (Var0[iVar36 /*2*/])->f_1))
							{
								func_239(bVar33, (Var0[iVar36 /*2*/])->f_1);
							}
							if (func_142(bVar33, (Var0[iVar36 /*2*/])->f_1))
							{
								func_240(bVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, -142743235);
							}
						}
					}
					else
					{
						if (func_227(bVar33) > 0)
						{
							func_241(bVar33);
							(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - 1);
						}
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							if (func_226(7, bVar33) > 0)
							{
								func_242(7, bVar33, (Var0[iVar36 /*2*/])->f_1);
								(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - func_242(7, bVar33, (Var0[iVar36 /*2*/])->f_1));
							}
						}
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							func_240(bVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, 562618531);
						}
					}
				}
				else if (iParam4 == 0)
				{
					if (func_222(bVar33) || func_223(bVar33))
					{
						if (!func_142(bVar33, (Var0[iVar36 /*2*/])->f_1))
						{
							func_239(bVar33, (Var0[iVar36 /*2*/])->f_1);
						}
					}
					func_240(bVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, 562618531);
				}
				else
				{
					func_243(bVar33, iParam4, (Var0[iVar36 /*2*/])->f_1, 562618531);
				}
				iVar38 = func_244(bVar33);
				if (func_245(iVar38))
				{
					iVar39 = func_246(iVar38);
					func_169(func_247(joaat("USED_IN_RECIPE"), iVar39), (Var0[iVar36 /*2*/])->f_1);
				}
			}
			iVar36++;
		}
		return 1;
	}
	return 0;
}

struct<2> func_168(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_169(var uParam0, bool bParam1, bool bParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, bParam2);
}

int func_170(bool bParam0, bool bParam1)
{
	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return bParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_171(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_248(bParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_172(bool bParam0)
{
	vector3 vVar0;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_173(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar5;
	var uVar9;
	struct<5> Var10;
	var uVar15;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (!func_249(bParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_250() };
	Var10.f_4 = uVar9;
	if (func_251(bParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_252(bParam0, 1))
			{
			}
		}
		if (func_253(bParam0))
		{
			func_173(func_254(bParam0), 1);
		}
		func_255();
		return 1;
	}
	return 0;
}

void func_174(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (!func_21(bParam0, 0))
	{
		return;
	}
	else if (bParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	else if (bParam1 == 0)
	{
		return;
	}
	if (!func_256() || bParam6)
	{
		func_257(bParam0, bParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(bParam1);
	StringCopy(&cVar2, func_258(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_258(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_259(bParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_172(bParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if (((((((iVar6 == joaat("AMMO") && bParam0 != joaat("AMMO_HATCHET")) && bParam0 != joaat("AMMO_HATCHET_CLEAVER")) && bParam0 != joaat("AMMO_HATCHET_HUNTER")) && bParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && bParam0 != joaat("AMMO_BOLAS")) && bParam0 != joaat("AMMO_POISONBOTTLE")) && bParam0 != joaat("AMMO_MOONSHINEJUG_MP"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_260(bParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_207(bParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	if (func_71(bParam0, 474910316))
	{
		sVar17 = func_261(bParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(bParam0))
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
	if (func_71(bParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	iVar18 = func_262(bParam0);
	if ((func_263(iVar12) && func_71(bParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_264(bParam0);
	}
	sVar19 = func_265(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (((((bParam1 == 1 || func_71(bParam0, 1443104131)) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && bParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && bParam0 != 1326838792) && bParam0 != -230310728) || ((iVar12 == 231148558 && bParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && bParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && bParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && bParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, func_266(bParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		if (!func_71(bParam0, 920823793))
		{
			StringCopy(&cVar20, "", 128);
			if (func_267(bParam0, &cVar20))
			{
				sVar19 = func_269(func_268(cVar20), joaat("COLOR_PURE_WHITE"));
			}
		}
	}
	func_270(sVar19, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

int func_175(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<13> Var6;
	int iVar29;
	struct<2> Var30;
	bool bVar32;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (!func_271(bParam0, bParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_272(bParam0, &bVar0, bParam1))
	{
		return 0;
	}
	func_273(bParam0, bParam2);
	iVar2 = 0;
	if (func_172(bParam0) == joaat("CLOTHING"))
	{
		if (!func_71(bParam0, 866047851) && !func_71(bParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_259(bParam0, 8388608) && !func_274(27))
	{
		func_275(27);
	}
	func_276(bParam0);
	if (!bVar3)
	{
		if (func_71(bParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			bVar1 = func_170(func_72(bParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(bVar1))
			{
				if (func_23() == -1)
				{
					func_171(bVar1);
				}
				if (func_75(0) && func_277(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_278(bParam0, bVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_279(bParam0, bVar0, iParam5);
				}
			}
		}
		else if (func_172(bParam0) == joaat("WEAPON"))
		{
			if (!func_280(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_172(bParam0) == joaat("AMMO") && func_281(bParam0))
		{
			if (!func_282(bParam0, &bVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_71(bParam0, 866047851))
		{
		}
		else if (func_71(bParam0, 2000026003))
		{
		}
		else if (func_71(bParam0, -103750053))
		{
			func_169(func_168(joaat("CLAWS_COLLECTED")), bVar0);
		}
		else if (bParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_169(func_247(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), bVar0);
		}
		else if (func_71(bParam0, -121341956) && !func_71(bParam0, 606799272))
		{
			if (bParam0 != joaat("WEAPON_KIT_DETECTOR"))
			{
				func_283(534, 0);
			}
			if (func_71(bParam0, -2017733358) || func_71(bParam0, -1369131378))
			{
			}
		}
		else if (func_71(bParam0, -136654233))
		{
			if (func_71(bParam0, -1021472396))
			{
			}
		}
		else if (func_71(bParam0, -1466706512) && func_71(bParam0, 1147021565))
		{
			func_283(517, 0);
		}
		else if (func_71(bParam0, 1147021565) && func_71(bParam0, -524514947))
		{
		}
		else if (func_71(bParam0, 554195525))
		{
		}
		else if (func_71(bParam0, 589988438))
		{
			if (func_284())
			{
				func_285(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_71(bParam0, 787083290) && func_71(bParam0, 949916894))
		{
			func_286(bParam0);
		}
		else if (func_71(bParam0, -1718133314))
		{
			func_287(bParam0);
		}
		else if (func_71(bParam0, -1738650224))
		{
			func_288(bParam0);
		}
		else if (func_71(bParam0, -1112814642) && func_71(bParam0, 949916894))
		{
			func_289(bParam0);
		}
		else if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1939067->f_21 = 0;
		}
		else if (func_71(bParam0, 1841149704))
		{
			func_290();
		}
		else if (func_71(bParam0, -1979000645))
		{
		}
		else if (func_71(bParam0, 606799272))
		{
		}
		else if (func_71(bParam0, -1112814642) && func_71(bParam0, -1697809989))
		{
		}
		else if (func_71(bParam0, -2017733358) || func_71(bParam0, -1369131378))
		{
		}
		else if (func_71(bParam0, -1921346699))
		{
			return 0;
		}
		else if (func_71(bParam0, 1192444843))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_142(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_175(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_142(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_175(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_142(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_175(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_142(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_175(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_142(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_175(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_142(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_175(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_71(bParam0, -839724752) && func_259(bParam0, 4))
		{
		}
		else if (func_71(bParam0, 1399091007))
		{
			func_291(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (bParam0)
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
				func_292(271, func_262(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_292(269, func_262(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_292(270, func_262(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_293(683, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_293(683, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_293(683, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_293(683, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_293(684, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_293(684, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_283(524, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_283(527, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_274(1))
				{
					func_283(520, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_283(519, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_23() == -1)
				{
					bParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_283(532, 0);
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
		bVar5 = bParam0;
		func_294(&bVar5);
		if (!func_279(bVar5, bVar0, iParam5))
		{
			return 0;
		}
		else if (!func_75(0))
		{
			return 1;
		}
		if (func_172(bParam0) == joaat("CLOTHING"))
		{
			func_295(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_75(0) && !func_76())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_175(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_296(iVar2, 0);
		}
	}
	Var30 = { func_297(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_0x6A0184E904CDF25E(&Var30, bVar0);
	}
	func_298(bParam0);
	if (fParam6 > 0f)
	{
		if (func_71(bParam0, -839724752))
		{
			func_299(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_174(bParam0, bVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_176(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<4> Var1;
	var uVar6;

	if (!func_300(bParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_301(bParam0))
		{
			iVar0 = 0;
			if (func_302(bParam0, 369710026, &iVar0))
			{
				bParam2 = iVar0;
			}
		}
	}
	Var1.f_4 = func_303(iParam1);
	Var1 = { func_304(0) };
	if (!func_251(bParam0, &uVar6, &Var1, bParam2, 752097756, 1))
	{
		return 0;
	}
	return 1;
}

void func_177(bool bParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_305(bParam0) };
	STATS::_0x6A0184E904CDF25E(&Var0, bParam1);
	if (!func_71(bParam0, 1714518167))
	{
		Var0 = { func_306(bParam0) };
		STATS::_0x6A0184E904CDF25E(&Var0, bParam1);
	}
}

struct<5> func_178(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_304(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_172(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_307(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_308(bParam1) };
			if (bParam2 && func_309(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_310(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_310(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_311(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_312(bParam1) };
			switch (func_260(bParam0))
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
			if (func_313(bParam0, -1823706425))
			{
				Var0 = { func_307(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_313(bParam0, -1483207246))
			{
				Var0 = { func_307(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -1911121386))
			{
				Var0 = { func_307(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_313(bParam0, -1653629781))
			{
				Var0 = { func_307(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_314(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_313(bParam0, -1653629781))
			{
				Var0 = { func_307(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_179(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_315(&bParam0);
	if (!func_21(bParam0, 0) && !func_233(func_160(bParam0), 2))
	{
		return 0;
	}
	if (!bParam3 && func_219(bParam0, joaat("DEFAULT")) == 0)
	{
		bParam3 = true;
	}
	if (func_316(bParam0) && WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		Var0 = { func_308(0) };
		Var4.f_9 = -1591664384;
		if (!func_310(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return 0;
		}
		else if (func_311(bParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return 0;
		}
		if (func_309(bParam0, 1))
		{
			if (!func_310(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return 0;
			}
			else if (func_311(bParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return 0;
			}
		}
		return 1;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_221(bParam0, iParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return 0;
	}
	else if (iVar26 == 0)
	{
		return 1;
	}
	iVar27 = func_317(bParam0, *iParam1, iParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + bParam2) > iVar26)
	{
		return 1;
	}
	return 0;
}

int func_180(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2[15];
	int iVar33;
	bool bVar34;
	int iVar35;
	struct<14> Var36;
	int iVar52;
	struct<16> Var53;

	if (!func_21(bParam0, 0))
	{
		return -1;
	}
	if (func_172(bParam0) != joaat("FEE"))
	{
		return -1;
	}
	if (func_76())
	{
		bParam3 = true;
	}
	if (bParam5 == -570078785 || bParam5 == -915411861)
	{
		bVar0 = (func_318(bParam0, bParam5, 1, 0, 1, joaat("CURRENCY_CASH")) * iParam2);
		bVar1 = false;
		if (bVar0 <= 0)
		{
			bVar1 = (func_318(bParam0, bParam5, 1, 0, 1, joaat("CURRENCY_GOLD_BAR")) * iParam2);
			if (bVar1 <= 0)
			{
				return -1;
			}
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(bVar0, bVar1))
		{
			return -1;
		}
	}
	else if (func_141(bParam0, bParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			bVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
			if (!func_131(&(Var2[iVar35 /*2*/]), 0, bParam3, 0) >= bVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_75(0))
	{
		if (bVar0 > 0)
		{
			func_238(joaat("CURRENCY_CASH"), bVar0, -142743235, 0, 0);
		}
		else if (bVar1 > 0)
		{
			func_238(joaat("CURRENCY_GOLD_BAR"), bVar1, -142743235, 0, 0);
		}
		else if (func_319(bParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				bVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
				func_238(&(Var2[iVar35 /*2*/]), bVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = bParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = bParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_182(joaat("SPEND"), &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_183(iVar52, Var53);
	}
	return iVar52;
}

struct<16> func_181(bool bParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_307(bParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = bParam0;
	Var0.f_9 = bParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_219(bParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_320() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_182(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_321(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_322(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_323(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_183(int iParam0, struct<16> Param1)
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

void func_184(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_63(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

float func_185(var uParam0)
{
	if (!func_91(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_324(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_325() - uParam0->f_1);
}

bool func_186(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_187(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_325() - fParam1);
	func_326(uParam0, 1);
	func_327(uParam0, 2);
	uParam0->f_2 = 0f;
}

var func_188(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x31010318BA9897AC(&uVar0, iParam0);
	return uVar0;
}

void func_189(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam15))
	{
		return;
	}
	if (!func_328(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = PLAYER::PLAYER_ID();
	Param1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param1.f_4 = iParam0;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param1, 14, 13, &uParam15);
}

void func_190(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_2) || ((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_2 == iParam0) || bParam1)
		{
			((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_2 = 255;
			((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_3 = -1;
		}
	}
}

void func_191(int iParam0, var uParam1)
{
	struct<7> Var0;
	struct<5> Var7;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	CLOCK::_0x86A68E84E5884951(&Var0);
	Var7.f_3 = 2;
	Var7.f_4 = 24;
	CLOCK::_0x28EEACE9B43D9597(&Var0, &Var7, &Var0);
	((*Global_1128435)[iParam0 /*83*/])->f_38.f_28.f_1 = uParam1;
	Global_1131092->f_339.f_1 = uParam1;
	Global_1131092->f_339.f_9 = { Var0 };
}

int func_192(int iParam0)
{
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return -1;
	}
	if (iParam0 == _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return func_329(PLAYER::PLAYER_ID());
	}
	return func_330(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0));
}

void func_193(var uParam0, var uParam1)
{
	struct<14> Var0;

	Var0.f_8 = uParam0;
	Var0.f_12 = uParam1;
	func_189(17, Var0, func_331(0, 8));
}

void func_194(var uParam0)
{
	struct<14> Var0;

	Var0.f_12 = uParam0;
	func_189(13, Var0, func_188(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))));
}

Vector3 func_195(int iParam0)
{
	if (iParam0 == 255)
	{
		return ((*Global_1128435)[func_332() /*83*/])->f_38;
	}
	return ((*Global_1128435)[iParam0 /*83*/])->f_38;
}

int func_196(bool bParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

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
	if (bParam7)
	{
		bVar0 = (_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && _NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_333(iParam2, -372840566);
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
	Var3.f_13 = bParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_334(uParam1, bParam0, Var3);
	return 1;
}

int func_197(int iParam0, bool bParam1, int iParam2)
{
	if (func_335(255))
	{
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_XP")))
	{
		return 0;
	}
	if (!func_336(iParam0))
	{
		return 0;
	}
	if (!func_99(func_337(iParam0), !bParam1, iParam2, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_198(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_172(bParam0);
	switch (iParam1)
	{
		case 1:
			if ((func_71(bParam0, -537818634) || func_71(bParam0, -458578204)) && !func_71(bParam0, -1242251796))
			{
				return 1;
			}
			break;
		case 2:
			if (iVar0 == joaat("AMMO"))
			{
				if (func_71(bParam0, -1588156645))
				{
					return 0;
				}
				return 1;
			}
			break;
		case 3:
			if (iVar0 == joaat("WEAPON"))
			{
				return 1;
			}
			else if (iVar0 == joaat("AMMO"))
			{
				if (func_71(bParam0, -1588156645))
				{
					return 1;
				}
			}
			break;
		case 0:
			if ((func_123(bParam0) || func_60(bParam0, -1636519629) == -701492487) || bParam0 == joaat("PROVISION_MOONSHINE_POISON"))
			{
				return 1;
			}
			break;
		case 4:
			if (func_71(bParam0, 127710288))
			{
				return 1;
			}
			break;
		case 5:
			if (func_71(bParam0, -1242251796))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_199(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_338())
	{
		return 0;
	}
	if (!NETWORK::_0xDD73C9838CE7181D())
	{
		return 0;
	}
	iVar0 = func_339(iParam0);
	iVar1 = func_340(iVar0, 2);
	if (iVar1 >= 5)
	{
		return 0;
	}
	if (!func_99(func_341(iParam0), 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_200(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<37> Var1;
	bool bVar48;

	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(bParam1);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	bVar48 = false;
	while (bVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(bParam1, bVar48, &Var1))
		{
			if (Var1 != iParam2)
			{
				if ((Var1.f_2 == joaat("COST_TYPE_CRAFT") && (Var1 != -489628648 && Var1 != -2141192156)) && (Global_1913166->f_1579 || !func_127(bParam1, Var1, 1)))
				{
					((*Global_1913166)[(uParam0->f_51 - 1) /*9*/])->f_7++;
				}
			}
			else
			{
				((*Global_1913166)[(uParam0->f_51 - 1) /*9*/])->f_8 = bVar48;
			}
		}
		bVar48++;
	}
}

void func_201(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;

	iVar2 = func_60(bParam1, 1697966752);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_146(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, iVar2, 0) };
	if (func_147(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			bVar14 = func_148(iVar13, iVar0);
			if (func_21(bVar14, 0))
			{
				if (Global_1913166->f_1579 || !func_127(bVar14, joaat("COST_CRAFTING_GRILL"), 1))
				{
					((*Global_1913166)[(uParam0->f_51 - 1) /*9*/])->f_7++;
				}
			}
			iVar13++;
		}
		func_149(iVar0);
	}
}

void func_202(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;

	iVar2 = func_60(bParam1, -1859264326);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_146(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar2, 0) };
	if (func_147(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			if (uParam0->f_51 >= 175)
			{
			}
			else
			{
				bVar14 = func_148(iVar13, iVar0);
				if (func_21(bVar14, 0) && bVar14 != bParam1)
				{
					func_112(uParam0, bVar14, bParam2);
				}
				iVar13++;
			}
		}
		func_149(iVar0);
	}
}

void func_203(int iParam0)
{
	func_149(*iParam0);
	*iParam0 = -1;
}

void func_204(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	char cVar1[32];
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	char[] cVar11[8];
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	struct<2> Var17;
	struct<2> Var20;
	bool bVar42;
	int iVar43;
	struct<7> Var44;
	bool bVar51;

	bVar0 = ((*Global_1913166)[bParam1 /*9*/])->f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, bVar0, 32);
	StringIntConCat(&cVar1, bParam1, 32);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913166)[bParam1 /*9*/])->f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1913166)[bParam1 /*9*/])->f_1);
	}
	iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_36, &cVar1);
	((*Global_1913166)[bParam1 /*9*/])->f_1 = iVar5;
	bVar6 = ((*Global_1913166)[bParam1 /*9*/])->f_5;
	iVar7 = func_133(bVar0, bVar6, bParam3);
	bVar8 = func_131(bVar0, 0, 0, 0);
	iVar9 = func_132(bVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 = (iVar9 - bVar8);
	}
	else
	{
		iVar9 = iVar7;
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "name", bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eOutputItem", bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eCost", bVar6);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iIndex", bParam1);
	if (!Global_1913166->f_1579 && func_127(bVar0, bVar6, 1))
	{
		bVar10 = true;
		((*Global_1913166)[bParam1 /*9*/])->f_7 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iCurCostVariant", ((*Global_1913166)[bParam1 /*9*/])->f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iNumCostVariants", ((*Global_1913166)[bParam1 /*9*/])->f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "bFireCrafting", bVar6 == -257768755);
	StringIntConCat(&cVar11, func_134(iVar9, iVar7), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "count", &cVar11);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "visible", false);
	bVar13 = false;
	if (uParam0->f_25)
	{
		bVar12 = func_115(((iVar7 > 0 && func_129(bVar0)) && !bVar10), 1, 0);
	}
	else
	{
		bVar12 = func_115(((iVar9 > 0 && iVar7 > 0) && !bVar10), 1, 0);
	}
	if (bVar12 == 0 && func_205(bVar0))
	{
		if (func_206(bVar0, bVar6, uParam0, bParam3, &bVar14, &bVar15, &bVar16))
		{
			bVar12 = true;
			bVar13 = true;
			bVar0 = bVar14;
			bVar6 = bVar15;
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "name", bVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eOutputItem", bVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eCost", bVar15);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "iCurCostVariant", bVar16);
		}
	}
	if (func_207(bVar0, &Var17, joaat("INVENTORY"), 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "texture", Var17);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureDictionary", Var17.f_1);
	}
	if (!uParam0->f_28)
	{
		if ((bVar6 == -214678071 || bVar6 == joaat("COST_CRAFTING_GRILL")) || bVar6 == -257768755)
		{
			bVar12 = false;
		}
	}
	if (bVar12 == 1)
	{
		if (!func_130(2) && func_60(bVar0, -1636519629) == -701492487)
		{
			((*Global_1913166)[bParam1 /*9*/])->f_2 = 0;
			bVar12 = false;
		}
		else
		{
			uParam0->f_55++;
			if (func_198(bVar0, uParam0->f_48))
			{
				uParam0->f_56++;
			}
			((*Global_1913166)[bParam1 /*9*/])->f_2 = 1;
		}
	}
	else
	{
		((*Global_1913166)[bParam1 /*9*/])->f_2 = 0;
	}
	if (bVar13)
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "lockVisible", bVar10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "enabled", bVar12);
	Var20.f_1 = 20;
	bVar42 = false;
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeCoreDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthHorseDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreHorseDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreHorseDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaHorseDurationCategory", false);
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bVar0, &Var20))
	{
		iVar43 = 0;
		while (iVar43 < Var20)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var20.f_1[iVar43]), &Var44))
			{
				bVar51 = Var44.f_2;
				switch (Var44.f_1)
				{
					case -1104847406:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", bVar51);
						break;
					case 1857353317:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", bVar51);
						break;
					case -826379728:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeCoreDurationCategory", Var44.f_6);
						break;
					case 1342237631:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeDurationCategory", Var44.f_6);
						break;
					case -943921969:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", bVar51);
						break;
					case -416929031:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", bVar51);
						break;
					case 1869697234:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthDurationCategory", Var44.f_6);
						break;
					case 2062242710:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreDurationCategory", Var44.f_6);
						break;
					case 381158954:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", bVar51);
						break;
					case 1681823811:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", bVar51);
						break;
					case -1191740624:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreDurationCategory", Var44.f_6);
						break;
					case -1240225157:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaDurationCategory", Var44.f_6);
						break;
					case 978049229:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", bVar51);
						break;
					case -778289619:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthHorseDurationCategory", Var44.f_6);
						break;
					case -1918697215:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", bVar51);
						break;
					case 1136630075:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreHorseDurationCategory", Var44.f_6);
						break;
					case 855745648:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", bVar51);
						break;
					case 1365603835:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreHorseDurationCategory", Var44.f_6);
						break;
					case 1497139093:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaHorseDurationCategory", Var44.f_6);
						break;
				}
			}
			iVar43++;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "overpower", bVar42);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_36, -1, -2047994727, iVar5);
	}
}

int func_205(bool bParam0)
{
	if (func_35(4096))
	{
		if (func_60(bParam0, 1697966752) != 337650881)
		{
			return 0;
		}
	}
	else if (func_35(8192))
	{
		if (bParam0 != joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"))
		{
			return 0;
		}
	}
	return 1;
}

int func_206(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	struct<37> Var18;
	bool bVar65;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (!Global_1913166->f_1579 && func_127(bParam0, bParam1, 1))
	{
		return 0;
	}
	if (uParam2->f_25 && !func_129(bParam0))
	{
		return 0;
	}
	if (bParam1 == -214678071 || bParam1 == joaat("COST_CRAFTING_GRILL"))
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = func_60(bParam0, 1697966752);
		if (iVar12 == 0)
		{
			return 0;
		}
		Var2 = { func_146(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, iVar12, 0) };
		if (func_147(Var2, &iVar0, &iVar1, 0))
		{
			iVar13 = 0;
			while (iVar13 < iVar1)
			{
				bVar14 = func_148(iVar13, iVar0);
				if (bParam0 == bVar14)
				{
				}
				else if (!Global_1913166->f_1579 && func_127(bVar14, joaat("COST_CRAFTING_GRILL"), 1))
				{
				}
				else if (func_80(bVar14, joaat("COST_CRAFTING_GRILL"), 0, bParam3, 0) && !func_81(bVar14, 1, 0))
				{
					func_149(iVar0);
					*bParam4 = bVar14;
					*bParam5 = joaat("COST_CRAFTING_GRILL");
					*bParam6 = iVar13;
					return 1;
				}
				iVar13++;
			}
			func_149(iVar0);
		}
		if (bParam1 == joaat("COST_CRAFTING_GRILL"))
		{
			Var2 = { func_146(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar12, 0) };
			if (func_147(Var2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					bVar16 = func_148(iVar15, iVar0);
					if (bParam0 == bVar16)
					{
					}
					else if (!Global_1913166->f_1579 && func_127(bVar16, -214678071, 1))
					{
					}
					else if (func_80(bVar16, -214678071, 0, bParam3, 0) && !func_81(bVar16, 1, 0))
					{
						func_149(iVar0);
						*bParam4 = bVar16;
						*bParam5 = -214678071;
						*bParam6 = iVar15;
						return 1;
					}
					iVar15++;
				}
				func_149(iVar0);
			}
		}
	}
	else
	{
		iVar17 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(bParam0);
		Var18.f_4 = 15;
		Var18.f_36 = 10;
		bVar65 = false;
		while (bVar65 < iVar17)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(bParam0, bVar65, &Var18))
			{
				if (Var18.f_2 == joaat("COST_TYPE_CRAFT"))
				{
					if ((Var18 != -489628648 && Var18 != -2141192156) && (Global_1913166->f_1579 || !func_127(bParam0, Var18, 1)))
					{
						if (func_80(bParam0, Var18, 0, bParam3, 0) && !func_81(bParam0, 1, 0))
						{
							*bParam4 = bParam0;
							*bParam5 = Var18;
							*bParam6 = bVar65;
							return 1;
						}
					}
				}
			}
			bVar65++;
		}
	}
	return 0;
}

int func_207(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
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

int func_208(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_233(bParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_23() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(bParam0))
	{
		return 1;
	}
	if (!func_342(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

int func_209(bool bParam0)
{
	if (func_71(bParam0, 75135761))
	{
		return 1;
	}
	return 0;
}

int func_210(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_21(bParam0, 0))
	{
		return func_343(func_160(bParam0), bParam1);
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && NETWORK::_0xFBE782B3165AC8EC(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_211(bool bParam0, bool bParam1)
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
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(bParam0, &Var0, &iVar471, 10) || iVar471 == 0)
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

int func_212(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		return 0;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
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

int func_213(bool bParam0, int iParam1, bool bParam2, var uParam3, int iParam4, bool bParam5, int iParam6)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;

	if (func_209(bParam0))
	{
		return func_344(func_210(bParam0, 1), bParam2, uParam3);
	}
	if (!func_141(bParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar35 = (func_75(0) && !func_76());
	if (iParam6 != 0)
	{
		if (func_23() == 0)
		{
			return 0;
		}
		bParam5 = false;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34 /*2*/] == 0 || &Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = ((Var0[iVar34 /*2*/])->f_1 * iParam1);
			if (&Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && func_345(iVar32))
			{
				Jump @438; //curOff = 179
			}
			else if (&Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && func_346(iVar32))
			{
			}
			else
			{
				if (iParam6 != 0)
				{
					bVar33 = func_347(&(Var0[iVar34 /*2*/]), iParam6);
				}
				else
				{
					bVar33 = func_131(&(Var0[iVar34 /*2*/]), 0, !bVar35, 1);
				}
				if (bVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_222(&(Var0[iVar34 /*2*/])) || func_223(&(Var0[iVar34 /*2*/])))
					{
						iVar36 = 0;
						if (bParam5)
						{
							iVar37 = func_225(7, &(Var0[iVar34 /*2*/]), &iVar36);
						}
						iVar38 = func_224(&(Var0[iVar34 /*2*/]), iParam6);
						if (((bVar33 + iVar37) + iVar38) >= iVar32)
						{
							if ((bVar33 + iVar38) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar36))
							{
								*iParam4 = iVar36;
							}
						}
						else
						{
							Jump @422; //curOff = 378
							if (bParam5 && ((bVar33 + func_226(7, &(Var0[iVar34 /*2*/]))) + func_227(&(Var0[iVar34 /*2*/]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *(Var0[iVar34 /*2*/]) };
								return 0;
							}
						}
						iVar34++;
						return 1;
					}
				}
			}
		}
	}

bool func_214()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	return func_111(iVar0);
}

int func_215(bool bParam0)
{
	switch (bParam0)
	{
		case -1171462349: /* GXTEntry: "Superior Quality Stew" */
			return 4;
		case 1689071181: /* GXTEntry: "High Quality Stew" */
			return 3;
		case -1612693182: /* GXTEntry: "Medium Quality Stew" */
			return 2;
		case 1856073229: /* GXTEntry: "Low Quality Stew" */
			return 1;
		case 1046181202: /* GXTEntry: "Base Quality Stew" */
			return 0;
		default:
			break;
	}
	if (func_71(bParam0, -2011345500))
	{
		return 5;
	}
	return 0;
}

bool func_216(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_217(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_172(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_0x1F7977C9101F807F(bParam0))
	{
		return bParam0;
	}
	if (func_71(bParam0, 1399091007))
	{
		func_348(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_218(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_349(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_350(&Var0, func_308(0));
	}
	if (!func_351(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_352(iVar14);
	return uVar15;
}

int func_219(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

struct<4> func_220(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_178(bParam0, bParam1, 0) };
	return func_307(bParam0, Var0, Var0.f_4, bParam1);
}

int func_221(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_21(bParam0, 0) && !func_233(func_160(bParam0), 2))
	{
		return 0;
	}
	if (func_172(bParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_219(bParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(bParam0, iParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_164(bParam3), bParam0);
}

int func_222(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (func_71(bParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")))
	{
		return 1;
	}
	return func_223(bParam0);
}

int func_223(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (func_71(bParam0, -839724752))
	{
		return 1;
	}
	return 0;
}

int func_224(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (!func_222(bParam0) && !func_223(bParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_60(bParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_146(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_147(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			bVar14 = func_148(iVar15, iVar1);
			if (func_21(bVar14, 0) && bParam0 != bVar14)
			{
				iVar16 = func_353(bVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_347(bVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_355(iVar16, func_354(bVar14), bParam0)));
					}
				}
			}
			iVar15++;
		}
		func_149(iVar1);
	}
	return iVar0;
}

int func_225(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	iParam0 = func_234(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_21(bParam1, 0))
	{
		return 0;
	}
	if (!func_356(iParam0))
	{
		return 0;
	}
	iVar0 = func_165(iParam0);
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
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
		if (!func_357(iVar28))
		{
		}
		else
		{
			MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = &Var3.f_1[iVar29];
				if (iVar30 == bParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*iParam2))
					{
						*iParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

int func_226(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_234(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_21(bParam1, 0))
	{
		return 0;
	}
	if (!func_356(iParam0))
	{
		return 0;
	}
	iVar0 = func_165(iParam0);
	bVar1 = bParam1;
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
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iVar0, iVar3) != bVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_227(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (PED::_0xA911EE21EDF69DAF(Global_34))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (bParam0 == ENTITY::_0x31FEF6A20F00B963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

char* func_228(bool bParam0)
{
	switch (func_215(bParam0))
	{
		case 5:
			return "STEW_TIP_DAILY";
		case 4:
			return "STEW_TIP_BEST";
		case 3:
			return "STEW_TIP_HIGH";
		case 2:
			return "STEW_TIP_MED";
		case 1:
			return "STEW_TIP_LOW";
		default:
			break;
	}
	return "STEW_TIP_LOW";
}

void func_229(bool bParam0, bool bParam1, var uParam2, int iParam3)
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
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(bParam0, &Var7) || Var7 == 0)
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

int func_230(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<10> Var4;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	bVar0 = func_217(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_358("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		bVar3 = false;
		while (bVar3 < iVar2)
		{
			if (!func_359(&Var4, bVar3, iVar1, iVar2))
			{
			}
			else if (!func_248(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == bVar0)
			{
				func_352(iVar1);
				return 1;
			}
			bVar3++;
		}
		func_352(iVar1);
	}
	return 0;
}

bool func_231(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_260(bParam0);
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
	iVar1 = func_360(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_361(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_362(bParam0);
	iVar2 = func_361(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

bool func_232(int iParam0)
{
	return func_105(iParam0, 2);
}

int func_233(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

int func_234(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_277;
	}
	return iParam0;
}

float func_235(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_236(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_23() == 0)
	{
		iVar0 = func_363();
		if (iVar0 < bParam0)
		{
			bParam0 = iVar0;
		}
		func_364(bParam0, sParam1, -142743235, bParam4);
	}
	else
	{
		func_365(bParam0);
		if (bParam3)
		{
			func_366(bParam0, sParam1, iParam2);
		}
	}
}

int func_237(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;

	iParam0 = func_234(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_21(bParam1, 0))
	{
		return 0;
	}
	if (!func_356(iParam0))
	{
		return 0;
	}
	iVar0 = func_165(iParam0);
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
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		if (iVar26 >= iParam2)
		{
		}
		else
		{
			iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
			if (!func_357(iVar28))
			{
			}
			else
			{
				MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
				iVar29 = 0;
				while (iVar29 < 10)
				{
					iVar30 = &Var3.f_1[iVar29];
					if (iVar30 == bParam1)
					{
						func_279(bParam1, 1, 752097756);
						if (ENTITY::DOES_ENTITY_EXIST(iVar28))
						{
							bVar31 = func_367(&iVar28);
							if (!func_21(bVar31, 0))
							{
								bVar31 = func_368(iVar28);
							}
							if (func_21(bVar31, 0))
							{
								func_369(bVar31, 1, 1, -142743235);
							}
							ENTITY::_0x0D0DB2B6AF19A987(&iVar28);
						}
						iVar26++;
					}
					iVar29++;
				}
			}
			iVar27++;
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

int func_238(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (bParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_219(bParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_370(bParam0, bParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_178(bParam0, bParam4, 0) };
	Var6 = { func_307(bParam0, Var1, Var1.f_4, bParam4) };
	return func_371(bParam0, &Var6, &Var1, bParam1, iParam2, bParam3, bParam4);
}

void func_239(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	bool bVar13;
	int iVar14;
	bool bVar15;

	if (iParam1 > 0)
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = func_60(bParam0, 1697966752);
		if (iVar12 == 0)
		{
			return;
		}
		Var2 = { func_146(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar12, 0) };
		if (func_147(Var2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					bVar13 = func_148(iVar14, iVar0);
					if (func_21(bVar13, 0) && bParam0 != bVar13)
					{
						bVar15 = func_131(bVar13, 0, 0, 0);
						while (bVar15 > 0 && iParam1 > 0)
						{
							iParam1 = (iParam1 - func_372(bVar13, bParam0, 0));
							bVar15 = (bVar15 - 1);
						}
					}
					iVar14++;
				}
			}
			func_149(iVar0);
		}
	}
}

int func_240(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_373(bParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	bVar3 = func_217(bParam0, 1);
	if (bVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, bVar3);
		iVar4 = (iVar4 - bParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_34, bVar3, bParam1, iParam3);
		if (!bParam2)
		{
			func_174(bParam0, -bParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_142(bParam0, 1))
	{
		return 0;
	}
	Var5 = { func_297(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_131(bParam0, 0, 0, 0) - bParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, bParam1);
		}
		else if ((func_131(bParam0, 0, 0, 0) - bParam1) < 0)
		{
			func_240(bParam0, func_131(bParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_172(bParam0) == joaat("WEAPON"))
	{
		if (!func_374(bParam0, bParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_238(bParam0, bParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_178(bParam0, 0, 0) };
		if (func_75(0) && Var7.f_4 == 1084182731)
		{
			func_375(1, 0, 0);
		}
	}
	if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1939067->f_21 = 0;
	}
	if (!func_75(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 1309979101)
	{
		func_174(bParam0, -bParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

void func_241(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	bool bVar15;

	if (!func_21(bParam0, 0))
	{
	}
	if (PED::_0xA911EE21EDF69DAF(Global_34))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar13 = func_376(iVar1, &uVar2);
				iVar14 = 0;
				while (iVar14 < iVar13)
				{
					if (&uVar2[iVar14] == bParam0)
					{
						ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
					}
					else
					{
						iVar14++;
					}
				}
			}
			else if (PED::_0x9E7738B291706746(&bVar15, iVar1, PED::_0x88EFFED5FE8B0B4A(iVar1)) && bVar15 == bParam0)
			{
				ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
			}
		}
	}
}

int func_242(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_234(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_21(bParam1, 0))
	{
		return 0;
	}
	if (!func_356(iParam0))
	{
		return 0;
	}
	iVar0 = func_165(iParam0);
	bVar1 = bParam1;
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
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < bParam2)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iVar0, iVar3) != bVar1)
		{
		}
		else if (func_377(bParam1, bParam2, 1, -142743235))
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_243(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (func_23() == 0)
	{
		return 0;
	}
	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (bParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_304(0) };
	Var0.f_4 = func_303(iParam1);
	Var5 = { func_307(bParam0, Var0, Var0.f_4, 0) };
	if (!func_371(bParam0, &Var5, &Var0, bParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_244(bool bParam0)
{
	switch (bParam0)
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

bool func_245(int iParam0)
{
	return !iParam0 <= 0;
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("HERB_ALASKAN_GINSENG");
		case 3:
			return joaat("HERB_AMERICAN_GINSENG");
		case 4:
			return joaat("HERB_BAY_BOLETE");
		case 5:
			return joaat("HERB_BLACK_BERRY");
		case 6:
			return joaat("HERB_BLACK_CURRANT");
		case 7:
			return joaat("HERB_BURDOCK_ROOT");
		case 8:
			return joaat("HERB_CHANTERELLES");
		case 11:
			return joaat("HERB_COMMON_BULRUSH");
		case 12:
			return joaat("HERB_CREEPING_THYME");
		case 13:
			return joaat("HERB_DESERT_SAGE");
		case 15:
			return joaat("HERB_ENGLISH_MACE");
		case 16:
			return joaat("HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("HERB_GOLDEN_CURRANT");
		case 19:
			return joaat("HERB_HUMMINGBIRD_SAGE");
		case 20:
			return joaat("HERB_INDIAN_TOBACCO");
		case 23:
			return joaat("HERB_MILKWEED");
		case 26:
			return joaat("HERB_OLEANDER_SAGE");
		case 27:
			return joaat("HERB_OREGANO");
		case 28:
			return joaat("HERB_PARASOL_MUSHROOM");
		case 29:
			return joaat("HERB_PRAIRIE_POPPY");
		case 31:
			return joaat("HERB_RAMS_HEAD");
		case 33:
			return joaat("HERB_RED_RASPBERRY");
		case 34:
			return joaat("HERB_RED_SAGE");
		case 37:
			return joaat("HERB_VANILLA_FLOWER");
		case 38:
			return joaat("HERB_VIOLET_SNOWDROP");
		case 48:
			return joaat("HERB_WILD_CARROTS");
		case 49:
			return joaat("HERB_WILD_FEVERFEW");
		case 50:
			return joaat("HERB_WILD_MINT");
		case 51:
			return joaat("HERB_WINTERGREEN_BERRY");
		case 52:
			return joaat("HERB_YARROW");
		case 1:
			return joaat("HERB_ACUNAS_STAR_ORCHID");
		case 9:
			return joaat("HERB_CIGAR_ORCHID");
		case 10:
			return joaat("HERB_CLAMSHELL_ORCHID");
		case 14:
			return joaat("HERB_DRAGONS_MOUTH_ORCHID");
		case 17:
			return joaat("HERB_GHOST_ORCHID");
		case 21:
			return joaat("HERB_LADY_OF_NIGHT_ORCHID");
		case 22:
			return joaat("HERB_LADY_SLIPPER_ORCHID");
		case 24:
			return joaat("HERB_MOCCASIN_FLOWER_ORCHID");
		case 25:
			return joaat("HERB_NIGHT_SCENTED_ORCHID");
		case 30:
			return joaat("HERB_QUEENS_ORCHID");
		case 32:
			return joaat("HERB_RAT_TAIL_ORCHID");
		case 35:
			return joaat("HERB_SPARROWS_EGG_ORCHID");
		case 36:
			return joaat("HERB_SPIDER_ORCHID");
		case 39:
			return joaat("HERB_WILD_FLWR_AGARITA");
		case 41:
			return joaat("HERB_WILD_FLWR_BITTERWEED");
		case 42:
			return joaat("HERB_WILD_FLWR_BLOOD_FLOWER");
		case 40:
			return joaat("HERB_WILD_FLWR_BLUE_BONNET");
		case 43:
			return joaat("HERB_WILD_FLWR_CARDINAL_FLOWER");
		case 44:
			return joaat("HERB_WILD_FLWR_CHOCOLATE_DAISY");
		case 45:
			return joaat("HERB_WILD_FLWR_CREEK_PLUM");
		case 46:
			return joaat("HERB_WILD_FLWR_RHUBARB");
		case 47:
			return joaat("HERB_WILD_FLWR_WISTERIA");
	}
	return 0;
}

struct<2> func_247(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = bParam1;
	return Var0;
}

bool func_248(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

int func_249(bool bParam0, bool bParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (bParam0 != 0 && bParam1 != 0)
	{
		iVar1 = func_260(bParam1);
		iVar5 = func_378(bParam1);
		bVar0 = false;
		while (bVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, bVar0, &bVar2))
			{
				if (func_379(bParam0, iVar1, bVar2))
				{
					*uParam4 = { func_178(bParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_307(bParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = bVar2;
					return 1;
				}
			}
			bVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_164(0);
			Var37 = { func_178(bParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_307(bParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_260(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					bVar0 = false;
					while (bVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, bVar0, &bVar2))
						{
							if (func_379(bParam0, iVar1, bVar2))
							{
								if (func_380(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = bVar2;
									return 1;
								}
							}
						}
						bVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return 0;
}

struct<4> func_250()
{
	struct<4> Var0;

	Var0 = { func_304(0) };
	return func_307(856287005, Var0, -218846335, 0);
}

int func_251(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam2))
	{
		return 0;
	}
	if (func_179(bParam0, iParam2, bParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_75(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_164(0), uParam1, iParam2, bParam0, iParam2->f_4, bParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_252(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (!func_249(bParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_250() };
	Var14 = { func_307(bParam0, Var10, iVar9, 0) };
	if (func_381(Var14, iParam1))
	{
		if (func_382(bParam0))
		{
			if (func_383(joaat("SLOTID_HORSE_HORN"), &bVar18))
			{
				if (func_252(bVar18, 0))
				{
				}
			}
		}
		else if (func_384(bParam0))
		{
			if (func_383(joaat("SLOTID_HORSE_HORN"), &bVar19))
			{
				if (func_252(bVar19, 0))
				{
				}
			}
			if (func_383(joaat("SLOTID_HORSE_BLANKET"), &bVar20))
			{
				if (func_252(bVar20, 0))
				{
				}
			}
		}
		else if (func_385(bParam0))
		{
			if (func_383(joaat("SLOTID_HORSE_HORN"), &bVar21))
			{
				if (func_252(bVar21, 0))
				{
				}
			}
			if (func_383(joaat("SLOTID_HORSE_BLANKET"), &bVar22))
			{
				if (func_252(bVar22, 0))
				{
				}
			}
			if (func_383(joaat("SLOTID_HORSE_BEDROLL"), &bVar23))
			{
				if (func_252(bVar23, 0))
				{
				}
			}
		}
		else if (func_253(bParam0))
		{
			if (func_383(joaat("SLOTID_HORSE_HORN"), &bVar24))
			{
				if (func_252(bVar24, 0))
				{
				}
			}
			if (func_383(joaat("SLOTID_HORSE_STIRRUP"), &bVar25))
			{
				if (func_252(bVar25, 0))
				{
				}
			}
			bVar26 = func_254(bParam0);
			if (func_21(bVar26, 0))
			{
				if (func_252(bVar26, 1))
				{
				}
			}
		}
		func_255();
		return 1;
	}
	return 0;
}

int func_253(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (func_71(bParam0, -251515357))
	{
		return 1;
	}
	return 0;
}

int func_254(bool bParam0)
{
	switch (bParam0)
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

int func_255()
{
	struct<5> Var0;
	struct<4> Var5;
	bool bVar9;
	int iVar10;
	int iVar11;
	bool bVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	bool bVar21;

	Var0 = { func_178(856287005, 0, 0) };
	Var5 = { func_307(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_260(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, false, &iVar11))
	{
		bVar14 = func_386(Var5, joaat("SLOTID_HORSE_SADDLE"), 0, -1);
	}
	if (!func_21(bVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_378(856287005);
	bVar9 = false;
	while (bVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, bVar9, &iVar11))
		{
			bVar15 = false;
			bVar21 = func_386(Var5, iVar11, 0, -1);
			if (!func_21(bVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (((func_253(bVar14) || func_382(bVar14)) || func_384(bVar14)) || func_385(bVar14))
					{
					}
					else
					{
						Jump @310; //curOff = 223
						if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
						{
							if (func_384(bVar14) || func_385(bVar14))
							{
							}
							else
							{
								Jump @310; //curOff = 260
								if (iVar11 == joaat("SLOTID_HORSE_BEDROLL"))
								{
									if (func_385(bVar14))
									{
									}
									else
									{
										Jump @310; //curOff = 285
										if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
										{
											if (func_253(bVar14))
											{
											}
											else
											{
												bVar15 = true;
												Jump @350; //curOff = 313
												if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
												{
													if (!func_253(bVar14) && func_387(bVar21))
													{
														bVar15 = true;
													}
												}
												if (bVar15)
												{
													if (func_388(iVar11, &Var16, 1))
													{
														if (!func_381(Var16, 1))
														{
														}
													}
												}
											}
											bVar9++;
											return 1;
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

bool func_256()
{
	return !&Global_1912978;
}

void func_257(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1912978->f_3)
	{
		if ((((&Global_1912978->f_4[iVar0 /*6*/] == bParam0 && (Global_1912978->f_4[iVar0 /*6*/])->f_2 == bParam2) && (Global_1912978->f_4[iVar0 /*6*/])->f_3 == bParam3) && (Global_1912978->f_4[iVar0 /*6*/])->f_4 == bParam4) && (Global_1912978->f_4[iVar0 /*6*/])->f_5 == bParam5)
		{
			(Global_1912978->f_4[iVar0 /*6*/])->f_1 = ((Global_1912978->f_4[iVar0 /*6*/])->f_1 + bParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1912978->f_3 < 19)
	{
		Global_1912978->f_4[Global_1912978->f_3 /*6*/] = bParam0;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_1 = bParam1;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_2 = bParam2;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_3 = bParam3;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_4 = bParam4;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_5 = bParam5;
		Global_1912978->f_3++;
	}
}

char* func_258(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_259(bool bParam0, int iParam1)
{
	if (!func_21(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(bParam0, iParam1);
}

int func_260(bool bParam0)
{
	struct<2> Var0;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

char* func_261(bool bParam0)
{
	if (func_71(bParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_71(bParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_71(bParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_71(bParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_71(bParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_71(bParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_71(bParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_71(bParam0, 781094263))
	{
		return "collectible_flowers";
	}
	return "";
}

bool func_262(bool bParam0)
{
	int iVar0;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_389(bParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

int func_263(int iParam0)
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

int func_264(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var0))
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

char* func_265(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_266(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_390(bParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

int func_267(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	StringCopy(sParam1, func_391(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_392(bParam0))
	{
		return 0;
	}
	StringCopy(&cVar1, func_393(bParam0), 128);
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

char* func_268(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_269(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_265(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_270(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_394(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_271(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_23() == -1)
	{
		if (func_316(bParam0) && func_395(bParam0))
		{
			func_396(bParam0, bParam1, 1, &bParam2, iParam3);
			return 0;
		}
	}
	else if (bParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (bParam0 == joaat("WEAPON_UNARMED"))
	{
		return 0;
	}
	return 1;
}

int func_272(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*bParam1 = bParam2;
	func_397(bParam0, bParam1);
	Var0 = { func_178(bParam0, 0, 1) };
	iVar5 = func_221(bParam0, &Var0, 0, 0);
	iVar6 = func_398(bParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + bParam2) >= iVar5)
	{
		if (func_71(bParam0, -2051813666))
		{
			func_283(672, 1);
		}
		else if (func_23() == -1)
		{
			func_283(671, 0);
		}
	}
	if (func_179(bParam0, &Var0, *bParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*bParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_273(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_399())
	{
		return;
	}
	switch (func_60(bParam0, -949239683))
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
			Global_1939067->f_70.f_1 = bParam0;
			break;
	}
}

int func_274(int iParam0)
{
	if (!func_400(iParam0))
	{
		return 0;
	}
	return func_401(iParam0);
}

void func_275(int iParam0)
{
	if (!func_400(iParam0))
	{
		return;
	}
	func_402(iParam0);
	func_403(iParam0);
}

void func_276(bool bParam0)
{
	if (func_71(bParam0, -1522723129))
	{
		func_99(-848633709, 0, 255, 0, 0);
	}
	else if (func_71(bParam0, -283942357))
	{
		func_99(-981153234, 0, 255, 0, 0);
	}
	else if (func_71(bParam0, 683680997))
	{
		func_99(-756350192, 0, 255, 0, 0);
	}
	else if (func_71(bParam0, 1307628809))
	{
		func_99(603094518, 0, 255, 0, 0);
	}
}

int func_277(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && bParam1 > 0)
	{
		bParam1 = false;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, bParam0, 0, false))
	{
		Var0 = { func_178(bParam0, 0, 1) };
		if (func_310(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_311(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_307(bParam0, Var0, Var0.f_4, 0) };
				func_371(bParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_75(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, bParam0, 0, false))
		{
			return 0;
		}
		func_278(WEAPON::_0x5C2EA6C44F515F34(bParam0), bParam1, iParam6);
		func_404(bParam0, bParam1);
		return 1;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, bParam0, 0, false))
	{
		return 0;
	}
	if (bParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

int func_278(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam1 < 1)
	{
		return 1;
	}
	if (!func_281(bParam0))
	{
		return 0;
	}
	if (!func_75(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_34, bParam0, bParam1, iParam2);
	return 1;
}

int func_279(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (bParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_219(bParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_405(bParam0, bParam1, iParam2);
	}
	Var1 = { func_178(bParam0, 0, 1) };
	Var6 = { func_307(bParam0, Var1, Var1.f_4, 0) };
	return func_251(bParam0, &Var6, &Var1, bParam1, iParam2, 0);
}

int func_280(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	bool bVar6;
	bool bVar7;

	bVar0 = func_170(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_23() == -1)
		{
			func_171(bVar0);
			if (iParam1 == 1248274121)
			{
				func_406(bVar0);
			}
		}
		if (!func_179(bParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_396(bParam0, 1, 0, bParam2, iParam1);
			bVar6 = func_407(bVar0);
			if (WEAPON::_0x6AD66548840472E5(bVar0))
			{
				func_277(bVar0, bVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("WEAPON_FISHINGROD") || WEAPON::_0xC853230E76A152DF(bVar0))
			{
				func_277(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x6E4E1A82081EABED(bVar0))
			{
				func_277(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(bVar0))
			{
				if (bVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_408())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(bParam0))
				{
				}
				else if (!func_409(bVar0))
				{
					func_277(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_277(bVar0, WEAPON::_0xD3750CCC00635FC2(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
			{
				bVar7 = func_410(Global_34, 2, 0, 1);
				if ((((func_248(bVar7) && !Global_26386) && bVar7 != bVar0) && !func_142(joaat("UPGRADE_OFFHAND_HOLSTER"), 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_34, bVar7);
				}
				if (func_248(bVar7) && func_142(joaat("UPGRADE_OFFHAND_HOLSTER"), 1))
				{
					if (!func_277(bVar0, bVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_277(bVar0, bVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_277(bVar0, bVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_283(513, 1);
	}
	return 1;
}

bool func_281(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(bParam0);
}

int func_282(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_281(bParam0))
	{
		return 0;
	}
	bVar4 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, bParam0);
	if (func_248(bVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_34, &iVar2, bVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (bVar4 == joaat("WEAPON_BOW"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(bVar4);
	}
	if (*bParam1 > 0)
	{
		iVar6 = *bParam1;
	}
	else if (*bParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*bParam1));
	}
	if (iVar5 >= iVar6)
	{
		bVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		bVar0 = iVar5;
	}
	else
	{
		func_292(func_411(bParam0), func_262(bParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + bVar0))
	{
	}
	if (bVar0 == 0)
	{
		return 0;
	}
	if (func_75(0))
	{
		if (func_278(bParam0, bVar0, iParam2))
		{
			*bParam1 = bVar0;
			return 1;
		}
	}
	else
	{
		return func_279(bParam0, *bParam1, iParam2);
	}
	return 0;
}

void func_283(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_412(iParam0, &iVar0, &iVar1);
	if (!func_413(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_414(iVar0, iVar1);
}

int func_284()
{
	return 0;
}

int func_285(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_23() == 0)
	{
		func_296(iParam0, 0);
		return 0;
	}
	iVar0 = func_415(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_416(iVar0, sParam4, iParam5, 0);
	}
	func_417(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_286(bool bParam0)
{
}

void func_287(bool bParam0)
{
}

void func_288(bool bParam0)
{
}

void func_289(bool bParam0)
{
}

void func_290()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_291(bool bParam0, int iParam1)
{
	var uVar0;

	func_348(bParam0, iParam1, &uVar0);
}

void func_292(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_412(iParam0, &iVar0, &iVar1);
	if (!func_413(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_418(iParam0, 1024))
	{
		return;
	}
	func_414(iVar0, iVar1);
	(Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_293(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_412(iParam0, &iVar0, &iVar1);
	if (!func_413(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_418(iParam0, 1024))
	{
		return;
	}
	func_414(iVar0, iVar1);
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

void func_294(bool bParam0)
{
	switch (*bParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

void func_295(bool bParam0)
{
	if (func_23() != -1)
	{
		return;
	}
}

int func_296(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_419(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_420(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_297(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_21(bParam0, 0))
	{
		return Var0;
	}
	if (func_71(bParam0, -305066475))
	{
		if (func_23() == -1)
		{
			if (func_71(bParam0, -537818634))
			{
				return func_421(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_421(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_71(bParam0, -537818634))
	{
		return func_421(joaat("MEDICINE_ITEMS"));
	}
	if (func_71(bParam0, 2084895747))
	{
		return func_421(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_298(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_299(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_422(Global_1902942->f_37);
	func_270(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_423(bParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_300(bool bParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = func_303(iParam1);
	if (!func_424(bParam0, Var0.f_4))
	{
		return 0;
	}
	iVar5 = func_221(bParam0, &Var0, 0, 0);
	iVar6 = func_398(bParam0, 0, 0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return 0;
	}
	return 1;
}

int func_301(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
	}
	if (func_71(bParam0, -1881667932))
	{
		return 1;
	}
	return 0;
}

int func_302(bool bParam0, bool bParam1, int iParam2)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	struct<2> Var14[10];
	int iVar35;
	int iVar36;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	*iParam2 = 0;
	Var0 = { func_146(-1591664384, -1591664384, 0, 0, bParam1, 0, -1, 0, 0) };
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar12, &bVar13))
			{
				if (func_141(bVar13, bParam1, &Var14, &iVar35, 1, 0))
				{
					iVar36 = 0;
					while (iVar36 < iVar35)
					{
						if (bParam0 == &Var14[iVar36 /*2*/])
						{
							*iParam2 = (*iParam2 + (Var14[iVar36 /*2*/])->f_1);
						}
						iVar36++;
					}
				}
			}
			iVar12++;
		}
		ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar11);
	}
	return 1;
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		case 2:
			return 1426626782;
		case 3:
			return 1227915917;
		default:
			break;
	}
	return 1084182731;
}

struct<4> func_304(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_164(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_307(joaat("CHARACTER"), func_320(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_307(joaat("CHARACTER"), func_320(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_307(joaat("CHARACTER"), func_320(), -1591664384, bParam0);
}

struct<2> func_305(bool bParam0)
{
	return func_247(joaat("MADE"), bParam0);
}

struct<2> func_306(bool bParam0)
{
	struct<2> Var0;

	if (func_198(bParam0, 0))
	{
		Var0 = { func_247(joaat("MADE_RECIPE_TYPE"), joaat("FOOD")) };
	}
	else if (func_198(bParam0, 2))
	{
		Var0 = { func_247(joaat("MADE_RECIPE_TYPE"), joaat("AMMO")) };
	}
	else if (func_198(bParam0, 5))
	{
		Var0 = { func_247(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE")) };
	}
	else if (func_198(bParam0, 1))
	{
		Var0 = { func_247(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES")) };
	}
	else if (func_198(bParam0, 3))
	{
		Var0 = { func_247(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS")) };
	}
	else if (func_198(bParam0, 4))
	{
		Var0 = { func_247(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING")) };
	}
	return Var0;
}

struct<4> func_307(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_21(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_164(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

struct<4> func_308(bool bParam0)
{
	int iVar0;

	iVar0 = func_164(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_307(923904168, func_304(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_307(923904168, func_304(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_307(923904168, func_304(bParam0), -740156546, 0);
}

int func_309(bool bParam0, bool bParam1)
{
	if (func_260(bParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
	{
		if (bParam1)
		{
			return func_425();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_310(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_317(bParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

int func_311(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (func_426(bParam0, &uVar0, iParam1, iParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_312(bool bParam0)
{
	int iVar0;

	iVar0 = func_164(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_307(271701509, func_304(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_307(271701509, func_304(bParam0), 12999093, 0);
}

int func_313(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_260(bParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &bVar0))
		{
			if (func_379(bParam0, iParam1, bVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_314(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_427(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_315(bool bParam0)
{
	if (!func_21(*bParam0, 0))
	{
		return 0;
	}
	if (!func_428(*bParam0))
	{
		return 0;
	}
	switch (*bParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*bParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*bParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*bParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_316(bool bParam0)
{
	return func_172(bParam0) == joaat("WEAPON");
}

int func_317(bool bParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_219(bParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_307(bParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_164(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_164(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

int func_318(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && bParam1 == -915411861) && func_429(bParam0, 59806960))
	{
		bParam1 = 59806960;
	}
	if (func_209(bParam0))
	{
		return func_430(func_210(bParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_141(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_319(bool bParam0)
{
	switch (bParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return 1;
		default:
			break;
	}
	return 0;
}

struct<4> func_320()
{
	struct<4> Var0;

	return Var0;
}

int func_321(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if (func_216(iVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_216(iVar0, 8))
	{
		return 0;
	}
	else if (func_216(iVar0, 16))
	{
		return 0;
	}
	else if (func_216(iVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_322(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_431(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_431(iParam1, 2, 0, 0);
	return -1;
}

int func_323(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_431(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_324(var uParam0)
{
	return func_186(*uParam0, 2);
}

float func_325()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_326(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_327(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_328(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1126368->f_2017 == 0 || (MISC::_GET_SYSTEM_TIME() - Global_1126368->f_2017) >= 1000)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_1126368->f_2017 == 0)
	{
		Global_1126368->f_2017 = MISC::_GET_SYSTEM_TIME();
	}
	else if ((MISC::_GET_SYSTEM_TIME() - Global_1126368->f_2017) >= 1000)
	{
		Global_1126368->f_2017 = MISC::_GET_SYSTEM_TIME();
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_329(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

int func_330(int iParam0)
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

var func_331(int iParam0, int iParam1)
{
	return func_432(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

int func_332()
{
	return Global_1099294->f_339;
}

void func_333(int iParam0, int iParam1)
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

void func_334(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_433(uParam0))
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
	Var1.f_4 = bParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1272170->f_1991.f_1[(Global_1272170->f_1991 - 1) /*24*/]) = { Var1 };
}

int func_335(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_434(35, iParam0);
}

int func_336(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 182)
	{
		return 1;
	}
	return 0;
}

int func_337(int iParam0)
{
	if (!func_336(iParam0))
	{
		return 0;
	}
	return (Global_1132968->f_11[iParam0 /*3*/])->f_2;
}

bool func_338()
{
	return (func_435(0) && func_435(1));
}

int func_339(int iParam0)
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

int func_340(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_436(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_50[iParam0]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_50[iParam0]);
		default:
			break;
	}
	return 1;
}

int func_341(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -84152915;
		case 2:
			return -1789085602;
		case 3:
			return -593725333;
		case 4:
			return 1619211297;
		case 5:
			return -1448204146;
		case 6:
			return -1918007793;
		case 7:
			return -2108757294;
		case 8:
			return -787840584;
		case 9:
			return -7905424;
		case 10:
			return -376205482;
		case 11:
			return -1753179328;
		case 12:
			return -1876855008;
		case 13:
			return 550082662;
		case 14:
			return -1964113;
		case 15:
			return 196458601;
		case 16:
			return 22941087;
		case 17:
			return 2017633379;
		case 24:
			return 253945992;
		case 25:
			return -1689046118;
		case 26:
			return -483357612;
		case 27:
			return -430722038;
		case 28:
			return 64082831;
		case 35:
			return -1498321291;
		case 36:
			return 1654907663;
		case 37:
			return 1059449568;
		case 38:
			return 2073287291;
		case 39:
			return 1110270789;
		case 40:
			return 417802449;
		case 41:
			return 2136672177;
		case 42:
			return -1930911028;
		case 43:
			return -739528491;
		case 55:
			return 2075984360;
		default:
			break;
	}
	return 0;
}

int func_342(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_233(bParam0, 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_437(bParam0, bParam1, &Var0))
	{
		return 0;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
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

bool func_343(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_233(bParam0, 2))
	{
		return false;
	}
	bVar0 = false;
	if ((bVar0 != 0 && bParam1) && NETWORK::_0xFBE782B3165AC8EC(bVar0))
	{
		return false;
	}
	return bVar0;
}

int func_344(bool bParam0, bool bParam1, var uParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_438(bParam0, bParam1, &Var0, &iVar31, 0, 1))
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
				if (!func_345((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (&Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
			{
				if (!func_346((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (func_131(&(Var0[iVar32 /*2*/]), 0, 0, 1) < (Var0[iVar32 /*2*/])->f_1)
			{
				*uParam2 = { *(Var0[iVar32 /*2*/]) };
				return 0;
			}
			iVar32++;
		}
	}
	return 1;
}

bool func_345(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_23() == 0)
	{
		return func_439(iParam0);
	}
	return iParam0 <= func_363();
}

bool func_346(int iParam0)
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

int func_347(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_304(0) };
	Var0.f_4 = func_303(iParam1);
	Var5 = { func_307(bParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_0xC97E0D2302382211(func_164(0), &Var5, false);
	return iVar9;
}

void func_348(bool bParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
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

struct<14> func_349(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (bParam0 != 0)
	{
		Var0 = bParam0;
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

void func_350(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_351(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_164(bParam3), uParam0, bParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_352(int iParam0)
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

int func_353(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (bParam0)
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

int func_354(bool bParam0)
{
	if (func_71(bParam0, 1064293907))
	{
		return 2;
	}
	else if (func_71(bParam0, -1218707194))
	{
		return 1;
	}
	else if (func_71(bParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_355(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_21(&(uVar0[iVar17]), 0) && bParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_356(int iParam0)
{
	iParam0 = func_234(iParam0);
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

int func_357(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::_0x9A100F1CF4546629(iVar0))
	{
		return 0;
	}
	if (FLOCK::_0xF8B48A361DC388AE(iVar0) == 2)
	{
		return 0;
	}
	if (ENTITY::_0x8DE41E9902E85756(iParam0))
	{
		return 0;
	}
	if (FIRE::_0xCDC25355C0D65963(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_358(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_164(bParam4), sParam0, iParam3, bParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_359(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (bParam1 < 0 || bParam1 >= bParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, bParam1, iParam0))
	{
		return 0;
	}
	return 1;
}

int func_360(bool bParam0)
{
	switch (bParam0)
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

int func_361(var uParam0, int iParam1)
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

int func_362(bool bParam0)
{
	int iVar0;

	iVar0 = func_260(bParam0);
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

int func_363()
{
	if (func_23() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_364(bool bParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<16> Var6;
	struct<16> Var22;

	iVar0 = -1;
	Var1 = { func_178(joaat("CURRENCY_CASH"), 1, 0) };
	Var6 = { func_181(joaat("CURRENCY_CASH"), Var1, Var1.f_4, bParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_182(joaat("USE"), &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_183(iVar0, Var22);
	}
	return iVar0;
}

void func_365(bool bParam0)
{
	struct<2> Var0;

	if (bParam0 <= 0)
	{
		return;
	}
	if (func_363() < bParam0)
	{
		bParam0 = func_363();
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(bParam0);
	Var0 = { func_421(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, bParam0);
}

void func_366(bool bParam0, char* sParam1, int iParam2)
{
	if (bParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_270(MISC::_CREATE_VAR_STRING(2, sParam1, bParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

int func_367(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_440(iVar0);
}

int func_368(int iParam0)
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
			iVar0 = func_440(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

int func_369(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	iParam1 = func_441(bParam0, iParam1, 1, 1, -142743235, 0, 1);
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_442(bParam0, iParam1, bParam2, iParam3);
}

int func_370(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[5];
	int iVar32;
	int iVar33;
	int iVar34;
	struct<16> Var35;
	struct<16> Var51;

	if (func_443(bParam0))
	{
		return 0;
	}
	if (bParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_219(bParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_75(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_444(&Var1, &iVar32, bParam0, iVar0, bParam1, 1) || iVar32 < 1)
		{
			return 0;
		}
		iVar34 = -1;
		Var35.f_9 = 1;
		Var35.f_11 = -1591664384;
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			Var35 = { func_445(bParam0, Var1[iVar33 /*6*/]) };
			Var35.f_12 = iParam2;
			iVar34 = func_182(joaat("USE"), &Var35, 1);
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
			func_183(iVar34, Var51);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_164(bParam4), bParam0, bParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_371(bool bParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		return 0;
	}
	if (func_443(bParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_314(*iParam1, &Var0, bParam6, 0, -1))
	{
		return 0;
	}
	if (bParam3 < 0)
	{
		bParam3 = Var0.f_11;
	}
	else if (bParam3 > Var0.f_11)
	{
		bParam3 = Var0.f_11;
	}
	if (!func_75(bParam6))
	{
		iVar14 = -1;
		if (func_23() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = bParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_182(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_183(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_164(bParam6), iParam1, bParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_372(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	struct<4> Var8;
	int iVar12;
	struct<16> Var13;

	iVar0 = -1;
	iVar1 = func_354(bParam0);
	iVar2 = func_353(bParam0);
	if (iVar2 != 0)
	{
		if (!func_75(0) || func_76())
		{
			if (bParam2)
			{
				func_169(func_247(joaat("BROKEN_DOWN"), joaat("SMALL_ANIMALS")), 1);
				return func_446(iVar2, iVar1, bParam0, bParam1);
			}
			Var3 = { func_178(bParam0, 1, 0) };
			Var8 = { func_307(bParam0, Var3, Var3.f_4, 1) };
			iVar12 = func_447(bParam0, &Var8, 1, -142743235, 0, 1);
			if (iVar12 != -1)
			{
				Var13.f_7 = -142743235;
				Var13 = 1;
				Var13.f_3 = 1;
				func_183(iVar12, Var13);
			}
			return 0;
		}
		if (func_240(bParam0, 1, 1, -142743235))
		{
			iVar0 = func_446(iVar2, iVar1, bParam0, bParam1);
		}
	}
	return iVar0;
}

bool func_373(bool bParam0)
{
	return func_172(bParam0) == joaat("CONSUMABLE");
}

int func_374(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	bool bVar15;
	struct<10> Var16;
	struct<4> Var30;
	bool bVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_349(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_350(&Var0, func_308(0));
	}
	if (!func_351(&Var0, &iVar14, &bVar15, 0))
	{
		return 0;
	}
	Var16.f_9 = -1591664384;
	bVar35 = false;
	while (bVar35 < bVar15)
	{
		if (iVar36 >= bParam1)
		{
		}
		else
		{
			if (!func_359(&Var16, bVar35, iVar14, bVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_371(bParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			bVar35++;
		}
	}
	func_352(iVar14);
	if (iVar36 < bParam1)
	{
	}
	return 1;
}

void func_375(bool bParam0, bool bParam1, int iParam2)
{
	Global_1939231->f_4 = bParam0;
	Global_1939231->f_34 = iParam2;
	if (bParam1 || (func_448() && iParam2 == 0))
	{
		func_449(1);
		func_450(1);
	}
}

int func_376(int iParam0, var uParam1)
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
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_0x88EFFED5FE8B0B4A(iParam0);
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
		iVar3 = PED::_0x7BCC6087D130312A(iParam0);
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

int func_377(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (bParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_304(0) };
	Var0.f_4 = 724026534;
	Var5 = { func_307(bParam0, Var0, Var0.f_4, 0) };
	return func_371(bParam0, &Var5, &Var0, bParam1, iParam3, bParam2, 0);
}

int func_378(bool bParam0)
{
	int iVar0;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_260(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_379(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, bParam2);
}

bool func_380(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_451(&uParam0, bParam4, iParam5, bParam6, iParam7);
}

int func_381(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_75(0))
	{
		return func_452(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_314(Param0, &Var0, 0, 0, -1))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_164(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_382(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
	}
	if (func_71(bParam0, 162787671))
	{
		return 1;
	}
	return 0;
}

int func_383(int iParam0, bool bParam1)
{
	struct<4> Var0;

	if (!func_453(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_250() };
	*bParam1 = func_386(Var0, iParam0, 0, -1);
	if (!func_21(*bParam1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_384(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
	}
	return ((bParam0 == 1362183957 || bParam0 == 563996796) || bParam0 == joaat("HORSE_EQUIPMENT_MOONSHINERSADDLE_001_IMPROVED_NEW_SADDLE_000"));
}

bool func_385(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
	}
	return bParam0 == 2031387366;
}

int func_386(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_454(&uParam0, bParam4, bParam5, iParam6);
}

int func_387(bool bParam0)
{
	if ((((bParam0 == 263080063 || bParam0 == -34331381) || bParam0 == -993578318) || bParam0 == 579268144) || bParam0 == 1104489688)
	{
		return 1;
	}
	return 0;
}

int func_388(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	struct<14> Var2;
	struct<4> Var16;
	bool bVar30;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var2 = { func_349(0, iParam0, -1591664384, -1591664384, 0, 0, 0) };
	func_350(&Var2, func_250());
	if (func_351(&Var2, &iVar0, &bVar1, 0))
	{
		Var16.f_9 = -1591664384;
		bVar30 = false;
		while (bVar30 < bVar1)
		{
			if (func_359(&Var16, bVar30, iVar0, bVar1))
			{
				if (func_21(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_387(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_352(iVar0);
						return 1;
					}
				}
			}
			bVar30++;
		}
		func_352(iVar0);
	}
	return 0;
}

int func_389(bool bParam0)
{
	switch (bParam0)
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

int func_390(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar42, 20))
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

char* func_391(bool bParam0)
{
	int iVar0;

	if (!func_21(bParam0, 0))
	{
		return "";
	}
	iVar0 = func_262(bParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_392(bool bParam0)
{
	if (func_260(bParam0) == -126813555 || func_260(bParam0) == 1946043663)
	{
		return 1;
	}
	return 0;
}

char* func_393(bool bParam0)
{
	int iVar0;

	if (!func_21(bParam0, 0))
	{
		return "";
	}
	iVar0 = func_264(bParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

void func_394(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_395(bool bParam0)
{
	var uVar0;

	if (func_23() != -1)
	{
		return 0;
	}
	if (func_259(bParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_179(bParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_142(bParam0, 1);
}

void func_396(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_172(bParam0) != joaat("WEAPON"))
	{
		return;
	}
	bVar0 = func_170(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_163(bVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, bVar0, 0, false) && func_131(bParam0, 0, 0, 0) == 0))
		{
			if (func_23() == -1)
			{
				func_171(bVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_174(bParam0, bParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_397(bool bParam0, bool bParam1)
{
	if (func_71(bParam0, 58855631))
	{
		func_455(bParam0, -915411861, bParam1, 1);
	}
}

int func_398(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_281(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_164(bParam1), bParam0, bParam3);
}

int func_399()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_34)) && !func_456(Global_34, 1369124074)) && !func_456(Global_34, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_34)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return 1;
	}
	return 0;
}

int func_400(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_401(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_39.f_3434[iVar1]), iVar2);
}

void func_402(int iParam0)
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

void func_403(int iParam0)
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
			func_457(1);
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
			func_458(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_458(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_458(3);
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
			func_459(1);
			break;
		case 33:
			func_460(1);
			break;
		case 34:
			func_461(1);
			break;
		case 35:
			break;
		case 36:
			func_462(0);
			break;
		case 37:
			func_463(0);
			break;
		case 38:
			func_464(0);
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
			if (func_465() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_466("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_283(675, 0);
			break;
		case 3:
			if (func_465() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_466("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_283(676, 0);
			break;
		case 4:
			if (func_465() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_466("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_283(677, 0);
			break;
		case 5:
			if (func_465() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_466("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_283(678, 0);
			break;
		case 23:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			if (func_23() == -1)
			{
				if (!func_142(1013902307, 1))
				{
					func_279(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_23() == -1)
			{
				if (!func_142(1013902307, 1))
				{
					func_279(1013902307, 1, 752097756);
				}
				if (!func_142(142640135, 1))
				{
					func_279(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_23() == -1)
			{
				if (!func_142(786809402, 1))
				{
					func_279(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_23() == -1)
			{
				if (!func_142(786809402, 1))
				{
					func_279(786809402, 1, 752097756);
				}
				if (!func_142(-518019409, 1))
				{
					func_279(-518019409, 1, 752097756);
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

void func_404(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &bVar0, bParam0) && bVar0 < bParam1) && bVar0 < WEAPON::_0xD3750CCC00635FC2(bParam0))
	{
		iVar2 = func_134(WEAPON::_0xD3750CCC00635FC2(bParam0), bParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, bParam0, iVar1);
		}
	}
}

int func_405(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_219(bParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_178(bParam0, 0, 0) };
	if (func_179(bParam0, &Var1, bParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_75(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_164(0), &uVar6, &Var1, bParam0, Var1.f_4, bParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_406(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || Global_1939178->f_6)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(bParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(bParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(bParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(bParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(bParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_34, sVar0, bParam0);
	iVar2 = func_467();
	func_468(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_34, sVar1, iVar2);
}

int func_407(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_22(bParam0))
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
	else if (WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(bParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_0xD3750CCC00635FC2(bParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, WEAPON::_0x5C2EA6C44F515F34(bParam0));
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

int func_408()
{
	return 0;
}

bool func_409(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_410(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_411(bool bParam0)
{
	bool bVar0;

	bVar0 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	if (WEAPON::_0x705BE297EEBDB95D(bVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(bVar0))
		{
			if (!func_274(49))
			{
				if (!func_274(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
		{
			if (!func_274(50))
			{
				if (!func_274(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_412(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_413(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_469(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_470(iParam0))
	{
		return 0;
	}
	if (func_471(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_418(iParam0, 1)) || func_472(32768))
	{
		if (!func_418(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_473())
	{
		return 0;
	}
	return 1;
}

void func_414(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

int func_415(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	bool bVar25;

	if (func_23() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_142(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1))
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
			bVar25 = &Var1.f_1[iVar24];
			if (func_21(bVar25, 0) && func_71(bVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_416(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_474(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_270(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_417(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		bVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_475() || func_476())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(bVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		bVar1 = (bVar1 + iVar2);
		func_270(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_270(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", bVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		bVar1 = iParam0;
	}
	if (bVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(bVar1, 752097756);
		func_169(func_421(joaat("CAREER_CASH")), bVar1);
	}
}

bool func_418(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

void func_419(var uParam0, int iParam1)
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

int func_420(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_477(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_478(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_421(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

char* func_422(int iParam0)
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

int func_423(bool bParam0)
{
	var uVar0;

	if (!func_143(bParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

int func_424(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0 != 0)
	{
		iVar3 = func_260(bParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_479(bParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar3, iVar0, &iVar1))
				{
					iVar2 = iVar1;
					if (iVar2 == iParam1)
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

bool func_425()
{
	return (func_398(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_386(func_307(joaat("WARDROBE"), func_304(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_426(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_164(0);
	*iParam1 = { func_307(bParam0, func_308(0), iParam3, 0) };
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

int func_427(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_164(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_428(bool bParam0)
{
	return func_71(bParam0, 1279601681);
}

bool func_429(bool bParam0, bool bParam1)
{
	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if (func_209(bParam0))
	{
		return func_480(func_210(bParam0, 0), bParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, bParam1) > 0;
}

int func_430(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_438(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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

void func_431(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_481(iParam0, iParam1, iParam2, iParam3);
}

var func_432(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_482() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_483());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_483());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_483());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_484(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_335(iVar2))
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
				if (iVar9 & 8192 != 0 && func_485(iVar2) != 1)
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
					if (!func_486(iVar10))
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

int func_433(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_434(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_487(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_332())
	{
		return func_487(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_487(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

bool func_435(int iParam0)
{
	return func_487(&(Global_1954472->f_1465), iParam0, 1);
}

int func_436(int iParam0)
{
	return func_488(func_435(iParam0));
}

int func_437(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(bParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(bParam0, iVar0, uParam2) && *uParam2 == bParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_438(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_489(bParam0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(bParam0, bParam1);
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
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(bParam0, bParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
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
		func_490(bParam0, bParam1, uParam2, *iParam3);
	}
	return 1;
}

bool func_439(int iParam0)
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

int func_440(int iParam0)
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
	iVar1 = PED::_0x88EFFED5FE8B0B4A(iVar0);
	iVar2 = func_491(iVar0);
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
		if (PED::_0xFB4891BD7578CDC1(iVar0, 43391475) || ENTITY::_0x8DE41E9902E85756(iVar0))
		{
			iVar6 = func_492(iVar5);
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

int func_441(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = func_493(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = func_494(iVar0, bParam0);
		if (iParam1 < iVar1)
		{
			iVar1 = iParam1;
		}
		iParam1 = (iParam1 - iVar1);
		func_495(&iVar0, bParam0, &iVar1, bParam3, iParam4, iParam5);
		iParam1 = (iParam1 + iVar1);
	}
	iParam1 = func_496(PLAYER::PLAYER_PED_ID(), bParam0, iParam1, bParam2, iParam5);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	return iParam1;
}

int func_442(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_131(bParam0, 0, 0, 0);
	if (bVar0 >= iParam1)
	{
		bVar1 = iParam1;
	}
	else
	{
		bVar1 = bVar0;
		bVar2 = (iParam1 - bVar1);
	}
	if (bVar1 > 0)
	{
		if (!func_240(bParam0, bVar1, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_497(bParam0, bVar1, 0);
		}
	}
	if (bVar2 > 0)
	{
		if (!func_498(bParam0, bVar2, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_497(bParam0, bVar1, 0);
		}
		if (!bParam2)
		{
			func_499("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

int func_443(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_444(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	var uVar0;

	*iParam1 = 0;
	if (bParam4 < 1)
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_219(bParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return 0;
		}
	}
	uVar0 = 5;
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, bParam4, &uVar0, 5))
	{
		return 0;
	}
	if (!func_500(uParam0, iParam1, &uVar0, bParam4, bParam5))
	{
		return 0;
	}
	return 1;
}

struct<16> func_445(bool bParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_307(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_446(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<2> Var1;
	var uVar13[15];
	int iVar29;
	int iVar30;

	if (!func_75(0) || func_76())
	{
		iVar0 = iParam0;
		Var1.f_1 = 10;
		func_502(iParam1, func_501(bParam2), &Var1, 1);
		if (func_503(iVar0, &Var1, 0))
		{
		}
		func_283(499, 0);
		return 0;
	}
	PED::_0xB29C553BA582D09E(&uVar13, iParam0, iParam1, func_501(bParam2));
	iVar29 = 0;
	while (iVar29 < 15)
	{
		if ((func_21(&(uVar13[iVar29]), 0) && !func_71(&(uVar13[iVar29]), 1286414894)) && !&uVar13[iVar29] == bParam2)
		{
			func_175(&(uVar13[iVar29]), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (bParam3 != 0)
			{
				if (bParam3 == &uVar13[iVar29])
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
	func_375(func_75(0), 0, 0);
	return iVar30;
}

int func_447(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<12> Var0;
	struct<16> Var14;
	int iVar30;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		return -1;
	}
	if (func_443(bParam0))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_314(*iParam1, &Var0, 1, 0, -1))
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
	Var14 = { func_504(&Var0, 0) };
	Var14.f_9 = iParam2;
	Var14.f_12 = iParam3;
	iVar30 = -1;
	iVar30 = func_182(joaat("USE"), &Var14, bParam5);
	if (bParam4 && iVar30 != -1)
	{
		Var31.f_7 = -142743235;
		Var31 = 1;
		func_183(iVar30, Var31);
	}
	return iVar30;
}

int func_448()
{
	if ((Global_1939231->f_10485 != (Global_1939231->f_38.f_203 - 1) || func_505(func_493(0), Global_1939231->f_10478, 0, 1, 1) > 0) || Global_1939231->f_10485 == 15)
	{
		return 1;
	}
	func_506();
	if (Global_1939231->f_6)
	{
		return 1;
	}
	return 0;
}

void func_449(int iParam0)
{
	Global_1939231->f_10 = iParam0;
}

void func_450(int iParam0)
{
	Global_1939231->f_9 = iParam0;
}

int func_451(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_164(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		return 0;
	}
	if (!func_427(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_452(struct<4> Param0, int iParam4, bool bParam5)
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
	if (!func_314(Param0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_172(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_507(Param0, 1, 0) };
		Var16.f_10 = iParam4;
		iVar0 = func_508(joaat("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("COACH"))
	{
		Var44 = { func_509(Param0, 1, 0) };
		Var44.f_10 = iParam4;
		iVar0 = func_510(joaat("UPDATE"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var69 = { func_511(Param0, 1, 0) };
		Var69.f_10 = iParam4;
		iVar0 = func_512(joaat("UPDATE"), &Var69, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_504(&Var1, 0) };
		Var86.f_10 = iParam4;
		iVar0 = func_182(joaat("UPDATE"), &Var86, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_453(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (bParam0 != 0)
	{
		iVar5 = func_260(bParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_378(bParam0);
			bVar0 = false;
			while (bVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar5, bVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return 1;
					}
				}
				bVar0++;
			}
		}
	}
	return 0;
}

int func_454(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_451(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_455(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_21(bParam0, 0) && !func_233(func_160(bParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*bParam2 = Var0.f_1;
	return 1;
}

int func_456(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_457(bool bParam0)
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

void func_458(bool bParam0)
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

void func_459(bool bParam0)
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

void func_460(bool bParam0)
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

void func_461(bool bParam0)
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

void func_462(bool bParam0)
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

void func_463(bool bParam0)
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

void func_464(bool bParam0)
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

int func_465()
{
	return 1;
	if (Global_1572887->f_13 == 0)
	{
		return 1;
	}
	return Global_39.f_1;
}

var func_466(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_467()
{
	return &Global_1902689;
}

void func_468(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_513(*iParam0);
	iVar1 = func_514(*iParam0);
	iVar2 = func_515(*iParam0);
	iVar3 = func_516(*iParam0);
	iVar4 = func_517(*iParam0);
	iVar5 = func_518(*iParam0);
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
	iVar6 = func_519(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_519(iVar1, iVar0);
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
	func_520(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_469(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_470(int iParam0)
{
	if (func_418(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_471(int iParam0)
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

bool func_472(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_473()
{
	if (!func_521())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

void func_474(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_522())
	{
		Global_1912978->f_125 = MISC::GET_GAME_TIMER();
		Global_1912978->f_126 = iParam1;
	}
	Global_1912978->f_127 = (Global_1912978->f_127 + iParam0);
}

bool func_475()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_476()
{
	return DLC::IS_DLC_PRESENT(joaat("DLC_ULTIMATEEDITION"));
}

void func_477(var uParam0)
{
	func_419(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_523() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_419(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_419(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_478(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_433(uParam0))
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

int func_479(bool bParam0)
{
	int iVar0;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_260(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar0);
}

int func_480(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_489(bParam0))
	{
		return 0;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, bParam1) == 0)
	{
		return 0;
	}
	if (bParam2)
	{
		return !func_211(bParam0, bParam1);
	}
	return 1;
}

void func_481(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_482()
{
	return Global_1051202->f_12;
}

char* func_483()
{
	return "unnamed";
}

int func_484(int iParam0)
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

int func_485(int iParam0)
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

bool func_486(int iParam0)
{
	if (func_524(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_525(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

bool func_487(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_488(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_489(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(bParam0);
}

void func_490(bool bParam0, bool bParam1, var uParam2, int iParam3)
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
	if (!ITEMDATABASE::_0xE81D0378A384E755(bParam0, &Var7) || Var7 == 0)
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

int func_491(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iVar0;
	}
	iVar1 = PED::_0x7BCC6087D130312A(iParam0);
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

int func_492(int iParam0)
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

int func_493(int iParam0)
{
	return PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
}

int func_494(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return func_526(INVENTORY::_0x13D234A2A3F66E63(iParam0), bParam1);
	}
	return 0;
}

int func_495(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<2> Var0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (func_527(*iParam0, bParam1, *iParam2, bParam3, iParam4))
	{
		Var0 = { func_297(bParam1) };
		if (STATS::_STAT_ID_IS_VALID(&Var0))
		{
			STATS::_0xBD861AE8A5181ED7(&Var0, *iParam2);
		}
		*iParam2 = func_496(*iParam0, bParam1, *iParam2, 1, iParam5);
		if (*iParam2 > 0)
		{
			if (func_528(bParam1))
			{
				if (!func_529(0, bParam1, *iParam2))
				{
				}
				if (func_530(PLAYER::PLAYER_ID(), 1, 0))
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 32, true);
				}
				else
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 32, false);
				}
				*iParam2 = func_531(*iParam0, bParam1, *iParam2);
			}
		}
		*iParam2 = 0;
		func_375(1, 0, 0);
		return 1;
	}
	return 0;
}

int func_496(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<11> Var6;
	var uVar101;

	if (!PED::_0xA911EE21EDF69DAF(iParam0))
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
				iVar0 = func_532(iVar2);
				if (!func_533(iVar0, &uVar101))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar2))
					{
						if ((iParam4 == 2 && ENTITY::_0x8DE41E9902E85756(iVar2)) || (iParam4 == 1 && !ENTITY::_0x8DE41E9902E85756(iVar2)))
						{
						}
						else if (iVar0 == bParam1)
						{
							iVar5 = 0;
							while (iVar5 < 3)
							{
								if ((Global_1270530->f_1002.f_245[iVar5 /*4*/])->f_3 == iVar2)
								{
									func_534(&Var6, Global_1903929->f_131[iVar5 /*95*/]);
								}
								else
								{
									iVar5++;
								}
							}
							if (bParam3)
							{
								func_535(iVar2);
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

void func_497(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (Global_1915180->f_20135)
	{
		if (Global_1915180->f_19742 == 29)
		{
			if (func_536(bParam0))
			{
				iVar1 = 0;
				if (bParam2)
				{
					switch (func_537(bParam0))
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
				while (iVar0 <= (bParam1 - 1))
				{
					STATS::_0x7C2ABF6E556B21FC(func_538(bParam0), iVar1, func_71(bParam0, 1064293907), 0);
					iVar0++;
				}
			}
		}
	}
}

bool func_498(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;

	Var0 = { func_297(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var0))
	{
		STATS::_0xBD861AE8A5181ED7(&Var0, bParam1);
	}
	func_539(bParam0, bParam1);
	return func_377(bParam0, bParam1, bParam2, iParam3);
}

int func_499(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
	iVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, bParam5);
	return iVar15;
}

int func_500(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
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
		if (bParam3 < 1)
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
			if (((*uParam2)[iVar0 /*6*/])->f_5 > bParam3)
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = bParam3;
				bParam3 = false;
			}
			else
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = ((*uParam2)[iVar0 /*6*/])->f_5;
				bParam3 = (bParam3 - ((*uParam0)[*iParam1 /*6*/])->f_5);
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam4 && bParam3 > 0)
	{
		*iParam1 = 0;
		return 0;
	}
	return 1;
}

int func_501(bool bParam0)
{
	if (func_71(bParam0, 1064293907))
	{
		return 2;
	}
	else if (func_71(bParam0, -1218707194))
	{
		return 1;
	}
	else if (func_71(bParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

struct<12> func_502(int iParam0, int iParam1, var uParam2, bool bParam3)
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
		func_419(uParam2, joaat("LOOT_TYPE_BREAKDOWN"));
	}
	else
	{
		func_419(uParam2, joaat("LOOT_TYPE_SKINNING"));
	}
	func_419(uParam2, iVar0);
	return *uParam2;
}

int func_503(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (0 == iParam0)
	{
		return 0;
	}
	return func_420(iParam0, uParam1, &uVar0, iParam2);
}

struct<16> func_504(var uParam0, bool bParam1)
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
		Var0.f_15 = func_219(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_320() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_505(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_131(bParam1, bParam2, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		bVar0 = (bVar0 + func_526(INVENTORY::_0x13D234A2A3F66E63(iParam0), bParam1));
	}
	if (bParam3)
	{
		bVar0 = (bVar0 + func_540(bParam1, bParam4));
	}
	return bVar0;
}

void func_506()
{
	if (!func_21(Global_1939231->f_10478, 0))
	{
		Global_1939231->f_6 = 0;
	}
	else if ((((func_60(Global_1939231->f_10478, 1224357681) != 0 && Global_1939231->f_10477 != 0) && Global_1939231->f_10477 != -2074770370) && !Global_1915180->f_20136) && !Global_1915180->f_21989.f_1)
	{
		Global_1939231->f_6 = 1;
	}
	else
	{
		Global_1939231->f_6 = 0;
	}
}

struct<28> func_507(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_164(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_504(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_508(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_321(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_322(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28), iVar0, uParam1);
		}
	}
	else
	{
		return func_323(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_509(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_164(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_504(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_510(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_322(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 25), iVar0, uParam1);
		}
	}
	else
	{
		return func_323(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_511(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_164(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_504(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_512(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_321(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_322(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17), iVar0, uParam1);
		}
	}
	else
	{
		return func_323(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

int func_513(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_115(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_514(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_515(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_516(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_517(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_518(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_519(int iParam0, int iParam1)
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

void func_520(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_541(iParam0, iParam6);
	func_542(iParam0, iParam5);
	func_543(iParam0, iParam4);
	func_544(iParam0, iParam3);
	func_545(iParam0, iParam2);
	func_546(iParam0, iParam1);
}

int func_521()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_522()
{
	return Global_1912978->f_127 == 0;
}

int func_523()
{
	return Global_1951141->f_1;
}

int func_524(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_525(int iParam0)
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
		func_547(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_548(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_526(int iParam0, bool bParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_21(bParam1, 0))
	{
		return 0;
	}
	Var0 = { func_549(iParam0, bParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, false);
	return iVar4;
}

bool func_527(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	return func_550(INVENTORY::_0x13D234A2A3F66E63(iParam0), bParam1, bParam2, bParam3, iParam4);
}

int func_528(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_551(bParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		iVar1 = func_552(iVar0, 1);
		iVar2 = iVar1;
		if (bParam0 == iVar2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_529(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_234(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_553(bParam1);
	if (iVar0 != 0)
	{
		iVar1 = func_554(iVar0, 1);
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
				if (!func_555(iVar3, 0))
				{
				}
				Global_1903929->f_417[iVar1] = (&Global_1903929->f_417[iVar1] - iVar3);
				return 1;
			}
		}
	}
	return 0;
}

bool func_530(int iParam0, int iParam1, bool bParam2)
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
	return func_556(iVar0, bParam2) >= func_557(bParam2);
}

bool func_531(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return bParam2;
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
			if (iVar1 == bParam1)
			{
				PED::_0x627F7F3A0C4C51FF(iParam0, bParam1);
				bParam2 = (bParam2 - 1);
			}
		}
		else
		{
			iVar1 = &((*Global_1269869)[PLAYER::PLAYER_ID() /*20*/])->f_16[iVar0];
			if (iVar1 == bParam1)
			{
				((*Global_1269869)[PLAYER::PLAYER_ID() /*20*/])->f_16[iVar0] = 0;
				bParam2 = (bParam2 - 1);
			}
		}
		if (bParam2 <= 0)
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	return bParam2;
}

bool func_532(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		bVar0 = func_367(&iParam0);
		if (!func_21(bVar0, 0))
		{
			bVar0 = func_368(iParam0);
		}
	}
	else
	{
		bVar0 = func_368(iParam0);
	}
	return bVar0;
}

bool func_533(bool bParam0, int iParam1)
{
	*iParam1 = func_558(bParam0);
	return *iParam1 != 0;
}

void func_534(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(iParam1, iParam0, 95);
}

void func_535(int iParam0)
{
	int iVar0;
	var uVar1[10];
	int iVar12;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	func_376(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), &uVar1);
	iVar12 = 0;
	while (iVar12 < 10)
	{
		if (func_21(&(uVar1[iVar12]), 0))
		{
			if (func_71(&(uVar1[iVar12]), -1690954218))
			{
				func_559(iVar0, -1760041550 /* GXTEntry: "High Quality Beef Stew" */);
			}
			else if (func_71(&(uVar1[iVar12]), 1149630095))
			{
				func_559(iVar0, -1760041550 /* GXTEntry: "High Quality Beef Stew" */);
			}
			else if (func_71(&(uVar1[iVar12]), 194498509))
			{
				func_559(iVar0, 116793994 /* GXTEntry: "Medium Quality Beef Stew" */);
			}
			else if (func_71(&(uVar1[iVar12]), 43251425))
			{
				func_559(iVar0, 1869130580 /* GXTEntry: "Low Quality Beef Stew" */);
			}
			else
			{
				func_559(iVar0, 1869130580 /* GXTEntry: "Low Quality Beef Stew" */);
			}
		}
		iVar12++;
	}
}

int func_536(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
	}
	if (func_71(bParam0, 1286414894))
	{
		return 1;
	}
	return 0;
}

int func_537(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_533(bParam0, &iVar1))
	{
		bParam0 = iVar1;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SATCHEL_DATA(bParam0, &iVar0))
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

int func_538(bool bParam0)
{
	switch (bParam0)
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
			return joaat("AT_PIG");
			return joaat("AT_CHICKEN_PRAIRIE");
			return joaat("AT_PRONGHORN");
			return joaat("AT_RABBIT");
			return joaat("AT_RACCOON");
			return joaat("AT_RAM_DESERT");
			return joaat("AT_RAVEN");
			return joaat("AT_ROOSTER");
			return joaat("AT_SEAGULL");
			return joaat("AT_SHEEP");
			return joaat("AT_SKUNK");
			return joaat("AT_SNAKE_BLACK");
			return joaat("AT_SNAKE_BOA");
			return joaat("AT_SNAKE_COPPER_NORTH");
			return joaat("AT_SNAKE_FERDELANCE");
			return joaat("AT_SNAKE_BLACK");
			return joaat("AT_SNAKE_WATER");
			return joaat("AT_TURKEY");
			return joaat("AT_TURTLE_SNAP");
			return joaat("AT_VULTURE");
			return joaat("AT_WOLF");
			return joaat("SMALL_ANIMALS");
		}

void func_539(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_23() == -1)
	{
		iVar0 = func_165(7);
	}
	else
	{
		iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	}
	func_531(iVar0, bParam0, bParam1);
}

int func_540(bool bParam0, bool bParam1)
{
	if (!bParam1 || func_560())
	{
		return func_317(bParam0, func_304(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

void func_541(int iParam0, int iParam1)
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

void func_542(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_543(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_514(*iParam0);
	iVar1 = func_513(*iParam0);
	if (iParam1 < 1 || iParam1 > func_519(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_544(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_545(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_546(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_547(int iParam0)
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
	func_548(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_548(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

struct<4> func_549(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_561(iParam0) };
	return func_562(iParam0, bParam1, Var0, Var0.f_4);
}

int func_550(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_21(bParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_563(iParam0, bParam1, 1))
	{
		return 0;
	}
	Var3 = { func_297(bParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((func_526(iParam0, bParam1) - bParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, bParam2);
		}
		else if ((func_526(iParam0, bParam1) - bParam2) < 0)
		{
			func_550(iParam0, bParam1, func_131(bParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_564(iParam0, bParam1, bParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && bParam1 != 1309979101)
	{
		func_174(bParam1, -bParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

bool func_551(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x4AEF1FB5B9011D75(bParam0);
}

int func_552(int iParam0, int iParam1)
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

bool func_553(bool bParam0)
{
	if (!func_528(bParam0))
	{
		return false;
	}
	return bParam0;
}

int func_554(int iParam0, int iParam1)
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

int func_555(int iParam0, bool bParam1)
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
	if (func_556(iVar1, bParam1) == 0)
	{
		return 0;
	}
	iVar2 = iParam0;
	if (iVar2 > func_556(iVar1, bParam1))
	{
		iVar2 = func_556(iVar1, bParam1);
	}
	if (!bParam1)
	{
		((*Global_1269869)[iVar1 /*20*/])->f_8 = (((*Global_1269869)[iVar1 /*20*/])->f_8 - iVar2);
	}
	else
	{
		((*Global_1269869)[iVar1 /*20*/])->f_9 = (((*Global_1269869)[iVar1 /*20*/])->f_9 - iVar2);
	}
	if (func_556(iVar1, bParam1) < 0)
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
	else if (func_556(iVar1, bParam1) > func_557(bParam1))
	{
		if (!bParam1)
		{
			((*Global_1269869)[iVar1 /*20*/])->f_8 = func_557(bParam1);
		}
		else
		{
			((*Global_1269869)[iVar1 /*20*/])->f_9 = func_557(bParam1);
		}
	}
	return 1;
}

int func_556(int iParam0, bool bParam1)
{
	return func_115(bParam1, ((*Global_1269869)[iParam0 /*20*/])->f_9, ((*Global_1269869)[iParam0 /*20*/])->f_8);
}

int func_557(bool bParam0)
{
	return func_115(bParam0, Global_1901929->f_638.f_30, Global_1901929->f_638.f_29);
}

int func_558(bool bParam0)
{
	switch (bParam0)
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

void func_559(int iParam0, int iParam1)
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
	func_565(iParam0, &uVar0);
	func_566(&uVar0);
}

int func_560()
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
	if (!func_567(iVar0))
	{
		return 0;
	}
	return 1;
}

struct<5> func_561(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_562(iParam0, joaat("CHARACTER"), func_320(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_562(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_21(bParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, bParam1, bParam6, &Var0);
	return Var0;
}

bool func_563(int iParam0, bool bParam1, int iParam2)
{
	if (!func_21(bParam1, 0))
	{
		return false;
	}
	return func_526(iParam0, bParam1) >= iParam2;
}

int func_564(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_21(bParam1, 0))
	{
		return 0;
	}
	if (bParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_561(iParam0) };
	Var5 = { func_562(iParam0, bParam1, Var0, Var0.f_4) };
	return func_568(iParam0, bParam1, &Var5, bParam2, iParam3, bParam4);
}

void func_565(int iParam0, var uParam1)
{
}

void func_566(var uParam0)
{
}

int func_567(int iParam0)
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

int func_568(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam2))
	{
		return 0;
	}
	if (func_443(bParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_569(iParam0, *iParam2, &Var0, 0))
	{
		return 0;
	}
	if (bParam3 < 0)
	{
		bParam3 = Var0.f_11;
	}
	else if (bParam3 > Var0.f_11)
	{
		bParam3 = Var0.f_11;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(iParam0, iParam2, bParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_569(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
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

