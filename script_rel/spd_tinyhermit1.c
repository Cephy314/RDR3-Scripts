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
	struct<292> Local_15 = { 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2007761031, 1433165496, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_307 = 0;
	var uLocal_308 = 6;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = -1082130432;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_15);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		if (!func_2(Local_15.f_173, 4194304))
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_149[0])) && (PED::IS_PED_INJURED(&(Local_15.f_149[0])) || PED::_0x3AA24CCC0D451379(&(Local_15.f_149[0]))))
			{
				func_3(joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC"));
				func_4(&(Local_15.f_173), 4194304);
			}
		}
		if (!func_2(Local_15.f_173, 134217728))
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_149[0])))
			{
				if (!PED::_0x5102307CE88798EB(&(Local_15.f_149[0])))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(&(Local_15.f_149[0]));
				}
				else if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(&(Local_15.f_149[0])) && func_5(&(Local_15.f_149[0]), 35f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 80f))
				{
					func_7(28, func_6());
					func_4(&(Local_15.f_173), 134217728);
				}
			}
		}
		if (!func_8(28, 4194304))
		{
			if (func_9(Global_35, 0, 1, 0) == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC"))
			{
				func_10(28, 4194304, 1);
			}
		}
		if (func_11(28, &(Local_15.f_149[0]), 1, 1) && iLocal_14 > 2)
		{
			if (!func_12(Global_35, Local_15.f_155, 0, 1))
			{
				func_14(&Local_15, &(Local_15.f_172), func_13(27), 0, 1);
			}
			else
			{
				if (!func_2(Local_15.f_173, 536870912))
				{
					if (func_16(28, func_15(), Local_15.f_149[0], &(Local_15.f_136), &(Local_15.f_291), 0, 1097859072 /* Float: 15f */, 0))
					{
						func_4(&(Local_15.f_173), 536870912);
					}
				}
				func_17(&Local_15, func_15(), &iLocal_14);
				func_18(&Local_15, &iLocal_14);
				func_19(&Local_15, &iLocal_14);
				func_20(&Local_15, &iLocal_14);
				func_21(&Local_15, &iLocal_14);
				func_22(&(Local_15.f_149[0]), &(Local_15.f_173), 2048, 28, 0);
				switch (iLocal_14)
				{
					case 0:
						func_23(&Local_15, &iLocal_14);
						break;
					case 1:
						if (func_24(&Local_15))
						{
							func_25(&Local_15, &iLocal_14, 2);
						}
						break;
					case 2:
						func_26(&Local_15, &iLocal_14);
						break;
					case 3:
						func_27(&Local_15, &iLocal_14);
						break;
					case 5:
						func_28(&Local_15, &iLocal_14);
						break;
					case 6:
						func_29(&Local_15, &iLocal_14);
						break;
					case 7:
						func_30(&Local_15, &iLocal_14);
						break;
					case 8:
						func_31(&Local_15, &iLocal_14);
						break;
					case 9:
						func_32(&Local_15, &iLocal_14);
						break;
					case 13:
						if (Local_15.f_170 >= 6 && (!ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_149[0])) || PED::IS_PED_DEAD_OR_DYING(&(Local_15.f_149[0]), true)))
						{
						}
						if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_149[0])))
						{
							if (!PED::_0x5102307CE88798EB(&(Local_15.f_149[0])))
							{
								PED::REQUEST_PED_VISIBILITY_TRACKING(&(Local_15.f_149[0]));
							}
							if (func_33(Global_35, &(Local_15.f_149[0]), 1, 1) > 80f && !PED::IS_TRACKED_PED_VISIBLE(&(Local_15.f_149[0])))
							{
								if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_149[0])))
								{
									PED::DELETE_PED(Local_15.f_149[0]);
								}
								func_1(&Local_15);
							}
						}
						break;
					case 11:
						func_34(&Local_15, &iLocal_14);
						break;
					case 12:
						break;
					default:
						break;
				}
			}
		}
	}

void func_1(var uParam0)
{
	func_35(&(uParam0->f_269));
	func_36(uParam0->f_166);
	func_37(&(uParam0->f_230), 0, 1, 1, 0);
	func_38(&(uParam0->f_209), &(uParam0->f_230));
	if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(uParam0->f_180))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_180);
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_149[0])))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(&(uParam0->f_149[0]), 0f);
		PED::_0x39A2FC5AF55A52B1(&(uParam0->f_149[0]), -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0->f_149[0]);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_151[0])))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(uParam0->f_151[0]);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_172))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_172);
	}
	func_39(1973911195, 1, 0, 0, 1, 1f, 0, 0);
	OBJECT::_0xC07B91B996C1DE89(1973911195, 1);
	func_40(1973911195);
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_154))
	{
		func_41(uParam0->f_154);
		VOLUME::_DELETE_VOLUME(uParam0->f_154);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_155))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_155);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_156))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_156);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_158))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_158);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_158);
		VOLUME::_DELETE_VOLUME(uParam0->f_158);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_157))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_157);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_157);
		VOLUME::_DELETE_VOLUME(uParam0->f_157);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_159))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_159);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_160))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_160);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_165))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_165);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_161))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_161);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_162))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_162);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_163))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_163);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_164))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_164);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_166))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_166);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(((*(*Global_1396257)[28 /*638*/])[func_15() /*48*/])->f_47))
	{
		VOLUME::_DELETE_VOLUME(((*(*Global_1396257)[28 /*638*/])[func_15() /*48*/])->f_47);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_292))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_292));
	}
	func_42(28);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_3(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_43(bParam0))
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

void func_4(var uParam0, int iParam1)
{
	func_44(uParam0, iParam1);
}

int func_5(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_45(bParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(bParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(bParam0, fParam4))
				{
					return 1;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(bParam0))
			{
				return 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(bParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6()
{
	if (func_46() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return 1;
	}
	return 0;
}

void func_7(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				func_47(joaat("JOURNAL_SPECIAL_PEDS_AGNES_DOWD_AR"), 0);
			}
			else
			{
				func_47(joaat("JOURNAL_SPECIAL_PEDS_AGNES_DOWD_JN"), 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_47(joaat("JOURNAL_SPECIAL_PEDS_CASSIDY_AR"), 0);
			}
			else
			{
				func_47(joaat("JOURNAL_SPECIAL_PEDS_CASSIDY_JN"), 0);
			}
			break;
		case 5:
			if (bParam1)
			{
				func_47(joaat("JOURNAL_RC_CRKPT4_1_AR"), 0);
			}
			else if (func_48(55))
			{
				func_47(joaat("JOURNAL_RC_CRKPT4_1B_JN"), 0);
			}
			else
			{
				func_47(joaat("JOURNAL_RC_CRKPT4_1A_JN"), 0);
			}
			break;
		case 12:
			if (bParam1)
			{
				func_47(joaat("JOURNAL_SPECIAL_PEDS_GIANT_AR"), 0);
			}
			else
			{
				func_47(joaat("JOURNAL_SPECIAL_PEDS_GIANT_JN"), 0);
			}
			break;
		case 20:
			if (bParam1)
			{
				func_47(joaat("JOURNAL_SPECIAL_PEDS_PHILOSOPHER_CAVE_AR"), 0);
			}
			else
			{
				func_47(joaat("JOURNAL_SPECIAL_PEDS_PHILOSOPHER_CAVE_JN"), 0);
			}
			break;
		case 21:
			if (bParam1)
			{
				func_47(joaat("JOURNAL_SPECIAL_PEDS_TREE_MONKEY_AR"), 0);
			}
			else
			{
				func_47(joaat("JOURNAL_SPECIAL_PEDS_TREE_MONKEY_JN"), 0);
			}
			break;
		case 28:
			if (bParam1)
			{
				func_47(joaat("JOURNAL_SPECIAL_PEDS_CABIN_HERMIT_AR"), 0);
			}
			else
			{
				func_47(joaat("JOURNAL_SPECIAL_PEDS_CABIN_HERMIT_JN"), 0);
			}
			break;
		default:
			break;
	}
}

bool func_8(int iParam0, int iParam1)
{
	return func_49((Global_40.f_11623[iParam0 /*8*/])->f_1, iParam1);
}

int func_9(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_50(&((Global_40.f_11623[iParam0 /*8*/])->f_1), iParam1);
	}
	else
	{
		func_51(&((Global_40.f_11623[iParam0 /*8*/])->f_1), iParam1);
	}
}

int func_11(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_52())
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(bParam1))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam1, true, false)) < 18f || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(bParam1))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (func_53(0) == 7 || func_54())
		{
			return 1;
		}
	}
	if (func_55(&(((*Global_1396257)[iParam0 /*638*/])->f_626), 1024))
	{
		return 1;
	}
	return 0;
}

bool func_12(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0);
}

char* func_13(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pl_a_mans_home";
			break;
		case 1:
			sVar0 = "pl_are_you_deaf";
			break;
		case 2:
			sVar0 = "pl_get_lost";
			break;
		case 3:
			sVar0 = "pl_go_away";
			break;
		case 4:
			sVar0 = "pl_go_away_now";
			break;
		case 5:
			sVar0 = "pl_very_unhappy";
			break;
		case 6:
			sVar0 = "pl_run_outside_A";
			break;
		case 7:
			sVar0 = "pl_run_outside_B";
			break;
		case 8:
			sVar0 = "pl_run_outside_C";
			break;
		case 9:
			sVar0 = "pl_run_outside_D";
			break;
		case 10:
			sVar0 = "pl_run_outside_E";
			break;
		case 11:
			sVar0 = "pl_out_of_the_house";
			break;
		case 12:
			sVar0 = "pl_back_in_the_house";
			break;
		case 13:
			sVar0 = "pl_back_in_the_house_02";
			break;
		case 14:
			sVar0 = "pl_shoot_sky_A";
			break;
		case 15:
			sVar0 = "pl_shoot_sky_B";
			break;
		case 16:
			sVar0 = "pl_shoot_sky_C";
			break;
		case 17:
			sVar0 = "pl_flinch_down_01";
			break;
		case 18:
			sVar0 = "pl_flinch_down_02";
			break;
		case 19:
			sVar0 = "pl_flinch_left_01";
			break;
		case 20:
			sVar0 = "pl_flinch_left_02";
			break;
		case 21:
			sVar0 = "pl_flinch_right_01";
			break;
		case 22:
			sVar0 = "pl_flinch_right_02";
			break;
		case 23:
			sVar0 = "pl_flinch_feet";
			break;
		case 24:
			sVar0 = "pl_turn_left";
			break;
		case 25:
			sVar0 = "pl_turn_right";
			break;
		case 26:
			sVar0 = "pl_outside_idle_base";
			break;
		case 27:
			sVar0 = "pl_inside_idle_base";
			break;
		case 28:
			sVar0 = "pl_idle_01";
			break;
		case 29:
			sVar0 = "pl_idle_02";
			break;
		case 30:
			sVar0 = "pl_idle_03";
			break;
	}
	return sVar0;
}

int func_14(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam1))
	{
		if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam1, 0))
		{
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam1, 0))
		{
			if ((!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2) && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam1, sParam2)) && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam1, sParam2);
			}
			if (bParam4)
			{
				if (!func_56(uParam0->f_149[0], 0, 0))
				{
					return 0;
				}
			}
			if (!ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2) && ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "bLoop", bParam3, false);
				return 0;
			}
			else if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_outside_idle_base", 1) || ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_inside_idle_base", 1))
				{
					if (func_57(uParam1, uParam0->f_167))
					{
						uParam0->f_167 = sParam2;
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_15()
{
	return 0;
}

int func_16(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam2) || Global_1935630->f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2))
		{
			(Global_40.f_11623[iParam0 /*8*/])->f_5++;
			(Global_40.f_11623[iParam0 /*8*/])->f_2 = func_58();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_59(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_60(uParam3))
	{
		func_61(uParam3, 0f);
	}
	else if (func_62(uParam3) >= 2f)
	{
		if (!func_63((Global_40.f_11623[iParam0 /*8*/])->f_2))
		{
			func_64(iParam0);
			*uParam4 = 1;
			func_65(uParam3);
			return 1;
		}
		else
		{
			func_64(iParam0);
			*uParam4 = 1;
			func_65(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_17(var uParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(((*(*Global_1396257)[28 /*638*/])[func_15() /*48*/])->f_47))
	{
		func_1(uParam0);
	}
	if (!func_66(Global_35, 0))
	{
		func_1(uParam0);
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, ((*(*Global_1396257)[28 /*638*/])[func_15() /*48*/])->f_47, true, 0))
	{
		if (!func_60(&(uParam0->f_127)))
		{
			func_67(&(uParam0->f_127), 0);
		}
		else if (func_62(&(uParam0->f_127)) > 10f)
		{
			func_65(&(uParam0->f_127));
			func_1(uParam0);
		}
	}
	else if (func_68(28, iParam1, &(uParam0->f_269), &(uParam0->f_149[0])))
	{
		if (func_69(&(uParam0->f_269)) || func_2(uParam0->f_269, 8))
		{
			func_1(uParam0);
		}
	}
}

void func_18(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_149[0])) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!func_66(&(uParam0->f_149[0]), 0))
	{
		if (!func_2(uParam0->f_173, 67108864))
		{
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_172) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_172, 0))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_172);
			}
			func_25(uParam0, iParam1, 13);
			func_70(&(uParam0->f_209), 0);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_149[0]), 315, false);
			func_38(&(uParam0->f_209), &(uParam0->f_230));
			func_4(&(uParam0->f_173), 67108864);
		}
	}
	else if ((*iParam1 > 3 && *iParam1 <= 8) && INTERIOR::GET_INTERIOR_FROM_ENTITY(&(uParam0->f_149[0])) == 0)
	{
		if ((func_71(&(uParam0->f_149[0]), 0, &(uParam0->f_98), &(uParam0->f_126), 0, 0) || func_59(Global_35, &(uParam0->f_149[0]), 4f, 1)) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (!func_2(uParam0->f_173, 128))
			{
				func_72(uParam0->f_230[0 /*17*/], 1);
				func_72(uParam0->f_230[1 /*17*/], 1);
				if (!func_2(uParam0->f_173, 536870912))
				{
					func_64(28);
					func_4(&(uParam0->f_173), 536870912);
				}
				func_4(&(uParam0->f_173), 128);
				func_25(uParam0, iParam1, 11);
			}
		}
	}
}

void func_19(var uParam0, int iParam1)
{
	if (*iParam1 >= 11 || *iParam1 <= 2)
	{
		return;
	}
	TASK::TASK_LOOK_AT_ENTITY(&(uParam0->f_149[0]), Global_35, -1, 0, 51, 0);
}

void func_20(var uParam0, int iParam1)
{
	if (func_2(uParam0->f_173, 64))
	{
		return;
	}
	if (*iParam1 >= 3 && *iParam1 <= 8)
	{
		if (!func_2(uParam0->f_173, 32768))
		{
			if (func_73(uParam0->f_149[0], 1715123483))
			{
				func_4(&(uParam0->f_173), 32768);
				uParam0->f_178++;
				if (uParam0->f_178 >= 2)
				{
					func_4(&(uParam0->f_173), 64);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(&(uParam0->f_149[0])))
	{
		if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uParam0->f_149[0])))
		{
			func_74(&(uParam0->f_173), 32768);
		}
	}
}

void func_21(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (ENTITY::IS_ENTITY_DEAD(&(uParam0->f_149[0])))
	{
		return;
	}
	iVar0 = func_76(uParam0->f_149[0], &(uParam0->f_209), 25f, &(uParam0->f_230), &iVar1, 0f, 2, 0, 0, func_75(uParam0->f_268, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (func_2(uParam0->f_173, 65536))
	{
		if (((func_77(&(uParam0->f_149[0]), 1, 1, 1, 0, 0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uParam0->f_149[0]))) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) || func_2(uParam0->f_173, 16777216))
		{
			func_78(uParam0->f_230[0 /*17*/], 0, 0);
			func_78(uParam0->f_230[1 /*17*/], 0, 0);
		}
		else if (!func_2(uParam0->f_173, 524288))
		{
			if (!func_2(uParam0->f_173, 1048576))
			{
				func_78(uParam0->f_230[0 /*17*/], 1, 0);
			}
			func_78(uParam0->f_230[1 /*17*/], 1, 0);
		}
		switch (iVar0)
		{
			case 0:
				func_4(&(uParam0->f_173), 1048576);
				func_4(&(uParam0->f_173), 16777216);
				break;
			case 1:
				uParam0->f_177 = 2;
				func_4(&(uParam0->f_173), 524288);
				break;
		}
		if (func_2(uParam0->f_173, 16777216))
		{
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uParam0->f_149[0])))
			{
				func_74(&(uParam0->f_173), 16777216);
			}
		}
	}
	else if (func_2(uParam0->f_173, 131072))
	{
		if (!func_2(uParam0->f_173, 262144))
		{
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uParam0->f_149[0])))
			{
				func_4(&(uParam0->f_173), 262144);
			}
		}
		else if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uParam0->f_149[0])) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !func_2(uParam0->f_173, 8388608))
		{
			func_4(&(uParam0->f_173), 65536);
		}
	}
}

void func_22(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_79(iParam3);
	if (fParam4 == 0f)
	{
		if (func_59(iParam0, Global_35, 15f, 1))
		{
			if (!func_80(*uParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					func_44(uParam1, iParam2);
				}
			}
		}
		else if (func_80(*uParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			func_81(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_80(*uParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				func_44(uParam1, iParam2);
			}
		}
	}
	else if (func_80(*uParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		func_81(uParam1, iParam2);
	}
}

void func_23(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_172))
	{
		uParam0->f_172 = ANIMSCENE::_CREATE_ANIM_SCENE(func_82(), 0, func_13(27), false, true);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_172))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_172);
		STREAMING::REQUEST_MODEL(uParam0->f_146, false);
		HUD::_TEXT_DATABASE_REQUEST("SPTTLAU");
		func_83(uParam0);
		func_84(uParam0->f_154, "SP_TINY_HERMIT_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		POPULATION::_0xB56D41A694E42E86(uParam0->f_158, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_158, 0, 0, 0, -1, -1, 0);
		uParam0->f_145 = func_86(28, func_15(), 9, func_85(28));
		if (!func_87(uParam0->f_145))
		{
		}
		if (func_88())
		{
			func_89(uParam0, Global_35, "JOHN", 0);
		}
		else
		{
			func_89(uParam0, Global_35, "ARTHUR", 0);
		}
		uParam0->f_168 = "TINY_HERMIT";
		func_90(&(uParam0->f_269));
		func_91(&(uParam0->f_98));
		func_92(&(uParam0->f_98), 1);
		func_93(&(uParam0->f_98), 1);
		func_94(&(uParam0->f_98), 0);
		func_95(&(uParam0->f_98), 0);
		func_96(&(uParam0->f_98), 1);
		func_97(&(uParam0->f_98), 1);
		func_98(&(uParam0->f_98), 1);
		func_99(&(uParam0->f_98), 0);
		func_100(&(uParam0->f_98), 0);
		func_101(&(uParam0->f_98), 1);
		func_102(&(uParam0->f_98), 1);
		func_103(&(uParam0->f_98), 1);
		func_104(&(uParam0->f_98), 1);
		func_105(&(uParam0->f_98), 1);
		func_106(&(uParam0->f_98), 1);
		func_107(&(uParam0->f_98), 1);
		func_108(&(uParam0->f_98), 1);
		func_109(&(uParam0->f_98), 1);
		func_110(&(uParam0->f_98), 25f);
		if (func_87(uParam0->f_145))
		{
			uParam0->f_170 = func_111(uParam0->f_145);
			uParam0->f_176 = func_112(uParam0->f_145);
			if (uParam0->f_170 < 1)
			{
				uParam0->f_170 = 1;
			}
			uParam0->f_171 = uParam0->f_170;
			func_25(uParam0, iParam1, 1);
		}
	}
}

int func_24(var uParam0)
{
	PED::_0xED9582B3DA8F02B4(1);
	if (((STREAMING::HAS_MODEL_LOADED(uParam0->f_146) && ANIMSCENE::_0x477122B8D05E7968(uParam0->f_172, 1, 0)) && HUD::_TEXT_DATABASE_HAS_LOADED("SPTTLAU")) && PED::_0x5C16855277819BBF() == 1)
	{
		return 1;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_146))
	{
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_172, 1, 0))
	{
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SPTTLAU"))
	{
	}
	if (PED::_0x5C16855277819BBF() != 1)
	{
	}
	return 0;
}

void func_25(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;

	switch (iParam2)
	{
		case 11:
			func_64(28);
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_172, 0))
			{
				bVar0 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_172, "p_door60", false);
				if (ENTITY::DOES_ENTITY_EXIST(bVar0))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_172, "p_door60", bVar0);
				}
			}
			break;
		case 8:
			func_78(uParam0->f_230[0 /*17*/], 0, 0);
			func_78(uParam0->f_230[1 /*17*/], 0, 0);
			func_4(&(uParam0->f_173), 8388608);
			func_74(&(uParam0->f_173), 65536);
			break;
	}
	*iParam1 = iParam2;
}

void func_26(var uParam0, int iParam1)
{
	struct<4> Var0;
	bool bVar4;

	Var0 = { func_113(0) };
	if (func_114(uParam0->f_149[0], uParam0->f_146, Var0, Var0.f_3, 1, 0, 1))
	{
		if (func_66(&(uParam0->f_149[0]), 0))
		{
			func_115(&(uParam0->f_149[0]), 28);
			func_116(&(uParam0->f_149[0]), 0);
			func_39(1973911195, 0, 0.05f, 0, 1, 0, 1, 0);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(&(uParam0->f_149[0]), "special_ped_group", 0f);
			if (func_8(28, 4194304))
			{
				bVar4 = func_117(6656, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
				func_118(&(uParam0->f_149[0]), bVar4, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			else
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(&(uParam0->f_149[0]), joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC"), -1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam0->f_149[0]), true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uParam0->f_149[0]), joaat("REL_CIVMALE"));
			PED::SET_PED_KEEP_TASK(&(uParam0->f_149[0]), true);
			func_119(uParam0, 0);
			PED::SET_PED_MAX_HEALTH(&(uParam0->f_149[0]), 250);
			func_120(&(uParam0->f_149[0]), 250);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_149[0]), 297, true);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_149[0]), 143, true);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_149[0]), 317, true);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_149[0]), 344, true);
			if (func_88())
			{
				func_121(&(uParam0->f_149[0]), 1689938120);
			}
			uParam0->f_151[0] = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(&(uParam0->f_149[0]), 0);
			func_89(uParam0, &(uParam0->f_149[0]), uParam0->f_168, 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(&(uParam0->f_149[0]), Var0, Var0.f_3, true, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_172, "CS_TINYHERMIT", &(uParam0->f_149[0]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_172, "w_shotgun_doubleBarrel01", &(uParam0->f_151[0]), 0);
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_172))
			{
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_172, 0))
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_172);
				}
			}
			func_122(uParam0->f_166, 0, 2016, 0);
			func_123(uParam0);
			func_25(uParam0, iParam1, 3);
		}
	}
}

void func_27(var uParam0, int iParam1)
{
	bool bVar0;

	bVar0 = false;
	func_124(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_149[0])))
	{
		return;
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_172) && ANIMSCENE::_0x1F0E401031E20146(uParam0->f_172, func_13(27)))
	{
		ENTITY::_0x80FDEB3A9E9AA578(&(uParam0->f_149[0]), false);
	}
	if (!func_2(uParam0->f_173, 268435456))
	{
		if (func_12(Global_35, uParam0->f_156, 0, 1))
		{
			return;
		}
	}
	if (func_12(Global_35, uParam0->f_155, 0, 1))
	{
		if (!func_2(uParam0->f_173, 268435456))
		{
			if (!func_12(Global_35, uParam0->f_156, 0, 1))
			{
				func_4(&(uParam0->f_173), 268435456);
			}
		}
	}
	else
	{
		return;
	}
	if (uParam0->f_176 <= 9)
	{
		func_126(uParam0, func_125(uParam0->f_176), &bVar0);
		if (bVar0)
		{
			uParam0->f_176++;
			func_127(uParam0->f_145, uParam0->f_176);
		}
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(func_128(uParam0->f_181)))
	{
		uParam0->f_181 = { func_129(uParam0) };
	}
	else if (func_126(uParam0, uParam0->f_181, &bVar0))
	{
		uParam0->f_181 = { func_130("") };
	}
	if (func_12(Global_35, uParam0->f_165, 0, 1))
	{
		if (uParam0->f_180 == -1)
		{
			uParam0->f_180 = GRAPHICS::CREATE_TRACKED_POINT();
			GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_180, ENTITY::GET_ENTITY_COORDS(&(uParam0->f_149[0]), true, false), 1f);
			func_131(&(uParam0->f_139));
		}
		else if (func_132(&(uParam0->f_139)) > 0.2f)
		{
			if (GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_180) <= 5 && func_59(Global_35, &(uParam0->f_149[0]), 20f, 1))
			{
				func_133(28, uParam0->f_149[0], &(uParam0->f_173), 4);
				AUDIO::_0x36559148B78853B3(1, true, 0);
				func_25(uParam0, iParam1, 5);
			}
		}
	}
}

void func_28(var uParam0, int iParam1)
{
	func_124(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_149[0])))
	{
		return;
	}
	if (uParam0->f_170 > 6)
	{
		func_25(uParam0, iParam1, 9);
	}
	else if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uParam0->f_149[0])))
	{
		if (func_14(uParam0, &(uParam0->f_172), func_13(func_134(uParam0->f_171)), 0, 1))
		{
			uParam0->f_170++;
			if (func_87(uParam0->f_145))
			{
				func_135(uParam0->f_145, uParam0->f_170);
			}
			func_25(uParam0, iParam1, 6);
		}
		else if (!func_2(uParam0->f_173, 131072))
		{
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_172, 0))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_172) >= 4f)
				{
					AUDIO::_0x36559148B78853B3(1, false, 0);
					func_4(&(uParam0->f_173), 131072);
				}
			}
		}
	}
}

void func_29(var uParam0, int iParam1)
{
	func_124(uParam0);
	if (((!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_149[0]))) || !VOLUME::_DOES_VOLUME_EXIST(uParam0->f_157)) || !VOLUME::_DOES_VOLUME_EXIST(uParam0->f_158))
	{
		return;
	}
	if (!func_59(Global_35, &(uParam0->f_149[0]), 25f, 1) || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_158, true, 0))
	{
		func_25(uParam0, iParam1, 8);
	}
	else if ((func_59(Global_35, &(uParam0->f_149[0]), 4f, 1) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_157, true, 0)) || (uParam0->f_177 >= 2 && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)))
	{
		func_25(uParam0, iParam1, 11);
	}
	else if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uParam0->f_149[0])) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
	{
		if (func_14(uParam0, &(uParam0->f_172), func_13(func_136(uParam0->f_171)), 0, 1))
		{
			uParam0->f_177++;
			func_25(uParam0, iParam1, 7);
		}
	}
}

void func_30(var uParam0, int iParam1)
{
	func_124(uParam0);
	if (((!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_149[0]))) || !VOLUME::_DOES_VOLUME_EXIST(uParam0->f_158)) || !VOLUME::_DOES_VOLUME_EXIST(uParam0->f_157))
	{
		return;
	}
	if (!func_59(Global_35, &(uParam0->f_149[0]), 25f, 1) || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_158, true, 0))
	{
		func_25(uParam0, iParam1, 8);
	}
	else if ((func_59(Global_35, &(uParam0->f_149[0]), 4f, 1) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_157, true, 0)) || (uParam0->f_177 >= 2 && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)))
	{
		func_25(uParam0, iParam1, 11);
	}
	else if (!func_2(uParam0->f_173, 524288))
	{
		if (func_14(uParam0, &(uParam0->f_172), func_13(func_137(uParam0->f_171)), 0, 1))
		{
			func_25(uParam0, iParam1, 8);
		}
	}
}

void func_31(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	bool bVar2;

	iVar0 = func_138(uParam0->f_171);
	if (func_14(uParam0, &(uParam0->f_172), func_13(iVar0), 0, 1))
	{
		func_25(uParam0, iParam1, 9);
	}
	if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_172, func_13(iVar0)))
	{
		if (uParam0->f_290 && !func_2(uParam0->f_173, 4096))
		{
			if (iVar0 == 12)
			{
				fVar1 = 0.4731f;
			}
			else
			{
				fVar1 = 0.4297f;
			}
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_172) >= fVar1)
			{
				bVar2 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_172, "p_door60", false);
				if (ENTITY::DOES_ENTITY_EXIST(bVar2))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_172, "p_door60", bVar2);
				}
				func_39(1973911195, 1, 0, 0, 1, 0, 1, 0);
				OBJECT::_0xC07B91B996C1DE89(1973911195, 1);
				func_4(&(uParam0->f_173), 4096);
			}
		}
		uParam0->f_290 = 1;
	}
}

void func_32(var uParam0, int iParam1)
{
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0)
	{
		func_25(uParam0, iParam1, 11);
	}
	switch (uParam0->f_265)
	{
		case 0:
			ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_172, 0);
			if (!func_2(uParam0->f_173, 8192))
			{
				uParam0->f_292 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), &(uParam0->f_149[0]));
				func_4(&(uParam0->f_173), 8192);
			}
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_149[0]), 226, true);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_149[0]), 268, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(uParam0->f_149[0]), 67, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(uParam0->f_149[0]), 30, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(uParam0->f_149[0]), 111, false);
			PED::SET_PED_FLEE_ATTRIBUTES(&(uParam0->f_149[0]), 512, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam0->f_149[0]), false);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_149[0]), 168, true);
			func_139(uParam0, 1);
			break;
		case 1:
			func_140(uParam0);
			break;
		case 2:
			if (func_141(uParam0))
			{
				func_139(uParam0, 1);
			}
			break;
	}
	if (uParam0->f_265 == 1 || uParam0->f_265 == 2)
	{
		func_142(uParam0);
	}
}

float func_33(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false), bParam2);
}

void func_34(var uParam0, int iParam1)
{
	bool bVar0;

	if (!func_2(uParam0->f_173, 8192))
	{
		uParam0->f_292 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), &(uParam0->f_149[0]));
		func_37(&(uParam0->f_230), 0, 1, 1, 0);
		func_4(&(uParam0->f_173), 8192);
	}
	if (!func_2(uParam0->f_173, 256))
	{
		if (!func_143(&(uParam0->f_172)))
		{
			func_74(&(uParam0->f_173), 256);
			return;
		}
		else
		{
			func_144(uParam0);
			func_4(&(uParam0->f_173), 256);
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_149[0])))
	{
		return;
	}
	bVar0 = false;
	if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY(&(uParam0->f_149[0])) != 0) || func_33(Global_35, &(uParam0->f_149[0]), 1, 1) < 7f)
	{
		bVar0 = true;
	}
	func_119(uParam0, bVar0);
	if (!func_145(&(uParam0->f_149[0]), 780511057))
	{
		if (!func_2(uParam0->f_173, 2097152))
		{
			if (func_146(&(uParam0->f_149[0]), "OPENS_FIRE", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), Global_35, uParam0->f_168, 0))
			{
				func_4(&(uParam0->f_173), 2097152);
			}
		}
		PED::SET_PED_CONFIG_FLAG(&(uParam0->f_149[0]), 315, false);
		PED::_0xFC3DB99C8144CD81(&(uParam0->f_149[0]), uParam0->f_158, 0, false, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam0->f_149[0]), false);
		TASK::TASK_COMBAT_PED(&(uParam0->f_149[0]), Global_35, 0, 0);
	}
	func_142(uParam0);
}

void func_35(var uParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_18))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_18);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_19))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_19);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_20))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_20);
	}
	if (func_60(&(uParam0->f_13)))
	{
		func_65(&(uParam0->f_13));
	}
}

void func_36(bool bParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam0))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(bParam0);
	POPULATION::_0x74C2B3DC0B294102(bParam0);
}

void func_37(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_147(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_148(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						((*uParam0)[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						((*uParam0)[iVar0 /*17*/])->f_5 = "";
						((*uParam0)[iVar0 /*17*/])->f_14 = 0;
						((*uParam0)[iVar0 /*17*/])->f_13 = "";
						((*uParam0)[iVar0 /*17*/])->f_15 = 0;
						((*uParam0)[iVar0 /*17*/])->f_11 = "";
						((*uParam0)[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}

void func_38(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_149(iParam0, uParam1, 1);
	func_37(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_39(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_150(iParam0, 0, 0);
	if (func_151(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_152(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_153(iParam0, 1);
			}
			else
			{
				func_154(iParam0, 1);
			}
		}
		else
		{
			func_155(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_156())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_40(int iParam0)
{
	if (func_151(iParam0) && func_157())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_41(bool bParam0)
{
	vector3 vVar0;

	if (!VOLUME::_DOES_VOLUME_EXIST(bParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(bParam0) };
	func_158(vVar0, 0);
}

void func_42(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (((*Global_1396257)[iParam0 /*638*/])->f_631)
	{
		func_159(0, -1);
	}
	func_160();
	((*Global_1396257)[iParam0 /*638*/])->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

bool func_43(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

void func_44(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_45(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

int func_46()
{
	return Global_1572887->f_12;
}

void func_47(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_161(iParam0, 0);
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
		func_162(1);
		Global_40.f_11922[0] = iParam0;
	}
}

bool func_48(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

bool func_49(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_50(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_51(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_52()
{
	int iVar0;

	if (func_46() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((*Global_1392915)[iVar0 /*12*/])->f_1 != -1)
				{
					if (func_163(((*Global_1392915)[iVar0 /*12*/])->f_4))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		return 0;
	}
	return 0;
}

int func_53(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

bool func_54()
{
	return Global_1310750->f_16077 != 0;
}

bool func_55(var uParam0, int iParam1)
{
	return func_49(*uParam0, iParam1);
}

int func_56(var uParam0, float fParam1, float fParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (fParam1 == 0f)
	{
		if (fParam2 == 0f)
		{
			if (func_59(Global_35, *uParam0, 25f, 1))
			{
				return 1;
			}
		}
		else if (fParam2 <= 25f)
		{
			return 1;
		}
	}
	else if (fParam2 == 0f)
	{
		if (func_59(Global_35, *uParam0, fParam1, 1))
		{
			return 1;
		}
	}
	else if (fParam2 <= fParam1)
	{
		return 1;
	}
	return 0;
}

int func_57(var uParam0, char* sParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 1;
	}
	bVar0 = ANIMSCENE::_0x1F0E401031E20146(*uParam0, sParam1);
	if (bVar0)
	{
		return 1;
	}
	bVar1 = ANIMSCENE::_0xA9016536015DE29D(*uParam0, sParam1);
	if (!bVar1)
	{
		return 1;
	}
	bVar2 = ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1);
	if (!bVar2)
	{
		return 1;
	}
	bVar3 = ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, sParam1);
	if (bVar2 || bVar3)
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, sParam1);
	}
	return 0;
}

int func_58()
{
	return &Global_1899515;
}

int func_59(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_60(var uParam0)
{
	return func_164(*uParam0, 1);
}

void func_61(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_165() - fParam1);
	func_166(uParam0, 1);
	func_167(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_62(var uParam0)
{
	if (!func_60(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_168(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_165() - uParam0->f_1);
}

bool func_63(int iParam0)
{
	return iParam0 != -15;
}

void func_64(int iParam0)
{
	(Global_40.f_11623[iParam0 /*8*/])->f_5++;
	(Global_40.f_11623[iParam0 /*8*/])->f_2 = func_58();
}

void func_65(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_66(bool bParam0, int iParam1)
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
	if (func_2(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return 0;
		}
	}
	if (func_2(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(bParam0))
		{
			return 0;
		}
	}
	if (func_2(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_2(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return 0;
		}
	}
	if (func_2(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return 0;
		}
	}
	if (func_2(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(bParam0))
		{
			return 0;
		}
	}
	if (func_2(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return 0;
		}
	}
	if (func_2(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(bParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_67(var uParam0, bool bParam1)
{
	if (bParam1 || !func_60(uParam0))
	{
		func_131(uParam0);
	}
}

int func_68(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_53(0) == 1 || func_53(0) == 2) || func_53(0) == 8) || func_169(&Global_1935630, 2048))
			{
				func_4(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_53(0) == 11)
			{
				func_4(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_53(0) == 6)
			{
				func_4(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_4(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_170(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_19) == 0 && func_170(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_20) == 23))
			{
				iVar0 = func_58();
				iVar1 = ((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_19;
				iVar2 = ((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_20;
				if (func_170(iVar2) > func_170(iVar1))
				{
					if (func_170(iVar0) > func_170(iVar2) + 1 || func_170(iVar0) < func_170(iVar1))
					{
						func_4(uParam2, 32);
					}
				}
				else if (func_170(iVar0) > func_170(iVar2) + 1 && func_170(iVar0) < func_170(iVar1))
				{
					func_4(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if (((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_40 != 4)
			{
				if (&((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[0] != -1 || &((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[1] != -1)
				{
					if (((func_171(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[0])) || func_171(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[1]))) || func_172(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[0]))) || func_172(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_173(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_40))
					{
						func_4(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_174(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_175(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_60(&(uParam2->f_13)))
					{
						func_61(&(uParam2->f_13), 0f);
					}
					else if (func_176(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_65(&(uParam2->f_13));
						func_4(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_60(&(uParam2->f_13)))
					{
						func_65(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_177())
			{
				func_4(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_178())
			{
				func_4(uParam2, 2048);
			}
		}
		if (func_169(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_4(uParam2, 128);
		}
		if (func_55(&(((*Global_1396257)[iParam0 /*638*/])->f_626), 2048))
		{
			func_4(uParam2, 256);
		}
	}
	if ((((((((((func_2(*uParam2, 2) || func_2(*uParam2, 4)) || func_2(*uParam2, 8)) || func_2(*uParam2, 16)) || func_2(*uParam2, 32)) || func_2(*uParam2, 64)) || func_2(*uParam2, 128)) || func_2(*uParam2, 256)) || func_2(*uParam2, 512)) || func_2(*uParam2, 1024)) || func_2(*uParam2, 2048))
	{
		return 1;
	}
	return 0;
}

int func_69(var uParam0)
{
	if (((((func_2(*uParam0, 2) || func_2(*uParam0, 4)) || func_2(*uParam0, 16)) || func_2(*uParam0, 128)) || func_2(*uParam0, 1024)) || func_2(*uParam0, 2048))
	{
		return 1;
	}
	return 0;
}

void func_70(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_65(&(iParam0->f_18));
}

int func_71(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_179(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_180(bParam0, uParam2))
			{
				*uParam3 = 128;
				func_181(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_182(bParam0, uParam2))
				{
					*uParam3 = 8;
					func_181(bParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_183(bParam0, bParam1, uParam2))
				{
					*uParam3 = 8;
					func_181(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_184(bParam0, uParam2))
				{
					*uParam3 = 64;
					func_181(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_185(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_181(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_186(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_187(Global_35, bParam0, uParam2))
					{
						*uParam3 = 4;
						func_181(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_188(Global_35, bParam0, uParam2))
					{
						*uParam3 = 256;
						func_181(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_189(Global_35, bParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_181(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_189(Global_35, bParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_181(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_190(bParam0, uParam2))
				{
					*uParam3 = 32;
					func_181(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_191(&bParam0, uParam2))
				{
					*uParam3 = 4096;
					func_181(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_192(uParam2, 4000))
				{
					if ((func_193(bParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_194(uParam2, bParam0)) && func_195(uParam2, bParam0))
					{
						*uParam3 = 2;
						func_181(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_193(bParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_194(uParam2, bParam0)) && func_195(uParam2, bParam0))
				{
					*uParam3 = 2;
					func_181(bParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_196(bParam0, Global_1935630->f_41))
							{
								func_197();
								*uParam3 = 2;
								func_181(bParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_196(bParam0, Global_1935630->f_41))
						{
							func_197();
							*uParam3 = 2;
							func_181(bParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_198(uParam2, bParam0) || (uParam2->f_9 > 0 && (func_199() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						func_197();
						*uParam3 = 2;
						func_181(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_200())
					{
						if (func_196(bParam0, Global_1935630->f_42))
						{
							func_197();
							*uParam3 = 2;
							func_181(bParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_201(uParam2, bParam0))
			{
				*uParam3 = 1024;
				func_181(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_202(bParam0, bParam1, uParam2))
				{
					*uParam3 = 2048;
					func_181(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_203(bParam0, uParam2))
					{
						*uParam3 = 8192;
						func_181(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_204(bParam0, uParam2))
				{
					*uParam3 = 32768;
					func_181(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_205(uParam2, 4000))
				{
					if (func_206(&bParam0, uParam2))
					{
						*uParam3 = 512;
						func_181(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_207(bParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_181(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (func_208(uParam2, bParam0))
			{
				*uParam3 = 1;
				func_181(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_72(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_209(iParam0, 4))
		{
			func_148(&(iParam0->f_6), 1, 1);
			func_210(iParam0, 4);
		}
	}
	else if (func_209(iParam0, 4))
	{
		func_211(iParam0, 4);
		func_210(iParam0, 14);
	}
}

int func_73(var uParam0, int iParam1)
{
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_2(iParam1, *uParam0);
		return 1;
	}
	return 0;
}

void func_74(var uParam0, int iParam1)
{
	func_81(uParam0, iParam1);
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_76(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam9;
	func_212(&iVar0);
	if (func_49(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_213(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_49(iVar0, 134217728))
	{
		func_214(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_215(558))
				{
					func_216(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

int func_77(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	bVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (Global_1935630->f_44 == joaat("WEAPON_LASSO") && Global_1935630->f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && bParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == bParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(bVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0)) && func_33(bVar0, bParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(bVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(bVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_217(bVar0, 0)))
		{
			if (func_218(bParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_78(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_209(iParam0, 13))
	{
		func_210(iParam0, 0);
	}
	else
	{
		func_211(iParam0, 0);
	}
	if (func_147(iParam0->f_6))
	{
		if (bParam2)
		{
			func_148(&(iParam0->f_6), 0, 1);
		}
	}
}

char* func_79(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "agnes_dowd";
		case 1:
			return "anders_helgerson";
		case 2:
			return "armadillo_town_crier";
		case 3:
			return "bland_preacher";
		case 4:
			return "blind_man_cassidy";
		case 6:
			return "chelonian_master";
		case 7:
			return "civil_war_commando";
		case 5:
			return "crackpot_robot";
		case 8:
			return "dorothea_wicklow";
		case 9:
			return "endless_strainer";
		case 10:
			return "early_eugenics_proponent";
		case 11:
			return "gavins_friend";
		case 12:
			return "giant";
		case 13:
			return "grizzeld_jon";
		case 14:
			return "joe_butler";
		case 15:
			return "john_the_baptising_madman";
		case 16:
			return "lillian_powell";
		case 17:
			return "mad_scientist";
		case 18:
			return "mayor_of_strawberry";
		case 19:
			return "bum_civil_war_vet";
		case 20:
			return "philosopher_in_cave";
		case 21:
			return "poor_joe";
		case 22:
			return "sheriff_of_tumbleweed";
		case 23:
			return "soothsayer";
		case 25:
			return "swamp_weirdo_sonny";
		case 24:
			return "sun_worshipper";
		case 26:
			return "thomas_downe";
		case 27:
			return "timothy_donahue";
		case 28:
			return "tiny_hermit_in_cabin";
		case 29:
			return "vampire";
		default:
			break;
	}
	return "speci";
}

bool func_80(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_81(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_82()
{
	return "script@specialped@pdttl_tiny_hermit@ig@ig_1@ig_1";
}

void func_83(var uParam0)
{
	struct<11> Var0;

	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_154))
	{
		Var0 = { func_219(0) };
		uParam0->f_154 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_155))
	{
		Var0 = { func_219(1) };
		uParam0->f_155 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_156))
	{
		Var0 = { func_219(2) };
		uParam0->f_156 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_157))
	{
		Var0 = { func_219(3) };
		uParam0->f_157 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_158))
	{
		Var0 = { func_219(4) };
		uParam0->f_158 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_159))
	{
		Var0 = { func_219(5) };
		uParam0->f_159 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_160))
	{
		Var0 = { func_219(6) };
		uParam0->f_160 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_165))
	{
		Var0 = { func_219(7) };
		uParam0->f_165 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_161))
	{
		Var0 = { func_219(8) };
		uParam0->f_161 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_162))
	{
		Var0 = { func_219(9) };
		uParam0->f_162 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_163))
	{
		Var0 = { func_219(10) };
		uParam0->f_163 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_164))
	{
		Var0 = { func_219(11) };
		uParam0->f_164 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_166))
	{
		Var0 = { func_219(12) };
		uParam0->f_166 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
}

int func_84(bool bParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (!VOLUME::_DOES_VOLUME_EXIST(bParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(bParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(bParam0) };
	uVar6 = func_220(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return uVar6;
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1472102294;
		case 0:
			return 1005861726;
		case 2:
			return -26239347;
		case 3:
			return 813446076;
		case 4:
			return joaat("SPID_BLIND_MAN_CASSIDY");
		case 6:
			return -161610929;
		case 7:
			return 419383665;
		case 5:
			return 1809158435;
		case 8:
			return 698747486;
		case 9:
			return 399829678;
		case 10:
			return -1767525506;
		case 11:
			return 1533318556;
		case 12:
			return 846763582;
		case 13:
			return 974338564;
		case 14:
			return 860809165;
		case 15:
			return -1682386507;
		case 16:
			return 420952075;
		case 17:
			return 1340251064;
		case 18:
			return -1417023286;
		case 19:
			return 237608522;
		case 20:
			return 1487910336;
		case 21:
			return 129290505;
		case 22:
			return 1231488843;
		case 23:
			return -499580940;
		case 24:
			return 1953535365;
		case 25:
			return -315419568;
		case 26:
			return -1708806962;
		case 27:
			return 1405526353;
		case 28:
			return -1903564707;
		case 29:
			return -1132839335;
		default:
			break;
	}
	return 0;
}

int func_86(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_221())
	{
		iVar2 = func_221();
	}
	iVar5 = func_222(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_223(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_223(iVar6) == 0)
			{
				return func_224(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_223(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_223(iVar6) == 0)
			{
				return func_224(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_224(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_87(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_88()
{
	if (func_46() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return 1;
	}
	return 0;
}

void func_89(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_225(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

void func_90(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_91(var uParam0)
{
	func_92(uParam0, 0);
	func_106(uParam0, 0);
	func_102(uParam0, 1);
	func_100(uParam0, 1);
	func_226(uParam0, 0);
	func_101(uParam0, 1);
	func_227(uParam0, 1, 1, 1);
}

void func_92(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 16384);
	}
	else
	{
		func_50(&(uParam0->f_1), 16384);
	}
}

void func_93(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 524288);
	}
	else
	{
		func_50(&(uParam0->f_1), 524288);
	}
}

void func_94(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 131072);
	}
	else
	{
		func_50(&(uParam0->f_1), 131072);
	}
}

void func_95(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 4);
	}
	else
	{
		func_51(uParam0, 4);
	}
}

void func_96(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 8);
	}
	else
	{
		func_50(&(uParam0->f_1), 8);
	}
}

void func_97(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 8);
	}
	else
	{
		func_51(uParam0, 8);
	}
}

void func_98(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 32);
	}
	else
	{
		func_51(uParam0, 32);
	}
}

void func_99(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 64);
	}
	else
	{
		func_51(uParam0, 64);
	}
}

void func_100(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 16);
	}
	else
	{
		func_51(uParam0, 67108864);
		func_51(uParam0, 16);
	}
}

void func_101(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 256);
	}
	else
	{
		func_51(uParam0, 256);
	}
}

void func_102(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 256);
	}
	else
	{
		func_50(&(uParam0->f_1), 256);
	}
}

void func_103(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 4);
	}
	else
	{
		func_50(&(uParam0->f_1), 4);
	}
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 16);
	}
	else
	{
		func_50(&(uParam0->f_1), 16);
	}
}

void func_105(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 2);
	}
	else
	{
		func_50(&(uParam0->f_1), 2);
	}
}

void func_106(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 2048);
	}
	else
	{
		func_50(&(uParam0->f_1), 2048);
	}
}

void func_107(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 1);
	}
	else
	{
		func_50(&(uParam0->f_1), 1);
	}
}

void func_108(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 128);
	}
	else
	{
		func_51(uParam0, 128);
	}
}

void func_109(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 262144);
	}
	else
	{
		func_51(uParam0, 262144);
	}
}

void func_110(var uParam0, float fParam1)
{
	uParam0->f_17 = fParam1;
}

int func_111(int iParam0)
{
	if (!func_87(iParam0))
	{
		return -1;
	}
	return func_228(iParam0);
}

int func_112(int iParam0)
{
	if (!func_87(iParam0))
	{
		return -1;
	}
	return func_229(iParam0);
}

struct<4> func_113(int iParam0)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 3025.557f, 1779.699f, 83.2056f };
			Var0.f_3 = 142.8609f;
			break;
	}
	return Var0;
}

int func_114(var uParam0, bool bParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = func_230(bParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_230(bParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_115(int iParam0, int iParam1)
{
	if (!(iParam1 > -1 && iParam1 <= 29))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "bIsSpecialPed", true);
	DECORATOR::DECOR_SET_INT(iParam0, "iSpecialPedID", iParam1);
	((*Global_1396257)[iParam1 /*638*/])->f_636 = iParam0;
}

void func_116(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_231(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

bool func_117(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	if (((func_232(iParam0, 4096) && func_232(iParam0, 512)) && func_232(iParam0, 1024)) && func_232(iParam0, 2048))
	{
		return joaat("WEAPON_REPEATER_CARBINE");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_REPEATER"), iParam1, iParam2, 0);
	bVar1 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_RIFLE"), iParam1, iParam2, 0);
	bVar2 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SNIPER"), iParam1, iParam2, 0);
	bVar3 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SHOTGUN"), iParam1, iParam2, 0);
	while (func_233(bVar3))
	{
		iVar4++;
		if (iVar4 >= 10)
		{
			bVar3 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
			Jump @185; //curOff = 160
		}
		else
		{
			bVar3 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SHOTGUN"), iParam1, iParam2, 0);
		}
	}
	if (!func_234(bVar3))
	{
		bVar3 = joaat("WEAPON_REPEATER_CARBINE");
	}
	bVar5 = false;
	if (!func_232(iParam0, 4096))
	{
		bVar5 = iVar0;
	}
	if (!func_232(iParam0, 512))
	{
		if (!func_43(bVar5) || WEAPON::_0xF2F585411E748B9C(bVar1, 0) > WEAPON::_0xF2F585411E748B9C(bVar5, 0))
		{
			bVar5 = bVar1;
		}
	}
	if (!func_232(iParam0, 1024))
	{
		if (!func_43(bVar5) || WEAPON::_0xF2F585411E748B9C(bVar3, 0) > WEAPON::_0xF2F585411E748B9C(bVar5, 0))
		{
			bVar5 = bVar3;
		}
	}
	if (!func_232(iParam0, 2048))
	{
		if (!func_43(bVar5) || WEAPON::_0xF2F585411E748B9C(bVar2, 0) > WEAPON::_0xF2F585411E748B9C(bVar5, 0))
		{
			bVar5 = bVar2;
		}
	}
	if (!func_43(bVar5))
	{
		return joaat("WEAPON_REPEATER_CARBINE");
	}
	return bVar5;
}

bool func_118(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (bParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			bVar0 = WEAPON::_0xF8204EF17410BF43(bParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(bParam1))
			{
				return bParam1;
			}
			bVar0 = bParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					bVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_43(bVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, bVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						bVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_43(bVar4) && bVar4 != bVar0)
							{
								bVar0 = bVar4;
							}
						}
						else if (bVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_46() == -1 && !func_234(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((bVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(bParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (bVar0 == joaat("WEAPON_UNARMED") && bParam1 == joaat("WEAPON_UNARMED"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (bParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				bVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_234(joaat("WEAPON_REPEATER_CARBINE")))
				{
					bVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					bVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				bVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (bVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		bVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (bParam9 < 0)
	{
		if (iParam0 != Global_35 && func_43(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &bParam9, bVar0);
			if (bParam9 < 0)
			{
				bParam9 = false;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			bParam9 = (iVar24 - iVar23);
			if (bParam9 < 0)
			{
				bParam9 = false;
			}
		}
		else
		{
			bParam9 = false;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_235(bVar0, bParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_236(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, bParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_237(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

void func_119(var uParam0, bool bParam1)
{
	PED::SET_PED_COMBAT_MOVEMENT(&(uParam0->f_149[0]), 1);
	PED::_0x815C0074A1BC0D93(&(uParam0->f_149[0]), 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uParam0->f_149[0]), 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uParam0->f_149[0]), 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uParam0->f_149[0]), 46, false);
	PED::_0xB8DE69D9473B7593(&(uParam0->f_149[0]), 0);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(&(uParam0->f_149[0]), false);
	if (bParam1)
	{
		PED::SET_PED_COMBAT_ABILITY(&(uParam0->f_149[0]), 2);
		PED::SET_PED_ACCURACY(&(uParam0->f_149[0]), 100);
		PED::_0xE1B3BE07D3AADDED(&(uParam0->f_149[0]), 4, 1);
	}
	else
	{
		PED::SET_PED_COMBAT_ABILITY(&(uParam0->f_149[0]), 1);
		PED::SET_PED_ACCURACY(&(uParam0->f_149[0]), 10);
		PED::_0xE1B3BE07D3AADDED(&(uParam0->f_149[0]), 4, 0);
	}
}

void func_120(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iParam1, 0);
	}
}

void func_121(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_238(bParam0, iParam1))
		{
			if (func_239(bParam0, iParam1))
			{
				if (func_240(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_241(bParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(bParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
			}
			PED::_0xE3144B932DFDFF65(bParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 9);
		}
	}
}

void func_122(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam0))
	{
		return;
	}
	func_242(bParam0, bParam1);
	POPULATION::_0x18262CAFEBB5FBE1(bParam0, iParam2, iParam3, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(bParam0, iParam2, iParam3, 0, -1, -1, 2);
}

void func_123(var uParam0)
{
	struct<2> Var0;
	var uVar2;
	int iVar3;

	Var0 = { func_243(1) };
	func_245(uParam0->f_230[0 /*17*/], Var0, func_244(), Var0.f_1, 0, 0, 0, 1, 0);
	Var0 = { func_243(2) };
	uVar2 = func_246(&iVar3);
	func_245(uParam0->f_230[1 /*17*/], Var0, uVar2, Var0.f_1, 0, 0, 0, 1, iVar3);
	func_247(&(uParam0->f_149[0]), &(uParam0->f_230), 25f, 2, 0, 0, 0, 0, 0);
	func_78(uParam0->f_230[0 /*17*/], 0, 0);
	func_78(uParam0->f_230[1 /*17*/], 0, 0);
	if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_HERMIT")))
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_HERMIT"));
	}
	uParam0->f_268 = 3;
}

void func_124(var uParam0)
{
	if (!func_2(uParam0->f_173, 256))
	{
		if (!func_143(&(uParam0->f_172)))
		{
			func_74(&(uParam0->f_173), 256);
			return;
		}
		else
		{
			func_144(uParam0);
			func_4(&(uParam0->f_173), 256);
			return;
		}
	}
}

Vector3 func_125(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { func_248(0) };
			break;
		case 1:
			vVar0 = { func_248(1) };
			break;
		case 2:
			vVar0 = { func_248(11) };
			break;
		case 3:
			vVar0 = { func_248(3) };
			break;
		case 4:
			vVar0 = { func_248(14) };
			break;
		case 5:
			vVar0 = { func_248(29) };
			break;
		case 6:
			vVar0 = { func_248(6) };
			break;
		case 7:
			vVar0 = { func_248(7) };
			break;
		case 8:
			vVar0 = { func_248(8) };
			break;
		case 9:
			vVar0 = { func_248(25) };
			break;
	}
	return vVar0;
}

int func_126(var uParam0, vector3 vParam1, bool bParam4)
{
	if (!func_2(uParam0->f_173, 1024))
	{
		if (func_249(uParam0, vParam1, 0, -1, 0, 0))
		{
			func_4(&(uParam0->f_173), 1024);
			*bParam4 = 1;
		}
	}
	else if (!func_251(func_250(&vParam1)))
	{
		if (!func_60(&(uParam0->f_142)))
		{
			func_131(&(uParam0->f_142));
		}
		if (func_252(&(uParam0->f_142), 7f))
		{
			func_74(&(uParam0->f_173), 1024);
			return 1;
		}
	}
	return 0;
}

void func_127(int iParam0, int iParam1)
{
	if (!func_87(iParam0))
	{
		return;
	}
	func_253(iParam0, iParam1);
}

char* func_128(var uParam0, var uParam1, var uParam2)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

Vector3 func_129(var uParam0)
{
	vector3 vVar0;
	int iVar3;

	iVar3 = func_254(0, 23, uParam0->f_179);
	switch (iVar3)
	{
		case 0:
			vVar0 = { func_130("SPTTL_SPEECHC") };
			break;
		case 1:
			vVar0 = { func_130("SPTTL_SPEECHE") };
			break;
		case 2:
			vVar0 = { func_130("SPTTL_SPEECHF") };
			break;
		case 3:
			vVar0 = { func_130("SPTTL_SPEECHJ") };
			break;
		case 4:
			vVar0 = { func_130("SPTTL_LINGERA") };
			break;
		case 5:
			vVar0 = { func_130("SPTTL_LINGERC") };
			break;
		case 6:
			vVar0 = { func_130("SPTTL_LINGERD") };
			break;
		case 7:
			vVar0 = { func_130("SPTTL_LINGERF") };
			break;
		case 8:
			vVar0 = { func_130("SPTTL_LINGERG") };
			break;
		case 9:
			vVar0 = { func_130("SPTTL_LINGERH") };
			break;
		case 10:
			vVar0 = { func_130("SPTTL_LINGERI") };
			break;
		case 11:
			vVar0 = { func_130("SPTTL_LINGERJ") };
			break;
		case 12:
			vVar0 = { func_130("SPTTL_LINGERK") };
			break;
		case 13:
			vVar0 = { func_130("SPTTL_LINGERL") };
			break;
		case 14:
			vVar0 = { func_130("SPTTL_LINGERM") };
			break;
		case 15:
			vVar0 = { func_130("SPTTL_LINGERN") };
			break;
		case 16:
			vVar0 = { func_130("SPTTL_LINGERO") };
			break;
		case 17:
			vVar0 = { func_130("SPTTL_LINGERQ") };
			break;
		case 18:
			vVar0 = { func_130("SPTTL_LINGERR") };
			break;
		case 19:
			vVar0 = { func_130("SPTTL_RETURNA") };
			break;
		case 20:
			vVar0 = { func_130("SPTTL_RETURNC") };
			break;
		case 21:
			vVar0 = { func_130("SPTTL_RETURND") };
			break;
		case 22:
			vVar0 = { func_130("SPTTL_RETURNE") };
			break;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_175, iVar3))
	{
		MISC::SET_BIT(&(uParam0->f_175), iVar3);
		uParam0->f_179 = iVar3;
		return vVar0;
	}
	if (func_255(uParam0->f_175) >= 23)
	{
		uParam0->f_175 = 0;
	}
	return func_130("");
}

Vector3 func_130(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

void func_131(var uParam0)
{
	func_61(uParam0, 0f);
}

float func_132(var uParam0)
{
	if (!func_60(uParam0))
	{
		return 0f;
	}
	if (func_168(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_165() - uParam0->f_1);
}

void func_133(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_80(*uParam2, iParam3))
	{
		return;
	}
	(Global_40.f_11623[iParam0 /*8*/])->f_6++;
	if ((Global_40.f_11623[iParam0 /*8*/])->f_6 == 1 && func_257(func_256(joaat("SPECIAL_PED_INTERACTION"))) < 5)
	{
		func_258(func_256(joaat("SPECIAL_PED_INTERACTION")), 1);
	}
	(Global_40.f_11623[iParam0 /*8*/])->f_3 = func_58();
	func_44(uParam2, iParam3);
	((*Global_1396257)[iParam0 /*638*/])->f_631 = 1;
}

int func_134(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 6;
			break;
		case 2:
			iVar0 = 7;
			break;
		case 3:
			iVar0 = 8;
			break;
		case 4:
			iVar0 = 9;
			break;
		case 5:
			iVar0 = 10;
			break;
		case 6:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_135(int iParam0, int iParam1)
{
	if (!func_87(iParam0))
	{
		return;
	}
	func_259(iParam0, iParam1);
}

int func_136(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 0;
			break;
		case 2:
			iVar0 = 1;
			break;
		case 3:
			iVar0 = 2;
			break;
		case 4:
			iVar0 = 3;
			break;
		case 5:
			iVar0 = 4;
			break;
		case 6:
			iVar0 = 5;
			break;
	}
	return iVar0;
}

int func_137(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 14;
			break;
		case 2:
			iVar0 = 15;
			break;
		case 3:
			iVar0 = 16;
			break;
		case 4:
			iVar0 = 15;
			break;
		case 5:
			iVar0 = 14;
			break;
		case 6:
			iVar0 = 16;
			break;
	}
	return iVar0;
}

int func_138(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 12;
			break;
		case 2:
			iVar0 = 13;
			break;
		case 3:
			iVar0 = 12;
			break;
		case 4:
			iVar0 = 13;
			break;
		case 5:
			iVar0 = 12;
			break;
		case 6:
			iVar0 = 13;
			break;
	}
	return iVar0;
}

void func_139(var uParam0, int iParam1)
{
	uParam0->f_266 = uParam0->f_265;
	uParam0->f_265 = iParam1;
}

void func_140(var uParam0)
{
	if (func_12(Global_35, uParam0->f_164, 0, 1))
	{
		if (uParam0->f_267 != 4 || !func_260(uParam0, 4))
		{
			func_261(uParam0, 4);
			func_139(uParam0, 2);
		}
		else if (!func_262(&(uParam0->f_149[0]), 1))
		{
			func_263(uParam0, 1);
		}
	}
	else if (func_12(Global_35, uParam0->f_163, 0, 1))
	{
		if (uParam0->f_267 != 3 || !func_260(uParam0, 3))
		{
			func_261(uParam0, 3);
			func_139(uParam0, 2);
		}
		else if (!func_262(&(uParam0->f_149[0]), 1))
		{
			func_263(uParam0, 1);
		}
	}
	else if (func_12(Global_35, uParam0->f_162, 0, 1))
	{
		if (uParam0->f_267 != 2 || !func_260(uParam0, 2))
		{
			func_261(uParam0, 2);
			func_139(uParam0, 2);
		}
		else if (!func_262(&(uParam0->f_149[0]), 1))
		{
			func_263(uParam0, 1);
		}
	}
	else if (func_12(Global_35, uParam0->f_161, 0, 1))
	{
		if (uParam0->f_267 != 1 || !func_260(uParam0, 1))
		{
			func_261(uParam0, 1);
			func_139(uParam0, 2);
		}
		else if (!func_262(&(uParam0->f_149[0]), 1))
		{
			func_263(uParam0, 1);
		}
	}
	else if (!func_145(&(uParam0->f_149[0]), -1073489615))
	{
		func_263(uParam0, 0);
	}
}

int func_141(var uParam0)
{
	if (func_260(uParam0, uParam0->f_267))
	{
		return 1;
	}
	else if (!func_145(&(uParam0->f_149[0]), 242628503))
	{
		func_261(uParam0, uParam0->f_267);
	}
	return 0;
}

void func_142(var uParam0)
{
	if (func_2(uParam0->f_173, 2097152))
	{
		switch (uParam0->f_303)
		{
			case 0:
				func_67(&(uParam0->f_304), 0);
				if (uParam0->f_307 <= 0f)
				{
					uParam0->f_307 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 12f);
				}
				if (func_264(&(uParam0->f_304), uParam0->f_307))
				{
					uParam0->f_303 = 1;
				}
				break;
			case 1:
				if (func_265(uParam0))
				{
					uParam0->f_303 = 2;
				}
				break;
			case 2:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_302))
				{
					if (func_266(&(uParam0->f_149[0]), uParam0->f_302, joaat("SPEECH_PARAMS_FORCE_SHOUTED"), Global_35, 1, "TINY_HERMIT", uParam0->f_301, 1))
					{
						uParam0->f_293[uParam0->f_300] = 1;
						func_131(&(uParam0->f_304));
						uParam0->f_303 = 3;
					}
				}
				break;
			case 3:
				if (func_264(&(uParam0->f_304), 2f))
				{
					uParam0->f_303 = 4;
				}
				break;
			case 4:
				uParam0->f_302 = "";
				uParam0->f_300 = -1;
				uParam0->f_301 = 0;
				uParam0->f_307 = -1f;
				func_65(&(uParam0->f_304));
				uParam0->f_303 = 0;
				break;
		}
	}
}

int func_143(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0);
	bVar1 = ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam0, 0);
	if (bVar0 || bVar1)
	{
		return 1;
	}
	bVar3 = ANIMSCENE::_0x25557E324489393C(*uParam0);
	bVar2 = ANIMSCENE::_0x59606519FF9D3EC2(*uParam0, 1);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		return 0;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return 0;
}

void func_144(var uParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_172, "CS_TINYHERMIT", &(uParam0->f_149[0]), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_172, "w_shotgun_doubleBarrel01", &(uParam0->f_151[0]), 0);
}

int func_145(bool bParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (!PED::IS_PED_INJURED(bParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(bParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_146(bool bParam0, char* sParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_3 = iParam2;
	Var0.f_6 = iParam5;
	Var0.f_1 = uParam4;
	Var0.f_4 = uParam3;
	return func_267(bParam0, &Var0);
}

bool func_147(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

void func_148(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_147(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_268(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_269(iVar0);
	*uParam0 = 0;
}

void func_149(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_148(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_70(iParam0, 0);
		}
	}
}

int func_150(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && bParam1)
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && bParam1)
	{
		if (!OBJECT::_0xB5DED7B65C604FDF(iParam0))
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

int func_151(int iParam0)
{
	if (func_270(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

void func_152(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_151(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, iParam3);
	}
}

void func_153(int iParam0, bool bParam1)
{
	if (func_151(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_154(int iParam0, bool bParam1)
{
	if (func_151(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_155(int iParam0, bool bParam1)
{
	if (func_151(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_156()
{
	return 1;
}

int func_157()
{
	return 1;
}

void func_158(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_271(vParam0))
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
			if (func_272(vVar2, vParam0, 2f, 1))
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

void func_159(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_273(&Global_0, 8);
	}
	if (!func_274() || func_46() != -1)
	{
		return;
	}
	func_273(&Global_0, 1);
}

void func_160()
{
	AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
}

void func_161(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_275(1);
	}
}

void func_162(int iParam0)
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
			func_161(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_275(1);
	}
}

bool func_163(int iParam0)
{
	int iVar0;

	iVar0 = func_276(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_164(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_165()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_166(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_167(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_168(var uParam0)
{
	return func_164(*uParam0, 2);
}

bool func_169(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_170(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_171(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_163(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_172(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_277(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_173(int iParam0)
{
	int iVar0;

	iVar0 = func_278();
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case joaat("HIGHPRESSURE"):
				case joaat("SUNNY"):
					return 1;
				default:
					return 0;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case joaat("OVERCAST"):
				case joaat("HIGHPRESSURE"):
				case joaat("OVERCASTDARK"):
				case joaat("CLOUDS"):
				case joaat("SUNNY"):
					return 1;
				default:
					return 0;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case joaat("DRIZZLE"):
				case joaat("OVERCAST"):
				case joaat("FOG"):
				case joaat("HIGHPRESSURE"):
				case joaat("OVERCASTDARK"):
				case joaat("SNOWLIGHT"):
				case joaat("CLOUDS"):
				case joaat("MISTY"):
				case joaat("SUNNY"):
				case joaat("SNOWCLEARING"):
					return 1;
				default:
					return 0;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case joaat("DRIZZLE"):
				case joaat("THUNDER"):
				case joaat("OVERCAST"):
				case joaat("FOG"):
				case joaat("SHOWER"):
				case joaat("SNOW"):
				case joaat("HIGHPRESSURE"):
				case joaat("SLEET"):
				case joaat("OVERCASTDARK"):
				case joaat("CLOUDS"):
				case joaat("RAIN"):
				case joaat("MISTY"):
				case joaat("SUNNY"):
				case joaat("SNOWCLEARING"):
					return 1;
				default:
					return 0;
			}
			break;
		case 4:
			return 1;
		case 5:
			switch (iVar0)
			{
				case joaat("FOG"):
				case joaat("MISTY"):
					return 1;
			}
			break;
	}
	return 0;
}

int func_174(var uParam0, var uParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_279(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_175(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_280(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_0xB56D41A694E42E86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_0x18262CAFEBB5FBE1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		if (!func_281(iVar1, 0))
		{
			func_282(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return 1;
	}
	return 0;
}

int func_176(var uParam0)
{
	if (!func_60(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_168(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_199() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_177()
{
	return Global_1392040->f_6;
}

int func_178()
{
	if (Global_1914319->f_18941.f_17)
	{
		return 1;
	}
	return 0;
}

void func_179(var uParam0, bool bParam1, int iParam2)
{
	func_283(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_284(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_50(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_285(1))
						{
							func_50(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_285(1) || *uParam0 & 8192 != 0))
				{
					func_51(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_286(uParam0))
			{
				uParam0->f_15 = func_199();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_199() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_287(uParam0);
}

int func_180(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(bParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(bParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_288(bParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_289(bParam0, iVar2) <= func_290(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_181(bool bParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = bParam0;
	}
	if (func_291(iParam2, 1, 1, 1, 0))
	{
		func_50(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_292(uParam1, 1);
	func_293();
}

int func_182(bool bParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_77(bParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_294(uParam1);
			if (func_295(uParam1, bParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_296(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_292(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_292(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_183(bool bParam0, bool bParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (bParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_297(bParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_294(uParam2);
		if (func_295(uParam2, bParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_296(uParam2)
				{
					func_292(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_184(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == bParam0)
		{
			return 0;
		}
	}
	bVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_288(bParam0, uParam1, bVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_296(uParam1)
		{
			fVar3 = func_294(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(bParam0, bVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_185(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_298(bParam1, bParam2, bParam3);
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

int func_186(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_199();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_187(var uParam0, bool bParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_299(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(bParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(bParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(bParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), bParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_195(uParam2, bParam1))
			{
				func_292(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_188(var uParam0, bool bParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_300(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_195(uParam2, bParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_292(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_189(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) };
	iVar3 = func_301(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_292(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_292(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_302(bParam1, vVar0, vVar4))
					{
						func_292(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_292(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_302(bParam1, vVar0, vVar7))
					{
						func_292(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_190(bool bParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_288(bParam0, uParam1, &(Global_1935630->f_34[iVar0])) || bParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_303(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_304(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = bParam0;
						return 1;
					}
				}
			}
			if (func_305(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = bParam0;
				return 1;
			}
			else if (func_306(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = bParam0;
				return 1;
			}
			else if (func_307(uParam1, bParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = bParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_191(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*bParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*bParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*bParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*bParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*bParam0, 0);
			return 1;
	}
	return 0;
}

int func_192(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_199();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_193(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(bParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(bParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bVar0, 1, 1))
			{
				return 1;
			}
			bVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(bVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(bVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(bVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, PED::GET_MOUNT(bVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(bParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(bParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_308(bVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(bParam0) || PED::_0x947E43F544B6AB34(bParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, bParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(bParam0, 400))
		{
			return 1;
		}
	}
	if (func_309(bVar0, bParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == bParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (PED::IS_PED_BEING_JACKED(bParam0))
		{
			if (PED::GET_PEDS_JACKER(bParam0) == bVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(bVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_194(var uParam0, bool bParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(bParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(bParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_195(var uParam0, bool bParam1)
{
	if (func_310(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(bParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(bParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(bParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(bParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(bParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) != 0)
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(bParam1))
	{
		return 1;
	}
	return 0;
}

int func_196(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
		{
			return 1;
		}
		if (func_33(bParam0, bParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1) && PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_197()
{
}

int func_198(var uParam0, bool bParam1)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;

	bVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (bVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(bVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, false) };
		if (func_311(bVar0, bParam1, vVar1))
		{
			uParam0->f_9 = func_199();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(bVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					bVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(bVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(bVar7))
					{
						if (func_45(bVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar7, bParam1))
							{
								uParam0->f_9 = func_199();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_199()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_200()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_199() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_201(var uParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(bParam1))
	{
		return 0;
	}
	fVar0 = func_290(uParam0);
	if (uParam0->f_12 > func_312(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_313(bParam1);
	iVar1 = func_314(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(bParam1, Global_35, true, 0) == 1)) || ((PED::_0x06087579E7AA85A9(bParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(bParam1, uParam0->f_14, true, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_202(bool bParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_315(bParam0, bParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_203(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_316(bParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(bParam0, Global_35, true, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(bParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(bParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(bParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return 0;
			}
			bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			bVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (bVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(bVar5))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return 0;
			}
			return 1;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(bParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return 0;
			}
			bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			bVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(bParam0, bVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
				{
					if (!func_317(uParam1, bParam0))
					{
						if (func_45(bVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_204(bool bParam0, var uParam1)
{
	if (!func_318(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(bParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_199();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_206(bool bParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*bParam0, PLAYER::PLAYER_ID(), 0);
}

int func_207(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_199();
	}
	else if (func_199() - uParam1->f_4) > func_319(uParam1)
	{
		return func_320(bParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_208(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_209(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_210(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_211(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_212(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_213(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_212(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_321(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_131(&(iParam1->f_13));
		}
		if (func_322(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_323(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_213(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_324(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_325(*uParam0, 1, 1);
						}
					}
					else if (func_326(iParam1, 22))
					{
						func_325(*uParam0, 0, 1);
					}
				}
				if (func_327(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_328(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_329(iParam8);
					if (func_330(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_331(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_332(iParam1, uParam3, fVar8);
					if (func_333(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_37(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_334(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_327(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_335(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_330(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_328(uParam0, func_327(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_329(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_37(uParam3, 0, 0, 1, 1);
					}
					func_336(iParam1, 1);
				}
				func_332(iParam1, uParam3, fVar8);
				if (func_334(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_38(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_214(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	var uVar2;

	iVar0 = func_337(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = ((*uParam1)[iVar0 /*17*/])->f_13;
		uVar2 = ((*uParam1)[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_338(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_215(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_46() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_216(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_339(iParam0, &iVar0, &iVar1);
	if (!func_340(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_341(iVar0, iVar1);
}

var func_217(bool bParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_218(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_342(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

struct<11> func_219(int iParam0)
{
	struct<11> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = 665633627;
			Var0.f_1 = { 3025.557f, 1779.699f, 83.2056f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "RandomEventBlock";
			break;
		case 1:
			Var0 = 665633627;
			Var0.f_1 = { 3025.943f, 1772.33f, 83.2056f };
			Var0.f_4 = { 0f, 0f, -23f };
			Var0.f_7 = { 25f, 25f, 30f };
			Var0.f_10 = "Seen";
			break;
		case 2:
			Var0 = -1612834106;
			Var0.f_1 = { 3044.034f, 1771.698f, 85.75678f };
			Var0.f_4 = { 0f, 0f, -20f };
			Var0.f_7 = { 25f, 10f, 10f };
			Var0.f_10 = "SeenBlock";
			break;
		case 3:
			Var0 = 665633627;
			Var0.f_1 = { 3026.856f, 1775.335f, 83.2056f };
			Var0.f_4 = { 0f, 0f, 160f };
			Var0.f_7 = { 10f, 6f, 10f };
			Var0.f_10 = "Trigger";
			break;
		case 4:
			Var0 = -1612834106;
			Var0.f_1 = { 3024.427f, 1769.17f, 85.09901f };
			Var0.f_4 = { 0f, 0f, 160f };
			Var0.f_7 = { 18f, 25f, 20f };
			Var0.f_10 = "StayAway";
			break;
		case 5:
			Var0 = 665633627;
			Var0.f_1 = { 3023.705f, 1768.557f, 83.9391f };
			Var0.f_4 = { 0f, 0f, 160f };
			Var0.f_7 = { 10f, 16f, 8f };
			Var0.f_10 = "LookIKVolume";
			break;
		case 6:
			Var0 = -1612834106;
			Var0.f_1 = { 3027.851f, 1779.131f, 83.547f };
			Var0.f_4 = { 0f, 0f, -19.151f };
			Var0.f_7 = { 8.632f, 6.255f, 7.358f };
			Var0.f_10 = "ShackInterior";
			break;
		case 7:
			Var0 = 665633627;
			Var0.f_1 = { 3023.276f, 1768.44f, 82.777f };
			Var0.f_7 = { 9.314f, 12.025f, 6.857f };
			Var0.f_4 = { 0f, 0f, -19.986f };
			Var0.f_10 = "ShackExit";
			break;
		case 8:
			Var0 = -1612834106;
			Var0.f_1 = { 3023.799f, 1768.604f, 82.897f };
			Var0.f_4 = { 0f, 0f, -21.129f };
			Var0.f_7 = { 24.44f, 15.408f, 11.345f };
			Var0.f_10 = "ShackAimFront";
			break;
		case 9:
			Var0 = -1612834106;
			Var0.f_1 = { 3016.639f, 1783.032f, 82.197f };
			Var0.f_4 = { 0f, 0f, -21.276f };
			Var0.f_7 = { 14.542f, 18.82f, 13.379f };
			Var0.f_10 = "ShackAimSideWindow";
			break;
		case 10:
			Var0 = -1612834106;
			Var0.f_1 = { 3030.316f, 1790.982f, 82.668f };
			Var0.f_4 = { 0f, 0f, -21.489f };
			Var0.f_7 = { 25.242f, 16.928f, 12.362f };
			Var0.f_10 = "ShackAimBack";
			break;
		case 11:
			Var0 = -1612834106;
			Var0.f_1 = { 3024.178f, 1775.486f, 82.984f };
			Var0.f_4 = { 0f, 0f, -20.785f };
			Var0.f_7 = { 2.388f, 2.673f, 6.328f };
			Var0.f_10 = "ShackAtDoor";
			break;
		case 12:
			Var0 = 665633627;
			Var0.f_1 = { 3022.437f, 1764.7f, 82.499f };
			Var0.f_4 = { 0f, 0f, -19.998f };
			Var0.f_7 = { 47.598f, 38.92f, 12.015f };
			Var0.f_10 = "ShackAnimalRestrictions";
			break;
	}
	return Var0;
}

int func_220(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_271(vParam0))
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
		if (func_343(vParam0))
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
	func_344(iVar0, bParam8);
	return iVar0;
}

int func_221()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_222(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_223(int iParam0)
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

int func_224(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_345(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_221())
	{
		return -1;
	}
	iVar0 = func_222(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_346(iVar1, 0);
	func_347(iVar1, 0);
	func_259(iVar1, 0);
	func_253(iVar1, 0);
	func_348(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_349(iVar1, iParam4);
	}
	return iVar1;
}

bool func_225(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_226(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 128);
	}
	else
	{
		func_50(&(uParam0->f_1), 128);
	}
}

void func_227(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_50(uParam0, 268435456);
	}
	else
	{
		func_51(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_50(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_51(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_50(uParam0, 536870912);
	}
	else
	{
		func_51(uParam0, 536870912);
	}
}

int func_228(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_229(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_4;
	}
	return 0;
}

bool func_230(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;

	bVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	func_350(bVar0, bParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

int func_231(int iParam0)
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

bool func_232(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_233(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"):
		case joaat("WEAPON_SHOTGUN_SAWEDOFF"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_234(bool bParam0)
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

int func_235(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && bParam1 > 0)
	{
		bParam1 = false;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
	{
		Var0 = { func_351(bParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_352((375 + iVar28), 1);
			if (func_353(bParam0, &Var0, iVar5, 0))
			{
				if (func_354(bParam0, &Var6, iVar5))
				{
					Var29 = { func_355(bParam0, Var0, iVar5, 0) };
					func_356(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_357(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
					{
						return 0;
					}
					func_358(WEAPON::_0x5C2EA6C44F515F34(bParam0), bParam1, iParam6);
					func_359(bParam0, bParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
				{
					return 0;
				}
				if (bParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_236(int iParam0, bool bParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*bParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN") || *bParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_PIG")) || *bParam1 == joaat("WEAPON_REVOLVER_DOUBLEACTION_EXOTIC")) || *bParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY")) || *bParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_GOLDEN")) || *bParam1 == joaat("WEAPON_PISTOL_MAUSER_DRUNK")) || *bParam1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || *bParam1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_237(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

bool func_238(bool bParam0, int iParam1)
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

int func_239(bool bParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_240(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request_name");
	if (!func_238(bParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_241(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

void func_242(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(bParam0, iVar0);
}

struct<2> func_243(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = "SPTH_UC_TALK";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 1:
			Var0 = "INTERACT_DEFUSE";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 2:
			Var0 = "INTERACT_INSULT";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
			break;
	}
	return Var0;
}

char* func_244()
{
	return "DEFUSE_ON_PROPERTY";
}

void func_245(int* iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = uParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_147(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_360(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_361(iParam0->f_6, iParam0->f_5, 0);
			}
			func_362(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_363(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

char* func_246(var uParam0)
{
	if (func_6())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
		{
			case 0:
				*uParam0 = 2;
				return "INSULT_TINYHERMIT_CONV_PART1";
			case 1:
				*uParam0 = 2;
				return "INSULT_TINYHERMIT_CONV_PART3";
			case 2:
				*uParam0 = 6;
				return "INSULT_TERRITORY_INTRUDED_CONV_PART3";
			case 3:
				*uParam0 = 5;
				return "INSULT_TERRITORY_INTRUDED_CONV_PART1";
			case 4:
				*uParam0 = 4;
				return "INSULT_TERRITORY_INTRUDED_CONV_PART2";
			case 5:
				*uParam0 = 3;
				return "INSULT_TERRITORY_INTRUDED_CONV_PART1";
			case 6:
				*uParam0 = 1;
				return "INSULT_TERRITORY_INTRUDED_CONV_PART2";
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				*uParam0 = 15;
				return "INSULT_MALE_CONV_PART1";
			case 1:
				*uParam0 = 18;
				return "INSULT_MALE_CONV_PART1";
			case 2:
				*uParam0 = 1;
				return "INSULT_MALE_CONV_PART1";
			case 3:
				*uParam0 = 2;
				return "INSULT_MALE_CONV_PART1";
			case 4:
				*uParam0 = 19;
				return "INSULT_MALE_CONV_PART1";
		}
	}
	*uParam0 = 1;
	return "INSULT_MALE_CONV_PART1";
}

void func_247(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_364(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

Vector3 func_248(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { func_130("SPTTL_SPEECHA") };
			break;
		case 1:
			vVar0 = { func_130("SPTTL_SPEECHB") };
			break;
		case 3:
			vVar0 = { func_130("SPTTL_SPEECHD") };
			break;
		case 6:
			vVar0 = { func_130("SPTTL_SPEECHG") };
			break;
		case 7:
			vVar0 = { func_130("SPTTL_SPEECHH") };
			break;
		case 8:
			vVar0 = { func_130("SPTTL_SPEECHI") };
			break;
		case 11:
			vVar0 = { func_130("SPTTL_LINGERB") };
			break;
		case 14:
			vVar0 = { func_130("SPTTL_LINGERE") };
			break;
		case 25:
			vVar0 = { func_130("SPTTL_LINGERP") };
			break;
		case 29:
			vVar0 = { func_130("SPTTL_RETURNB") };
			break;
	}
	return vVar0;
}

bool func_249(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_365(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_250(var uParam0)
{
	return uParam0;
}

int func_251(bool bParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(bParam0) && AUDIO::_0x1ECC76792F661CF5(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_252(var uParam0, float fParam1)
{
	if (func_264(uParam0, fParam1))
	{
		func_65(uParam0);
		return 1;
	}
	return 0;
}

void func_253(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

int func_254(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_366())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_367(func_366(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

int func_255(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

struct<2> func_256(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_257(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_258(var uParam0, int iParam1, bool bParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, bParam2);
}

void func_259(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

int func_260(var uParam0, int iParam1)
{
	vector3 vVar0;

	if (iParam1 == 0)
	{
		return 0;
	}
	vVar0 = { func_368(iParam1) };
	if (func_369(&(uParam0->f_149[0]), vVar0, 0) <= (0.5f * 0.5f))
	{
		return 1;
	}
	return 0;
}

int func_261(var uParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var4;

	if (iParam1 == 0)
	{
		return 0;
	}
	if ((!func_66(&(uParam0->f_149[0]), 0) || PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID())) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 0;
	}
	uParam0->f_267 = iParam1;
	Var0 = { func_368(iParam1) };
	if (!func_260(uParam0, iParam1))
	{
		if (!func_145(&(uParam0->f_149[0]), -1672495956))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(&(uParam0->f_149[0]), Var0, 2f, -1, 0.1f, 2, Var4, Var0.f_3);
		}
	}
	else if (!func_145(&(uParam0->f_149[0]), -1073489615))
	{
		TASK::TASK_AIM_AT_ENTITY(&(uParam0->f_149[0]), Global_35, -1, 0, 0);
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_262(bool bParam0, bool bParam1)
{
	if (((((func_145(bParam0, 780511057) || func_145(bParam0, -219932022)) || func_145(bParam0, 1120685857)) || func_145(bParam0, -2117564886)) || func_145(bParam0, 655999185)) || func_145(bParam0, 1345172471))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(bParam0, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (func_145(bParam0, -653332088) || func_145(bParam0, 167901368))
		{
			return 1;
		}
		if (PED::IS_PED_SHOOTING(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_263(var uParam0, int iParam1)
{
	if ((!func_66(&(uParam0->f_149[0]), 0) || PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID())) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 0;
	}
	TASK::CLEAR_PED_TASKS(&(uParam0->f_149[0]), 1, 0);
	if (!func_2(uParam0->f_173, 2097152))
	{
		if (func_146(&(uParam0->f_149[0]), "OPENS_FIRE", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), Global_35, uParam0->f_168, 0))
		{
			func_4(&(uParam0->f_173), 2097152);
		}
	}
	PED::SET_PED_COMBAT_MOVEMENT(&(uParam0->f_149[0]), 0);
	TASK::TASK_COMBAT_PED(&(uParam0->f_149[0]), Global_35, 0, 0);
	return 1;
}

int func_264(var uParam0, float fParam1)
{
	if (!func_60(uParam0))
	{
		return 0;
	}
	if (func_62(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

int func_265(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = "";
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	iVar2 = -1;
	if (&uParam0->f_293[iVar1])
	{
		return 0;
	}
	switch (iVar1)
	{
		case 0:
			sVar0 = "FIGHT_RESPONSE";
			iVar2 = 0;
			break;
		case 1:
			sVar0 = "FIGHT_RESPONSE";
			iVar2 = 1;
			break;
		case 2:
			sVar0 = "MELEE_BRING_IT_ON";
			iVar2 = 0;
			break;
		case 3:
			sVar0 = "MELEE_BRING_IT_ON";
			iVar2 = 1;
			break;
		case 4:
			sVar0 = "GENERIC_INSULT_HIGH_MALE";
			iVar2 = 0;
			break;
		case 5:
			sVar0 = "GENERIC_INSULT_HIGH_NEUTRAL";
			iVar2 = 0;
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		uParam0->f_302 = sVar0;
		uParam0->f_300 = iVar1;
		uParam0->f_301 = iVar2;
		return 1;
	}
	return 0;
}

bool func_266(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, var uParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = bParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_267(bParam0, &Var0);
}

var func_267(bool bParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(bParam0, uParam1);
}

int func_268(int iParam0)
{
	return iParam0;
}

void func_269(int iParam0)
{
	if (!func_370(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

bool func_270(int iParam0)
{
	return iParam0 != 0;
}

int func_271(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_272(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_273(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_274()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

void func_275(bool bParam0)
{
	if (bParam0)
	{
		func_50(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_51(&(Global_40.f_12018.f_42), 1);
	}
}

int func_276(int iParam0)
{
	if (!func_87(iParam0))
	{
		return -1;
	}
	return func_371(iParam0);
}

int func_277(int iParam0)
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
		iVar0 = func_371(iParam0);
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

int func_278()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

int func_279(var uParam0, vector3 vParam1, bool bParam4)
{
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (ENTITY::_0x59B57C4B06531E1E(vParam1, bParam4, *uParam0, 2) > 0)
	{
		ITEMSET::_0x20A4BF0E09BEE146(*uParam0);
		return 1;
	}
	ITEMSET::_0x20A4BF0E09BEE146(*uParam0);
	return 0;
}

int func_280(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_0x59B57C4B06531E1E(vParam2, bParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *uParam0);
		*iParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(*iParam1)))
				{
					if (func_372(Global_35, *iParam1, 0))
					{
					}
					else
					{
						ITEMSET::_0x20A4BF0E09BEE146(*uParam0);
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	ITEMSET::_0x20A4BF0E09BEE146(*uParam0);
	return 0;
}

int func_281(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return 1;
}

void func_282(int iParam0, vector3 vParam1, float fParam4)
{
	if (!func_145(*iParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam0, vParam1, 6, 0, fParam4, -1, 0);
	}
}

void func_283(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_373();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_374(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == joaat("WEAPON_LASSO"))
				{
					Global_1935630->f_30 = PED::_0xB65A4DAB460A19BD(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630->f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46))
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_284(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_285(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_375(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_286(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_46() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_376(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_376(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_314(iVar0) == -1)
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_287(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_377(uParam0);
	}
}

int func_288(bool bParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(bParam2))
	{
		iVar1 = func_314(bParam2);
	}
	else
	{
		iVar1 = func_313(bParam2);
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		iVar0 = func_314(bParam0);
	}
	else
	{
		iVar0 = func_313(bParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_49(*uParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(bParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(bParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return 1;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return 1;
	}
	return 0;
}

float func_289(bool bParam0, bool bParam1)
{
	return func_33(bParam0, bParam1, 1, 1);
}

float func_290(var uParam0)
{
	return uParam0->f_26;
}

int func_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return 1;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return 0;
}

void func_292(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 134217728);
	}
	else
	{
		func_51(uParam0, 134217728);
	}
}

void func_293()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

float func_294(var uParam0)
{
	return uParam0->f_17;
}

int func_295(var uParam0, bool bParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_49(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_296(var uParam0)
{
	return uParam0->f_18;
}

int func_297(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	bVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(bVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(bVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_217(bVar0, 0)))
		{
			if (func_342(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_298(bool bParam0, bool bParam1, bool bParam2)
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

float func_299(var uParam0)
{
	return uParam0->f_23;
}

int func_300(var uParam0)
{
	return uParam0->f_21;
}

int func_301(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_302(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_378(bParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(bParam0, vParam4, 17))
		{
			return 1;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_303(bool bParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(bParam0, 9, false))
	{
		if (Global_1935630->f_44 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_46) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_379(bParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_304(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	bVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(bVar0))
	{
		return 1;
	}
	return 0;
}

int func_305(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_380(bParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(bParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_306(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_380(bParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(bParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_307(var uParam0, bool bParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_380(bParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(bParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(bParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_308(bool bParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(bParam0))
	{
		return 0;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(bParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return 0;
	}
	return 1;
}

int func_309(bool bParam0, bool bParam1)
{
	if (PED::_0xB65A4DAB460A19BD(bParam0) == bParam1)
	{
		return 1;
	}
	if (func_381(bParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(bParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(bParam0) == bParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_310(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_311(bool bParam0, bool bParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_45(bParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_312(var uParam0)
{
	return uParam0->f_24;
}

int func_313(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(bParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_314(bool bParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(bParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_315(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(bParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(bParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_308(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(bParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, bParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(bParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_33(bParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), bParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_33(bParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630->f_40, bParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(bParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_316(bool bParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	func_375(1, &bVar0, &bVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (bVar0 != bParam0)
		{
			if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
				{
					if (!bParam2 || !func_317(uParam1, bVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		if (bVar1 != bParam0)
		{
			if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
			{
				if (!bParam2 || !func_317(uParam1, bVar1))
				{
					if (func_45(bVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_317(var uParam0, bool bParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(bParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(bParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(bParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(bParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_318(int iParam0)
{
	if (func_88())
	{
		return 0;
	}
	return func_382(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_319(var uParam0)
{
	return uParam0->f_20;
}

int func_320(bool bParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(bParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

float func_321(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_322(bool bParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_383(bParam0, iParam1))
		{
			if (!func_49(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(bParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(bParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(bParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(bParam0, 178, true);
				func_37(uParam2, 0, 0, 1, 0);
				func_50(&(iParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_49(iParam1->f_10, 1))
		{
			func_384(uParam2);
			PED::SET_PED_CONFIG_FLAG(bParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(bParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(bParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(bParam0, 178, false);
			func_51(&(iParam1->f_10), 1);
		}
	}
	return 0;
}

int func_323(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_49(iParam4, 32);
		func_149(iParam1, uParam2, 0);
		iVar5 = func_385(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_37(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_49(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_49(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_49(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_49(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_49(iParam4, 8388608) || func_49(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_49(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_49(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_326(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_326(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_49(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_386(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_49(iParam4, 268435456))
			{
				iVar8 = func_387(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_388(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_326(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_49(iParam4, 2) || func_49(iParam4, 16))
			{
				func_325(*uParam0, 1, 1);
			}
			else
			{
				func_325(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_324(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_325(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_326(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_327(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::_DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return 1;
		}
		if (func_389(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_328(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT((*uParam4)[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_247(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_49(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_329(int iParam0)
{
	if (func_49(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), true);
	}
	if (func_49(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_49(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_330(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_390(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_391(Global_35)) || func_392(Global_35)) || func_393(Global_35));
	fVar12 = -1f;
	if (func_60(&(iParam1->f_13)))
	{
		fVar12 = func_62(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_147(((*uParam4)[iVar0 /*17*/])->f_6);
		func_394(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_395(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_396(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_37(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_397(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_149(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET(uParam4[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, ((*uParam4)[iVar0 /*17*/])->f_11, ((*uParam4)[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_398(iParam1, fParam6, iParam1->f_9))
					{
						func_131(&(iParam1->f_18));
						if (bVar6)
						{
							func_397(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_399(iParam1, fParam2);
	}
	return bVar5;
}

void func_331(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_332(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_400((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_399(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_333(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_401(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_402(iParam1, 0);
				func_149(iParam1, uParam2, func_326(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_334(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_131(&(iParam1->f_18));
			return 0;
		}
		else if (func_60(&(iParam1->f_18)))
		{
			func_65(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_60(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_252(&(iParam1->f_18), fParam2);
	return 1;
}

void func_335(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_394(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_336(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_337(int* iParam0)
{
	if (func_326(iParam0, 0))
	{
		if (func_403(iParam0))
		{
			func_336(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_338(bool bParam0, bool bParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_404(bParam0, bParam1, sParam2, sParam3, fParam4, uParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_339(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_340(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_405(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_406(iParam0))
	{
		return 0;
	}
	if (func_407(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_408(iParam0, 1)) || func_409(32768))
	{
		if (!func_408(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_410())
	{
		return 0;
	}
	return 1;
}

void func_341(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_342(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_343(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_344(int iParam0, bool bParam1)
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

bool func_345(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_346(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_411(iParam0);
	}
	else
	{
		func_412(iParam0, iParam1);
	}
	func_413();
}

void func_347(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_348(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = iParam1;
}

void func_349(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

void func_350(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(bParam1));
	if (!bParam7)
	{
		if (func_414(bParam1))
		{
			func_121(bParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(bParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(bParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(bParam0, WEAPON::_0xD42514C182121C23(bParam1));
		}
		if (PED::IS_PED_MALE(bParam0) && !bParam3)
		{
			func_415(bParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(bParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(bParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(bParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_416(bParam0, 0);
			bVar0 = true;
		}
		func_417(bParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
	}
}

struct<5> func_351(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_418(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_419(bParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0 = { func_355(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_420(bParam1) };
			if (iParam2 && func_421(bParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_353(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_353(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_354(bParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_422(bParam1) };
			switch (func_423(bParam0))
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
			if (func_424(bParam0, -1823706425))
			{
				Var0 = { func_355(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_424(bParam0, -1483207246))
			{
				Var0 = { func_355(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
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
				Var27.f_9 = -1591664384;
				if (!func_425(Var0, &Var27, bParam1, 0))
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
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_352(int iParam0, int iParam1)
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
			return -421952220;
			return -1087003323;
			return 1231618917;
			return -1183777174;
			return -841767082;
			return 1043717005;
			return 142663787;
			return 1718143051;
			return -6605744;
			return 953047564;
			return 769706682;
			return 1635590003;
			return -2047978619;
			return -586319254;
			return 249896112;
			return -1060513333;
			return 1317351007;
			return -500478573;
			return -806573802;
			return -1109949204;
			return -740156546;
			return -684532710;
			return 1158805436;
			return -559473670;
			return -797147251;
			return -382216265;
			return 1419177114;
			return 1704297235;
			return -1139016418;
			return 897705377;
			return 17961769;
			return 205582207;
			return 900740963;
			return -1369589344;
			return -1695823795;
			return -41453074;
			return 539767227;
			return 1210490314;
			return -399684751;
			return 2138893455;
			return -1617010487;
			return -832377028;
			return -428040245;
			return 1279288897;
			return -594897905;
			return -1360459240;
			return 1838428396;
			return -1467846997;
			return -490610263;
			return -1885413079;
			return 708884155;
			return -134459952;
			return -1912136700;
			return -1268031552;
			return 1177953227;
			return 2130805296;
			return 38093490;
			return -269153218;
			return -1995068011;
			return -164284834;
			return 1446463345;
			return 1501315823;
			return -750379482;
			return -929560937;
			return 608323241;
			return 1030796013;
			return 1915057434;
			return -1582276476;
			return 692059311;
			return 2062839241;
			return -1884531872;
			return -866434534;
			return -1252192421;
			return 1243288963;
			return -1953772189;
			return 754411745;
			return 545309006;
			return -1089810811;
			return 1957869400;
			return -241412332;
			return -1548010959;
			return 550150488;
			return 946565453;
			return 434443248;
			return -1709914938;
			return 366686112;
			return -1370063350;
			return 2126829550;
			return 226552910;
			return 721193431;
			return -315672460;
			return 623544501;
			return 259556714;
			return -2125361825;
			return 1078230356;
			return 1885364811;
			return 1630382737;
			return 1738245512;
			return 1540262216;
			return 1016871472;
			return 13829069;
			return 737051352;
			return 1734614610;
			return -208715295;
			return 1435062936;
			return 1483055553;
			return 380335002;
			return -1079385677;
			return 676610411;
			return 2145419552;
			return 657238733;
			return 1850579281;
			return -1923957384;
			return -1142828108;
			return -1400618531;
			return -1433857135;
			return 209987206;
			return 1686943047;
			return -59178517;
			return 2134884601;
			return 651707517;
			return -633788535;
			return 116394463;
			return -1196973875;
			return 801752086;
			return 184475332;
			return -1880922659;
			return -898138634;
			return -2107418444;
			return -679970099;
			return -1531392549;
			return 1612483376;
			return 463930900;
			return -632148238;
			return 55303249;
			return 2108322089;
			return -1358896714;
			return 74475632;
			return -28710953;
			return -1791599168;
			return 1605938169;
			return 1255242276;
			return 636467727;
			return -1567688525;
			return -77886679;
			return -1057900679;
			return -1960888134;
			return -1719717295;
			return -1779244911;
			return -670540863;
			return 223362311;
			return 1150824567;
			return 974471191;
			return 1989683968;
			return 254804477;
			return 192057609;
			return 1553957817;
			return 2099829015;
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
			return -1948423372;
			return 981083654;
			return 1283289876;
			return -606884489;
			return -100418572;
			return 663645231;
			return 1442217033;
			return 1410986244;
			return 847409839;
			return 923926911;
			return 109995826;
			return -747412737;
			return 1114341727;
			return -539456939;
			return 45887121;
			return 913271624;
			return -1652812715;
			return -1791365775;
			return -979299941;
			return 713062001;
			return -575045963;
			return 1852965262;
			return -1398836354;
			return -1829885298;
			return -1773850357;
			return -564258009;
			return 2016532685;
			return -1070563798;
			return -1619221343;
			return -345571691;
			return 544288390;
			return 159578294;
			return -76852849;
			return 1110295244;
			return 2104563477;
			return 1947827651;
			return -933072766;
			return 2104388648;
			return -1677140601;
			return -2133097881;
			return -826678792;
			return -513522325;
			return 1970588249;
			return -2080032591;
			return 1758847745;
			return 895010282;
			return 1786352060;
			return -833319691;
			return 1591329969;
			return 2123222014;
			return -1578397674;
			return 1473261684;
			return -241855024;
			return 12999093;
			return -6796437;
			return -268116367;
			return -636470867;
			return 1737668280;
			return 892807236;
			return -733247890;
			return 24047176;
			return -1561999014;
			return -2052774042;
			return -997150586;
			return -1189569496;
			return 46488141;
			return 1046566686;
			return 325139909;
			return -1585141069;
			return 802754820;
			return 1415981582;
			return -1886147520;
			return 654877947;
			return -415648720;
			return 1221327846;
			return 923162715;
			return 625423581;
			return 326668608;
			return 669530755;
			return 429759982;
			return -2111934838;
			return 1886178087;
			return 1587783573;
			return -279722001;
			return 1310070322;
			return 724026534;
			return 137387616;
			return -653439684;
			return 1376835592;
			return -1824203570;
			return -1654197998;
			return 798987653;
			return 976923323;
			return 1167442289;
			return 986998820;
			return -2119169513;
			return -2015960939;
			return -1287636759;
			return -706917073;
			return -2166805;
			return -1391602433;
			return 1782075221;
			return 1282544585;
			return 1732594027;
			return -1058817012;
			return 1090546265;
			return -1783120823;
			return -1535745896;
			return -2086922122;
			return -1675198649;
			return 1189497682;
			return -1565675519;
			return -268973591;
			return 1039159916;
			return 1111816631;
			return 405591388;
			return 897456793;
			return 104187473;
			return 773808542;
			return -1120669954;
			return -1389278274;
			return 552979403;
			return -1571578784;
			return -708312114;
			return 688823508;
			return -1622147240;
			return 830292162;
			return 226276782;
			return -678416628;
			return -1098528034;
			return 316207340;
			return -1909200748;
			return -939652363;
			return joaat("SLOTID_PROGRESSION");
			return -375447933;
			return 537014919;
			return 1784584921;
			return 1084182731;
			return -1045471300;
			return 1617414719;
			return -787761753;
			return -490616606;
			return 1491346514;
			return -1311702610;
			return -904250715;
			return 1034665895;
			return -101524555;
			return 1419152594;
			return -451359317;
			return -1915385310;
			return 1315162488;
			return -361152079;
			return -2041626192;
			return -2077812539;
			return -1371514637;
			return 1730017037;
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return -1248299493;
			return 727393558;
			return 755611221;
			return -170255458;
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685 /* GXTEntry: "Right" */;
			return -649335959 /* GXTEntry: "Left" */;
			return -1876502240;
			return -2107032155;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1360128126;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_353(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	return func_426(bParam0, *uParam1, iParam2, iParam3) > 0;
}

int func_354(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_427(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_355(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_428(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_429(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

int func_356(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_430(bParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_425(*uParam1, &Var0, bParam6, 0))
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
	if (!func_357(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_429(bParam6), uParam1, bParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_357(bool bParam0)
{
	if (func_46() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_429(bParam0));
}

int func_358(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam1 < 1)
	{
		return 1;
	}
	if (!func_431(bParam0))
	{
		return 0;
	}
	if (!func_357(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, bParam0, bParam1, iParam2);
	return 1;
}

void func_359(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &bVar0, bParam0) && bVar0 < bParam1) && bVar0 < WEAPON::_0xD3750CCC00635FC2(bParam0))
	{
		iVar1 = func_432(WEAPON::_0xD3750CCC00635FC2(bParam0), bParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, bParam0, iVar1);
	}
}

void func_360(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_147(iParam0))
	{
		return;
	}
	iVar0 = func_268(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_361(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_147(iParam0))
	{
		return;
	}
	iVar0 = func_268(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_362(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_147(iParam0))
	{
		return;
	}
	iVar0 = func_268(iParam0);
	if (bParam1)
	{
		func_433(iParam0, 4);
		func_434(iVar0, 1);
		func_435(iVar0, 1);
	}
	else
	{
		func_436(iParam0, 4);
		func_435(iVar0, 0);
	}
}

void func_363(int* iParam0, char* sParam1)
{
	if (func_147(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_361(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_211(iParam0, 1);
}

void func_364(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_147(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_148(&(iParam1->f_6), 0, 1);
	}
	if (!func_147(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_400(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_437(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_147(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_438(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_439(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_440(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_360(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_439(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_362(iParam1->f_6, 0, 1);
				}
				else
				{
					func_362(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_365(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

int func_366()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

int func_367(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

struct<4> func_368(int iParam0)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 1:
			Var0 = { 3028.76f, 1776f, 84.13f };
			Var0.f_3 = 166.34f;
			break;
		case 2:
			Var0 = { 3024f, 1778.85f, 84.2f };
			Var0.f_3 = 77.92f;
			break;
		case 3:
			Var0 = { 3030.3f, 1780.6f, 84.19f };
			Var0.f_3 = -14.89f;
			break;
		case 4:
			Var0 = { 3026.38f, 1780.4f, 84.21f };
			Var0.f_3 = 149.54f;
			break;
	}
	return Var0;
}

float func_369(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_441(vVar0, vParam1);
}

bool func_370(int iParam0)
{
	return func_442(iParam0, 2);
}

int func_371(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_443(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_372(int iParam0, int iParam1, bool bParam2)
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

int func_373()
{
	if (func_444())
	{
		return 0;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return 0;
}

void func_374(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uParam0[iVar1]) && !(DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_375(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_33))
		{
			if (PED::_0x3AA24CCC0D451379(Global_1935630->f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_376(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_377(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_51(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_50(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

bool func_378(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_379(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(bParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_44) || Global_1935630->f_44 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(bParam0, Global_1935630->f_44, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_380(bool bParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(bParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x2D0571BB55879DA2(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if ((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == 1690225020) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT"))
	{
		return 1;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(bParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_381(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || !PED::IS_PED_HUMAN(bParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_382(int iParam0, bool bParam1)
{
	switch (func_276(iParam0))
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

int func_383(bool bParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam1->f_11 & 1 != 0)
	{
		if (PED::_0x9682F850056C9ADE(bParam0))
		{
			return 1;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (PED::_0x3AA24CCC0D451379(bParam0))
		{
			return 1;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(bParam0, func_445((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_384(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_400((*uParam0)[iVar0 /*17*/]))
		{
			func_210((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_385(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_364(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_147(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_210((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_386(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_446(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_387(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_388(int* iParam0, int* iParam1)
{
	if (!func_326(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_210(iParam1, 19);
			func_402(iParam0, 23);
			func_447(iParam1, 2);
		}
	}
}

int func_389(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_448(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_449(16);
					Global_1935630->f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_390(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_391(int iParam0)
{
	return (func_450(iParam0, 4) || func_450(iParam0, 5));
}

bool func_392(int iParam0)
{
	return func_450(iParam0, 7);
}

bool func_393(int iParam0)
{
	return func_450(iParam0, 6);
}

void func_394(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_400(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_364(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_395(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_451(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_452(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_362(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_362(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_438(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

int func_396(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_453(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_454(iParam1, 1))
	{
		func_455(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_397(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_78((*uParam0)[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

int func_398(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return 1;
		}
	}
	return 0;
}

void func_399(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_400(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_401(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return 1;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_402(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_403(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return 1;
	}
	return 0;
}

int func_404(bool bParam0, bool bParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	uParam5 = uParam5;
	bParam1 = bParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(bParam0, bParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_456())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (bParam0 != Global_35 && bParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(bParam0))
			{
				if (func_457(bParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (bParam0 == bParam1 || bParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(bParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_33(bParam0, bParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_131(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(bParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(bParam0, bParam1, 7500, 0, 51, 0);
				}
				if (func_458(bParam0, bParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(bParam1, bParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = bParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = uParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(bParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_367(func_266(bParam0, sParam2, iParam11, bParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_405(int iParam0, int iParam1)
{
	if (func_46() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_406(int iParam0)
{
	if (func_46() != -1)
	{
		if (func_408(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_408(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_407(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_408(iParam0, 65536) && !func_408(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_408(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_408(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_408(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_409(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_410()
{
	return Global_1905944->f_5694;
}

int func_411(int iParam0)
{
	int iVar0;

	iVar0 = func_443(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_459(iVar0);
}

int func_412(int iParam0, int iParam1)
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
			func_460(iVar2);
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

void func_413()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_414(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CS_SISTERCALDERON"):
		case joaat("CS_STRSHERIFF_01"):
		case joaat("CS_MUD2BIGGUY"):
		case joaat("CS_RAINSFALL"):
		case joaat("CS_PENELOPEBRAITHWAITE"):
		case joaat("CS_SWAMPWEIRDOSONNY"):
		case joaat("CS_UNIDUSTERJAIL_01"):
		case joaat("CS_IANGRAY"):
		case joaat("CS_TINYHERMIT"):
		case joaat("CS_TIMOTHYDONAHUE"):
		case joaat("CS_PRINCESSISABEAU"):
		case joaat("CS_LEVITICUSCORNWALL"):
		case joaat("CS_DIDSBURY"):
		case joaat("CS_FEATHERSTONCHAMBERS"):
		case joaat("CS_FEATSOFSTRENGTH"):
		case joaat("CS_BANDPIANIST"):
		case joaat("CS_ESCAPEARTISTASSISTANT"):
		case joaat("CS_GARETHBRAITHWAITE"):
		case joaat("CS_CREOLEGUY"):
		case joaat("CS_LEIGHGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_02"):
		case joaat("CS_GLORIA"):
		case joaat("CS_WARVET"):
		case joaat("CS_JOCKGRAY"):
		case joaat("CS_DAVIDGEDDES"):
		case joaat("CS_GUIDOMARTELLI"):
		case joaat("CS_DUNCANGEDDES"):
		case joaat("CS_DUSTERINFORMANT_01"):
		case joaat("CS_PINKERTONGOON"):
		case joaat("CS_MICKEY"):
		case joaat("CS_TWINBROTHER_02"):
		case joaat("CS_HESTONJAMESON"):
		case joaat("CS_STRDEPUTY_01"):
		case joaat("CS_ABE"):
		case joaat("CS_ODDFELLOWSPINHEAD"):
		case joaat("CS_SWAMPFREAK"):
		case joaat("CS_MRADLER"):
		case joaat("CS_ABERDEENPIGFARMER"):
		case joaat("CS_HOBARTCRAWLEY"):
		case joaat("CS_FORMYARTBIGWOMAN"):
		case joaat("CS_NORRISFORSYTHE"):
		case joaat("CS_JULES"):
		case joaat("CS_TOMDICKENS"):
		case joaat("CS_GERALDBRAITHWAITE"):
		case joaat("CS_PAYTAH"):
		case joaat("CS_CANCAN_03"):
		case joaat("CS_GRIZZLEDJON"):
		case joaat("CS_WROBEL"):
		case joaat("CS_MEREDITH"):
		case joaat("CS_CREEPYOLDLADY"):
		case joaat("CS_NBXRECEPTIONIST_01"):
		case joaat("CS_NBXPOLICECHIEFFORMAL"):
		case joaat("CS_CORNWALLTRAINCONDUCTOR"):
		case joaat("CS_RHODEPUTY_01"):
		case joaat("CS_DRMALCOLMMACINTOSH"):
		case joaat("CS_LEON"):
		case joaat("CS_SHERIFFOWENS"):
		case joaat("CS_SDDOCTOR_01"):
		case joaat("CS_SCOTTGRAY"):
		case joaat("CS_CANCAN_01"):
		case joaat("CS_CREOLECAPTAIN"):
		case joaat("CS_BRONTESBUTLER"):
		case joaat("CS_JANSON"):
		case joaat("CS_FORGIVENWIFE_01"):
		case joaat("CS_TIGERHANDLER"):
		case joaat("CS_FRENCHARTIST"):
		case joaat("CS_GENSTORYMALE"):
		case joaat("CS_CLAY"):
		case joaat("CS_STRDEPUTY_02"):
		case joaat("CS_FAMOUSGUNSLINGER_03"):
		case joaat("CS_BIVCOACHDRIVER"):
		case joaat("CS_BRAITHWAITEBUTLER"):
		case joaat("CS_CLEET"):
		case joaat("CS_JOE"):
		case joaat("CS_SLAVECATCHER"):
		case joaat("CS_BRAITHWAITEMAID"):
		case joaat("CS_TWINGROUPIE_02"):
		case joaat("CS_MRSGEDDES"):
		case joaat("CS_SAMARITAN"):
		case joaat("CS_EXCONFEDINFORMANT"):
		case joaat("CS_FRENCHMAN_01"):
		case joaat("CS_BANDSINGER"):
		case joaat("CS_BAPTISTE"):
		case joaat("CS_ANGUSGEDDES"):
		case joaat("CS_MYSTERIOUSSTRANGER"):
		case joaat("CS_FAMOUSGUNSLINGER_01"):
		case joaat("CS_BARTHOLOMEWBRAITHWAITE"):
		case joaat("CS_MIXEDRACEKID"):
		case joaat("CS_BEATENUPCAPTAIN"):
		case joaat("CS_EDGARROSS"):
		case joaat("CS_TWINGROUPIE_01"):
		case joaat("CS_MRSWEATHERS"):
		case joaat("CS_JAMIE"):
		case joaat("CS_KARENSJOHN_01"):
		case joaat("CS_THOMASDOWN"):
		case joaat("CS_OBEDIAHHINTON"):
		case joaat("CS_AGNESDOWD"):
		case joaat("CS_CAVEHERMIT"):
		case joaat("CS_BRYNNTILDON"):
		case joaat("CS_GERMANSON"):
		case joaat("CS_BRENDACRAWLEY"):
		case joaat("CS_COLFAVOURS"):
		case joaat("CS_RHODESKIDNAPVICTIM"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("CS_CANCAN_04"):
		case joaat("CS_TOWNCRIER"):
		case joaat("CS_FAMOUSGUNSLINGER_04"):
		case joaat("CS_DALEMARONEY"):
		case joaat("CS_ANGRYHUSBAND"):
		case joaat("CS_LILLIANPOWELL"):
		case joaat("CS_ANDERSHELGERSON"):
		case joaat("CS_POORJOE"):
		case joaat("CS_BRAITHWAITESERVANT"):
		case joaat("CS_BROTHERDORKINS"):
		case joaat("CS_ALBERTMASON"):
		case joaat("CS_FAMOUSGUNSLINGER_05"):
		case joaat("CS_BALLOONOPERATOR"):
		case joaat("CS_ALBERTCAKEESQUIRE"):
		case joaat("CS_MRSFELLOWS"):
		case joaat("CS_CANCANMAN_01"):
		case joaat("CS_POISONWELLSHAMAN"):
		case joaat("CS_CANCAN_02"):
		case joaat("CS_MEREDITHSMOTHER"):
		case joaat("CS_ANGEL"):
		case joaat("CS_ARCHERFORDHAM"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("CS_CHELONIANMASTER"):
		case joaat("CS_TWINBROTHER_01"):
		case joaat("CS_GERMANDAUGHTER"):
		case joaat("CS_LEMIUXASSISTANT"):
		case joaat("CS_CREOLEDOCTOR"):
		case joaat("CS_CRACKPOTROBOT"):
		case joaat("CS_BANDBASSIST"):
		case joaat("CS_GENSTORYFEMALE"):
		case joaat("CS_MARYLINTON"):
		case joaat("CS_VALPRAYINGMAN"):
		case joaat("CS_JOHNTHEBAPTISINGMADMAN"):
		case joaat("CS_MRS_CALHOUN"):
		case joaat("CS_THEODORELEVIN"):
		case joaat("CS_NICHOLASTIMMINS"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("CS_DINOBONESLADY"):
		case joaat("CS_BEAUGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_01"):
		case joaat("CS_CRACKPOTINVENTOR"):
		case joaat("CS_HERCULE"):
		case joaat("CS_GAVIN"):
		case joaat("CS_LEVISIMON"):
		case joaat("CS_LONDONDERRYSON"):
		case joaat("CS_CAPTAINMONROE"):
		case joaat("CS_FAMOUSGUNSLINGER_02"):
		case joaat("CS_MRSLONDONDERRY"):
		case joaat("CS_SOOTHSAYER"):
		case joaat("CS_TAVISHGRAY"):
		case joaat("CS_JOEBUTLER"):
		case joaat("CS_BANDDRUMMER"):
		case joaat("CS_LILLYMILLET"):
		case joaat("CS_ANSEL_ATHERTON"):
		case joaat("CS_RHODEPUTY_02"):
		case joaat("CS_EDMUNDLOWRY"):
		case joaat("CS_DISGUISEDDUSTER_02"):
		case joaat("CS_MAGNIFICO"):
		case joaat("CS_ARTAPPRAISER"):
		case joaat("CS_FORGIVENHUSBAND_01"):
		case joaat("CS_REVERENDFORTHERINGHAM"):
		case joaat("CS_DAVEYCALLENDER"):
		case joaat("CS_DESMOND"):
		case joaat("CS_ADAMGRAY"):
		case joaat("CS_JIMCALLOWAY"):
		case joaat("CS_SDSALOONDRUNK_01"):
		case joaat("CS_NBXDRUNK"):
		case joaat("CS_GERMANMOTHER"):
		case joaat("CS_RINGMASTER"):
		case joaat("CS_LUCANAPOLI"):
		case joaat("CS_RHODESASSISTANT"):
		case joaat("CS_ABERDEENSISTER"):
		case joaat("CS_NBXEXECUTED"):
		case joaat("CS_FAMOUSGUNSLINGER_06"):
		case joaat("CS_JOHNWEATHERS"):
		case joaat("CS_PROFESSORBELL"):
		case joaat("CS_RHODESSALOONBOUNCER"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_415(bool bParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(bParam0, joaat("HATS"), 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
	}
}

void func_416(bool bParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(bParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
	}
}

void func_417(bool bParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(bParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(bParam0, 41611, 1f);
	}
}

struct<4> func_418(bool bParam0)
{
	return func_355(joaat("CHARACTER"), func_461(), -1591664384, bParam0);
}

int func_419(bool bParam0)
{
	vector3 vVar0;

	if (!func_428(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_420(bool bParam0)
{
	int iVar0;

	iVar0 = func_429(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_355(923904168, func_418(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_355(923904168, func_418(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_355(923904168, func_418(bParam0), -740156546, 0);
}

int func_421(bool bParam0, bool bParam1)
{
	if (func_423(bParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
	{
		if (bParam1)
		{
			return func_462(joaat("UPGRADE_OFFHAND_HOLSTER"), 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_422(bool bParam0)
{
	int iVar0;

	iVar0 = func_429(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_355(271701509, func_418(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_355(271701509, func_418(bParam0), 12999093, 0);
}

int func_423(bool bParam0)
{
	struct<2> Var0;

	if (!func_428(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_424(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_423(bParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &bVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, bVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_425(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_429(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_426(bool bParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_428(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_355(bParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_429(bParam6), &Var0, 0);
	return uVar4;
}

int func_427(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_429(0);
	*uParam1 = { func_355(bParam0, func_420(0), iParam3, 0) };
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

bool func_428(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_429(bool bParam0)
{
	if (func_46() == -1)
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

int func_430(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_431(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(bParam0);
}

int func_432(int iParam0, bool bParam1)
{
	if (iParam0 > bParam1)
	{
		return bParam1;
	}
	return iParam0;
}

void func_433(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_434(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_442(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, bParam1);
		}
	}
}

void func_435(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, bParam1);
	}
}

void func_436(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_437(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_442(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_11 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_463(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, bParam10, iParam11, bParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_438(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_147(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_268(iParam0);
	func_439(iParam0, 18, 0, 1);
	func_439(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

void func_439(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_147(iParam0))
	{
		return;
	}
	iVar0 = func_268(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_440(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_147(iParam0))
	{
		return;
	}
	iVar0 = func_268(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

float func_441(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_442(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_443(int iParam0)
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

int func_444()
{
	switch (Global_1935630->f_44)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_445(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

int func_446(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return 3;
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return 2;
		case joaat("REL_GANG_ODRISCOLL"):
			return 0;
		case joaat("REL_GANG_MURFREE_BROOD"):
			return 1;
		case joaat("REL_GANG_LARAMIE_GANG"):
			return 4;
		case joaat("REL_GANG_SMUGGLERS"):
			return 5;
		default:
			break;
	}
	return -1;
}

void func_447(int* iParam0, int iParam1)
{
	if (!func_209(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_210(iParam0, 14);
		}
	}
}

bool func_448(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_449(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_450(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_451(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_452(int iParam0, bool bParam1)
{
	if (bParam1 && !func_147(iParam0))
	{
		return false;
	}
	return !func_442(iParam0, 4);
}

bool func_453(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_147(iParam0))
	{
		return false;
	}
	iVar0 = func_268(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_454(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_147(iParam0))
	{
		return false;
	}
	iVar0 = func_268(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_455(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_147(iParam0))
	{
		return;
	}
	iVar0 = func_268(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_456()
{
	return (Global_1894899 & 1 != 0 && func_464() != -1);
}

float func_457(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return -1f;
	}
	return func_33(Global_35, bParam0, bParam1, bParam2);
}

int func_458(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return 0;
	}
	if (fParam2 > 25f)
	{
		return 0;
	}
	if (bParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_459(int iParam0)
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

int func_460(int iParam0)
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

struct<4> func_461()
{
	struct<4> Var0;

	return Var0;
}

int func_462(bool bParam0, bool bParam1)
{
	if (func_431(bParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_429(bParam1), bParam0, 0);
}

void func_463(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
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
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
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
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, bParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, bParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, bParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_434(iParam0, 1);
	func_435(iParam0, 1);
	func_436(iParam0, 128);
}

int func_464()
{
	return Global_1894899->f_2;
}

