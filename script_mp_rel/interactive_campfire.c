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
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	struct<234> Var0;
	bool bVar236;
	float fVar237;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	sLocal_21 = "props_misc@campfires@5_logs";
	sLocal_22 = "Script_PropCampfire";
	Var0 = 4;
	Var0.f_5 = 4;
	Var0.f_18.f_29 = 1;
	Var0.f_49 = 8;
	Var0.f_49.f_22 = -1;
	Var0.f_49.f_23 = 1;
	Var0.f_49.f_24 = 1;
	Var0.f_49.f_32 = 1;
	Var0.f_49.f_33 = -1;
	Var0.f_49.f_37 = 4;
	Var0.f_49.f_42 = 4;
	Var0.f_49.f_53 = 1;
	Var0.f_139 = 15933;
	Var0.f_143 = -1;
	Var0.f_145 = -1;
	Var0.f_149 = 9;
	Var0.f_165 = -1;
	Var0.f_175 = -1;
	Var0.f_176 = 1;
	Var0.f_187 = 1;
	Var0.f_191 = joaat("P_CAMPFIRE02X_COMBO");
	Var0.f_193.f_9 = 1084227584;
	Var0.f_193.f_10 = 1073741824;
	Var0.f_193.f_30 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (func_2(0, 0) || !TASK::_DOES_SCENARIO_POINT_EXIST(vScriptParam_0.y))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_230 = { TASK::_GET_SCENARIO_POINT_COORDS(vScriptParam_0.y, true) };
	Var0.f_233 = TASK::_GET_SCENARIO_POINT_HEADING(vScriptParam_0.y, true);
	if (func_3(&Var0))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar236 = false;
	while (!func_2(0, 0) && !bVar236)
	{
		switch (Var0.f_192)
		{
			case 0:
				fVar237 = func_4(Global_34, Var0.f_230, 1);
				if (!func_5() || fVar237 < 6400f)
				{
					Var0.f_187 = 0;
					func_6(&Var0, vScriptParam_0.z);
					STREAMING::REQUEST_MODEL(Var0.f_191, false);
					func_7(&(Var0.f_192), 1);
				}
				break;
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(Var0.f_191))
				{
					func_7(&(Var0.f_192), 2);
				}
				break;
			case 2:
				Var0.f_141 = OBJECT::CREATE_OBJECT(Var0.f_191, Var0.f_230, false, false, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Var0.f_141, Var0.f_233);
				if (Global_1939045->f_21)
				{
					Var0.f_229 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Var0.f_230, 0f, 0f, 0f, 0.3f, 0.3f, 2f);
				}
				func_7(&(Var0.f_192), 3);
				break;
			case 3:
				if (func_3(&Var0))
				{
					bVar236 = true;
				}
				else
				{
					fVar237 = func_4(Global_34, Var0.f_230, 1);
					if (fVar237 < func_8() || !Var0.f_193.f_34)
					{
						func_9(&(Var0.f_193), &(Var0.f_141));
					}
					if (!func_10(&Global_1939178, 4194304))
					{
						if (fVar237 < func_11() || Var0.f_142 == 7)
						{
							func_12(&Var0, 0);
						}
					}
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Var0);
	SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
}

void func_1(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_141))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_141));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_229))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_229);
	}
	func_13(uParam0, 1);
}

int func_2(bool bParam0, bool bParam1)
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

int func_3(var uParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - uParam0->f_234) > 1000)
	{
		uVar1 = func_14(uParam0->f_230);
		if (func_15(uVar1, 8))
		{
			return 1;
		}
		if (func_15(uVar1, 1) || uParam0->f_235)
		{
			if (func_15(uParam0->f_139, 8192))
			{
				func_16(&(uParam0->f_139), 64);
			}
		}
		else if (func_15(uVar1, 2) && !uParam0->f_235)
		{
			if (!func_15(uParam0->f_139, 8192))
			{
				func_16(&(uParam0->f_139), 128);
			}
		}
		else if (func_17(0, 0, 1) && !func_18())
		{
			if (func_15(uParam0->f_139, 8192))
			{
				func_16(&(uParam0->f_139), 64);
			}
		}
		else if (!uParam0->f_235)
		{
			if (!func_15(uParam0->f_139, 8192))
			{
				func_16(&(uParam0->f_139), 128);
			}
		}
		if (func_15(uVar1, 32))
		{
			func_19(uParam0, 1, 0, 0, 0, 0, 0);
		}
		else if (func_15(uVar1, 4))
		{
			func_19(uParam0, 0, 1, 0, 0, 0, 0);
		}
		else if (func_15(uVar1, 16))
		{
			func_19(uParam0, 0, 0, 1, 0, 0, 0);
		}
		else if (func_15(uVar1, 64))
		{
			func_19(uParam0, 0, 0, 0, 1, 0, 0);
		}
		else if (func_15(uVar1, 128))
		{
			func_19(uParam0, 0, 0, 0, 0, 1, 0);
		}
		else if (func_15(uVar1, 256))
		{
			func_19(uParam0, 0, 0, 0, 0, 0, 1);
		}
		uParam0->f_234 = iVar0;
	}
	return 0;
}

float func_4(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_20(vVar0, vParam1);
}

bool func_5()
{
	return (Global_1893575 & 1 != 0 && func_21() != -1);
}

void func_6(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WB_INTERACTIVE_CAMPFIRE_CARAVAN"):
			func_22(&(uParam0->f_139), 6144);
			if (func_23(joaat("UPGRADE_UPG_COFFEE_KIT"), 1))
			{
				func_16(&(uParam0->f_139), 1);
			}
			break;
		case joaat("WB_INTERACTIVE_CAMPFIRE_DFLT"):
			func_22(&(uParam0->f_139), 9);
			if (func_23(joaat("UPGRADE_UPG_COFFEE_KIT"), 1))
			{
				func_16(&(uParam0->f_139), 1);
			}
			break;
		case joaat("WB_INTERACTIVE_CAMPFIRE_FIREPLACE"):
			func_22(&(uParam0->f_139), 7177);
			if (func_23(joaat("UPGRADE_UPG_COFFEE_KIT"), 1))
			{
				func_16(&(uParam0->f_139), 1);
			}
			break;
		case joaat("WB_INTERACTIVE_CAMPFIRE_FIREPLACE_IN_TOWNS"):
			func_22(&(uParam0->f_139), 7177);
			if (func_23(joaat("UPGRADE_UPG_COFFEE_KIT"), 1))
			{
				func_16(&(uParam0->f_139), 1);
			}
			break;
		case joaat("WB_INTERACTIVE_CAMPFIRE_MP_TWOPOINT"):
			func_22(&(uParam0->f_139), 6144);
			if (func_23(joaat("UPGRADE_UPG_COFFEE_KIT"), 1))
			{
				func_16(&(uParam0->f_139), 1);
			}
			break;
		case joaat("WB_INTERACTIVE_CAMPFIRE_TWOPOINT"):
			func_22(&(uParam0->f_139), 6144);
			if (func_23(joaat("UPGRADE_UPG_COFFEE_KIT"), 1))
			{
				func_16(&(uParam0->f_139), 1);
			}
			break;
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE"):
			func_22(&(uParam0->f_139), 7817);
			func_16(&(uParam0->f_139), 64);
			uParam0->f_235 = 1;
			break;
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE_IN_TOWNS"):
			func_22(&(uParam0->f_139), 7817);
			func_16(&(uParam0->f_139), 64);
			uParam0->f_235 = 1;
			break;
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE_UNDERPOT"):
			func_22(&(uParam0->f_139), 7817);
			func_16(&(uParam0->f_139), 64);
			uParam0->f_193.f_4 = 1;
			uParam0->f_235 = 1;
			break;
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE_UNDERPOT_IN_TOWNS"):
			func_22(&(uParam0->f_139), 7817);
			func_16(&(uParam0->f_139), 64);
			uParam0->f_193.f_4 = 1;
			uParam0->f_235 = 1;
			break;
		default:
			break;
	}
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

float func_8()
{
	if (func_10(&Global_1939178, 4194304))
	{
		return 1600f;
	}
	if (func_5())
	{
		if (func_21() == 5)
		{
			return 3600f;
		}
		else
		{
			return 6400f;
		}
	}
	return 10000f;
}

void func_9(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = 0.019f;
	func_24(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		fVar1 = MISC::GET_RAIN_LEVEL();
		if ((fVar1 > 0f && uParam0->f_9 >= 1f) && !uParam0->f_3)
		{
			func_25(uParam0, 4);
		}
		else if (uParam0->f_5)
		{
			func_25(uParam0, 0);
		}
		else if (uParam0->f_2)
		{
			func_25(uParam0, 2);
		}
		else if (uParam0->f_3)
		{
			func_25(uParam0, 5);
		}
		else if (uParam0->f_6)
		{
			func_25(uParam0, 6);
		}
		else if (uParam0->f_7)
		{
			func_25(uParam0, 7);
		}
		else if (uParam0->f_8)
		{
			func_25(uParam0, 8);
		}
		else if (func_27(&(uParam0->f_31), func_26()))
		{
			func_28(uParam0);
		}
	}
	switch (uParam0->f_30)
	{
		case 0:
			if (uParam0->f_1)
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", 0f);
			}
			if (uParam0->f_1 && uParam0->f_9 <= 2f)
			{
				uParam0->f_20 = 0.25f;
				uParam0->f_21 = 0.015f;
				uParam0->f_22 = 0.25f;
				uParam0->f_23 = 0.015f;
				uParam0->f_24 = 0.5f;
				uParam0->f_25 = 0.01f;
				uParam0->f_26 = 0.5f;
				uParam0->f_27 = 0.01f;
				uParam0->f_28 = 0.1f;
			}
			else
			{
				uParam0->f_24 = 1f;
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0) == 0)
			{
				*uParam0 = *uParam1;
			}
			else
			{
				uParam0->f_30 = 2;
			}
			break;
		case 2:
			if (uParam0->f_1)
			{
				func_25(uParam0, 0);
				STREAMING::REQUEST_ANIM_DICT(sLocal_21);
				STREAMING::_0x2B6529C54D29037A(sLocal_22);
			}
			else
			{
				if (uParam0->f_5)
				{
					func_25(uParam0, 0);
				}
				else if (uParam0->f_2)
				{
					func_25(uParam0, 2);
				}
				else if (uParam0->f_3)
				{
					func_25(uParam0, 5);
				}
				else if (uParam0->f_6)
				{
					func_25(uParam0, 6);
				}
				else if (uParam0->f_7)
				{
					func_25(uParam0, 7);
				}
				else if (uParam0->f_8)
				{
					func_25(uParam0, 8);
				}
				else
				{
					func_25(uParam0, 0);
				}
				uParam0->f_35 = 1;
			}
			GRAPHICS::_SET_LIGHTS_TYPE_FOR_ENTITY(*uParam0, 20);
			GRAPHICS::_SET_LIGHTS_COLOR_FOR_ENTITY(*uParam0, 255, 50, 9);
			uParam0->f_29 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_amb_campfire_dynamic", *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_27, true);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Embers", uParam0->f_25, true);
			}
			uParam0->f_30 = 3;
			break;
		case 3:
			if (!uParam0->f_1)
			{
				uParam0->f_30 = 4;
			}
			else if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_21) && STREAMING::_0x2C04D89A0FB4E244(sLocal_22))
			{
				TASK::TASK_MOVE_NETWORK_BY_NAME(*uParam0, sLocal_22, 0f, false, sLocal_21, 128);
				uParam0->f_30 = 5;
			}
			func_29(&(uParam0->f_31));
			break;
		case 4:
			uParam0->f_34 = 1;
			break;
		case 5:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogCount", uParam0->f_9);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogSet", uParam0->f_10);
				uParam0->f_30 = 6;
			}
			break;
		case 6:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogCount", uParam0->f_9);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogSet", uParam0->f_10);
			if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0))
			{
				uParam0->f_34 = 1;
				if (uParam0->f_1 && MISC::GET_RAIN_LEVEL() <= 0f)
				{
					if (uParam0->f_9 <= 2f)
					{
						uParam0->f_30 = 0;
					}
					else if (TASK::_0x844CEEE428EA35B0(*uParam0, "BurnPhase") <= 0f || TASK::_0x844CEEE428EA35B0(*uParam0, "BurnPhase") >= 1f)
					{
						uParam0->f_30 = 8;
					}
					else
					{
						TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", fVar0);
					}
				}
				else
				{
					uParam0->f_30 = 0;
				}
			}
			break;
		case 7:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, "AddLogFinished"))
				{
					uParam0->f_30 = 8;
				}
			}
			break;
		case 8:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0))
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam0, "CollapseLog");
					uParam0->f_24 = (uParam0->f_24 + (1f / 5f));
					uParam0->f_30 = 9;
				}
			}
			break;
		case 9:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", fVar0);
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, "CollapseLogFinished"))
				{
					uParam0->f_21 = (uParam0->f_21 - (1f / 5f));
					uParam0->f_22 = (uParam0->f_22 - (0.5f / 5f));
					uParam0->f_25 = (uParam0->f_25 - (1f / 5f));
					uParam0->f_26 = (uParam0->f_26 - (1f / 5f));
					uParam0->f_27 = (uParam0->f_27 - (1.55f / 5f));
					uParam0->f_9 = (uParam0->f_9 - 1f);
					if (uParam0->f_9 == 4f)
					{
						uParam0->f_20 = 0.8f;
						uParam0->f_23 = 0.4f;
					}
					else if (uParam0->f_9 == 3f)
					{
						uParam0->f_20 = 0.7f;
						uParam0->f_23 = 0.3f;
					}
					else if (uParam0->f_9 == 2f)
					{
						uParam0->f_20 = 0.6f;
						uParam0->f_23 = 0.2f;
					}
					else if (uParam0->f_9 == 1f)
					{
						uParam0->f_20 = 0.5f;
						uParam0->f_23 = 0.1f;
					}
					uParam0->f_30 = 6;
				}
			}
			break;
		case 10:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", 0f);
			break;
	}
}

bool func_10(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_11()
{
	if (func_5())
	{
		if (func_21() == 5)
		{
			return 400f;
		}
		else
		{
			return 1600f;
		}
	}
	return 6400f;
}

int func_12(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_30(&(uParam0->f_49));
	if (!func_31(Global_34, 0))
	{
		return 0;
	}
	func_32(uParam0);
	if (uParam0->f_142 > 4 && uParam0->f_142 < 9)
	{
		func_33(0);
	}
	if (uParam0->f_142 > 3)
	{
		if (uParam0->f_142 != 9 && uParam0->f_142 != 4)
		{
			CAM::_0x18C3DFAC458783BB();
			func_34(uParam0);
		}
	}
	else if (uParam0->f_142 == 3)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1))
		{
			iVar0 = func_35(uParam0);
			if (iVar0 >= 0 && iVar0 <= 3)
			{
				func_34(uParam0);
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_18)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_18));
		}
	}
	if (uParam0->f_190)
	{
		if (func_36(Global_34, 1, 0, 0) != joaat("WEAPON_UNARMED"))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, joaat("HOLSTERWEAPON")))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
				uParam0->f_190 = 0;
			}
		}
	}
	switch (uParam0->f_142)
	{
		case 0:
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			func_39(uParam0);
			uParam0->f_49.f_28 = 1;
			func_40(uParam0, 1);
			break;
		case 1:
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			if (func_41(uParam0))
			{
				func_40(uParam0, 2);
			}
			break;
		case 2:
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			if (func_42(uParam0))
			{
				func_40(uParam0, 3);
			}
			break;
		case 3:
			if (func_37(uParam0))
			{
				AUDIO::_0x9428447DED71FC7E("Player_Campfire_Scenes");
				func_43(&(uParam0->f_49), 1, TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_34) != joaat("WORLD_PLAYER_MP_STEW_POT_DONATION"));
				func_44(&(uParam0->f_49), 2);
				uParam0->f_189 = 0;
				func_38(uParam0);
			}
			func_45(uParam0);
			if (bParam1)
			{
				return 1;
			}
			func_46(8388608);
			if (!func_15(uParam0->f_139, 8192))
			{
				func_47(2048);
			}
			else
			{
				func_48(2048);
			}
			if (!uParam0->f_187)
			{
				func_47(1024);
			}
			else
			{
				func_48(1024);
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_162) >= 500)
			{
				uParam0->f_163 = func_49(uParam0);
				uParam0->f_162 = MISC::GET_GAME_TIMER();
			}
			if (func_50(Global_34, uParam0->f_141, 1) > 36f)
			{
				func_51(uParam0);
				func_52(uParam0);
				func_53(8388608);
				if (!uParam0->f_187)
				{
					func_48(1024);
				}
				func_40(uParam0, 4);
				if (CAM::_0x927B810E43E99932(&(uParam0->f_18)))
				{
					CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_18));
				}
				return 0;
			}
			if (func_54(2097152) || func_15(uParam0->f_139, 64))
			{
				if (func_15(uParam0->f_139, 8192))
				{
					func_55(uParam0, 0);
					func_22(&(uParam0->f_139), 8192);
				}
				func_53(2097152);
				func_22(&(uParam0->f_139), 64);
			}
			else if (func_54(4194304) || func_15(uParam0->f_139, 128))
			{
				if (!func_15(uParam0->f_139, 8192))
				{
					func_55(uParam0, 1);
					func_16(&(uParam0->f_139), 8192);
				}
				func_53(4194304);
				func_22(&(uParam0->f_139), 128);
			}
			uParam0->f_143 = func_35(uParam0);
			if (uParam0->f_143 != -1)
			{
				func_56();
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
				iVar1 = ITEMSET::CREATE_ITEMSET(true);
				if (func_57(&iVar1, *(uParam0->f_5[uParam0->f_143 /*3*/]), 0.75f) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1))
				{
					TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
				}
				ITEMSET::DESTROY_ITEMSET(iVar1);
			}
			if ((func_58(0) && uParam0->f_143 != -1) || (((uParam0->f_187 && func_54(268435456)) && func_54(16777216)) && Global_1956172->f_2))
			{
				uParam0->f_144 = func_59();
				func_40(uParam0, 5);
				if ((func_54(16777216) || uParam0->f_189) || Global_1956172->f_2)
				{
					if (func_54(268435456))
					{
						Global_1956172->f_2 = 0;
						func_53(16777216);
						func_44(&(uParam0->f_49), 2);
						func_60(uParam0, 0);
						func_40(uParam0, 7);
					}
				}
				func_52(uParam0);
			}
			else
			{
				func_61(uParam0);
				func_62(uParam0);
				if ((!func_63(4) && !func_54(536870912)) && func_15(uParam0->f_139, 8192))
				{
					if (uParam0->f_163 && func_50(Global_34, uParam0->f_141, 1) <= 9f)
					{
						uParam0->f_161 = func_64(HUD::_UIPROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_141, func_65(func_15(uParam0->f_139, 16384), 1.75f, 3f), 1, 1, 1754796591, uParam0->f_161, 2);
					}
				}
				if ((func_54(16777216) && uParam0->f_187) || uParam0->f_189)
				{
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
					{
						if (uParam0->f_165 != -1 && (MISC::GET_GAME_TIMER() - uParam0->f_165) > 1000)
						{
							func_53(16777216);
							uParam0->f_189 = 0;
							uParam0->f_165 = -1;
							TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
							uParam0->f_146 = 0;
						}
						else
						{
							uParam0->f_146 = 2;
							func_66(uParam0);
							uParam0->f_165 = MISC::GET_GAME_TIMER();
							if (func_54(268435456))
							{
								func_53(16777216);
								uParam0->f_189 = 0;
								func_44(&(uParam0->f_49), 2);
								func_60(uParam0, 0);
								func_40(uParam0, 7);
							}
						}
					}
					else if (uParam0->f_146 == 2)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_165) > 10000)
						{
							TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
							func_53(16777216);
							uParam0->f_189 = 0;
							uParam0->f_165 = -1;
							uParam0->f_146 = 0;
						}
					}
				}
			}
			break;
		case 4:
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			if (func_50(Global_34, uParam0->f_141, 1) <= 36f)
			{
				func_40(uParam0, 3);
			}
			break;
		case 5:
			if (func_37(uParam0))
			{
				AUDIO::_0x6339C1EA3979B5F7("idle", "Player_Campfire_Scenes");
				func_38(uParam0);
			}
			HUD::_0xC9CAEAEEC1256E54(joaat("HUD_CTX_IN_PLAYER_CAMP"));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
			func_67();
			if (!func_58(1))
			{
				func_33(0);
				uParam0->f_145 = -1;
				func_68(uParam0, 0);
				TASK::_0xFDECCA06E8B81346(Global_34);
				func_40(uParam0, 3);
			}
			else
			{
				if (uParam0->f_143 != -1)
				{
					func_56();
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -996707397))
				{
					func_68(uParam0, 0);
				}
				else
				{
					func_68(uParam0, 1);
				}
				func_69(uParam0);
				if (func_70(uParam0, 0, 0, -1))
				{
					func_68(uParam0, 0);
					if (uParam0->f_146 == 2)
					{
						func_44(&(uParam0->f_49), 2);
						func_60(uParam0, 0);
						func_40(uParam0, 7);
					}
					else if (uParam0->f_146 == 0)
					{
						func_40(uParam0, 9);
					}
					else if (uParam0->f_146 == 11 || uParam0->f_146 == 10)
					{
						func_40(uParam0, 8);
					}
					else
					{
						func_40(uParam0, 6);
					}
				}
			}
			break;
		case 6:
			HUD::_0xC9CAEAEEC1256E54(joaat("HUD_CTX_IN_PLAYER_CAMP"));
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			if (uParam0->f_143 != -1)
			{
				func_56();
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			if (((ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1070143458) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 2000) && !func_15(uParam0->f_140, 4)) && uParam0->f_146 != 1)
			{
				if (func_70(uParam0, 1, uParam0->f_146, uParam0->f_145))
				{
					if (uParam0->f_146 == 0)
					{
						func_40(uParam0, 9);
						func_51(uParam0);
						return 0;
					}
					else
					{
						func_68(uParam0, 0);
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (func_71(uParam0) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
			{
				if ((uParam0->f_143 == uParam0->f_145 || uParam0->f_145 == -1) || uParam0->f_146 == 1)
				{
					if (uParam0->f_146 != 0)
					{
						uParam0->f_144 = uParam0->f_146;
					}
					if (uParam0->f_145 != -1)
					{
						uParam0->f_143 = uParam0->f_145;
					}
					else
					{
						uParam0->f_143 = func_35(uParam0);
					}
					uParam0->f_145 = -1;
					func_40(uParam0, 5);
				}
			}
			break;
		case 8:
			HUD::_0xC9CAEAEEC1256E54(joaat("HUD_CTX_IN_PLAYER_CAMP"));
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			iVar2 = PED::_0xC22AA08A8ADB87D4(Global_34);
			if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
			{
				if (((iVar2 == joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR") || iVar2 == joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A")) || iVar2 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A")) || iVar2 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A"))
				{
					if (uParam0->f_146 == 11)
					{
						if (INVENTORY::_0x3D10D7179D7034AF(func_73(0), joaat("DOCUMENT_PLAYER_JOURNAL"), 0))
						{
							INVENTORY::_0x6A564540FAC12211(func_73(0), joaat("DOCUMENT_PLAYER_JOURNAL"));
						}
						func_74(joaat("DOCUMENT_PLAYER_JOURNAL"), 0, 0, 0, 1, 0, 0);
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						uParam0->f_146 = 0;
					}
					else if (uParam0->f_146 == 10)
					{
						func_74(1259508039 /* GXTEntry: "Satchel" */, 0, 0, 0, 1, 0, 0);
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						uParam0->f_146 = 0;
					}
					else
					{
						uParam0->f_146 = 0;
						ATTRIBUTE::_0xD962F8579D702DB5();
						func_29(&(uParam0->f_172));
						func_40(uParam0, 5);
					}
				}
				else if (iVar2 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A") || iVar2 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A"))
				{
					func_75(joaat("SIT_TRANS_KNEEL"), 0.5f);
					uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
				else if (iVar2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					func_75(joaat("KNIFE1_TRANS_KNEEL1"), 2f);
					uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
				else if (iVar2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
				{
					func_75(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 2f);
					uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_146 = 0;
				func_40(uParam0, 5);
			}
			break;
		case 7:
			HUD::_0xC9CAEAEEC1256E54(joaat("HUD_CTX_IN_PLAYER_CAMP"));
			if (func_37(uParam0))
			{
				func_76(joaat("CONSUMABLE_COFFEE"), 1, 1, -142743235);
				func_38(uParam0);
			}
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			func_56();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			if ((((func_77(uParam0, uParam0->f_144) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_34)) || TASK::_0x916B8E075ABC8B4E(Global_34, 1)) || FIRE::IS_ENTITY_ON_FIRE(Global_34)) || TASK::_0x0C3CB2E600C8977D(Global_34, 0))
			{
				AUDIO::_0x0F2A2175734926D8("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				func_76(joaat("CONSUMABLE_COFFEE"), 1, 1, -142743235);
				func_43(&(uParam0->f_49), 1, 1);
				ATTRIBUTE::_0xD962F8579D702DB5();
				if (((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_34) || TASK::_0x916B8E075ABC8B4E(Global_34, 1)) || FIRE::IS_ENTITY_ON_FIRE(Global_34)) || TASK::_0x0C3CB2E600C8977D(Global_34, 0))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_147))
					{
						OBJECT::DELETE_OBJECT(&(uParam0->f_147));
					}
					if (((func_78(0) && !func_79()) && !uParam0->f_182) && uParam0->f_49.f_73 != joaat("CONSUMABLE_COFFEE"))
					{
						if (((((((uParam0->f_138 == 3 || uParam0->f_138 == 4) || uParam0->f_138 == 11) || uParam0->f_138 == 16) || uParam0->f_138 == 7) || uParam0->f_138 == 6) || uParam0->f_138 == 14) || uParam0->f_138 == 15)
						{
							func_80(uParam0->f_49.f_73, 1, 1, 1, 0);
							uParam0->f_182 = 1;
						}
					}
					if (FIRE::IS_ENTITY_ON_FIRE(Global_34))
					{
						TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
					}
				}
				uParam0->f_144 = 6;
				uParam0->f_146 = 6;
				func_29(&(uParam0->f_172));
				func_40(uParam0, 5);
			}
			break;
		case 9:
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				func_43(&(uParam0->f_49), 1, 1);
				func_40(uParam0, 3);
			}
			else if (!TASK::_0x0C3CB2E600C8977D(Global_34, 1))
			{
				func_81(uParam0);
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

void func_13(var uParam0, bool bParam1)
{
	func_51(uParam0);
	func_82(uParam0);
	func_83(uParam0);
	func_52(uParam0);
	if (CAM::_0x927B810E43E99932(&(uParam0->f_18)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_18));
	}
	if (bParam1)
	{
		func_84(uParam0);
	}
	uParam0->f_165 = -1;
	uParam0->f_189 = 0;
	func_43(&(uParam0->f_49), 0, 1);
}

int func_14(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_85(Global_1939045[iVar0 /*2*/], vParam0))
		{
			return ((*Global_1939045)[iVar0 /*2*/])->f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_15(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_16(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_17(int iParam0, bool bParam1, bool bParam2)
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
		if (func_86())
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
	if (iParam0 == 0 && func_88(func_87(0)))
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
	switch (func_89(func_87(0)))
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

bool func_18()
{
	return Global_1913166->f_1578;
}

void func_19(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_193.f_5 = iParam1;
	uParam0->f_193.f_2 = iParam2;
	uParam0->f_193.f_3 = iParam3;
	uParam0->f_193.f_2 = iParam4;
	uParam0->f_193.f_2 = iParam5;
	uParam0->f_193.f_2 = iParam6;
}

float func_20(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_21()
{
	return Global_1893575->f_2;
}

void func_22(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_23(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_90(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_91(iParam0);
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
			if (!func_92(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_93(iParam0))
			{
				return true;
			}
			break;
	}
	return func_94(iParam0, 0, 0, 0) >= iParam1;
}

void func_24(var uParam0)
{
	bool bVar0;

	bVar0 = GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		OBJECT::_0x646564A3B7DF68F8(*uParam0, (0.65f + (uParam0->f_11 * 0.35f)), (0.65f + (uParam0->f_11 * 0.35f)));
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, true);
		}
		if (uParam0->f_1)
		{
			OBJECT::_0xC8E21C1677DC5E6F(*uParam0, (uParam0->f_12 * 0.5f));
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_18, true);
			}
		}
	}
	if (uParam0->f_12 != uParam0->f_21 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_12 = uParam0->f_21;
		}
		else
		{
			uParam0->f_12 = (((uParam0->f_12 * 15f) + uParam0->f_21) / 16f);
		}
		if (MISC::ABSF((uParam0->f_12 - uParam0->f_21)) < 0.0025f)
		{
			uParam0->f_12 = uParam0->f_21;
			OBJECT::_0xC8E21C1677DC5E6F(*uParam0, (uParam0->f_12 * 0.5f));
		}
	}
	if (uParam0->f_13 != uParam0->f_22 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_13 = uParam0->f_22;
		}
		else
		{
			uParam0->f_13 = (((uParam0->f_13 * 12f) + uParam0->f_22) / 13f);
		}
		if (MISC::ABSF((uParam0->f_13 - uParam0->f_22)) < 0.0025f)
		{
			uParam0->f_13 = uParam0->f_22;
			OBJECT::_0x7D7285EFEAB5AF15(*uParam0, uParam0->f_13);
		}
	}
	if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_14 = uParam0->f_23;
		}
		else
		{
			uParam0->f_14 = (((uParam0->f_14 * 14f) + uParam0->f_23) / 15f);
		}
		if (MISC::ABSF((uParam0->f_14 - uParam0->f_23)) < 0.005f && !uParam0->f_35)
		{
			uParam0->f_14 = uParam0->f_23;
		}
		else if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
		{
			OBJECT::_0xF49574E2332A8F06(*uParam0, (uParam0->f_14 * 0.33f));
		}
	}
	if (uParam0->f_15 != uParam0->f_24 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_15 = uParam0->f_24;
		}
		else
		{
			uParam0->f_15 = (((uParam0->f_15 * 19f) + uParam0->f_24) / 20f);
		}
		if (MISC::ABSF((uParam0->f_15 - uParam0->f_24)) < 0.0025f)
		{
			uParam0->f_15 = uParam0->f_24;
			OBJECT::_SET_OBJECT_AFTERBURN_LEVEL(*uParam0, ((uParam0->f_15 * 0.9f) + 0.1f), true);
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Under", uParam0->f_16, true);
		}
	}
	else if ((uParam0->f_16 != uParam0->f_25 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_16 = uParam0->f_25;
		}
		else
		{
			uParam0->f_16 = (((uParam0->f_16 * 15f) + uParam0->f_25) / 16f);
		}
		if (MISC::ABSF((uParam0->f_16 - uParam0->f_25)) < 0.0025f)
		{
			uParam0->f_16 = uParam0->f_25;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Embers", uParam0->f_16, false);
			}
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Under", uParam0->f_17, true);
		}
	}
	else if ((uParam0->f_17 != uParam0->f_26 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_17 = uParam0->f_26;
		}
		else
		{
			uParam0->f_17 = (((uParam0->f_17 * 15f) + uParam0->f_26) / 16f);
		}
		if (MISC::ABSF((uParam0->f_17 - uParam0->f_26)) < 0.0025f)
		{
			uParam0->f_17 = uParam0->f_26;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, true);
			}
		}
	}
	if ((uParam0->f_18 != uParam0->f_27 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_18 = uParam0->f_27;
		}
		else
		{
			uParam0->f_18 = (((uParam0->f_18 * 19f) + uParam0->f_27) / 20f);
		}
		if (MISC::ABSF((uParam0->f_18 - uParam0->f_27)) < 0.0025f)
		{
			uParam0->f_18 = uParam0->f_27;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_18, true);
			}
		}
	}
	if ((uParam0->f_19 != uParam0->f_28 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_19 = uParam0->f_28;
		}
		else
		{
			uParam0->f_19 = (((uParam0->f_19 * 19f) + uParam0->f_28) / 20f);
		}
		if (MISC::ABSF((uParam0->f_19 - uParam0->f_28)) < 0.0025f)
		{
			uParam0->f_19 = uParam0->f_28;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smolder", uParam0->f_19, true);
			}
		}
	}
	if (uParam0->f_18 < 0f)
	{
		uParam0->f_18 = 0f;
	}
	if (uParam0->f_18 > 1f)
	{
		uParam0->f_18 = 1f;
	}
	if (uParam0->f_12 < 0f)
	{
		uParam0->f_12 = 0f;
	}
	if (uParam0->f_12 > 1f)
	{
		uParam0->f_12 = 1f;
	}
	if (uParam0->f_11 < 0.5f)
	{
		uParam0->f_11 = 0.5f;
	}
	if (uParam0->f_11 > 1f)
	{
		uParam0->f_11 = 1f;
	}
	if (bVar0)
	{
		uParam0->f_35 = 0;
	}
}

void func_25(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_20 = 0.9f;
			uParam0->f_21 = 1f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0.9f;
			uParam0->f_24 = 0.99f;
			uParam0->f_25 = 1f;
			uParam0->f_26 = 0.75f;
			uParam0->f_27 = 1f;
			uParam0->f_28 = 0f;
			break;
		case 1:
			uParam0->f_20 = 0.66f;
			uParam0->f_21 = 0.66f;
			uParam0->f_22 = 0.6f;
			uParam0->f_23 = 0.5f;
			uParam0->f_24 = 0.88f;
			uParam0->f_25 = 0.66f;
			uParam0->f_26 = 0.66f;
			uParam0->f_27 = 0.66f;
			uParam0->f_28 = 0f;
			break;
		case 2:
			uParam0->f_20 = 0.25f;
			uParam0->f_21 = 0.25f;
			uParam0->f_22 = 0.25f;
			uParam0->f_23 = 0.25f;
			uParam0->f_24 = 0.77f;
			uParam0->f_25 = 0.2f;
			uParam0->f_26 = 0.5f;
			uParam0->f_27 = 0.2f;
			uParam0->f_28 = 0f;
			break;
		case 3:
			uParam0->f_20 = 0.2f;
			uParam0->f_21 = 0.1f;
			uParam0->f_22 = 0.22f;
			uParam0->f_23 = 0.1f;
			uParam0->f_24 = 0.66f;
			uParam0->f_25 = 0.1f;
			uParam0->f_26 = 0.5f;
			uParam0->f_27 = 0.1f;
			uParam0->f_28 = 0f;
			break;
		case 4:
			uParam0->f_20 = 0.15f;
			uParam0->f_21 = 0.01f;
			uParam0->f_22 = 0.2f;
			uParam0->f_23 = 0.018f;
			uParam0->f_24 = 0.55f;
			uParam0->f_25 = 0.005f;
			uParam0->f_26 = 0.25f;
			uParam0->f_27 = 0.01f;
			uParam0->f_28 = 0.6f;
			break;
		case 5:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 1f;
			uParam0->f_25 = 0.2f;
			uParam0->f_26 = 0.66f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 1f;
			break;
		case 6:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 0f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
		case 7:
			uParam0->f_20 = 0.4f;
			uParam0->f_21 = 0.2f;
			uParam0->f_22 = 0.2f;
			uParam0->f_23 = 0.02f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0.01f;
			uParam0->f_28 = 0f;
			break;
		case 8:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0.06f;
			uParam0->f_22 = 0.1f;
			uParam0->f_23 = 0.01f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
	}
}

float func_26()
{
	if (func_10(&Global_1939178, 4194304) || func_21() == 5)
	{
		return 1f;
	}
	return 0.5f;
}

int func_27(var uParam0, float fParam1)
{
	if (!func_95(uParam0))
	{
		return 0;
	}
	if (func_96(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_28(var uParam0)
{
	int iVar0;

	if (!uParam0->f_1)
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		if (iVar0 >= 2 && iVar0 < 4)
		{
			func_25(uParam0, 1);
		}
		else if (iVar0 >= 4 && iVar0 < 6)
		{
			func_25(uParam0, 2);
		}
		else if (iVar0 >= 6 && iVar0 < 12)
		{
			func_25(uParam0, 3);
		}
		else if (iVar0 >= 12 && iVar0 < 17)
		{
			func_25(uParam0, 2);
		}
		else if (iVar0 >= 17 && iVar0 < 19)
		{
			func_25(uParam0, 1);
		}
		else
		{
			func_25(uParam0, 0);
		}
		func_29(&(uParam0->f_31));
	}
}

void func_29(var uParam0)
{
	func_97(uParam0, 0f);
}

void func_30(var uParam0)
{
	if (uParam0->f_80)
	{
		if (func_98(&(uParam0->f_79), &(uParam0->f_80)))
		{
			uParam0->f_80 = 0;
		}
	}
	if (uParam0->f_82)
	{
		if (func_98(&(uParam0->f_81), &(uParam0->f_82)))
		{
			uParam0->f_82 = 0;
		}
	}
	if (uParam0->f_84)
	{
		if (func_98(&(uParam0->f_83), &(uParam0->f_84)))
		{
			uParam0->f_84 = 0;
		}
	}
}

int func_31(int iParam0, int iParam1)
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
	if (func_99(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_99(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_99(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_99(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_99(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_99(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_99(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_99(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_32(var uParam0)
{
	int iVar0;

	if (func_54(16777216) || uParam0->f_142 == 7)
	{
		iVar0 = func_35(uParam0);
		if (iVar0 != -1)
		{
			if (!func_100(&(uParam0->f_149[6])))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
		}
	}
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
		func_101(4);
	}
	func_101(2);
	MISC::SET_BIT(&(Global_1956131->f_1), 0);
}

void func_34(var uParam0)
{
	vector3 vVar0;
	bool bVar25;
	bool bVar26;

	vVar0.f_4 = -1;
	vVar0.f_8 = 2;
	vVar0.f_9 = 1;
	vVar0.f_10 = 1;
	vVar0.f_11 = 1;
	vVar0.f_13 = 1;
	vVar0.f_14 = 2;
	vVar0.f_15 = 2;
	vVar0.f_16 = 3;
	vVar0.f_19 = 3;
	vVar0.f_20 = 1;
	vVar0.f_21 = 3;
	vVar0.f_22 = 3;
	vVar0.f_8 = 0;
	vVar0.f_14 = 0;
	vVar0.f_3 = uParam0->f_141;
	vVar0 = { 0f, 0f, 0.5f };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_34, &vVar0);
	bVar25 = false;
	bVar26 = false;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 0))
	{
		bVar26 = true;
	}
	if (!bVar26)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1))
		{
			bVar25 = true;
		}
	}
	if (bVar26 || (bVar25 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1206250122)))
	{
		if (CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_18)))
		{
			if (!CAM::_0x927B810E43E99932(&(uParam0->f_18)))
			{
				CAM::_0xB8B207C34285E978(&(uParam0->f_18));
			}
		}
	}
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_34, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0) && !TASK::_0x0C3CB2E600C8977D(Global_34, 1))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0[iVar1]))
			{
				if (iVar0 == uParam0[iVar1])
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_36(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_37(var uParam0)
{
	return uParam0->f_183;
}

void func_38(var uParam0)
{
	uParam0->f_183 = 0;
}

void func_39(var uParam0)
{
	StringCopy(&(uParam0->f_18), "restbyfire_orbit_cam", 64);
	StringCopy(&(uParam0->f_18.f_8), "RESTBYFIRE_ORBIT_REQUEST", 64);
}

void func_40(var uParam0, int iParam1)
{
	uParam0->f_183 = 1;
	uParam0->f_142 = iParam1;
}

int func_41(var uParam0)
{
	return 1;
}

int func_42(var uParam0)
{
	vector3 vVar0;
	float fVar3;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_141))
	{
		if (func_15(uParam0->f_139, 512))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_141, -0.966f, 0.203f, 0.5f) };
			*(uParam0->f_5[0 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_141) + -99.171f);
			func_102(&vVar0, 1, 10, 0, 0);
			(*uParam0)[0] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1"), vVar0, fVar3, 0, 0, 0);
		}
		if (func_15(uParam0->f_139, 1024))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_141, -0.212f, -1.045f, 0.5f) };
			*(uParam0->f_5[1 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_141) + -11.405f);
			func_102(&vVar0, 1, 10, 0, 0);
			(*uParam0)[1] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"), vVar0, fVar3, 0, 0, 0);
		}
		if (func_15(uParam0->f_139, 2048))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_141, 1.025f, 0.043f, 0.5f) };
			*(uParam0->f_5[2 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_141) + 91.78f);
			func_102(&vVar0, 1, 10, 0, 0);
			(*uParam0)[2] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3"), vVar0, fVar3, 0, 0, 0);
		}
		if (func_15(uParam0->f_139, 4096))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_141, 0.249f, 1.05f, 0.5f) };
			*(uParam0->f_5[3 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_141) + 164.29f);
			func_102(&vVar0, 1, 10, 0, 0);
			(*uParam0)[3] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4"), vVar0, fVar3, 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

void func_43(var uParam0, bool bParam1, bool bParam2)
{
	func_103(uParam0);
	if (bParam2)
	{
		func_104(uParam0, 0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_35);
	}
	if (func_105())
	{
		func_106(0);
	}
	if (bParam1)
	{
		func_107(uParam0);
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
	func_98(&(uParam0->f_79), &(uParam0->f_80));
	func_98(&(uParam0->f_81), &(uParam0->f_82));
	func_98(&(uParam0->f_83), &(uParam0->f_84));
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1913166->f_1576 = 0;
	if (uParam0->f_25)
	{
		TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
	}
	if (func_108() == -1)
	{
		func_44(uParam0, 18);
	}
	else
	{
		if (uParam0->f_9 == 11)
		{
			if (uParam0->f_22 == -1)
			{
				func_109(uParam0->f_73, uParam0->f_74, 1);
				func_110(uParam0->f_73, uParam0->f_21);
			}
		}
		if (!func_78(0) || func_79())
		{
			if (uParam0->f_34 > 0 && func_90(uParam0->f_73, 0))
			{
				uParam0->f_22 = func_109(uParam0->f_73, uParam0->f_74, uParam0->f_34);
				uParam0->f_34 = 0;
			}
		}
		uParam0->f_22 = -1;
		func_44(uParam0, 0);
	}
}

void func_44(var uParam0, int iParam1)
{
	if (uParam0->f_9 != iParam1)
	{
		uParam0->f_9 = iParam1;
		func_111(uParam0);
	}
}

void func_45(var uParam0)
{
	if (!CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_18)))
	{
		if (!CAM::_0xC285FD21294A1C49(&(uParam0->f_18)))
		{
			CAM::_0x6A4D224FC7643941(&(uParam0->f_18));
		}
	}
}

void func_46(int iParam0)
{
	if (!func_54(iParam0))
	{
		Global_1956172 = (Global_1956172 || iParam0);
	}
}

void func_47(int iParam0)
{
	if (!func_63(iParam0))
	{
		Global_1956172->f_1 = (Global_1956172->f_1 || iParam0);
	}
}

void func_48(int iParam0)
{
	if (func_63(iParam0))
	{
		Global_1956172->f_1 = (Global_1956172->f_1 - (Global_1956172->f_1 && iParam0));
	}
}

int func_49(var uParam0)
{
	int iVar0;
	int iVar1;

	uParam0->f_184 = 0;
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::_0x9A100F1CF4546629(iVar1))
			{
				uParam0->f_184 = 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_54(134217728) || !func_15(uParam0->f_139, 8192))
	{
		return 0;
	}
	if (func_112(Global_34, 0))
	{
		return 0;
	}
	if (PED::_0x4912DFE492DB98CD(Global_34, "inInspectionMode"))
	{
		return 0;
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_34, 227, true))
	{
		return 0;
	}
	if (func_113(Global_34))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34))
	{
		return 0;
	}
	if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
	{
		return 0;
	}
	if ((func_114(Global_34) || func_115(Global_34)) || func_116(Global_34))
	{
		return 0;
	}
	if (!func_117(Global_34, uParam0->f_141, -0.5f))
	{
		return 0;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_141, true, false), 1.5f) > 2)
	{
		return 0;
	}
	if (func_108() == -1)
	{
		if (func_118())
		{
			return 0;
		}
	}
	else if (func_118() && !((Global_1915180->f_19742 == 28 || Global_1915180->f_19742 == 27) || Global_1915180->f_19742 == 29))
	{
		return 0;
	}
	if (func_119(uParam0) == -1)
	{
		return 0;
	}
	return 1;
}

float func_50(int iParam0, int iParam1, bool bParam2)
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
	return func_20(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

void func_51(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_100(&(uParam0->f_149[iVar0])))
		{
			func_120(uParam0->f_149[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_52(var uParam0)
{
	func_120(&(uParam0->f_160), 1, 1);
	func_120(&(uParam0->f_159), 1, 1);
}

void func_53(int iParam0)
{
	if (func_54(iParam0))
	{
		Global_1956172 = (&Global_1956172 - (Global_1956172 && iParam0));
	}
}

bool func_54(int iParam0)
{
	return (Global_1956172 && iParam0) != 0;
}

void func_55(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0[iVar0]))
		{
			TASK::_SET_SCENARIO_POINT_FLAG(uParam0[iVar0], 8, !bParam1);
		}
		iVar0++;
	}
}

void func_56()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
}

int func_57(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam1, 0f, 0f, 0f, fParam4, fParam4, 1f);
	if (func_121(&iVar0))
	{
		func_122(iVar0);
		return 1;
	}
	iVar1 = ENTITY::_0x84CCF9A12942C83D(iVar0, *iParam0, 1, 1, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, *iParam0);
		iVar4 = MISC::_GET_ENTITY_FROM_ITEM(iVar3);
		if (ENTITY::IS_ENTITY_A_PED(iVar4))
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
			if (iVar5 != Global_34)
			{
				if (PED::_GET_CARRIER_AS_PED(iVar5) != Global_34)
				{
					func_122(iVar0);
					return 1;
				}
			}
		}
		iVar2++;
	}
	func_122(iVar0);
	return 0;
}

int func_58(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34) && !TASK::_0x0C3CB2E600C8977D(Global_34, 1))
		{
			if (((TASK::_0x02EBBB3989B7E695(Global_34) || (bParam0 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 0))) || (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_34) && TASK::GET_TASK_MOVE_NETWORK_EVENT(Global_34, "SCENARIO_POINT_TRANS_COMPLETE"))) || (func_54(16777216) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_59()
{
	int iVar0;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_34);
	switch (iVar0)
	{
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_MP_FEMALE_A"):
			return 3;
		case joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"):
		case joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A"):
			return 6;
		case joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A"):
			return 8;
		case joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A"):
			return 7;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COFFEE_ARTHUR"):
			return 1;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT_MP_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"):
			return 4;
		default:
			break;
	}
	return 0;
}

void func_60(var uParam0, int iParam1)
{
	uParam0->f_138 = iParam1;
}

void func_61(var uParam0)
{
	if ((((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_34) && uParam0->f_163) && !PED::_IS_PED_CARRYING(Global_34)) && !func_54(4)) && !WEAPON::_0x0DE0944ECCB3DF5D(Global_34))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_141))
		{
			if (!func_100(uParam0->f_159))
			{
				uParam0->f_159 = func_123("REST_BY_FIRE", joaat("INPUT_CONTEXT_Y"), uParam0->f_141, 1, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
			}
			else if (func_124(uParam0->f_159, 1))
			{
				func_66(uParam0);
				func_52(uParam0);
				uParam0->f_163 = 0;
			}
		}
	}
	else
	{
		func_125(uParam0);
	}
	if (func_100(uParam0->f_159))
	{
		func_126(uParam0->f_159, 1754796591, 0, 1);
	}
}

void func_62(var uParam0)
{
	if (uParam0->f_163)
	{
		if (!func_100(uParam0->f_160))
		{
			if (func_127(uParam0))
			{
				uParam0->f_160 = func_123("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_141, 1, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
				MISC::SET_BIT(&(Global_1956131->f_1), 2);
				MISC::SET_BIT(&(Global_1956131->f_1), 3);
				if (uParam0->f_184)
				{
					if (func_128(uParam0))
					{
						func_129(uParam0->f_160, "CAMP_REC_COOK", 1);
					}
					else
					{
						MISC::CLEAR_BIT(&(Global_1956131->f_1), 2);
						func_130(uParam0->f_160, 0, 1, 1);
					}
				}
			}
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34) || WEAPON::_0x0DE0944ECCB3DF5D(Global_34))
		{
			func_52(uParam0);
			uParam0->f_163 = 0;
		}
		else if (func_54(16777216) || uParam0->f_189)
		{
			func_53(16777216);
			uParam0->f_189 = 1;
			func_52(uParam0);
			uParam0->f_163 = 0;
		}
		else
		{
			if (uParam0->f_184 != uParam0->f_185)
			{
				if (uParam0->f_184)
				{
					if (func_128(uParam0) && !func_100(Global_1939067->f_82))
					{
						func_129(uParam0->f_160, "CAMP_REC_COOK", 1);
						func_130(uParam0->f_160, 1, 1, 1);
						uParam0->f_186 = 1;
					}
					else
					{
						func_120(&(uParam0->f_160), 1, 1);
						uParam0->f_160 = func_123("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_141, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
						func_130(uParam0->f_160, 0, 1, 1);
						uParam0->f_186 = 0;
					}
				}
				else
				{
					MISC::SET_BIT(&(Global_1956131->f_1), 2);
					MISC::SET_BIT(&(Global_1956131->f_1), 3);
					func_120(&(uParam0->f_160), 1, 1);
					uParam0->f_160 = func_123("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_141, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
				}
				uParam0->f_185 = uParam0->f_184;
			}
			if (func_124(uParam0->f_160, 1))
			{
				uParam0->f_189 = 1;
				MISC::CLEAR_BIT(&(Global_1956131->f_1), 2);
				func_52(uParam0);
				uParam0->f_163 = 0;
				if (uParam0->f_184)
				{
					if (func_128(uParam0))
					{
						uParam0->f_186 = 1;
					}
					else
					{
						uParam0->f_186 = 0;
					}
				}
				if (uParam0->f_184 && uParam0->f_186)
				{
					func_46(268435456);
				}
			}
		}
	}
	else
	{
		func_120(&(uParam0->f_160), 1, 1);
	}
	if (func_100(uParam0->f_160))
	{
		func_126(uParam0->f_160, 1754796591, 0, 1);
	}
}

bool func_63(int iParam0)
{
	return (Global_1956172->f_1 && iParam0) != 0;
}

char* func_64(int iParam0)
{
	return "CAMPFIRE";
}

float func_65(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_119(uParam0);
	if (iVar0 == -1)
	{
		func_53(268435456);
		func_53(16777216);
		uParam0->f_189 = 0;
		uParam0->f_146 = 0;
		return;
	}
	if (func_54(268435456))
	{
		func_131(Global_34, 1, 1);
		switch (iVar0)
		{
			case 0:
			case 3:
				uParam0->f_146 = 2;
				TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[0], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1f, false);
				uParam0->f_144 = 6;
				uParam0->f_143 = 0;
				break;
			case 1:
			case 2:
				uParam0->f_146 = 2;
				TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[1], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1f, false);
				uParam0->f_144 = 6;
				uParam0->f_143 = 1;
				break;
		}
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	else
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				iVar1 = 0;
				if (((func_54(16777216) || uParam0->f_189) || func_132(684307653, &iVar1)) || func_132(562107429, &iVar1))
				{
					bVar2 = true;
					if (func_133(0) || func_133(1))
					{
						bVar2 = false;
					}
					if (bVar2)
					{
						PED::_0xD65FDC686A031C83(Global_34, joaat("DYNAMIC_KNEEL_QUICK_ENTER"), 3f);
					}
					if (PED::IS_PED_MALE(Global_34))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1f, false);
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, true, false, 0, false, -1f, false);
					}
				}
				else if (uParam0->f_146 == 1)
				{
					if (PED::IS_PED_MALE(Global_34))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1f, false);
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, true, false, 0, false, -1f, false);
					}
				}
				else if (func_134())
				{
					if (PED::IS_PED_MALE(Global_34))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", 0, true, false, 0, false, -1f, false);
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A", 0, true, false, 0, false, -1f, false);
					}
				}
				else if (PED::IS_PED_MALE(Global_34))
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A", 0, true, false, 0, false, -1f, false);
				}
				else
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A", 0, true, false, 0, false, -1f, false);
				}
				break;
		}
		uParam0->f_143 = iVar0;
	}
}

void func_67()
{
	if (func_90(joaat("WEAPON_KIT_BINOCULARS"), 0))
	{
		func_135(32);
	}
	if (func_90(joaat("WEAPON_KIT_BINOCULARS_IMPROVED"), 0))
	{
		func_135(32);
	}
	if (func_90(joaat("WEAPON_KIT_CAMERA"), 0))
	{
		func_135(64);
	}
}

void func_68(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_100(&(uParam0->f_149[iVar0])))
		{
			if (func_136(&(uParam0->f_149[iVar0]), 0) == bParam1)
			{
			}
			else
			{
				func_130(&(uParam0->f_149[iVar0]), bParam1, 1, 1);
			}
		}
		iVar0++;
	}
}

void func_69(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_34);
	iVar1 = 0;
	if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A"))
	{
		if ((((((func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500) && !uParam0->f_189) && !func_54(16777216)) && uParam0->f_146 != 1) && !func_132(684307653, &iVar1)) && !func_132(562107429, &iVar1))
		{
			func_29(&(uParam0->f_172));
			func_75(joaat("KNEEL_TRANS_SQUAT"), 0.5f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A") || iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A"))
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			if (!func_95(&(uParam0->f_172)))
			{
				func_29(&(uParam0->f_172));
			}
			if (func_27(&(uParam0->f_172), 180f))
			{
				func_29(&(uParam0->f_172));
				if (!func_134())
				{
					func_75(joaat("SQUAT_TRANS_SIT"), 0.5f);
					uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	else if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A") || iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A"))
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			if (!func_95(&(uParam0->f_172)))
			{
				func_29(&(uParam0->f_172));
			}
			if (func_27(&(uParam0->f_172), 10f))
			{
				if (func_134())
				{
					func_29(&(uParam0->f_172));
					uParam0->f_164 = MISC::GET_GAME_TIMER();
					func_75(joaat("SIT_TRANS_SQUAT"), 0.5f);
				}
			}
		}
	}
	else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			func_75(joaat("KNIFE1_TRANS_KNEEL1"), 2f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			func_75(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 2f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_70(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam1)
	{
		iVar2 = iParam2;
		if (iParam3 != -1)
		{
			iVar1 = iParam3;
		}
		else
		{
			iVar1 = uParam0->f_143;
		}
	}
	else
	{
		iVar1 = uParam0->f_143;
		iVar2 = uParam0->f_144;
	}
	switch (iVar1)
	{
		case 0:
		case 1:
			switch (iVar2)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
				case 4:
					iVar0 = 0;
					break;
				default:
					if (func_108() != 0)
					{
						iVar0 = 544786;
					}
					else
					{
						iVar0 = 20498;
					}
					break;
			}
			break;
		case 2:
		case 3:
			if ((iVar2 == 3 || iVar2 == 4) || iVar2 == 1)
			{
				iVar0 = 0;
			}
			else if (func_108() != 0)
			{
				iVar0 = 544786;
			}
			else
			{
				iVar0 = 20498;
			}
			break;
	}
	if (TASK::_0x038B1F1674F0E242(Global_34) || uParam0->f_188)
	{
		iVar0 = 0;
	}
	else if (func_112(Global_34, 0) || WEAPON::_0x0DE0944ECCB3DF5D(Global_34))
	{
		if (!func_15(uParam0->f_140, 32))
		{
			func_137(207, 1);
			func_16(&(uParam0->f_140), 32);
		}
		iVar0 = 16;
	}
	func_138(uParam0, iVar0);
	if (uParam0->f_146 == 2)
	{
		func_68(uParam0, 0);
	}
	iVar3 = func_139(uParam0);
	if (iVar3 != -1)
	{
		if (uParam0->f_145 != -1)
		{
			uParam0->f_143 = uParam0->f_145;
		}
	}
	switch (iVar3)
	{
		case 0:
			func_103(&(uParam0->f_49));
			func_44(&(uParam0->f_49), 1);
			uParam0->f_146 = 6;
			break;
		case 8:
			func_51(uParam0);
			uParam0->f_188 = 1;
			break;
		case 2:
			func_44(&(uParam0->f_49), 2);
			func_60(uParam0, 0);
			uParam0->f_49.f_31 = 1;
			uParam0->f_146 = 2;
			func_51(uParam0);
			func_40(uParam0, 7);
			break;
		case 6:
			func_51(uParam0);
			uParam0->f_146 = 10;
			return 1;
		case 1:
			func_140(uParam0, func_15(uParam0->f_140, 16));
			uParam0->f_146 = 0;
			func_51(uParam0);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_71(var uParam0)
{
	switch (uParam0->f_143)
	{
		case 0:
			return func_141(uParam0);
		case 1:
			return func_142(uParam0);
		case 2:
			return func_143(uParam0);
		case 3:
			return func_144(uParam0);
	}
	func_51(uParam0);
	return 0;
}

int func_72(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = PED::_0xC488B8C0E52560D8(Global_34);
	bVar1 = PED::_0x2DC0E8DCBD3546E9(Global_34);
	if ((bVar0 || bVar1) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1944546609))
	{
		return 0;
	}
	if (bVar1 && uParam0->f_145 != -1)
	{
		iVar2 = func_35(uParam0);
		if (iVar2 != uParam0->f_145)
		{
			return 0;
		}
		if (uParam0->f_143 != iVar2)
		{
			uParam0->f_143 = iVar2;
			return 0;
		}
	}
	if (func_145())
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34))
	{
		return 0;
	}
	return 1;
}

int func_73(bool bParam0)
{
	if (func_108() == -1)
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

int func_74(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (func_146())
	{
		Global_1939231->f_10479 = iParam0;
		func_147(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_148(iParam0, bParam4))
	{
		return 0;
	}
	if (func_149(iParam0))
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
	if (func_150(iParam0, -2081717885))
	{
		func_151(iParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_150(iParam0, -1909684001))
	{
		func_152(iParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_150(iParam0, 587975446))
	{
		func_153(iParam0, Var10);
	}
	else if (func_150(iParam0, 566155764))
	{
		if (!func_154(iParam0))
		{
			return 0;
		}
	}
	if (func_155(iParam0, bParam5, bParam6, bParam1))
	{
		Global_1912976 = iParam0;
		Global_1913165 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_150(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_156(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_150(iParam0, -1472964441) || func_150(iParam0, -228153877)) || func_150(iParam0, 566155764))
	{
	}
	else if (func_150(iParam0, 1919582297))
	{
		if (((func_157() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1)) || TASK::_0x0C3CB2E600C8977D(Global_34, 1)) || !PED::IS_PED_ON_FOOT(Global_34))
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
		func_156(Var10, 0);
		bVar28 = false;
	}
	else if (func_158(iParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_159(Global_1070356->f_26843.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_156(Var10, 0);
		iVar29 = 1;
	}
	else if (func_91(iParam0) == joaat("CLOTHING"))
	{
		if (!func_160(iParam0))
		{
			func_161("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_162(iParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_163();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_164(PLAYER::PLAYER_ID()))
			{
				func_161("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_161("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1951141->f_1657 != iParam0)
			{
				func_165(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_166(iParam0, 0);
					return iVar29;
				case -2061583405:
					func_167(iParam0);
					func_165(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (iParam0 == &Global_1951141->f_1657.f_1[23 /*3*/])
					{
						func_168(Global_34, 260271636 /* GXTEntry: "No Gloves" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						PED::_0xCB9401F918CB0F75(Global_34, "PlayUnequipGlovesFidget", 1, 15);
						func_169(iParam0, 0);
						return 1;
					}
					else
					{
						PED::_0xCB9401F918CB0F75(Global_34, "PlayEquipGlovesFidget", 1, 15);
						func_169(iParam0, 1);
					}
					break;
				default:
					if (!func_150(iParam0, -1348134986))
					{
					}
					else
					{
						func_166(iParam0, 0);
					}
					break;
			}
			func_168(Global_34, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				func_170(1);
				break;
			case joaat("KIT_WARDROBE"):
				if (func_108() != -1)
				{
				}
				else if (!func_160(iParam0))
				{
					func_161("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_171(7, iParam0);
					bVar31 = func_171(1, iParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17094))
						{
							MAP::REMOVE_BLIP(&Global_17094);
						}
						Global_17094 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::_0x662D364ABF16DE2F(Global_17094, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
						func_161(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_17094), 10000, 0, 0, 0, 1);
					}
					else if (!func_172(7))
					{
						func_161("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_174(Global_34, func_173(7), 0))
						{
							func_161("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17094))
							{
								MAP::REMOVE_BLIP(&Global_17094);
							}
							Global_17094 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
							MAP::_0x662D364ABF16DE2F(Global_17094, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
							func_161(MISC::_CREATE_VAR_STRING(0, -482898802, Global_17094), 10000, 0, 0, 0, 1);
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
							func_156(Var10, 0);
						}
						Jump @2072; //curOff = 1569
						func_175();
						Jump @2072; //curOff = 1576
						if (!func_15(Global_1956172->f_1, 1) || func_15(Global_1956172->f_1, 512))
						{
							if (func_160(joaat("KIT_CAMP")))
							{
								if (func_176(1, 1))
								{
									func_177(2, 1);
								}
								else if (func_178(1))
								{
									func_161("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else if (func_179())
								{
									func_161("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										func_180();
									}
									else
									{
										func_161("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									func_181(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								func_161("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								func_181(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else if (func_179())
							{
								func_161("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								func_161("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1956172->f_1 |= 2;
							iVar29 = 1;
						}
						Jump @2072; //curOff = 1851
						if (!WEAPON::_IS_WEAPON_BINOCULARS(func_36(Global_34, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iParam0, true, 0, false, false);
						}
						return 1;
						Jump @2072; //curOff = 1889
						if (func_36(Global_34, 1, 0, 0) != joaat("WEAPON_KIT_CAMERA"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_KIT_CAMERA"), true, 0, false, false);
						}
						return 1;
						Jump @2072; //curOff = 1930
						Jump @2072; //curOff = 1933
						func_137(533, 1);
						Jump @2072; //curOff = 1944
						func_182(1);
						Jump @2072; //curOff = 1952
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("DOCUMENT_PLAYER_JOURNAL"), 1928812891, 1, 0, -1082130432);
						bVar28 = false;
						return 1;
						Jump @2072; //curOff = 1987
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
							func_156(Var10, 0);
						}
						return 1;
						Jump @2072; //curOff = 2063
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

int func_75(int iParam0, float fParam1)
{
	if (!PED::_0x68821369A2CEADD5(Global_34, iParam0))
	{
		PED::_0xD65FDC686A031C83(Global_34, iParam0, fParam1);
		PED::_0x6D07B371E9439019(Global_34);
		return 0;
	}
	return 1;
}

int func_76(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_183(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_184(iParam0, 1);
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
			func_185(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_23(iParam0, 1))
	{
		return 0;
	}
	Var5 = { func_186(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_94(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_94(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_76(iParam0, func_94(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_91(iParam0) == joaat("WEAPON"))
	{
		if (!func_187(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_147(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_188(iParam0, 0, 0) };
		if (func_78(0) && Var7.f_4 == 1084182731)
		{
			func_189(1, 0, 0);
		}
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1939067->f_21 = 0;
	}
	if (!func_78(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_185(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

int func_77(var uParam0, var uParam1)
{
	func_46(131072);
	if (func_190(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_78(bool bParam0)
{
	if (func_108() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_73(bParam0));
}

int func_79()
{
	if (INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return 0;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

void func_80(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (!func_78(0) || func_79())
	{
		return;
	}
	if (!func_90(iParam0, 0))
	{
		return;
	}
	func_192(func_191(joaat("ITEMS_CRAFTED")), iParam1);
	if (bParam3)
	{
		if (func_108() == -1)
		{
			if (func_150(iParam0, -1588156645))
			{
				iVar0 = func_194(func_193(iParam0, 0), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar0))
				{
					func_195(iVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_91(iParam0) == joaat("HORSE_EQUIPMENT"))
			{
				if (func_196(iParam0, 0))
				{
					func_185(iParam0, 1, 0, 1, 0, 0, 0);
				}
			}
			else
			{
				func_197(iParam0, iParam1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else
		{
			func_198(iParam0, iParam4, iParam1);
		}
	}
	func_199(iParam0, iParam1);
	Global_1051083 = iParam0;
}

void func_81(var uParam0)
{
	int iVar0;

	if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 250)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(Global_34);
		if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
		{
			func_75(joaat("KNIFE1_TRANS_KNEEL1"), 1086324736 /* Float: 6f */);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
		else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
		{
			func_75(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 1086324736 /* Float: 6f */);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34) && (MISC::GET_FRAME_COUNT() % 2) == 0)
		{
			TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
		}
	}
}

void func_82(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_83(var uParam0)
{
}

void func_84(var uParam0)
{
	uParam0->f_142 = 0;
	uParam0->f_143 = -1;
	uParam0->f_144 = 0;
	uParam0->f_145 = -1;
	uParam0->f_146 = 0;
	uParam0->f_141 = 0;
}

bool func_85(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB(iParam0, vParam1);
}

int func_86()
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
	if (!func_88(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

struct<2> func_87(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_88(struct<2> Param0)
{
	if (!func_200(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_201(Param0))
	{
		return 0;
	}
	return 1;
}

int func_89(var uParam0, var uParam1)
{
	return uParam0;
}

int func_90(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_91(int iParam0)
{
	vector3 vVar0;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_92(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_184(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_202("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_203(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_204(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_205(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_205(iVar1);
	}
	return 0;
}

bool func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_90(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_162(iParam0);
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
	iVar1 = func_206(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_207(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_208(iParam0);
	iVar2 = func_207(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_94(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_91(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_184(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_209(iParam0, 0);
	}
	if (func_210(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_73(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_211(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_73(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_95(var uParam0)
{
	return func_212(*uParam0, 1);
}

float func_96(var uParam0)
{
	if (!func_95(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_213(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_214() - uParam0->f_1);
}

void func_97(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_214() - fParam1);
	func_215(uParam0, 1);
	func_216(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_98(int* iParam0, var uParam1)
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

bool func_99(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_100(int iParam0)
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

void func_101(int iParam0)
{
	Global_1903007->f_302 = (Global_1903007->f_302 || iParam0);
}

int func_102(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_217(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bParam4)
	{
		vVar4 = { *uParam0 };
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_103(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_120((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("CRAFTING"), joaat("FOCUS_CAMERA")))
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
	func_53(8);
	ATTRIBUTE::_0xD962F8579D702DB5();
}

int func_105()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");
	}
	return 0;
}

void func_106(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1913166->f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_34, "player_crafting_active", bParam0);
}

void func_107(var uParam0)
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
	func_98(&(uParam0->f_79), &(uParam0->f_80));
	func_98(&(uParam0->f_81), &(uParam0->f_82));
	func_98(&(uParam0->f_83), &(uParam0->f_84));
}

int func_108()
{
	return Global_1572887->f_13;
}

int func_109(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	bool bVar6;
	struct<16> Var7;
	struct<16> Var23;

	if (!func_90(iParam0, 0))
	{
		return -1;
	}
	if (func_218(iParam0, iParam1, 0) < iParam2)
	{
		return -1;
	}
	Var0 = { func_188(iParam0, 1, 0) };
	if (func_219(iParam0, &Var0, iParam2, 0, 1, -1, 0))
	{
		return -1;
	}
	bVar6 = func_150(iParam0, 1992556171);
	if (bVar6)
	{
		iVar5 = func_220(iParam0, "SPEND STEW FEE", 1, 1, 0, iParam1);
	}
	else
	{
		Var7 = { func_221(iParam0, Var0, Var0.f_4, iParam2, 1) };
		Var7.f_13 = iParam1;
		Var7.f_12 = 1248274121;
		iVar5 = func_222(2113164098, &Var7, 1);
	}
	if (iVar5 == -1)
	{
		return -1;
	}
	Var23.f_7 = -142743235;
	Var23.f_1 = 1;
	func_223(iVar5, Var23);
	TELEMETRY::_0x78C2E029DB205A3A(iParam0, iParam1);
	return iVar5;
}

void func_110(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_224(11, 1, 0);
		iVar0++;
	}
	if (func_225(iParam0, 0))
	{
		func_226(40);
	}
	else
	{
		func_226(39);
	}
}

void func_111(var uParam0)
{
	uParam0->f_19 = 1;
}

int func_112(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_113(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

var func_114(int iParam0)
{
	return (func_227(iParam0, 4) || func_227(iParam0, 5));
}

int func_115(int iParam0)
{
	return func_227(iParam0, 7);
}

int func_116(int iParam0)
{
	return func_227(iParam0, 6);
}

bool func_117(int iParam0, int iParam1, float fParam2)
{
	return func_228(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_118()
{
	return (Global_1915180->f_20135 || Global_1915180->f_21989.f_1);
}

int func_119(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	fVar0 = 10000f;
	iVar1 = -1;
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0[iVar3]))
		{
			if (TASK::_GET_PED_USING_SCENARIO_POINT(uParam0[iVar3]) != 0)
			{
			}
			else if (!PED::_0xAB643407D0B26F07(Global_34, uParam0[iVar3], 0, 0, 1) && !func_54(268435456))
			{
			}
			else
			{
				ITEMSET::_0x20A4BF0E09BEE146(iVar2);
				if (func_57(&iVar2, TASK::_GET_SCENARIO_POINT_COORDS(uParam0[iVar3], true), 1065353216 /* Float: 1f */))
				{
				}
				else
				{
					fVar4 = func_20(Global_35, *(uParam0->f_5[iVar3 /*3*/]));
					if (fVar4 < fVar0)
					{
						iVar1 = iVar3;
						fVar0 = fVar4;
					}
				}
			}
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar2);
	return iVar1;
}

void func_120(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_100(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_229(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_230(iVar0);
	*uParam0 = 0;
}

int func_121(int iParam0)
{
	if (PED::_0xA1FBAC56D38563E2(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_122(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

int func_123(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	while (iVar0 < 60)
	{
		if (func_231(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1949759)[iVar0 /*23*/])->f_11 && iParam1 == ((*Global_1949759)[iVar0 /*23*/])->f_4)
				{
					if (iParam3 <= Global_1949759[iVar0 /*23*/])
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
				func_232(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

bool func_124(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_100(iParam0))
	{
		return false;
	}
	iVar0 = func_229(iParam0);
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
	if (HUD::_UIPROMPT_HAS_MASH_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_125(var uParam0)
{
	if (func_100(uParam0->f_159))
	{
		func_120(&(uParam0->f_159), 1, 1);
	}
}

void func_126(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_100(iParam0))
	{
		return;
	}
	iVar0 = func_229(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, iParam2);
}

int func_127(var uParam0)
{
	if (WEAPON::_0x0DE0944ECCB3DF5D(Global_34))
	{
		return 0;
	}
	if (uParam0->f_189)
	{
		return 0;
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
	{
		return 0;
	}
	if (func_54(16777216))
	{
		return 0;
	}
	if (func_54(1))
	{
		return 0;
	}
	return 1;
}

int func_128(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		iVar2 = func_233(iVar1);
		if (((func_234(iVar2) && !ENTITY::_GET_IS_LOOTED(iVar0)) && FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)) != 2) && !FIRE::_0xCDC25355C0D65963(iVar0))
		{
			uParam0->f_49.f_73 = iVar2;
			uParam0->f_49.f_74 = -214678071;
			if (func_100(uParam0->f_160))
			{
				func_126(uParam0->f_160, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_129(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_100(iParam0))
	{
		return;
	}
	iVar0 = func_229(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949759)[iVar0 /*23*/])->f_3, sParam1);
}

void func_130(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_100(iParam0))
	{
		return;
	}
	iVar0 = func_229(iParam0);
	if (bParam1)
	{
		func_235(iParam0, 4);
		if (bParam3)
		{
			func_236(iVar0, 1);
		}
		func_237(iVar0, 1);
	}
	else
	{
		func_238(iParam0, 4);
		func_237(iVar0, 0);
	}
}

void func_131(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar25;
	int iVar26;
	int iVar27[10];
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = func_239(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!func_78(0) || func_79())
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		func_240(iVar1, 0);
	}
	else if (PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
	{
		Var2.f_1 = 10;
		Var2.f_12 = 10;
		MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar0), &Var2, 0);
		iVar25 = 0;
		while (iVar25 < 10)
		{
			iVar26 = &Var2.f_1[iVar25];
			if (func_90(iVar26, 0))
			{
				if (!bParam1 || func_241(iVar26))
				{
					func_197(iVar26, &(Var2.f_12[iVar25]), bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar25++;
		}
	}
	else
	{
		iVar39 = PED::_GET_PED_DAMAGE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		if (func_23(joaat("PROVISION_TRINKET_BUCK_ANTLER"), 1))
		{
			if (iVar39 < 2 && MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				iVar40 = iVar39;
				iVar40++;
				iVar39 = iVar40;
			}
		}
		iVar41 = FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		iVar42 = func_242(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar41);
		PED::_0x6B89FAA36FC909A3(&iVar27, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar39, iVar42);
		iVar38 = 0;
		while (iVar38 < iVar27)
		{
			if (&iVar27[iVar38] != 0)
			{
				if (func_243(iVar0) && !func_244(&(iVar27[iVar38])))
				{
					iVar27[iVar38] = 0;
				}
				else if (!bParam1 || func_241(&(iVar27[iVar38])))
				{
					func_197(&(iVar27[iVar38]), 1, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar38++;
		}
	}
	iVar43 = func_245(&iVar0);
	if (!func_90(iVar43, 0))
	{
		iVar43 = func_246(iVar0);
	}
	if (func_90(iVar43, 0))
	{
		func_247(iVar43, 1, 1, -142743235);
	}
	ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_249(func_248(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1951141->f_1657.f_1[iVar1 /*3*/] != 0 && &Global_1951141->f_1657.f_1[iVar1 /*3*/] != &Global_1951141->f_81[iVar1 /*12*/])
	{
		iVar0 = &Global_1951141->f_1657.f_1[iVar1 /*3*/];
		if (func_162(iVar0) == iParam0 || (iParam0 == 81053684 && func_150(iVar0, -1348134986)))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	*iParam1 = 0;
	return 0;
}

int func_133(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, true, iParam0, false))
	{
		if (func_90(iVar0, 0))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0) || func_250(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_134()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
	if (((((iVar0 == joaat("RAIN") || iVar0 == joaat("SHOWER")) || iVar0 == joaat("SLEET")) || iVar0 == joaat("HURRICANE")) || iVar0 == joaat("THUNDERSTORM")) || iVar0 == joaat("THUNDER"))
	{
		return 1;
	}
	iVar1 = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
	if (((((iVar1 == joaat("RAIN") || iVar1 == joaat("SHOWER")) || iVar1 == joaat("SLEET")) || iVar1 == joaat("HURRICANE")) || iVar1 == joaat("THUNDERSTORM")) || iVar1 == joaat("THUNDER"))
	{
		return 1;
	}
	iVar2 = func_251();
	if (((iVar2 == 0 || iVar2 == 7) || iVar2 == 2) || iVar2 == 10)
	{
		return 1;
	}
	return 0;
}

void func_135(int iParam0)
{
	Global_1939067->f_39 = (Global_1939067->f_39 || iParam0);
}

bool func_136(int iParam0, bool bParam1)
{
	if (bParam1 && !func_100(iParam0))
	{
		return false;
	}
	return !func_231(iParam0, 4);
}

void func_137(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_252(iParam0, &iVar0, &iVar1);
	if (!func_253(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_254(iVar0, iVar1);
}

void func_138(var uParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -996707397))
	{
		func_16(&(uParam0->f_140), 2);
	}
	else
	{
		func_22(&(uParam0->f_140), 2);
	}
	if (func_15(iParam1, 1))
	{
		if (!func_100(&(uParam0->f_149[0])))
		{
			uParam0->f_149[0] = func_255("KNEEL_FIRE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_126(&(uParam0->f_149[0]), 1754796591, 0, 1);
		}
	}
	else if (func_100(&(uParam0->f_149[0])))
	{
		func_120(uParam0->f_149[0], 1, 1);
	}
	if (((func_15(iParam1, 4096) && func_15(uParam0->f_139, 16)) && !func_54(536870912)) && uParam0->f_146 != 2)
	{
		MISC::SET_BIT(&(Global_1956131->f_1), 2);
		MISC::SET_BIT(&(Global_1956131->f_1), 3);
		if (!func_100(&(uParam0->f_149[2])))
		{
			uParam0->f_149[2] = func_255("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_126(&(uParam0->f_149[2]), 1754796591, 0, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1956131->f_1), 2);
		if (func_100(&(uParam0->f_149[2])))
		{
			func_120(uParam0->f_149[2], 1, 1);
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	if (func_100(&(uParam0->f_149[6])))
	{
		func_120(uParam0->f_149[6], 1, 1);
	}
	if (func_54(134217728))
	{
		if (func_100(&(uParam0->f_149[6])))
		{
			func_130(&(uParam0->f_149[6]), 0, 1, 1);
		}
	}
	else if (func_100(&(uParam0->f_149[6])) && !func_136(&(uParam0->f_149[6]), 0))
	{
		func_130(&(uParam0->f_149[6]), 1, 1, 1);
	}
	if ((((func_54(1) || func_54(134217728)) || func_15(uParam0->f_140, 2)) && !func_54(4096)) && uParam0->f_146 != 2)
	{
		if (func_100(&(uParam0->f_149[2])))
		{
			func_130(&(uParam0->f_149[2]), 0, 1, 1);
		}
	}
	else if (func_100(&(uParam0->f_149[2])))
	{
		func_130(&(uParam0->f_149[2]), 1, 1, 1);
	}
	if ((func_15(iParam1, 16) && !func_54(536870912)) && uParam0->f_146 != 2)
	{
		if (!func_100(&(uParam0->f_149[1])))
		{
			uParam0->f_149[1] = func_255("LEAVE", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			if (func_15(iParam1, 524288) && uParam0->f_187)
			{
				func_256(&(uParam0->f_149[1]), 0, 1);
				func_257(&(uParam0->f_149[1]), 20, 1, 1);
				func_257(&(uParam0->f_149[1]), 13, 1, 1);
			}
			func_126(&(uParam0->f_149[1]), 1754796591, 0, 1);
		}
		if (func_15(iParam1, 524288) && uParam0->f_187)
		{
			if (!func_100(&(uParam0->f_149[8])))
			{
				uParam0->f_149[8] = func_255("LEAVE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
				func_257(&(uParam0->f_149[8]), 19, 1, 1);
				func_257(&(uParam0->f_149[8]), 20, 1, 1);
				func_257(&(uParam0->f_149[8]), 13, 1, 1);
				func_258(uParam0->f_149[8], "INPUT_PCAMP_TEARDWN");
				func_126(&(uParam0->f_149[8]), 1754796591, 0, 1);
			}
		}
		else if (func_100(&(uParam0->f_149[8])))
		{
			func_120(uParam0->f_149[8], 1, 1);
		}
	}
	else
	{
		if (func_100(&(uParam0->f_149[1])))
		{
			func_120(uParam0->f_149[1], 1, 1);
		}
		if (func_100(&(uParam0->f_149[8])))
		{
			func_120(uParam0->f_149[8], 1, 1);
		}
	}
	if (func_54(1048576) || func_15(uParam0->f_140, 2))
	{
		if (func_100(&(uParam0->f_149[1])) && func_136(&(uParam0->f_149[1]), 0))
		{
			func_130(&(uParam0->f_149[1]), 0, 1, 1);
			if (func_15(iParam1, 524288) && uParam0->f_187)
			{
				func_256(&(uParam0->f_149[1]), 0, 1);
			}
		}
	}
	else if (func_100(&(uParam0->f_149[1])) && !func_136(&(uParam0->f_149[1]), 0))
	{
		func_130(&(uParam0->f_149[1]), 1, 1, 1);
		if (func_15(iParam1, 524288) && uParam0->f_187)
		{
			func_256(&(uParam0->f_149[1]), 0, 1);
		}
	}
	if (func_54(256))
	{
		if (func_100(&(uParam0->f_149[8])))
		{
			func_130(&(uParam0->f_149[8]), 0, 1, 1);
		}
	}
	else if (func_100(&(uParam0->f_149[8])))
	{
		func_130(&(uParam0->f_149[8]), 1, 1, 1);
	}
	uParam0->f_161 = func_64(HUD::_UIPROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
	iVar0 = 1;
	if (!func_54(536870912))
	{
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_141, 3f, 1, iVar0, 1754796591, uParam0->f_161, 0);
	}
}

int func_139(var uParam0)
{
	int iVar0;

	if (func_54(16777216) || uParam0->f_189)
	{
		uParam0->f_189 = 0;
		func_53(16777216);
		uParam0->f_165 = -1;
		return 2;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_100(&(uParam0->f_149[iVar0])))
		{
			if (iVar0 == 1)
			{
				if (func_136(&(uParam0->f_149[iVar0]), 0))
				{
					if (func_259(&(uParam0->f_149[iVar0]), 1))
					{
						return iVar0;
					}
					else if (func_260())
					{
						if (!func_95(&(uParam0->f_166)))
						{
							func_29(&(uParam0->f_166));
						}
						if (func_261(&(uParam0->f_166), 0.5f))
						{
							return iVar0;
						}
					}
					else if (func_95(&(uParam0->f_166)))
					{
						func_262(&(uParam0->f_166));
					}
				}
			}
			else if (iVar0 == 8 || iVar0 == 6)
			{
				if (func_124(&(uParam0->f_149[iVar0]), 1))
				{
					return iVar0;
				}
				else if (iVar0 == 8)
				{
					if (func_263(&(uParam0->f_149[8]), 1))
					{
						if (!func_95(&(uParam0->f_49.f_86)))
						{
							func_29(&(uParam0->f_49.f_86));
						}
						else if (func_27(&(uParam0->f_49.f_86), 0.1f))
						{
							func_129(&(uParam0->f_149[8]), "CAMP_TEARDOWN", 1);
						}
					}
					else
					{
						if (func_95(&(uParam0->f_49.f_86)))
						{
							func_262(&(uParam0->f_49.f_86));
						}
						func_129(&(uParam0->f_149[8]), "LEAVE", 1);
					}
				}
			}
			else if (func_259(&(uParam0->f_149[iVar0]), 1))
			{
				if (iVar0 == 2)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
				}
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_140(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_22(&(uParam0->f_140), 16);
	}
}

int func_141(var uParam0)
{
	if (func_264(uParam0) && !func_15(uParam0->f_140, 4))
	{
		return 1;
	}
	if (!func_72(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_146)
	{
		case 1:
			switch (uParam0->f_144)
			{
				case 8:
					func_75(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
				case 7:
					func_75(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
				case 6:
					if (func_75(joaat("KNEEL1_TRANS_COFFEE1"), 1f))
					{
						return 1;
					}
					break;
				default:
					func_265(uParam0);
					break;
			}
			break;
		case 6:
			func_266(uParam0);
			break;
	}
	return 0;
}

int func_142(var uParam0)
{
	if (func_264(uParam0) && !func_15(uParam0->f_140, 4))
	{
		return 1;
	}
	if (!func_72(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_146)
	{
		case 1:
			switch (uParam0->f_144)
			{
				case 8:
					func_75(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
				case 7:
					func_75(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
				case 6:
					func_75(joaat("KNEEL2_TRANS_COFFEE2"), 1f);
					return 1;
				default:
					func_265(uParam0);
					break;
			}
			break;
		case 6:
			func_267(uParam0);
			break;
	}
	return 0;
}

int func_143(var uParam0)
{
	if (func_264(uParam0) && !func_15(uParam0->f_140, 4))
	{
		return 1;
	}
	if (!func_72(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_146)
	{
		case 1:
			switch (uParam0->f_144)
			{
				case 8:
					func_75(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
				case 7:
					func_75(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
				case 6:
					uParam0->f_145 = 1;
					if (func_268(Global_34, uParam0[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
					{
						return 1;
					}
					break;
				default:
					func_265(uParam0);
					break;
			}
			break;
	}
	return 0;
}

int func_144(var uParam0)
{
	if (func_264(uParam0) && !func_15(uParam0->f_140, 4))
	{
		return 1;
	}
	if (!func_72(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_146)
	{
		case 1:
			switch (uParam0->f_144)
			{
				case 8:
					func_75(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
				case 7:
					func_75(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
				case 6:
					uParam0->f_145 = 0;
					if (func_268(Global_34, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
					{
						return 1;
					}
					break;
				default:
					func_265(uParam0);
					break;
			}
			break;
	}
	return 0;
}

bool func_145()
{
	return (Global_1939231->f_1 || &Global_1939231 == 1);
}

int func_146()
{
	if (Global_1939231->f_36 == 3)
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_210(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_269(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_188(iParam0, bParam4, 0) };
	Var6 = { func_270(iParam0, Var1, Var1.f_4, bParam4) };
	return func_271(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

int func_148(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939231->f_7)
	{
		return 0;
	}
	if (((iParam0 != 1259508039 && iParam0 != joaat("KIT_CAMP")) && iParam0 != joaat("KIT_CAMP_SIMPLE")) && bParam1)
	{
		iVar0 = func_272(iParam0);
		if (func_150(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_273(1, iVar0))
		{
			return 0;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE"))
	{
		if (func_274())
		{
			return 0;
		}
	}
	if (!func_23(iParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_149(int iParam0)
{
	if (func_158(iParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(func_73(0), iParam0, func_275(0)))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("KIT_CAMP"):
		case joaat("KIT_CAMP_SIMPLE"):
			if (!Global_1956172->f_2)
			{
				func_276(1, 1);
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
				func_161(func_277(), 10000, 0, 0, 0, 1);
				Global_1915180->f_21989.f_5 = 0;
			}
			break;
	}
	return 1;
}

int func_150(int iParam0, int iParam1)
{
	if (!func_90(iParam0, 0))
	{
		return func_279(func_278(iParam0), iParam1);
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

void func_151(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_152(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_153(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

int func_154(int iParam0)
{
	if (func_108() == 0 && func_281(func_280(iParam0), 1, 0) != 0)
	{
		func_161("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return 0;
	}
	return 1;
}

int func_155(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_282(iParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1912977 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}
	switch (func_283(iParam0, -949239683))
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
				if (!func_284())
				{
					if (func_285(&Global_34))
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
					func_161("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
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
					func_286(iParam0);
				}
				else
				{
					func_287(iParam0);
				}
				return 1;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_288(iParam0, 1);
				return 1;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_289(iParam0, 1);
				return 1;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_290(iParam0);
				return 1;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_286(iParam0);
				}
				else
				{
					func_291(iParam0);
				}
				return 1;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_286(iParam0);
				}
				else
				{
					func_292(iParam0);
				}
				return 1;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_286(iParam0);
				}
				else
				{
					func_293(iParam0);
				}
				return 1;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_286(iParam0);
				}
				else
				{
					func_294(iParam0);
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
				func_295(iParam0);
				return 1;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_296(iParam0);
				return 1;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_297(iParam0);
				return 1;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_286(iParam0);
				return 1;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_298(iParam0, bParam3);
				return 1;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_299(iParam0, bParam3);
				return 1;
			}
			break;
	}
	return 0;
}

void func_156(struct<16> Param0, int iParam16)
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
	if (!func_300(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_301(&(Param0.f_10)))
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
			func_302(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_157()
{
	return Global_1893575 & 2 != 0;
}

int func_158(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (func_91(iParam0) == joaat("EMOTE"))
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0)
{
	return func_303(iParam0);
}

int func_160(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_91(iParam0) == joaat("CLOTHING"))
	{
		if (func_162(iParam0) == -999503751)
		{
		}
	}
	return 1;
}

var func_161(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_162(int iParam0)
{
	struct<2> Var0;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_163()
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

int func_164(int iParam0)
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

void func_165(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_304(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_305(Var0);
}

int func_166(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_306())
	{
		return 0;
	}
	if (!func_307(iParam0))
	{
		return 0;
	}
	if (func_308(iParam0))
	{
		iVar0 = 0;
		if (func_162(iParam0) == 81053684 || func_150(iParam0, -1348134986))
		{
			if (bParam1)
			{
				func_309(&iVar0, 2);
			}
		}
		return func_310(iParam0, iVar0);
	}
	return 0;
}

void func_167(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 10;
	iVar1 = &Global_1951141->f_1657.f_1[iVar0 /*3*/];
	if (iVar1 == iParam0)
	{
		PED::_0xCB9401F918CB0F75(Global_34, "PlayUnequipHatFidget", 1, 15);
		func_168(Global_34, -2065815962 /* GXTEntry: "No Hat" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		func_169(iParam0, 0);
		return;
	}
	PED::_0xCB9401F918CB0F75(Global_34, "PlayEquipHatFidget", 1, 15);
	func_168(Global_34, iParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (func_311(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_34, false, true, false, true);
		func_312();
		func_304(128);
		return;
	}
	if (iVar1 == &Global_1951141->f_81[iVar0 /*12*/])
	{
		func_169(iParam0, 1);
		return;
	}
	if (func_313(-2061583405, 0))
	{
		if (func_314(iVar1))
		{
			func_169(iVar1, 0);
		}
		else
		{
			func_315(iVar1, 1, 1, 0);
		}
		func_169(iParam0, 1);
		return;
	}
	if (func_314(iVar1))
	{
		func_169(iVar1, 0);
		func_169(iParam0, 1);
	}
	else if (func_314(iParam0))
	{
		if (iParam0 != func_316(0))
		{
			func_317(iParam0, iVar1);
			func_169(iParam0, 0);
			func_169(iVar1, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_34, false, true, false, true);
			func_304(128);
			func_169(iParam0, 1);
		}
	}
}

int func_168(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_188(iParam1, 1, 0) };
		iParam3 = func_318(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_319(iParam1, iParam2, func_249(iParam3, 1), bParam4, 1))
	{
		return 0;
	}
	func_320(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_321(iParam1, 0))
		{
			func_322(&(Global_1951141->f_1657.f_1[func_249(iParam3, 1) /*3*/]), 0);
		}
		else
		{
			func_322(iParam1, 1);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != &Global_1951141->f_81[func_249(iParam3, 1) /*12*/])
			{
				func_165(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_311(32768))
			{
				func_312();
				func_165(21, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_323(iParam3);
	if (bParam8)
	{
		func_324(&iVar5, 4);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_165(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_165(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_169(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_188(iParam0, 0, 0) };
	Var5 = { func_270(iParam0, Var0, Var0.f_4, 0) };
	if (func_325(iParam0, Var0, Var0.f_4, 0, 0, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_73(0), &Var5, iParam1);
}

void func_170(bool bParam0)
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

int func_171(int iParam0, int iParam1)
{
	int iVar0;

	iParam0 = func_326(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
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
	if (func_327(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
{
	int iVar0;

	iParam0 = func_326(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_328())
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

int func_173(int iParam0)
{
	iParam0 = func_326(iParam0);
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

int func_174(int iParam0, int iParam1, bool bParam2)
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

void func_175()
{
	if (func_329())
	{
		return;
	}
	if (func_330())
	{
		TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432);
		Global_1915180->f_21989.f_1 = 1;
		Global_1051388->f_42 = 0;
		func_331();
	}
	else if (Global_1915180->f_21989.f_5 != 0)
	{
		func_161(func_277(), 10000, 0, 0, 0, 1);
		Global_1051388->f_3577 = 0;
		func_332(0);
		Global_1915180->f_21989.f_5 = 0;
	}
}

int func_176(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_333() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return 0;
	}
	if (!func_334(16))
	{
		return 0;
	}
	if (func_335())
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
		{
			return 0;
		}
	}
	if (!func_336())
	{
		return 0;
	}
	if (func_337(16))
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0) || !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	if (iParam0 == 1 && func_99(Global_1131092->f_8, 1))
	{
		return 0;
	}
	if (func_179())
	{
		return 0;
	}
	return 1;
}

int func_177(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_338();
	}
	if (!func_339(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_340(iParam0);
	Global_1896726->f_386 = 1;
	Global_1896726->f_387 = bParam1;
	return 1;
}

bool func_178(int iParam0)
{
	return func_99(Global_1131092->f_8, iParam0);
}

int func_179()
{
	int iVar0;

	iVar0 = func_341(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (((*Global_1125276)[iVar0 /*27*/])->f_18.f_1 != 0 && func_99(((*Global_1125276)[iVar0 /*27*/])->f_18, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_180()
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_87(0) };
	if (func_88(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_342(PLAYER::PLAYER_ID(), 0);
			if (iVar2 != -1)
			{
				if (func_343(iVar2) == joaat("POSSE_VERSUS"))
				{
					func_161("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_161("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_161("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_161("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_181(int iParam0)
{
	struct<19> Var0;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_345(Var0, func_344(0, 8), 0, 0);
}

void func_182(bool bParam0)
{
	if ((func_108() != -1 || !bParam0) || func_113(Global_34))
	{
		func_346();
		return;
	}
}

bool func_183(int iParam0)
{
	return func_91(iParam0) == joaat("CONSUMABLE");
}

int func_184(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_91(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_150(iParam0, 1399091007))
	{
		func_347(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_185(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (!func_90(iParam0, 0))
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
	if (!func_348() || bParam6)
	{
		func_349(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_350(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_350(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_351(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_91(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if (((((((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER")) && iParam0 != joaat("AMMO_HATCHET_HUNTER")) && iParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && iParam0 != joaat("AMMO_BOLAS")) && iParam0 != joaat("AMMO_POISONBOTTLE")) && iParam0 != joaat("AMMO_MOONSHINEJUG_MP"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_162(iParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_352(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	if (func_150(iParam0, 474910316))
	{
		sVar17 = func_353(iParam0);
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
	if (func_150(iParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	iVar18 = func_354(iParam0);
	if ((func_355(iVar12) && func_150(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_356(iParam0);
	}
	sVar19 = func_357(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (((((iParam1 == 1 || func_150(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && iParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && iParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && iParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, func_358(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		if (!func_150(iParam0, 920823793))
		{
			StringCopy(&cVar20, "", 128);
			if (func_359(iParam0, &cVar20))
			{
				sVar19 = func_361(func_360(cVar20), joaat("COLOR_PURE_WHITE"));
			}
		}
	}
	func_362(sVar19, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_186(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_90(iParam0, 0))
	{
		return Var0;
	}
	if (func_150(iParam0, -305066475))
	{
		if (func_108() == -1)
		{
			if (func_150(iParam0, -537818634))
			{
				return func_363(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_363(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_150(iParam0, -537818634))
	{
		return func_363(joaat("MEDICINE_ITEMS"));
	}
	if (func_150(iParam0, 2084895747))
	{
		return func_363(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

int func_187(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_364(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_366(&Var0, func_365(0));
	}
	if (!func_367(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_203(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_271(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_205(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

struct<5> func_188(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_368(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_91(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_270(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_365(bParam1) };
			if (bParam2 && func_369(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_370(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_370(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_371(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_372(bParam1) };
			switch (func_162(iParam0))
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
			if (func_373(iParam0, -1823706425))
			{
				Var0 = { func_270(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_373(iParam0, -1483207246))
			{
				Var0 = { func_270(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_270(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_373(iParam0, -1653629781))
			{
				Var0 = { func_270(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_374(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_373(iParam0, -1653629781))
			{
				Var0 = { func_270(1384535894, Var0, 1784584921, bParam1) };
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

void func_189(bool bParam0, bool bParam1, int iParam2)
{
	Global_1939231->f_4 = bParam0;
	Global_1939231->f_34 = iParam2;
	if (bParam1 || (func_375() && iParam2 == 0))
	{
		func_376(1);
		func_377(1);
	}
}

int func_190(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	func_53(1024);
	uParam0->f_49.f_31 = 1;
	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_34);
	if (func_54(268435456) && uParam0->f_138 < 9)
	{
		func_378(&(uParam0->f_49));
		func_379(&(uParam0->f_49));
		if ((MISC::GET_GAME_TIMER() - uParam0->f_165) > 1000 && func_380(&(uParam0->f_49)))
		{
			func_381();
			if (func_72(uParam0))
			{
				if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A") || iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A"))
				{
					func_75(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					return 0;
				}
				else if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A") || iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A"))
				{
					func_75(joaat("SIT_TRANS_KNEEL"), 0.5f);
					return 0;
				}
			}
			else
			{
				return 0;
			}
			if (Global_1913166->f_1577 != 0)
			{
				uParam0->f_49.f_73 = Global_1913166->f_1577;
			}
			uParam0->f_49.f_74 = -214678071;
			uParam0->f_165 = -1;
			CAM::DO_SCREEN_FADE_IN(500);
			if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_MELEE_KNIFE"), true, 0, false, false);
				uParam0->f_190 = 1;
			}
			func_46(16384);
			func_53(65536);
			Global_1956172->f_2 = 0;
			if (func_78(0) && !func_79())
			{
				func_382(uParam0->f_49.f_73, uParam0->f_49.f_74, 1, 0, 0);
			}
			STATS::_0x378D3B1B11D9385B(uParam0->f_49.f_73);
			uParam0->f_176 = 3;
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_147))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_147));
			}
			uParam0->f_147 = OBJECT::CREATE_OBJECT(func_383(uParam0->f_49.f_73), Global_35, false, false, false, false, true);
			if (PED::_0x3BBDD6143FF16F98(Global_34, uParam0->f_147, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
			{
			}
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_147, false);
			OBJECT::_SET_OBJECT_AFTERBURN_LEVEL(uParam0->f_147, 0f, true);
			func_103(&(uParam0->f_49));
			func_44(&(uParam0->f_49), 2);
			uParam0->f_149[3] = func_255("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, 7000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_384(uParam0, 3, 0, 0);
			func_130(&(uParam0->f_149[3]), 0, 1, 1);
			func_126(&(uParam0->f_149[3]), -1067771379, 0, 1);
			uParam0->f_49.f_58 = 0;
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_49.f_35);
			func_16(&(uParam0->f_140), 16);
			func_60(uParam0, 9);
		}
		return 0;
	}
	if (uParam0->f_138 != 0)
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	}
	if (uParam0->f_138 > 0)
	{
		HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_49.f_73), 1, 0, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 442509369))
	{
		uParam0->f_179++;
		if (uParam0->f_49.f_73 == joaat("CONSUMABLE_COFFEE"))
		{
			if (func_385())
			{
				func_386(1);
			}
			else if (func_387())
			{
				func_386(0);
			}
		}
		func_388(uParam0->f_49.f_73, BUILTIN::TO_FLOAT(uParam0->f_176), uParam0->f_179 >= uParam0->f_176);
	}
	if (func_78(0) && !func_79())
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -936525963))
		{
			uParam0->f_182 = 1;
			func_80(uParam0->f_49.f_73, 1, 1, 1, 0);
		}
	}
	if (uParam0->f_138 >= 10)
	{
		if (func_100(&(uParam0->f_149[5])) && func_259(&(uParam0->f_149[5]), 1))
		{
			uParam0->f_178 = 3;
		}
	}
	if (uParam0->f_49.f_22 != -1 && func_389(&(uParam0->f_49)) != 12)
	{
		if (func_390(uParam0->f_49.f_22))
		{
		}
		else
		{
			uParam0->f_49.f_22 = -1;
		}
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_34, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_34, 0, 1);
	switch (uParam0->f_138)
	{
		case 0:
			if (func_72(uParam0))
			{
				if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A") || iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A"))
				{
					func_75(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					return 0;
				}
				else if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A") || iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A"))
				{
					func_75(joaat("SIT_TRANS_KNEEL"), 0.5f);
					return 0;
				}
			}
			if (((func_72(uParam0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336)) && func_391(iVar0)) || func_389(&(uParam0->f_49)) == 12)
			{
				func_392(&(uParam0->f_49), 1);
				if (func_389(&(uParam0->f_49)) == 11)
				{
					if (func_234(uParam0->f_49.f_73))
					{
						func_393(uParam0);
					}
					else if (uParam0->f_49.f_76)
					{
						uParam0->f_176 = 1;
						func_46(131072);
						if (func_78(0) && !func_79())
						{
							func_382(uParam0->f_49.f_73, uParam0->f_49.f_74, 1, func_394(), 0);
						}
						func_44(&(uParam0->f_49), 0);
						func_103(&(uParam0->f_49));
						func_120(uParam0->f_149[3], 1, 1);
						iVar1 = 6000;
						iVar2 = 10000;
						if (func_15(uParam0->f_139, 16384))
						{
							iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
							iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 0.8f));
						}
						uParam0->f_149[3] = func_255("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar1, iVar2, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
						func_384(uParam0, 3, 0, 0);
						func_130(&(uParam0->f_149[3]), 0, 1, 1);
						func_126(&(uParam0->f_149[3]), -1067771379, 0, 1);
						func_395();
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						func_60(uParam0, 1);
					}
					else
					{
						func_22(&(uParam0->f_140), 4);
						func_46(131072);
					}
				}
				else if (func_389(&(uParam0->f_49)) == 0)
				{
					func_68(uParam0, 1);
					func_53(131072);
					func_53(16384);
					func_46(262144);
					func_46(65536);
					if (func_54(8192))
					{
						func_44(&(uParam0->f_49), 0);
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						func_103(&(uParam0->f_49));
						uParam0->f_181 = 0;
						return 1;
					}
				}
				else if (func_389(&(uParam0->f_49)) == 1 || func_112(Global_34, 0))
				{
					func_22(&(uParam0->f_140), 4);
					uParam0->f_49.f_31 = 0;
					func_140(uParam0, uParam0->f_49.f_23);
					func_68(uParam0, 1);
					func_103(&(uParam0->f_49));
					func_53(131072);
					func_53(16384);
					func_46(262144);
					func_46(65536);
					uParam0->f_146 = 6;
					uParam0->f_164 = MISC::GET_GAME_TIMER();
					uParam0->f_181 = 0;
					return 1;
				}
			}
			break;
		case 1:
			if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 250)
			{
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					if (func_75(joaat("KNIFE1_TRANS_KNEEL1"), 1086324736 /* Float: 6f */))
					{
					}
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
				{
					func_75(joaat("KNEELFIRECRAFTCUP_TRANS_KNEELFIRECRAFT"), 1086324736 /* Float: 6f */);
					func_60(uParam0, 2);
				}
				else
				{
					func_75(joaat("KNEEL1_TRANS_KNEELFIRECRAFT"), 1086324736 /* Float: 6f */);
					func_60(uParam0, 2);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
			}
			break;
		case 2:
			if (!func_136(&(uParam0->f_149[3]), 0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1070143458) || func_72(uParam0))
				{
					func_130(&(uParam0->f_149[3]), 1, 1, 1);
				}
			}
			if (func_124(&(uParam0->f_149[3]), 1))
			{
				if (PAD::_0x1252C029FC8EBB4D())
				{
					PAD::_0x709BA8C08C5C008D();
				}
				func_384(uParam0, 3, 1, 0);
				func_120(uParam0->f_149[3], 1, 1);
				if (((func_91(uParam0->f_49.f_73) == joaat("CONSUMABLE") && !func_150(uParam0->f_49.f_73, -1242251796)) && !func_150(uParam0->f_49.f_73, 1919582297)) && !func_150(uParam0->f_49.f_73, -651046900))
				{
					uParam0->f_149[5] = func_255("USE_ITEM", joaat("INPUT_GAME_MENU_TAB_RIGHT_SECONDARY"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_126(&(uParam0->f_149[5]), -1067771379, 0, 1);
					func_257(&(uParam0->f_149[5]), 10, 1, 1);
					uParam0->f_149[4] = func_255("STOW_ITEM", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_257(&(uParam0->f_149[4]), 10, 1, 1);
					func_126(&(uParam0->f_149[4]), -1067771379, 0, 1);
					if (func_283(uParam0->f_49.f_73, -1636519629) == -701492487)
					{
						func_129(&(uParam0->f_149[5]), "DRINK", 1);
						func_130(&(uParam0->f_149[4]), 0, 1, 1);
					}
					if (!func_396(2))
					{
						func_130(&(uParam0->f_149[5]), 0, 1, 1);
					}
					ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_49.f_73, 1);
				}
				if (!func_78(0) || func_79())
				{
					uParam0->f_49.f_22 = func_109(uParam0->f_49.f_73, uParam0->f_49.f_74, 1);
					if (func_100(&(uParam0->f_149[5])))
					{
						func_130(&(uParam0->f_149[5]), 0, 1, 1);
					}
				}
				uParam0->f_179 = 0;
				func_29(&(uParam0->f_169));
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				uParam0->f_182 = 0;
				func_60(uParam0, 3);
			}
			else if (func_136(&(uParam0->f_149[3]), 0))
			{
				func_397(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_72(uParam0))
			{
				if (func_261(&(uParam0->f_169), 0.1f))
				{
					if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE_MP_FEMALE_A"))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						func_75(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFT"), 1f);
						func_29(&(uParam0->f_169));
					}
					else
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						func_75(joaat("KNEELFIRECRAFT_TRANS_KNEELPOSTFIRECRAFT"), 1086324736 /* Float: 6f */);
					}
				}
			}
			func_398(uParam0);
			if (func_100(&(uParam0->f_149[5])))
			{
				if (func_136(&(uParam0->f_149[5]), 0) && (func_259(&(uParam0->f_149[5]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CRAFTING_EAT"))))
				{
					if (!func_78(0) || func_79())
					{
						func_76(uParam0->f_49.f_73, 1, 1, -142743235);
					}
					ATTRIBUTE::_0xD962F8579D702DB5();
					func_80(uParam0->f_49.f_73, 1, 1, 0, 0);
					func_120(uParam0->f_149[5], 1, 1);
					func_120(uParam0->f_149[4], 1, 1);
					func_399(uParam0, 1);
					func_53(131072);
					func_44(&(uParam0->f_49), 15);
					func_60(uParam0, 5);
					return 0;
				}
			}
			if ((!func_100(&(uParam0->f_149[5])) || (func_136(&(uParam0->f_149[4]), 0) && (func_400(&(uParam0->f_149[4]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_OPTION"))))) || func_112(Global_34, 0))
			{
				func_120(uParam0->f_149[5], 1, 1);
				func_120(uParam0->f_149[4], 1, 1);
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				if (uParam0->f_181)
				{
					uParam0->f_181 = 0;
					func_104(&(uParam0->f_49), 0);
					AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
					func_44(&(uParam0->f_49), 1);
				}
				else
				{
					func_44(&(uParam0->f_49), 15);
				}
				func_399(uParam0, 1);
				func_60(uParam0, 4);
				return 0;
			}
			break;
		case 4:
			if (func_72(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 100 || func_95(&(uParam0->f_169))))
			{
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE_MP_FEMALE_A"))
				{
					func_75(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736 /* Float: 6f */);
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_MP_FEMALE_A"))
				{
					func_75(joaat("KNEELFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736 /* Float: 6f */);
					func_75(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736 /* Float: 6f */);
				}
				else
				{
					func_75(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736 /* Float: 6f */);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				func_60(uParam0, 7);
			}
			break;
		case 5:
			func_401();
			if (func_72(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 100 || func_95(&(uParam0->f_169))))
			{
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE_MP_FEMALE_A"))
				{
					func_75(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736 /* Float: 6f */);
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_MP_FEMALE_A"))
				{
					func_75(joaat("KNEELFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736 /* Float: 6f */);
					func_75(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736 /* Float: 6f */);
				}
				else
				{
					func_75(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736 /* Float: 6f */);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				func_60(uParam0, 6);
			}
			break;
		case 9:
			if (func_72(uParam0))
			{
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
				{
					func_75(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 1086324736 /* Float: 6f */);
					return 0;
				}
				uParam0->f_178 = 0;
				func_53(268435456);
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					func_75(joaat("KNIFE1_TRANS_COOKKNIFE"), 1086324736 /* Float: 6f */);
					func_46(16384);
					func_60(uParam0, 10);
				}
				else
				{
					func_75(joaat("KNEEL1_TRANS_COOKKNIFE"), 1086324736 /* Float: 6f */);
					func_46(16384);
					func_60(uParam0, 10);
				}
			}
			break;
		case 10:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -560091334))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_147, true);
			}
			if (!func_136(&(uParam0->f_149[3]), 0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1070143458))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("cook_meat_sizzle_loop", uParam0->f_147, "Player_Campfire_Sounds", false, 0, 0);
					AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
					func_130(&(uParam0->f_149[3]), 1, 1, 1);
					func_402(&(uParam0->f_149[3]), 1);
				}
			}
			if (func_124(&(uParam0->f_149[3]), 1))
			{
				uParam0->f_175 = -1;
				OBJECT::_SET_OBJECT_AFTERBURN_LEVEL(uParam0->f_147, 1f, true);
				if (PAD::_0x1252C029FC8EBB4D())
				{
					PAD::_0x709BA8C08C5C008D();
				}
				uParam0->f_149[4] = func_255("STOW_ITEM", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				uParam0->f_149[5] = func_255("EAT_MEAT", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				func_257(&(uParam0->f_149[5]), 10, 1, 1);
				func_257(&(uParam0->f_149[4]), 10, 1, 1);
				func_126(&(uParam0->f_149[4]), -1067771379, 0, 1);
				func_126(&(uParam0->f_149[5]), -1067771379, 0, 1);
				if (func_403(uParam0->f_49.f_73, 1, 0) || func_63(64))
				{
					func_130(&(uParam0->f_149[4]), 0, 1, 1);
					func_48(64);
				}
				else if (!func_396(2))
				{
					func_130(&(uParam0->f_149[5]), 0, 1, 1);
				}
				func_120(uParam0->f_149[3], 1, 1);
				func_29(&(uParam0->f_169));
				func_53(16384);
				uParam0->f_179 = 0;
				if (!func_78(0) || func_79())
				{
					uParam0->f_49.f_22 = func_109(uParam0->f_49.f_73, uParam0->f_49.f_74, 1);
					func_130(&(uParam0->f_149[5]), 0, 1, 1);
				}
				ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_49.f_73, 1);
				AUDIO::_0x0F2A2175734926D8("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				uParam0->f_182 = 0;
				func_60(uParam0, 11);
			}
			else
			{
				func_397(uParam0, iVar0);
				if (uParam0->f_175 == -1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1070143458))
					{
						uParam0->f_175 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					fVar3 = func_404(&(uParam0->f_149[3]), 1);
					fVar3 = func_405(fVar3, 0f, 1f);
					OBJECT::_SET_OBJECT_AFTERBURN_LEVEL(uParam0->f_147, (1f * fVar3), true);
				}
			}
			break;
		case 11:
			if (func_72(uParam0))
			{
				if (func_261(&(uParam0->f_169), 0.1f))
				{
					uParam0->f_164 = MISC::GET_GAME_TIMER();
					if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_MP_FEMALE_A"))
					{
						func_75(joaat("COOKKNIFE_SEAR_TRANS_BETWEEN_BITES"), 2f);
					}
					else
					{
						func_75(joaat("COOKKNIFE_TRANS_BETWEEN_BITES"), 2f);
					}
				}
			}
			func_398(uParam0);
			if (func_100(&(uParam0->f_149[5])))
			{
				if (func_136(&(uParam0->f_149[5]), 0) && (func_259(&(uParam0->f_149[5]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CRAFTING_EAT"))))
				{
					uParam0->f_178 = (uParam0->f_178 - 1);
					if (uParam0->f_177)
					{
						uParam0->f_177 = 0;
					}
					ATTRIBUTE::_0xD962F8579D702DB5();
					func_80(uParam0->f_49.f_73, 1, 1, 0, 0);
					func_120(uParam0->f_149[5], 1, 1);
					func_120(uParam0->f_149[4], 1, 1);
					func_399(uParam0, 1);
					func_46(32768);
					if (!func_78(0) || func_79())
					{
						func_76(uParam0->f_49.f_73, 1, 1, -142743235);
					}
					uParam0->f_164 = MISC::GET_GAME_TIMER();
					func_60(uParam0, 13);
					return 0;
				}
			}
			if (func_100(&(uParam0->f_149[4])))
			{
				if ((((func_136(&(uParam0->f_149[4]), 0) && (func_259(&(uParam0->f_149[4]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_OPTION")))) || uParam0->f_180) || func_112(Global_34, 0)) || TASK::_0x916B8E075ABC8B4E(Global_34, 1))
				{
					func_47(16);
					uParam0->f_180 = 0;
					ATTRIBUTE::_0xD962F8579D702DB5();
					func_120(uParam0->f_149[4], 1, 1);
					func_120(uParam0->f_149[5], 1, 1);
					func_399(uParam0, 1);
					func_60(uParam0, 16);
					return 0;
				}
			}
			break;
		case 16:
			if (func_72(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 250 || func_95(&(uParam0->f_169))))
			{
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_MP_FEMALE_A"))
				{
					func_75(joaat("COOKKNIFE_SEAR_TRANS_KNIFE1_STOW"), 1f);
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ARTHUR") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_MP_FEMALE_A"))
				{
					func_75(joaat("COOKKNIFE_TRANS_KNIFE1_STOW"), 1f);
				}
				else
				{
					func_75(joaat("BETWEEN_BITES_TRANS_KNIFE1_STOW"), 1f);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				func_60(uParam0, 15);
			}
			break;
		case 13:
			func_401();
			if (func_72(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 250 || func_95(&(uParam0->f_169))))
			{
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_MP_FEMALE_A"))
				{
					func_75(joaat("COOKKNIFE_SEAR_TRANS_KNIFE1_EAT"), 1f);
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ARTHUR") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_MP_FEMALE_A"))
				{
					func_75(joaat("COOKKNIFE_TRANS_KNIFE1_EAT"), 1f);
				}
				else
				{
					func_75(joaat("BETWEEN_BITES_TRANS_KNIFE1_EAT"), 2f);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				func_60(uParam0, 14);
			}
			break;
		case 6:
		case 7:
		case 14:
		case 15:
			if (uParam0->f_138 == 14 || uParam0->f_138 == 6)
			{
				func_401();
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -243011316) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336))
			{
				func_406(uParam0, 1);
				func_53(32768);
				func_48(16);
				if (uParam0->f_138 == 14 || uParam0->f_138 == 15)
				{
					func_46(65536);
					func_60(uParam0, 12);
				}
				else
				{
					func_60(uParam0, 8);
				}
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 750)
			{
				if (!PED::_0xC488B8C0E52560D8(Global_34))
				{
					if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
					{
						func_46(65536);
						func_60(uParam0, 12);
					}
					else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
					{
						func_60(uParam0, 8);
					}
					else if (uParam0->f_138 == 14)
					{
						func_60(uParam0, 13);
					}
					else if (uParam0->f_138 == 15)
					{
						func_60(uParam0, 16);
					}
					else if (uParam0->f_138 == 7)
					{
						func_60(uParam0, 4);
					}
					else if (uParam0->f_138 == 6)
					{
						func_60(uParam0, 5);
					}
				}
			}
			break;
		case 8:
		case 12:
			func_46(1024);
			if (func_63(128))
			{
				if (func_136(&(uParam0->f_149[7]), 0))
				{
					func_130(&(uParam0->f_149[7]), 0, 1, 1);
				}
				if (func_136(&(uParam0->f_149[1]), 0))
				{
					func_130(&(uParam0->f_149[1]), 0, 1, 1);
				}
			}
			else
			{
				func_406(uParam0, 1);
			}
			if (func_136(&(uParam0->f_149[3]), 0))
			{
				if (func_112(Global_34, 0))
				{
					func_130(&(uParam0->f_149[3]), 0, 1, 1);
				}
			}
			if (func_259(&(uParam0->f_149[3]), 1))
			{
				func_53(65536);
				func_407(&(uParam0->f_149));
				if (uParam0->f_138 == 12)
				{
					func_393(uParam0);
				}
				else
				{
					func_408(uParam0);
				}
			}
			else if (func_259(&(uParam0->f_149[7]), 1))
			{
				func_53(65536);
				func_407(&(uParam0->f_149));
				func_60(uParam0, 0);
				func_44(&(uParam0->f_49), 15);
				uParam0->f_181 = 0;
			}
			else if (func_124(&(uParam0->f_149[1]), 1))
			{
				func_53(65536);
				func_407(&(uParam0->f_149));
				func_60(uParam0, 0);
				uParam0->f_181 = 0;
				func_104(&(uParam0->f_49), 0);
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
				func_44(&(uParam0->f_49), 1);
				func_60(uParam0, 0);
				return 0;
			}
			else if (func_263(&(uParam0->f_149[1]), 1))
			{
				if (!func_95(&(uParam0->f_49.f_86)))
				{
					func_29(&(uParam0->f_49.f_86));
				}
				else if (func_27(&(uParam0->f_49.f_86), 0.1f))
				{
					func_129(&(uParam0->f_149[1]), "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_95(&(uParam0->f_49.f_86)))
				{
					func_262(&(uParam0->f_49.f_86));
				}
				if (func_100(&(uParam0->f_149[1])))
				{
					func_129(&(uParam0->f_149[1]), "CAMP_REC_BACK", 1);
				}
			}
			break;
	}
	return 0;
}

struct<2> func_191(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_192(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_193(int iParam0, bool bParam1)
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
	if (func_90(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_409(iVar0) || func_410(iVar0))
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

int func_194(int iParam0, bool bParam1)
{
	if (!func_90(iParam0, 0))
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

void func_195(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_204(iParam0))
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

int func_196(int iParam0, bool bParam1)
{
	var uVar0;
	var uVar5;
	var uVar9;
	struct<5> Var10;
	var uVar15;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!func_411(iParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_412() };
	Var10.f_4 = uVar9;
	if (func_413(iParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_414(iParam0, 1))
			{
			}
		}
		if (func_415(iParam0))
		{
			func_196(func_416(iParam0), 1);
		}
		func_417();
		return 1;
	}
	return 0;
}

int func_197(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!func_418(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_419(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_420(iParam0, bParam2);
	iVar2 = 0;
	if (func_91(iParam0) == joaat("CLOTHING"))
	{
		if (!func_150(iParam0, 866047851) && !func_150(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_351(iParam0, 8388608) && !func_421(27))
	{
		func_422(27);
	}
	func_423(iParam0);
	if (!bVar3)
	{
		if (func_150(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_194(func_193(iParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(iVar1))
			{
				if (func_108() == -1)
				{
					func_195(iVar1);
				}
				if (func_78(0) && func_424(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_425(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_426(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_91(iParam0) == joaat("WEAPON"))
		{
			if (!func_427(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_91(iParam0) == joaat("AMMO") && func_428(iParam0))
		{
			if (!func_429(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_150(iParam0, 866047851))
		{
		}
		else if (func_150(iParam0, 2000026003))
		{
		}
		else if (func_150(iParam0, -103750053))
		{
			func_192(func_191(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_192(func_430(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_150(iParam0, -121341956) && !func_150(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR"))
			{
				func_137(534, 0);
			}
			if (func_150(iParam0, -2017733358) || func_150(iParam0, -1369131378))
			{
			}
		}
		else if (func_150(iParam0, -136654233))
		{
			if (func_150(iParam0, -1021472396))
			{
			}
		}
		else if (func_150(iParam0, -1466706512) && func_150(iParam0, 1147021565))
		{
			func_137(517, 0);
		}
		else if (func_150(iParam0, 1147021565) && func_150(iParam0, -524514947))
		{
		}
		else if (func_150(iParam0, 554195525))
		{
		}
		else if (func_150(iParam0, 589988438))
		{
			if (func_431())
			{
				func_432(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_150(iParam0, 787083290) && func_150(iParam0, 949916894))
		{
			func_433(iParam0);
		}
		else if (func_150(iParam0, -1718133314))
		{
			func_434(iParam0);
		}
		else if (func_150(iParam0, -1738650224))
		{
			func_435(iParam0);
		}
		else if (func_150(iParam0, -1112814642) && func_150(iParam0, 949916894))
		{
			func_436(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1939067->f_21 = 0;
		}
		else if (func_150(iParam0, 1841149704))
		{
			func_437();
		}
		else if (func_150(iParam0, -1979000645))
		{
		}
		else if (func_150(iParam0, 606799272))
		{
		}
		else if (func_150(iParam0, -1112814642) && func_150(iParam0, -1697809989))
		{
		}
		else if (func_150(iParam0, -2017733358) || func_150(iParam0, -1369131378))
		{
		}
		else if (func_150(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_150(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_23(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_197(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_23(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_197(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_23(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_197(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_23(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_197(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_23(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_197(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_23(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_197(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_150(iParam0, -839724752) && func_351(iParam0, 4))
		{
		}
		else if (func_150(iParam0, 1399091007))
		{
			func_438(iParam0, &iVar2);
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
				func_439(271, func_354(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_439(269, func_354(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_439(270, func_354(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_440(683, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_440(683, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_440(683, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_440(683, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_440(684, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_440(684, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_137(524, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_137(527, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_421(1))
				{
					func_137(520, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_137(519, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_108() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_137(532, 0);
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
		func_441(&iVar5);
		if (!func_426(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_78(0))
		{
			return 1;
		}
		if (func_91(iParam0) == joaat("CLOTHING"))
		{
			func_442(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_78(0) && !func_79())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_197(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_240(iVar2, 0);
		}
	}
	Var30 = { func_186(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_0x6A0184E904CDF25E(&Var30, iVar0);
	}
	func_443(iParam0);
	if (fParam6 > 0f)
	{
		if (func_150(iParam0, -839724752))
		{
			func_444(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_185(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_198(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	var uVar6;

	if (!func_445(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_446(iParam0))
		{
			iVar0 = 0;
			if (func_447(iParam0, 369710026, &iVar0))
			{
				iParam2 = iVar0;
			}
		}
	}
	Var1.f_4 = func_448(iParam1);
	Var1 = { func_368(0) };
	if (!func_413(iParam0, &uVar6, &Var1, iParam2, 752097756, 1))
	{
		return 0;
	}
	return 1;
}

void func_199(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_449(iParam0) };
	STATS::_0x6A0184E904CDF25E(&Var0, iParam1);
	if (!func_150(iParam0, 1714518167))
	{
		Var0 = { func_450(iParam0) };
		STATS::_0x6A0184E904CDF25E(&Var0, iParam1);
	}
}

int func_200(int iParam0)
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

int func_201(int iParam0)
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

int func_202(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_73(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_203(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_204(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_205(int iParam0)
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

int func_206(int iParam0)
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

int func_207(var uParam0, int iParam1)
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

int func_208(int iParam0)
{
	int iVar0;

	iVar0 = func_162(iParam0);
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

int func_209(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_364(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_366(&Var0, func_365(0));
	}
	if (!func_367(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_205(iVar14);
	return uVar15;
}

int func_210(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

struct<4> func_211(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_188(iParam0, bParam1, 0) };
	return func_270(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_212(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_213(var uParam0)
{
	return func_212(*uParam0, 2);
}

float func_214()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_215(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_216(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_217(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_218(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;

	if (!func_451(iParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar33 = (func_78(0) && !func_79());
	iVar34 = -1;
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 0)
		{
			Jump @268; //curOff = 73
		}
		else
		{
			iVar35 = func_94(&(Var0[iVar32 /*2*/]), 0, !bVar33, 0);
			if (bVar33)
			{
				if (func_241(&(Var0[iVar32 /*2*/])) || func_452(&(Var0[iVar32 /*2*/])))
				{
					iVar35 = (iVar35 + func_453(&(Var0[iVar32 /*2*/]), 0));
					if (bParam2)
					{
						iVar36 = 0;
						iVar35 = (iVar35 + func_454(7, &(Var0[iVar32 /*2*/]), &iVar36));
					}
				}
				else if (bParam2)
				{
					iVar35 = (iVar35 + (func_455(7, &(Var0[iVar32 /*2*/])) + func_456(&(Var0[iVar32 /*2*/]))));
				}
			}
			if (iVar35 < (Var0[iVar32 /*2*/])->f_1)
			{
				return 0;
			}
			iVar35 = (iVar35 / (Var0[iVar32 /*2*/])->f_1);
			if (iVar34 == -1 || iVar35 < iVar34)
			{
				iVar34 = iVar35;
			}
		}
		iVar32++;
	}
	return iVar34;
}

int func_219(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_457(&iParam0);
	if (!func_90(iParam0, 0) && !func_458(func_278(iParam0), 2))
	{
		return 0;
	}
	if (!bParam3 && func_210(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam3 = true;
	}
	if (func_459(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_365(0) };
		Var4.f_9 = -1591664384;
		if (!func_370(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return 0;
		}
		else if (func_371(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return 0;
		}
		if (func_369(iParam0, 1))
		{
			if (!func_370(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return 0;
			}
			else if (func_371(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return 0;
			}
		}
		return 1;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_460(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return 0;
	}
	else if (iVar26 == 0)
	{
		return 1;
	}
	iVar27 = func_325(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	int iVar35;
	struct<14> Var36;
	int iVar52;
	struct<16> Var53;

	if (!func_90(iParam0, 0))
	{
		return -1;
	}
	if (func_91(iParam0) != joaat("FEE"))
	{
		return -1;
	}
	if (func_79())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_461(iParam0, iParam5, 1, 0, 1, joaat("CURRENCY_CASH")) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_461(iParam0, iParam5, 1, 0, 1, joaat("CURRENCY_GOLD_BAR")) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_451(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
			if (!func_94(&(Var2[iVar35 /*2*/]), 0, bParam3, 0) >= iVar34)
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
	if (!bParam3 && func_78(0))
	{
		if (iVar0 > 0)
		{
			func_147(joaat("CURRENCY_CASH"), iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_147(joaat("CURRENCY_GOLD_BAR"), iVar1, -142743235, 0, 0);
		}
		else if (func_462(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
				func_147(&(Var2[iVar35 /*2*/]), iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = iParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_222(joaat("SPEND"), &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_223(iVar52, Var53);
	}
	return iVar52;
}

struct<16> func_221(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_270(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_210(iParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_463() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_222(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_464(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_465(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_466(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_223(int iParam0, struct<16> Param1)
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

int func_224(int iParam0, bool bParam1, int iParam2)
{
	if (func_467(255))
	{
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_XP")))
	{
		return 0;
	}
	if (!func_468(iParam0))
	{
		return 0;
	}
	if (!func_470(func_469(iParam0), !bParam1, iParam2, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_225(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_91(iParam0);
	switch (iParam1)
	{
		case 1:
			if ((func_150(iParam0, -537818634) || func_150(iParam0, -458578204)) && !func_150(iParam0, -1242251796))
			{
				return 1;
			}
			break;
		case 2:
			if (iVar0 == joaat("AMMO"))
			{
				if (func_150(iParam0, -1588156645))
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
				if (func_150(iParam0, -1588156645))
				{
					return 1;
				}
			}
			break;
		case 0:
			if ((func_234(iParam0) || func_283(iParam0, -1636519629) == -701492487) || iParam0 == joaat("PROVISION_MOONSHINE_POISON"))
			{
				return 1;
			}
			break;
		case 4:
			if (func_150(iParam0, 127710288))
			{
				return 1;
			}
			break;
		case 5:
			if (func_150(iParam0, -1242251796))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_226(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_471())
	{
		return 0;
	}
	if (!NETWORK::_0xDD73C9838CE7181D())
	{
		return 0;
	}
	iVar0 = func_472(iParam0);
	iVar1 = func_473(iVar0, 2);
	if (iVar1 >= 5)
	{
		return 0;
	}
	if (!func_470(func_474(iParam0), 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_227(int iParam0, int iParam1)
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

bool func_228(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_229(int iParam0)
{
	return iParam0;
}

void func_230(int iParam0)
{
	if (!func_475(iParam0))
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

bool func_231(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_232(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_236(iParam0, 1);
	func_237(iParam0, 1);
	func_238(iParam0, 128);
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HAWK_01"):
		case joaat("A_C_CORMORANT_01"):
		case joaat("A_C_SONGBIRD_01"):
		case joaat("A_C_ORIOLE_01"):
		case joaat("A_C_ROBIN_01"):
		case joaat("A_C_ROSEATESPOONBILL_01"):
		case joaat("A_C_SPARROW_01"):
		case joaat("A_C_OWL_01"):
		case joaat("A_C_RAVEN_01"):
		case joaat("A_C_CRANEWHOOPING_01"):
		case joaat("A_C_REDFOOTEDBOOBY_01"):
		case joaat("A_C_CEDARWAXWING_01"):
		case joaat("A_C_SEAGULL_01"):
		case joaat("A_C_CROW_01"):
		case joaat("A_C_PIGEON"):
		case joaat("A_C_LOON_01"):
		case joaat("A_C_WOODPECKER_01"):
		case joaat("A_C_WOODPECKER_02"):
		case joaat("A_C_EGRET_01"):
		case joaat("A_C_HERON_01"):
		case joaat("A_C_VULTURE_01"):
		case joaat("A_C_CALIFORNIACONDOR_01"):
		case joaat("A_C_EAGLE_01"):
		case joaat("A_C_BLUEJAY_01"):
		case joaat("A_C_CARDINAL_01"):
			return joaat("CONSUMABLE_GAMEY_BIRD_COOKED");
		case joaat("A_C_ARMADILLO_01"):
		case joaat("A_C_SNAKEREDBOA_01"):
		case joaat("A_C_CHIPMUNK_01"):
		case joaat("A_C_POSSUM_01"):
		case joaat("A_C_SKUNK_01"):
		case joaat("A_C_BADGER_01"):
		case joaat("A_C_MUSKRAT_01"):
		case joaat("A_C_SNAKEWATER_01"):
		case joaat("A_C_FOX_01"):
		case joaat("A_C_COYOTE_01"):
		case joaat("A_C_SNAKE_01"):
		case joaat("A_C_BEAVER_01"):
		case joaat("A_C_SNAKEBLACKTAILRATTLE_01"):
		case joaat("A_C_RAT_01"):
		case joaat("A_C_RACCOON_01"):
		case joaat("A_C_SNAKEFERDELANCE_01"):
		case joaat("A_C_SQUIRREL_01"):
			return joaat("CONSUMABLE_STRING_MEAT_COOKED");
		case joaat("A_C_IGUANA_01"):
		case joaat("A_C_TURTLESEA_01"):
		case joaat("A_C_FROGBULL_01"):
		case joaat("A_C_IGUANADESERT_01"):
		case joaat("A_C_TURTLESNAPPING_01"):
		case joaat("A_C_TOAD_01"):
			return joaat("CONSUMABLE_HERPTILE_MEAT_COOKED");
		case joaat("A_C_FISHBLUEGIL_01_SM"):
		case joaat("A_C_FISHCHANNELCATFISH_01_XL"):
		case joaat("A_C_FISHLONGNOSEGAR_01_LG"):
		case joaat("A_C_FISHBULLHEADCAT_01_MS"):
		case joaat("A_C_FISHBULLHEADCAT_01_SM"):
		case joaat("A_C_FISHCHANNELCATFISH_01_LG"):
		case joaat("A_C_FISHBLUEGIL_01_MS"):
			return joaat("CONSUMABLE_GRITTY_FISH_MEAT_COOKED");
		case joaat("A_C_BIGHORNRAM_01"):
		case joaat("A_C_GOAT_01"):
		case joaat("A_C_SHEEP_01"):
			return joaat("CONSUMABLE_GRISTLY_MUTTON_COOKED");
		case joaat("A_C_FISHROCKBASS_01_MS"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_LG"):
		case joaat("A_C_FISHMUSKIE_01_LG"):
		case joaat("A_C_FISHCHAINPICKEREL_01_MS"):
		case joaat("A_C_FISHPERCH_01_MS"):
		case joaat("A_C_FISHLAKESTURGEON_01_LG"):
		case joaat("A_C_FISHREDFINPICKEREL_01_MS"):
		case joaat("A_C_FISHROCKBASS_01_SM"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
		case joaat("A_C_FISHCHAINPICKEREL_01_SM"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_LG"):
		case joaat("A_C_FISHREDFINPICKEREL_01_SM"):
		case joaat("A_C_FISHNORTHERNPIKE_01_LG"):
		case joaat("A_C_FISHPERCH_01_SM"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_MS"):
			return joaat("CONSUMABLE_FLAKEY_FISH_COOKED");
		case joaat("A_C_CHICKEN_01"):
		case joaat("A_C_TURKEYWILD_01"):
		case joaat("A_C_TURKEY_01"):
		case joaat("A_C_TURKEY_02"):
		case joaat("A_C_GOOSECANADA_01"):
		case joaat("A_C_ROOSTER_01"):
		case joaat("A_C_PRAIRIECHICKEN_01"):
			return joaat("CONSUMABLE_PLUMP_BIRD_COOKED");
		case joaat("A_C_COW"):
		case joaat("A_C_BULL_01"):
		case joaat("A_C_OX_01"):
		case joaat("A_C_BUFFALO_01"):
			return joaat("CONSUMABLE_PRIME_BEEF_COOKED");
		case joaat("A_C_ELK_01"):
		case joaat("A_C_BUCK_01"):
		case joaat("A_C_MOOSE_01"):
		case joaat("A_C_DEER_01"):
		case joaat("A_C_PRONGHORN_01"):
			return joaat("CONSUMABLE_MATURE_VENISON_COOKED");
		case joaat("A_C_PIG_01"):
		case joaat("A_C_JAVELINA_01"):
		case joaat("A_C_BOAR_01"):
			return joaat("CONSUMABLE_TENDER_PORK_COOKED");
		case joaat("A_C_DUCK_01"):
		case joaat("A_C_RABBIT_01"):
		case joaat("A_C_PHEASANT_01"):
		case joaat("A_C_QUAIL_01"):
			return joaat("CONSUMABLE_GAME_MEAT_COOKED");
		case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
		case joaat("A_C_FISHRAINBOWTROUT_01_LG"):
		case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_LG"):
			return joaat("CONSUMABLE_SUCCULENT_FISH_COOKED");
		case joaat("A_C_PARROT_01"):
		case joaat("A_C_PELICAN_01"):
		case joaat("A_C_CAROLINAPARAKEET_01"):
			return joaat("CONSUMABLE_EXOTIC_BIRD_COOKED");
		case joaat("A_C_ALLIGATOR_01"):
		case joaat("A_C_ALLIGATOR_02"):
		case joaat("A_C_ALLIGATOR_03"):
		case joaat("A_C_WOLF"):
		case joaat("A_C_BEAR_01"):
		case joaat("A_C_WOLF_MEDIUM"):
		case joaat("A_C_WOLF_SMALL"):
		case joaat("A_C_COUGAR_01"):
		case joaat("A_C_BEARBLACK_01"):
		case joaat("A_C_PANTHER_01"):
			return joaat("CONSUMABLE_BIG_GAME_MEAT_COOKED");
		case joaat("A_C_CRAB_01"):
			return joaat("CONSUMABLE_CRUSTACEAN_MEAT_COOKED");
	}
	return 0;
}

int func_234(int iParam0)
{
	if (func_91(iParam0) == joaat("CONSUMABLE") && INVENTORY::_0x245D07651B1D183B(iParam0, 16777216))
	{
		return 1;
	}
	return 0;
}

void func_235(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_236(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_231(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, bParam1);
		}
	}
}

void func_237(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, bParam1);
	}
}

void func_238(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

int func_239(int iParam0)
{
	int iVar0;

	iVar0 = func_476(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_INJURED(iVar0))
	{
		return iVar0;
	}
	return 0;
}

int func_240(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_477(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_478(iParam0, &Var4, &uVar0, iParam1);
}

int func_241(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (func_150(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")))
	{
		return 1;
	}
	return func_452(iParam0);
}

int func_242(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 == 2)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 3;
	}
	else
	{
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
	}
	return iVar0;
}

int func_243(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("A_C_FISHBLUEGIL_01_SM"):
		case joaat("A_C_CRAB_01"):
		case joaat("A_C_FISHROCKBASS_01_MS"):
		case joaat("A_C_SONGBIRD_01"):
		case joaat("A_C_CHIPMUNK_01"):
		case joaat("A_C_ORIOLE_01"):
		case joaat("A_C_ROBIN_01"):
		case joaat("A_C_FISHCHAINPICKEREL_01_MS"):
		case joaat("A_C_SPARROW_01"):
		case joaat("A_C_FROGBULL_01"):
		case joaat("A_C_FISHPERCH_01_MS"):
		case joaat("A_C_CEDARWAXWING_01"):
		case joaat("A_C_FISHREDFINPICKEREL_01_MS"):
		case joaat("A_C_FISHROCKBASS_01_SM"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
		case joaat("A_C_CROW_01"):
		case joaat("A_C_PIGEON"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
		case joaat("A_C_FISHCHAINPICKEREL_01_SM"):
		case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
		case joaat("A_C_WOODPECKER_01"):
		case joaat("A_C_FISHREDFINPICKEREL_01_SM"):
		case joaat("A_C_BAT_01"):
		case joaat("A_C_FISHBULLHEADCAT_01_MS"):
		case joaat("A_C_FISHPERCH_01_SM"):
		case joaat("A_C_WOODPECKER_02"):
		case joaat("A_C_RAT_01"):
		case joaat("A_C_SQUIRREL_01"):
		case joaat("A_C_FISHBULLHEADCAT_01_SM"):
		case joaat("A_C_TOAD_01"):
		case joaat("A_C_BLUEJAY_01"):
		case joaat("A_C_CAROLINAPARAKEET_01"):
		case joaat("A_C_CARDINAL_01"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_MS"):
		case joaat("A_C_FISHBLUEGIL_01_MS"):
		case joaat("A_C_QUAIL_01"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_244(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
	}
	if (func_150(iParam0, 1286414894))
	{
		return 1;
	}
	return 0;
}

int func_245(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_479(iVar0);
}

int func_246(int iParam0)
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
			iVar0 = func_479(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

int func_247(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iParam1 = func_480(iParam0, iParam1, 1, 1, -142743235, 0, 1);
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_481(iParam0, iParam1, bParam2, iParam3);
}

int func_248(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_318(iVar0);
}

int func_249(int iParam0, int iParam1)
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

bool func_250(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

var func_251()
{
	return Global_1896610->f_41;
}

void func_252(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_253(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_482(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_483(iParam0))
	{
		return 0;
	}
	if (func_484(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_485(iParam0, 1)) || func_486(32768))
	{
		if (!func_485(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_487())
	{
		return 0;
	}
	return 1;
}

void func_254(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

int func_255(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_231(iVar0, 2))
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
		func_232(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_256(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_100(iParam0))
	{
		return;
	}
	iVar0 = func_229(iParam0);
	func_236(iVar0, bParam1);
}

void func_257(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_100(iParam0))
	{
		return;
	}
	iVar0 = func_229(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, bParam2);
}

void func_258(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_100(*uParam0))
	{
		iVar0 = func_229(*uParam0);
		if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
		{
			HUD::_UIPROMPT_SET_TAG(((*Global_1949759)[iVar0 /*23*/])->f_3, sParam1);
		}
	}
}

bool func_259(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_100(iParam0))
	{
		return false;
	}
	iVar0 = func_229(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_260()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
	fVar2 = ((fVar0 * fVar0) + (fVar1 * fVar1));
	if (fVar2 >= (0.9f * 0.9f))
	{
		return 1;
	}
	return 0;
}

int func_261(var uParam0, float fParam1)
{
	if (func_27(uParam0, fParam1))
	{
		func_262(uParam0);
		return 1;
	}
	return 0;
}

void func_262(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_263(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_100(iParam0))
	{
		return false;
	}
	iVar0 = func_229(iParam0);
	if (!HUD::_UIPROMPT_HAS_HOLD_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, ((*Global_1949759)[iVar0 /*23*/])->f_4);
	}
	return HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_264(var uParam0)
{
	int iVar0;

	uParam0->f_144 = func_59();
	iVar0 = func_35(uParam0);
	if ((((uParam0->f_145 == -1 || iVar0 == uParam0->f_145) && (uParam0->f_146 == 0 || func_488(uParam0->f_144, uParam0->f_146))) || (uParam0->f_145 == -1 && func_488(uParam0->f_144, uParam0->f_146))) && !(PED::_0xC488B8C0E52560D8(Global_34) || PED::_0x2DC0E8DCBD3546E9(Global_34)))
	{
		uParam0->f_143 = iVar0;
		return 1;
	}
	return 0;
}

void func_265(var uParam0)
{
	int iVar0;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_34);
	if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			func_75(joaat("KNIFE1_TRANS_KNEEL1"), 2f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			func_75(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 2f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_266(var uParam0)
{
	if (uParam0->f_144 == 6 && func_58(1))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_144)
		{
			case 1:
				func_75(joaat("COFFEE_TRANS_KNEEL"), 1086324736 /* Float: 6f */);
				break;
		}
	}
	return 0;
}

int func_267(var uParam0)
{
	if (uParam0->f_144 == 6 && func_58(1))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_144)
		{
			case 1:
				func_75(joaat("COFFEE_TRANS_KNEEL"), 1086324736 /* Float: 6f */);
				break;
			case 8:
				func_75(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
				break;
			case 7:
				func_75(joaat("SIT_TRANS_KNEEL"), 0.5f);
				break;
		}
	}
	return 0;
}

bool func_268(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4)
{
	PED::_0x6D07B371E9439019(Global_34);
	return TASK::_0x79197F7D2BB5E73A(iParam0, uParam1, sParam2, sParam3, iParam4, 0);
}

int func_269(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[5];
	int iVar32;
	int iVar33;
	int iVar34;
	struct<16> Var35;
	struct<16> Var51;

	if (func_489(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_210(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_78(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_490(&Var1, &iVar32, iParam0, iVar0, iParam1, 1) || iVar32 < 1)
		{
			return 0;
		}
		iVar34 = -1;
		Var35.f_9 = 1;
		Var35.f_11 = -1591664384;
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			Var35 = { func_491(iParam0, Var1[iVar33 /*6*/]) };
			Var35.f_12 = iParam2;
			iVar34 = func_222(joaat("USE"), &Var35, 1);
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
			func_223(iVar34, Var51);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_73(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<4> func_270(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_90(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_73(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_271(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_489(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_374(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_78(bParam6))
	{
		iVar14 = -1;
		if (func_108() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_222(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_223(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_73(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_272(int iParam0)
{
	if (func_150(iParam0, 1573112293))
	{
		return func_492(iParam0);
	}
	switch (func_162(iParam0))
	{
		case -77448735:
			if (func_493(iParam0))
			{
				return func_492(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_492(iParam0);
		case -1520388130:
		case 1802292908:
			return func_494();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_495();
		case -525676072:
			return func_495();
		case 1779021115:
			if (iParam0 == joaat("WEAPON_KIT_CAMERA"))
			{
				return func_496();
			}
			return func_497();
		case -1823706425:
			return func_498();
		case -854348463:
			return func_499();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_500();
		default:
			if (func_90(iParam0, 0))
			{
				if (func_150(iParam0, 1919582297))
				{
					return func_501();
				}
				else if (iParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE") || iParam0 == -1448210800)
				{
					return func_502();
				}
				else if (iParam0 == joaat("KIT_HORSE_BRUSH"))
				{
					return func_503();
				}
				else if (func_150(iParam0, 1147021565))
				{
					return func_504();
				}
			}
			return func_505();
	}
	return func_505();
}

int func_273(bool bParam0, int iParam1)
{
	int iVar0;

	if ((Global_1939178->f_6 || PED::IS_PED_DEAD_OR_DYING(Global_34, true)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	if (func_108() == 0)
	{
		if (func_506(131072))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 1))
	{
		if (func_506(1024))
		{
			return 0;
		}
	}
	if (Global_1939178->f_16)
	{
		return 0;
	}
	if (!func_15(iParam1, 2) && func_506(32))
	{
		return 0;
	}
	if (!func_15(iParam1, 4))
	{
		if (func_506(4096))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 8) && func_506(512))
	{
		return 0;
	}
	if (!func_15(iParam1, 512) && !func_507(bParam0))
	{
		return 0;
	}
	if (!func_15(iParam1, 262144) && !func_508(bParam0, func_15(iParam1, 524288)))
	{
		return 0;
	}
	if (!func_15(iParam1, 64) && !func_509(bParam0, iParam1, 1))
	{
		return 0;
	}
	if (!func_15(iParam1, 128))
	{
		if (func_510(Global_34, 1868526510) || func_511(Global_34))
		{
			if (bParam0)
			{
				func_161("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (!func_15(iParam1, 16))
	{
		if (func_511(Global_34))
		{
			iVar0 = PED::GET_MOUNT(Global_34);
			if (!func_512(iVar0, 1))
			{
				if (bParam0)
				{
					func_161("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return 0;
			}
		}
	}
	if (!func_15(iParam1, 256) && func_506(8192))
	{
		return 0;
	}
	if (!func_15(iParam1, 1024) && func_506(65536))
	{
		if (bParam0)
		{
			func_161("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!func_15(iParam1, 2048))
	{
		if (func_506(32768))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 4096))
	{
		if (func_506(16384))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 8192))
	{
		if (!func_506(16))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 16384))
	{
		if (func_506(256))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 32768))
	{
		if (func_145())
		{
			if (bParam0)
			{
				func_161("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (!func_15(iParam1, 131072))
	{
		if (!func_506(524288))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 65536))
	{
		if (!func_506(262144))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 1048576))
	{
		if (!func_506(2097152))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 2097152))
	{
		if (!func_506(8388608))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 4194304))
	{
		if (!func_506(16777216))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 8388608))
	{
		if (func_506(33554432))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 16777216))
	{
		if (func_506(67108864))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 33554432))
	{
		if (func_506(134217728))
		{
			return 0;
		}
	}
	if (func_506(64))
	{
		return 0;
	}
	else if (func_506(128))
	{
		return 0;
	}
	else if (func_506(1048576))
	{
		return 0;
	}
	else if (func_506(4))
	{
		return 0;
	}
	return 1;
}

int func_274()
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

var func_275(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

bool func_276(int iParam0, int iParam1)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939231->f_1433.f_54.f_85);
}

char* func_277()
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

int func_278(int iParam0)
{
	return iParam0;
}

int func_279(int iParam0, int iParam1)
{
	if (!func_458(iParam0, 2))
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

int func_280(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_513(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_281(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_514(iParam0))
	{
		return 1;
	}
	if (!func_515())
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
	if (!bParam2 && !func_516(iParam0))
	{
		return 3;
	}
	if (func_517(iParam0) && !func_518())
	{
		return 4;
	}
	return 0;
}

int func_282(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	switch (func_283(iParam0, -949239683))
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

int func_283(int iParam0, int iParam1)
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

bool func_284()
{
	return (Global_1951141->f_1657.f_1[1 /*3*/])->f_1 == joaat("POMADE");
}

int func_285(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (func_519(*uParam0, joaat("HATS"), 0))
	{
		return 1;
	}
	return 0;
}

void func_286(int iParam0)
{
	int iVar0;

	iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
	switch (func_520())
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
		if (func_150(iParam0, 1573112293))
		{
			func_522(func_521(iParam0), 1, 1);
		}
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_287(int iParam0)
{
	int iVar0;

	iVar0 = 16939881;
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_288(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -45077177;
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_289(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1700817728;
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_290(int iParam0)
{
	int iVar0;

	iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_291(int iParam0)
{
	int iVar0;

	iVar0 = 2105609037;
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_292(int iParam0)
{
	int iVar0;

	iVar0 = 1964324114;
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_293(int iParam0)
{
	int iVar0;

	iVar0 = -1530144981;
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_294(int iParam0)
{
	int iVar0;

	iVar0 = -1074475556;
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_295(int iParam0)
{
	int iVar0;

	iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_296(int iParam0)
{
	int iVar0;

	iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_297(int iParam0)
{
	int iVar0;

	iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_298(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
	switch (func_520())
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
		if (!func_523(Global_34, iParam0, iVar0, 1, 0) && bParam1)
		{
			func_524(iParam0);
			func_76(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_299(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
	switch (func_520())
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
		if (!func_523(Global_34, iParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_524(iParam0);
			func_76(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

bool func_300(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_301(char* sParam0)
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

void func_302(int iParam0)
{
	if (func_300(iParam0, 1))
	{
		func_525(1);
	}
}

int func_303(int iParam0)
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

void func_304(int iParam0)
{
	Global_1951141 = (Global_1951141 || iParam0);
}

void func_305(struct<4> Param0)
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
			if (func_526(Param0))
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
			func_527(Param0);
			*(Global_1951141->f_734[Global_1951141->f_922 /*4*/]) = { Param0 };
			Global_1951141->f_916++;
			Global_1951141->f_922 = (Global_1951141->f_922 + 1 % 25);
			func_304(8);
			break;
		case 23:
		case 24:
		case 25:
			if (Global_1951141->f_917 >= 25)
			{
				return;
			}
			if (func_526(Param0))
			{
				return;
			}
			func_527(Param0);
			*(Global_1951141->f_633[Global_1951141->f_917 /*4*/]) = { Param0 };
			Global_1951141->f_917++;
			func_304(8);
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
			if (func_526(Param0))
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
			func_527(Param0);
			*(Global_1951141->f_835[Global_1951141->f_920 /*4*/]) = { Param0 };
			Global_1951141->f_918++;
			Global_1951141->f_920 = (Global_1951141->f_920 + 1 % 20);
			func_304(8);
			break;
			break;
	}
}

bool func_306()
{
	return Global_1951141->f_3252;
}

int func_307(int iParam0)
{
	if (func_528())
	{
		return 0;
	}
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!func_23(iParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

bool func_308(int iParam0)
{
	return func_529(iParam0);
}

void func_309(int iParam0, int iParam1)
{
	func_530(iParam0, iParam1);
}

int func_310(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_531(iParam0);
	if (func_150(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_532(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_533();
			}
			else
			{
				iVar0 = func_534();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_535();
		}
		else
		{
			iVar0 = func_536();
		}
	}
	else if (func_537(&iVar2))
	{
		if (func_150(iVar2, -1303648999))
		{
			iVar0 = func_533();
		}
		else
		{
			iVar0 = func_534();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_535();
	}
	else
	{
		iVar0 = func_536();
	}
	if (iVar0 != 0)
	{
		Global_1951141->f_3251 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_34, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_311(int iParam0)
{
	return (Global_1951141 && iParam0) != 0;
}

void func_312()
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
	func_538(32768);
	func_539(1108822547, 8, 6);
}

bool func_313(int iParam0, bool bParam1)
{
	return func_540(iParam0, 0) < func_541(iParam0, bParam1);
}

bool func_314(int iParam0)
{
	var uVar0;

	return func_542(iParam0, &uVar0);
}

void func_315(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_162(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_543(iParam0, &(Global_1951141->f_3109.f_27), Global_1951141->f_3109.f_32.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_543(iParam0, &(Global_1951141->f_3109.f_29), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_543(iParam0, &(Global_1951141->f_3109.f_26), Global_1951141->f_3109.f_32, bParam1);
			break;
		case -525676072:
			bVar1 = func_543(iParam0, &(Global_1951141->f_3109.f_28), Global_1951141->f_3109.f_32.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_543(iParam0, &(Global_1951141->f_3109.f_30), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_543(iParam0, &(Global_1951141->f_3109.f_30), 1, bParam1);
			break;
		default:
			if (func_150(iParam0, -1348134986))
			{
				bVar1 = func_543(iParam0, &(Global_1951141->f_3109.f_29), 1, bParam1);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_316(0))
	{
		func_544(iParam0, 1);
		if (func_545() == 1160113249)
		{
			func_544(func_316(-2125499975), 0);
		}
		else
		{
			func_544(func_316(1160113249), 0);
		}
	}
	func_546();
	if (func_547(iVar0) || (iVar0 != -999503751 && func_150(iParam0, -166674229)))
	{
		INVENTORY::_0x766315A564594401(func_73(0), iParam0, 0);
	}
	func_169(iParam0, iParam3);
	if (bParam2)
	{
		func_548(0, 0);
	}
}

int func_316(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_545();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

void func_317(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_162(iParam1);
	if (iVar0 == func_162(iParam0) || (func_150(iParam0, -1348134986) && func_150(iParam1, -1348134986)))
	{
		func_549(iParam0, iParam1, 1);
		return;
	}
}

int func_318(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1951141->f_81[iVar0 /*12*/])->f_9 == iParam0)
		{
			return func_550(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_319(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_551();
	if (iParam2 == 39)
	{
		Var0 = { func_188(iParam0, 1, 0) };
		iParam2 = func_249(func_318(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_311(32768) && iParam2 == 10)
	{
		func_552(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_553(iParam2);
	func_554(iParam2, iVar5);
	func_555(Global_1951141->f_1538.f_1[iParam2 /*3*/], 4, 6);
	func_555(Global_1951141->f_1657.f_1[iParam2 /*3*/], 4, 6);
	func_556(&(Global_1951141->f_1538), iParam0, iParam2, bParam4);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1951141->f_1538.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1951141->f_1538.f_1[iParam2 /*3*/] = iParam0;
	(Global_1951141->f_1538.f_1[iParam2 /*3*/])->f_1 = func_557(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1951141->f_2760)
		{
			if (&Global_1951141->f_2760.f_2[iVar6 /*2*/] >= 0 && &Global_1951141->f_2760.f_2[iVar6 /*2*/] < 39)
			{
				Global_1951141->f_2627[&Global_1951141->f_2760.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1951141->f_2627[&Global_1951141->f_2760.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_539(func_550(&(Global_1951141->f_2760.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_320(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_558(&(Global_1951141->f_2760), bParam0, bParam1, bParam2, bParam3);
}

int func_321(int iParam0, bool bParam1)
{
	if (!func_90(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == joaat("CLOTHING_ITEM_HAIR_NONE") || iParam0 == joaat("CLOTHING_ITEM_BEARD_NONE")))
	{
		return 0;
	}
	if (func_150(iParam0, 265372629))
	{
		return 1;
	}
	return 0;
}

int func_322(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<5> Var4;
	int iVar9;

	Var4 = { func_188(iParam0, 0, 0) };
	if (func_321(iParam0, 0))
	{
		iVar9 = func_559(Var4, Var4.f_4, 0, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_188(iVar9, 0, 0) };
			Var0 = { func_270(iVar9, Var4, Var4.f_4, 0) };
			return func_560(Var0, 0);
		}
		return 1;
	}
	Var0 = { func_270(iParam0, Var4, Var4.f_4, 0) };
	return func_560(Var0, iParam1);
}

int func_323(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_249(iParam0, 1);
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

void func_324(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_325(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_210(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_270(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_73(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_73(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_326(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_277;
	}
	return iParam0;
}

int func_327(int iParam0)
{
	int iVar0;

	iParam0 = func_326(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (func_561(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_328()
{
	return Global_39.f_277.f_3019;
}

bool func_329()
{
	return Global_1915180->f_21989.f_1;
}

bool func_330()
{
	return Global_1915180->f_21989;
}

void func_331()
{
	PAD::_0x2804658EB7D8A50B(4, joaat("HANDHELDCATALOGUE"));
}

void func_332(int iParam0)
{
	Global_1051388->f_3578 = iParam0;
}

int func_333()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_3;
}

bool func_334(int iParam0)
{
	return func_99(((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_73, iParam0);
}

int func_335()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_336()
{
	return !func_334(2);
}

bool func_337(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

void func_338()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

int func_339(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_563(bParam2, func_562(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_340(int iParam0)
{
	Global_1896726->f_390 = iParam0;
}

int func_341(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

int func_342(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if ((Global_1184573->f_1[iVar1 /*26*/])->f_1 != -1 && func_564(iVar1, 64, iVar0))
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

int func_343(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1185132->f_1[iParam0 /*4*/]);
}

var func_344(int iParam0, int iParam1)
{
	return func_565(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_345(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
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
				func_566(&(Global_1070356->f_21258), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_346()
{
	Global_1913166->f_1583 = MISC::GET_GAME_TIMER();
	Global_1913166->f_1581 = 1;
}

void func_347(int iParam0, int iParam1, var uParam2)
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

bool func_348()
{
	return !&Global_1912978;
}

void func_349(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

char* func_350(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_351(int iParam0, int iParam1)
{
	if (!func_90(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_352(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_353(int iParam0)
{
	if (func_150(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_150(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_150(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_150(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_150(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_150(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_150(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_150(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	return "";
}

int func_354(int iParam0)
{
	int iVar0;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_567(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

int func_355(int iParam0)
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

int func_356(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_90(iParam0, 0))
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

char* func_357(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_358(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_568(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

int func_359(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	StringCopy(sParam1, func_569(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_570(iParam0))
	{
		return 0;
	}
	StringCopy(&cVar1, func_571(iParam0), 128);
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

char* func_360(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_361(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_357(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_362(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_572(sParam0, sParam1, iParam2);
	return uVar20;
}

struct<2> func_363(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

struct<14> func_364(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_365(bool bParam0)
{
	int iVar0;

	iVar0 = func_73(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_270(923904168, func_368(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_270(923904168, func_368(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_270(923904168, func_368(bParam0), -740156546, 0);
}

void func_366(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_367(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_73(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

struct<4> func_368(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_73(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_270(joaat("CHARACTER"), func_463(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_270(joaat("CHARACTER"), func_463(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_270(joaat("CHARACTER"), func_463(), -1591664384, bParam0);
}

int func_369(int iParam0, bool bParam1)
{
	if (func_162(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_573();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_370(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_325(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

int func_371(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_574(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_372(bool bParam0)
{
	int iVar0;

	iVar0 = func_73(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_270(271701509, func_368(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_270(271701509, func_368(bParam0), 12999093, 0);
}

int func_373(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_162(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_575(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_374(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_576(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_375()
{
	if ((Global_1939231->f_10485 != (Global_1939231->f_38.f_203 - 1) || func_578(func_577(0), Global_1939231->f_10478, 0, 1, 1) > 0) || Global_1939231->f_10485 == 15)
	{
		return 1;
	}
	func_579();
	if (Global_1939231->f_6)
	{
		return 1;
	}
	return 0;
}

void func_376(int iParam0)
{
	Global_1939231->f_10 = iParam0;
}

void func_377(int iParam0)
{
	Global_1939231->f_9 = iParam0;
}

void func_378(var uParam0)
{
	StringCopy(&(uParam0->f_18), "CAMP", 8);
}

void func_379(var uParam0)
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
	func_580(uParam0);
	if (uParam0->f_28)
	{
		STREAMING::REQUEST_MODEL(joaat("P_WHITEFISHFILET01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDFISHFILET01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_WHITEFLESHYMEAT01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDBIRDBREAST01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDEFLESHYMEAT01XB"), false);
	}
}

int func_380(var uParam0)
{
	if (func_581(&(uParam0->f_18)))
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
	if (!func_582(uParam0, &(uParam0->f_59)))
	{
		return 0;
	}
	if (!func_582(uParam0, &(uParam0->f_61)))
	{
		return 0;
	}
	if (!func_582(uParam0, &(uParam0->f_62)))
	{
		return 0;
	}
	if (!func_582(uParam0, &(uParam0->f_63)))
	{
		return 0;
	}
	if (!func_582(uParam0, &(uParam0->f_64)))
	{
		return 0;
	}
	if (!func_582(uParam0, &(uParam0->f_65)))
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

int func_381()
{
	int iVar0;
	int iVar1;

	if (!func_537(&iVar0))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(Global_34, false, false);
	PED::_0xC494C76A34266E82(Global_34, 13);
	iVar1 = func_583(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_584(&(Global_1951141->f_81[func_249(iVar1, 1) /*12*/]), 8);
	func_165(22, 0, 0, 0, 0);
	return 1;
}

int func_382(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	TELEMETRY::_0x78C2E029DB205A3A(iParam0, iParam1);
	return func_585(iParam0, iParam1, bParam2, bParam3, iParam4);
}

int func_383(int iParam0)
{
	int iVar0;

	iVar0 = func_586(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return joaat("P_REDEFLESHYMEAT01XB");
}

void func_384(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam2)
	{
		uParam0->f_49.f_21++;
	}
	if (uParam0->f_49.f_33 == -1)
	{
		iVar0 = func_94(uParam0->f_49.f_73, 0, 0, 0);
		iVar1 = func_587(uParam0->f_49.f_73, 0);
		iVar2 = func_218(uParam0->f_49.f_73, uParam0->f_49.f_74, func_394());
		if (iVar1 == -1)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = (iVar1 - iVar0);
		}
		uParam0->f_49.f_33 = func_588(iVar1, iVar2);
	}
	if (func_234(uParam0->f_49.f_73))
	{
		if (bParam3)
		{
			func_129(&(uParam0->f_149[iParam1]), "CAMP_REC_COOK_AGN", 1);
		}
		else
		{
			func_129(&(uParam0->f_149[iParam1]), "CAMP_REC_COOK", 1);
		}
	}
	else if (bParam3)
	{
		if (func_283(uParam0->f_49.f_73, -1636519629) == -701492487)
		{
			func_129(&(uParam0->f_149[iParam1]), "CAMP_REC_BREW_AGN", 1);
		}
		else
		{
			func_129(&(uParam0->f_149[iParam1]), "CAMP_REC_MAKE_AGN", 1);
		}
	}
	else if (func_283(uParam0->f_49.f_73, -1636519629) == -701492487)
	{
		func_129(&(uParam0->f_149[iParam1]), "CAMP_REC_BREW", 1);
	}
	else
	{
		func_129(&(uParam0->f_149[iParam1]), "CAMP_REC_MAKE", 1);
	}
}

bool func_385()
{
	return &Global_1939008 == 2;
}

void func_386(int iParam0)
{
	if (iParam0 >= &Global_1939008)
	{
		return;
	}
	Global_1939008->f_1 = iParam0;
}

bool func_387()
{
	return &Global_1939008 == 1;
}

void func_388(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	struct<2> Var11;
	struct<7> Var33[20];

	if ((func_150(iParam0, 1573112293) || func_150(iParam0, 672467738)) || func_150(iParam0, -550842268))
	{
		bVar10 = true;
	}
	Var11.f_1 = 20;
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1939067->f_26 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var11))
	{
		iVar0 = 0;
		while (iVar0 < Var11)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var11.f_1[iVar0]), Var33[iVar0 /*7*/]))
			{
				switch ((Var33[iVar0 /*7*/])->f_1)
				{
					case -943921969:
						uVar1 = func_589(0, (IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						func_590((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						bVar9 = true;
						break;
					case -1104847406:
						uVar3 = func_589(2, (IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						func_591((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), 0);
						bVar8 = true;
						break;
					case 381158954:
						uVar2 = func_589(1, (IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						func_592((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						break;
					case joaat("EFFECT_HEALTH_CORE"):
						fVar4 = func_593((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), ((Var33[iVar0 /*7*/])->f_5 / fParam1));
						func_594(0, fVar4, 1, 1, bVar10);
						bVar9 = true;
						break;
					case joaat("EFFECT_DEADEYE_CORE"):
						fVar5 = func_593((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), ((Var33[iVar0 /*7*/])->f_5 / fParam1));
						func_594(2, fVar5, 1, 1, bVar10);
						bVar8 = true;
						break;
					case joaat("EFFECT_STAMINA_CORE"):
						fVar6 = func_593((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), ((Var33[iVar0 /*7*/])->f_5 / fParam1));
						func_594(1, fVar6, 1, 1, bVar10);
						break;
					case -816334026:
						func_595((BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_2) / fParam1), 1);
						break;
					default:
						if (bParam2)
						{
							switch ((Var33[iVar0 /*7*/])->f_1)
							{
								case joaat("EFFECT_HEALTH_CORE_GOLD"):
									fVar7 = func_596(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									func_597(19, fVar7, 1, 1);
									bVar9 = true;
									break;
								case joaat("EFFECT_DEADEYE_CORE_GOLD"):
									fVar7 = func_596(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									func_597(20, fVar7, 1, 1);
									bVar8 = true;
									break;
								case joaat("EFFECT_STAMINA_CORE_GOLD"):
									fVar7 = func_596(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									func_597(18, fVar7, 1, 1);
									break;
								case 1869697234:
									fVar7 = func_596(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									func_597(0, fVar7, 1, 1);
									bVar9 = true;
									break;
								case 1342237631:
									fVar7 = func_596(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									func_597(2, fVar7, 1, 1);
									bVar8 = true;
									break;
								case -1240225157:
									fVar7 = func_596(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									func_597(1, fVar7, 1, 1);
									break;
							}
						}
						break;
				}
			}
			iVar0++;
		}
		if (bParam2)
		{
			func_598(iParam0, bVar8, bVar9, 562618531);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(uVar1, uVar2, uVar3, BUILTIN::ROUND(fVar4), BUILTIN::ROUND(fVar6), BUILTIN::ROUND(fVar5));
	}
}

int func_389(var uParam0)
{
	return uParam0->f_9;
}

int func_390(int iParam0)
{
	int iVar0;

	iVar0 = func_599(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return 1;
	}
	return 0;
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_392(var uParam0, int iParam1)
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
		func_43(uParam0, 0, 1);
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_34, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_34, 0, 1);
	if (func_108() != -1 && func_600())
	{
		if (func_136(uParam0[0], 0))
		{
			func_103(uParam0);
			func_111(uParam0);
		}
		return;
	}
	if (uParam0->f_54)
	{
		HUD::_0xC9CAEAEEC1256E54(joaat("HUD_CTX_CRAFTING_SEQUENCE"));
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	switch (func_389(uParam0))
	{
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_601(uParam0))
			{
				func_378(uParam0);
				func_379(uParam0);
				func_602(uParam0);
			}
			if (func_380(uParam0))
			{
				func_44(uParam0, 3);
			}
			break;
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_108() == 0 && CAM::_0x251241CAEC707106())
			{
				func_103(uParam0);
				return;
			}
			if (func_601(uParam0))
			{
				func_103(uParam0);
				func_602(uParam0);
				if (func_105())
				{
					func_106(0);
				}
			}
			if (((uParam0->f_30 || func_259(uParam0[0], 1)) || func_54(8192)) || uParam0->f_31)
			{
				func_603(uParam0);
			}
			break;
		case 4:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_604(uParam0))
			{
				uParam0->f_58 = 1;
				func_44(uParam0, 5);
			}
			break;
		case 5:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_605(uParam0))
			{
				func_44(uParam0, 6);
			}
			break;
		case 6:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_606(uParam0))
			{
				func_44(uParam0, 7);
			}
			break;
		case 7:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_601(uParam0))
			{
				func_607(uParam0);
				func_602(uParam0);
				return;
			}
			if (UIAPPS::_IS_APP_ACTIVE(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_RUNNING(joaat("PAUSE_MENU")))
			{
				return;
			}
			if (func_608(uParam0, 0))
			{
				if (func_609(uParam0, 0) || (uParam0->f_25 && UIAPPS::_IS_APP_ACTIVE(joaat("CRAFTING"))))
				{
					func_44(uParam0, 8);
				}
				else if (uParam0->f_28)
				{
					func_44(uParam0, 1);
				}
				else
				{
					func_44(uParam0, 0);
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
				func_44(uParam0, 4);
				return;
			}
			if (UIAPPS::_IS_APP_ACTIVE(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_RUNNING(joaat("PAUSE_MENU")))
			{
				return;
			}
			if (func_610(uParam0))
			{
				func_609(uParam0, 1);
				func_44(uParam0, 8);
			}
			break;
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (UIAPPS::_IS_APP_ACTIVE(joaat("CRAFTING")))
			{
				if (UISTATEMACHINE::_0xF7C180F57F85D0B8(joaat("CRAFTING")))
				{
					Global_1913166->f_1580 = 0;
					func_44(uParam0, 10);
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
			if (func_601(uParam0))
			{
				func_607(uParam0);
				func_602(uParam0);
				return;
			}
			if (func_608(uParam0, 1))
			{
				func_44(uParam0, 10);
			}
			break;
		case 10:
			func_611(0);
			if (func_601(uParam0))
			{
				func_612(uParam0);
				func_602(uParam0);
			}
			if (func_613(uParam0))
			{
				return;
			}
			if (Global_1913166->f_1580)
			{
				Global_1913166->f_1580 = 0;
				ATTRIBUTE::_0xD962F8579D702DB5();
				func_614(uParam0);
				uParam0->f_73 = 0;
				uParam0->f_74 = 0;
				func_615(uParam0, 0, 0);
				func_130(uParam0[5], 0, 1, 1);
				func_44(uParam0, 9);
			}
			else if (func_616(uParam0[2], 1) || !UIAPPS::_IS_APP_RUNNING(joaat("CRAFTING")))
			{
				if (uParam0->f_30)
				{
					func_44(uParam0, 18);
				}
				else
				{
					func_104(uParam0, 0);
					func_617("Exit", "SSCRFT_Sounds", 1);
					if (uParam0->f_31)
					{
						uParam0->f_31 = 0;
						func_44(uParam0, 1);
					}
					else
					{
						func_44(uParam0, 3);
					}
				}
			}
			else if (func_259(uParam0[7], 1))
			{
				func_618(uParam0);
			}
			else if (func_259(uParam0[1], 1))
			{
				func_619(uParam0);
			}
			else if (func_259(uParam0[3], 1))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_53 = !uParam0->f_53;
				func_614(uParam0);
				func_617("toggle_craftable_all", "SSCRFT_Sounds", 1);
				uParam0->f_73 = 0;
				uParam0->f_74 = 0;
				func_615(uParam0, 0, 0);
				func_130(uParam0[5], 0, 1, 1);
				func_44(uParam0, 9);
			}
			else if (func_620(uParam0[5], 0, 1))
			{
				if (uParam0->f_75)
				{
					func_617("Nav_Left", "SSCRFT_Sounds", 1);
					func_621(uParam0, 0);
				}
			}
			else if (func_620(uParam0[5], 1, 1))
			{
				if (uParam0->f_75)
				{
					func_617("Nav_Right", "SSCRFT_Sounds", 1);
					func_621(uParam0, 1);
				}
			}
			else if (func_616(uParam0[6], 1))
			{
				func_617("toggle_ingredients_effects", "SSCRFT_Sounds", 1);
				func_622(uParam0, 1);
			}
			else
			{
				iVar2 = joaat("CRAFTING_MENU");
				while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar2))
				{
					if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar2, &vVar3))
					{
						if (vVar3.x == 703281244 || vVar3.x == -722926211)
						{
							func_623(uParam0);
						}
						else if (vVar3.x == -1740156697)
						{
							func_624(uParam0, &vVar3);
						}
						else if (vVar3.x == -1203660660)
						{
							if (vVar3.z == -2127505795)
							{
								func_619(uParam0);
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
			func_611(0);
			iVar7 = PED::_0xC22AA08A8ADB87D4(Global_34);
			iVar8 = func_283(uParam0->f_73, -1636519629);
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
					func_625(uParam0);
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
					func_625(uParam0);
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
			if (func_601(uParam0))
			{
				func_602(uParam0);
				func_626(uParam0, 0, &uVar0);
				func_625(uParam0);
				if (func_100(uParam0[1]))
				{
					func_120((*uParam0)[1], 1, 1);
				}
				if (func_627(iVar8))
				{
					uParam0->f_49 = 250;
					(*uParam0)[1] = func_255("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_49, uParam0->f_49 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_615(uParam0, uParam0->f_73, uParam0->f_74);
					func_126(uParam0[1], -1067771379, 0, 1);
					func_257(uParam0[1], 10, 1, 1);
					func_257(uParam0[1], 11, 1, 1);
					func_130(uParam0[1], 0, 1, 1);
				}
				else
				{
					(*uParam0)[1] = func_255("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 250, 251, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_126(uParam0[1], -1067771379, 0, 1);
					func_256(uParam0[1], 1, 1);
					func_257(uParam0[1], 10, 1, 1);
					func_257(uParam0[1], 11, 1, 1);
					func_130(uParam0[1], 0, 1, 1);
				}
				return;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -563455375))
			{
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (func_627(iVar8))
			{
				if (!uParam0->f_32)
				{
					if (func_136(uParam0[1], 0))
					{
						if (func_400(uParam0[1], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT")))
						{
							uParam0->f_32 = 1;
							func_130(uParam0[1], 0, 1, 1);
							func_130(uParam0[4], 0, 1, 1);
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
								if (func_150(uParam0->f_73, -1588156645) && iVar8 != -842117252)
								{
									uParam0->f_81 = WEAPON::_CREATE_WEAPON_OBJECT(func_193(uParam0->f_73, 0), 1, Global_35, true, 1f);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
									if (iVar8 == -1610298873)
									{
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_628(uParam0, iVar8), "DYNAMITE", uParam0->f_81, 0);
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
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_628(uParam0, iVar8), "DYNAMITE", uParam0->f_81, 0);
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
						func_98(&(uParam0->f_81), &(uParam0->f_82));
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
					if (func_78(0) && !func_79())
					{
						func_382(uParam0->f_73, uParam0->f_74, 1, func_394(), 0);
						func_80(uParam0->f_73, 1, 0, 1, 0);
					}
					if (iVar8 == -842117252)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
						{
							func_98(&(uParam0->f_81), &(uParam0->f_82));
						}
					}
					uParam0->f_21++;
					uParam0->f_34++;
					if ((!func_629(uParam0->f_73, uParam0->f_74, 0, func_394(), 0) || func_403(uParam0->f_73, 1, 0)) || uParam0->f_21 >= uParam0->f_33)
					{
						if (!func_78(0) || func_79())
						{
							uParam0->f_22 = func_109(uParam0->f_73, uParam0->f_74, uParam0->f_34);
							uParam0->f_34 = 0;
						}
						func_630(uParam0, iVar8, 0);
						return;
					}
				}
				if (!uParam0->f_32)
				{
					if (!(func_136(uParam0[1], 0) && PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT"))))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, joaat("SAFETOBREAKOUT")))
						{
							if (!func_78(0) || func_79())
							{
								uParam0->f_22 = func_109(uParam0->f_73, uParam0->f_74, uParam0->f_34);
								uParam0->f_34 = 0;
							}
							func_630(uParam0, iVar8, 1);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1290366555) && uParam0->f_21 < (uParam0->f_33 - 1))
				{
					func_130(uParam0[1], 1, 1, 1);
					func_130(uParam0[4], 1, 1, 1);
					uParam0->f_32 = 0;
				}
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(func_628(uParam0, iVar8), "player"))
				{
					if (!func_78(0) || func_79())
					{
						uParam0->f_22 = func_109(uParam0->f_73, uParam0->f_74, uParam0->f_34);
						uParam0->f_34 = 0;
					}
					func_630(uParam0, iVar8, 0);
				}
			}
			else if (func_27(&(uParam0->f_86), (IntToFloat(uParam0->f_49) / 1000f)))
			{
				if (!func_78(0) || func_79())
				{
					if (uParam0->f_22 == -1)
					{
						uParam0->f_22 = func_109(uParam0->f_73, uParam0->f_74, 1);
						if (uParam0->f_22 == -1)
						{
							func_630(uParam0, iVar8, 0);
						}
					}
					else if (func_390(uParam0->f_22))
					{
					}
					uParam0->f_22 = -1;
				}
				else
				{
					func_382(uParam0->f_73, uParam0->f_74, 1, func_394(), 0);
					func_80(uParam0->f_73, 1, 1, 1, 0);
				}
				uParam0->f_33 = -1;
				uParam0->f_34 = 0;
				func_53(131072);
				func_98(&(uParam0->f_81), &(uParam0->f_82));
				uParam0->f_51 = 0;
				bVar9 = true;
				if (!func_629(uParam0->f_73, uParam0->f_74, 0, func_394(), 0) || func_403(uParam0->f_73, 1, 0))
				{
					bVar9 = false;
				}
				func_630(uParam0, iVar8, bVar9);
			}
			break;
		case 0:
			if (func_105())
			{
				func_106(0);
			}
			if (func_601(uParam0))
			{
				func_103(uParam0);
				func_602(uParam0);
			}
			break;
		case 13:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_73), 1, 0, 0, 0);
			func_611(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -2015667492))
				{
					func_98(&(uParam0->f_83), &(uParam0->f_84));
				}
			}
			if (!func_63(128))
			{
				if (!func_136(uParam0[2], 0))
				{
					func_130(uParam0[2], 1, 1, 1);
					func_256(uParam0[2], 0, 1);
				}
				if (!func_136(uParam0[4], 0))
				{
					func_130(uParam0[4], 1, 1, 1);
					func_256(uParam0[4], 1, 1);
				}
			}
			if (func_616(uParam0[2], 1))
			{
				func_103(uParam0);
				func_262(&(uParam0->f_86));
				func_44(uParam0, 14);
				return;
			}
			else if (func_124(uParam0[4], 1))
			{
				func_103(uParam0);
				func_98(&(uParam0->f_81), &(uParam0->f_82));
				func_98(&(uParam0->f_79), &(uParam0->f_80));
				func_98(&(uParam0->f_83), &(uParam0->f_84));
				iVar10 = PED::_0x569F1E1237508DEB(Global_34);
				if (iVar10 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") && iVar10 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				iVar8 = func_283(uParam0->f_73, -1636519629);
				iVar11 = func_628(uParam0, iVar8);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar11, "player", Global_34);
				func_104(uParam0, 0);
				func_617("Exit", "SSCRFT_Sounds", 1);
				if (uParam0->f_28)
				{
					func_44(uParam0, 1);
				}
				else
				{
					func_44(uParam0, 0);
				}
				return;
			}
			else if (func_259(uParam0[1], 1))
			{
				func_130(uParam0[4], 0, 1, 1);
				func_130(uParam0[2], 0, 1, 1);
				func_130(uParam0[1], 0, 1, 1);
				iVar8 = func_283(uParam0->f_73, -1636519629);
				iVar12 = func_628(uParam0, iVar8);
				if (iVar12 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(iVar12, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(iVar12);
				}
				func_262(&(uParam0->f_86));
				uParam0->f_32 = 0;
				func_44(uParam0, 12);
				return;
			}
			if (func_263(uParam0[4], 1))
			{
				if (!func_95(&(uParam0->f_86)))
				{
					func_29(&(uParam0->f_86));
				}
				else if (func_27(&(uParam0->f_86), 0.1f))
				{
					func_129(uParam0[4], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_95(&(uParam0->f_86)))
				{
					func_262(&(uParam0->f_86));
				}
				func_129(uParam0[4], "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_73), 1, 0, 0, 0);
			func_611(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -2015667492))
				{
					func_98(&(uParam0->f_83), &(uParam0->f_84));
				}
			}
			iVar8 = func_283(uParam0->f_73, -1636519629);
			iVar13 = func_628(uParam0, iVar8);
			if ((iVar13 == 0 || (!ANIMSCENE::_0x25557E324489393C(iVar13) || ANIMSCENE::_0xF94692EB9DC15D74(iVar13, 0))) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336))
			{
				func_98(&(uParam0->f_81), &(uParam0->f_82));
				func_98(&(uParam0->f_79), &(uParam0->f_80));
				func_98(&(uParam0->f_83), &(uParam0->f_84));
				iVar14 = PED::_0x569F1E1237508DEB(Global_34);
				if (iVar14 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") && iVar14 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar13, "player", Global_34);
				func_44(uParam0, 15);
			}
			break;
		case 16:
			iVar15 = func_631();
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				uParam0->f_22 = func_109(uParam0->f_73, uParam0->f_74, 1);
				func_44(uParam0, 17);
			}
			else if (NETWORK::_0x255A5EF65EDA9167(iVar15) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar15))
			{
				func_44(uParam0, 10);
			}
			else if (func_27(&(uParam0->f_86), 5f))
			{
				func_262(&(uParam0->f_86));
				func_44(uParam0, 10);
			}
			break;
		case 17:
			if (!func_390(uParam0->f_22))
			{
				if (func_599(uParam0->f_22) != 3)
				{
					func_632(0);
				}
				else
				{
					func_633(uParam0->f_73);
					PED::_0xD65FDC686A031C83(Global_34, joaat("STEWPOT_ACTION"), 1f);
					func_634(uParam0);
					if (func_150(uParam0->f_73, -2011345500))
					{
						func_470(-1266356243, 0, 255, 0, 0);
					}
					uParam0->f_27 = uParam0->f_73;
				}
				func_44(uParam0, 15);
			}
			else
			{
				func_635(1);
				HUD::_UIPROMPT_DISABLE_PROMPTS_THIS_FRAME();
				PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			}
			break;
		case 1:
			if (func_105())
			{
				func_106(0);
			}
			if (func_601(uParam0))
			{
				if (func_100(uParam0[0]))
				{
					func_130(uParam0[0], 0, 1, 1);
				}
				func_602(uParam0);
			}
			break;
		case 18:
			if (func_105())
			{
				func_106(0);
			}
			if (func_601(uParam0))
			{
				func_602(uParam0);
			}
			if (uParam0->f_25)
			{
				TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
			}
			func_104(uParam0, 0);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_35);
			Global_1913166->f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
}

void func_393(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_49.f_74 == joaat("COST_CRAFTING_GRILL"))
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_192(func_191(joaat("FOOD_SEASONED")), 1);
	}
	STATS::_0x378D3B1B11D9385B(uParam0->f_49.f_73);
	func_46(16384);
	func_53(65536);
	func_48(16);
	if (func_78(0) && !func_79())
	{
		func_382(uParam0->f_49.f_73, uParam0->f_49.f_74, 1, func_394(), 0);
	}
	func_120(uParam0->f_149[3], 1, 1);
	if (bVar0)
	{
		iVar1 = 7000;
		iVar2 = 10000;
		if (func_15(uParam0->f_139, 16384))
		{
			iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
			iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 0.8f));
		}
		uParam0->f_149[3] = func_255("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar1, iVar2, 35, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		iVar1 = 7000;
		iVar2 = 10000;
		if (func_15(uParam0->f_139, 16384))
		{
			iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
			iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 0.8f));
		}
		uParam0->f_149[3] = func_255("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar1, iVar2, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	func_384(uParam0, 3, 0, 0);
	func_130(&(uParam0->f_149[3]), 0, 1, 1);
	func_126(&(uParam0->f_149[3]), -1067771379, 0, 1);
	uParam0->f_164 = MISC::GET_GAME_TIMER();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_147))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_147));
	}
	uParam0->f_147 = OBJECT::CREATE_OBJECT(func_383(uParam0->f_49.f_73), Global_35, false, false, false, false, true);
	if (PED::_0x3BBDD6143FF16F98(Global_34, uParam0->f_147, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
	{
	}
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_147, false);
	OBJECT::_SET_OBJECT_AFTERBURN_LEVEL(uParam0->f_147, 0f, true);
	uParam0->f_176 = 3;
	func_103(&(uParam0->f_49));
	func_44(&(uParam0->f_49), 0);
	func_395();
	AUDIO::_0xAC84686C06184B0D("cooking", "Player_Campfire_Scenes");
	func_60(uParam0, 9);
}

int func_394()
{
	int iVar0;
	int iVar1;

	iVar0 = func_173(7);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (func_50(Global_34, iVar0, 1) < 400f)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

int func_395()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_306())
	{
		return 0;
	}
	if (!func_537(&iVar0))
	{
		return 0;
	}
	if (!func_307(iVar0))
	{
		return 0;
	}
	iVar1 = func_583(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_309(&iVar2, 1);
	return func_310(iVar0, iVar2);
}

bool func_396(int iParam0)
{
	return func_99(Global_1939067->f_38, iParam0);
}

void func_397(var uParam0, int iParam1)
{
	bool bVar0;

	if (func_263(&(uParam0->f_149[3]), 1))
	{
		bVar0 = true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1812847403))
	{
		if (PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x709BA8C08C5C008D();
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1738621174))
	{
		if (!PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 0f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x5F217BC1190503D8("CRFT_SEAR_MEAT", 7f);
		}
	}
	switch (iParam1)
	{
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ARTHUR"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_MP_FEMALE_A"):
			if (bVar0)
			{
				if (func_72(uParam0))
				{
					if (func_75(joaat("COOKKNIFE_TRANS_COOKKNIFE_ACTIVE"), 0.5f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_MP_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR"):
			if (!bVar0)
			{
				if (func_72(uParam0))
				{
					if (func_75(joaat("COOKKNIFE_ACTIVE_TRANS_COOKKNIFE"), 0.5f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_MP_FEMALE_A"):
			if (bVar0)
			{
				if (func_72(uParam0))
				{
					if (func_75(joaat("KNEELFIRECRAFT_TRANS_KNEELFIRECRAFTACTIVE"), 0.5f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE_MP_FEMALE_A"):
			if (!bVar0)
			{
				if (func_72(uParam0))
				{
					if (func_75(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFT"), 0.5f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
	}
}

void func_398(var uParam0)
{
	if (!func_100(&(uParam0->f_149[5])))
	{
		return;
	}
	if (!func_396(2))
	{
		func_130(&(uParam0->f_149[5]), 0, 1, 1);
		return;
	}
	if (func_390(uParam0->f_49.f_22))
	{
		func_130(&(uParam0->f_149[5]), 0, 1, 1);
		return;
	}
	func_401();
	func_130(&(uParam0->f_149[5]), 1, 1, 1);
}

void func_399(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_149[3] = func_255("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 0, 7000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_384(uParam0, 3, 0, 1);
		func_130(&(uParam0->f_149[3]), 0, 1, 1);
		func_126(&(uParam0->f_149[3]), -1067771379, 0, 1);
	}
	uParam0->f_149[7] = func_255("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	uParam0->f_149[1] = func_255("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
	func_258(uParam0->f_149[1], "INPUT_PCRAFT_EXIT");
	func_256(&(uParam0->f_149[7]), 0, 1);
	func_126(&(uParam0->f_149[7]), -1067771379, 0, 1);
	func_126(&(uParam0->f_149[1]), -1067771379, 0, 1);
	func_257(&(uParam0->f_149[1]), 19, 1, 1);
	func_257(&(uParam0->f_149[1]), 20, 1, 1);
	func_257(&(uParam0->f_149[1]), 13, 1, 1);
	func_257(&(uParam0->f_149[7]), 13, 1, 1);
	func_130(&(uParam0->f_149[7]), 0, 1, 1);
	func_130(&(uParam0->f_149[1]), 0, 1, 1);
}

bool func_400(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_100(iParam0))
	{
		return false;
	}
	iVar0 = func_229(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_401()
{
	HUD::_0xC9CAEAEEC1256E54(func_636(2));
	HUD::_0xC9CAEAEEC1256E54(func_636(0));
	HUD::_0xC9CAEAEEC1256E54(func_636(1));
	HUD::_0xC9CAEAEEC1256E54(func_637(2));
	HUD::_0xC9CAEAEEC1256E54(func_637(0));
	HUD::_0xC9CAEAEEC1256E54(func_637(1));
}

void func_402(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_100(iParam0))
	{
		return;
	}
	iVar0 = func_229(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

bool func_403(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;

	Var0 = { func_188(iParam0, 0, 0) };
	return func_219(iParam0, &Var0, iParam1, 0, bParam2, -1, 0);
}

float func_404(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_100(iParam0))
	{
		return 0f;
	}
	iVar0 = func_229(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

float func_405(float fParam0, float fParam1, float fParam2)
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

void func_406(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_136(&(uParam0->f_149[3]), 0))
		{
			if (((func_100(&(uParam0->f_149[3])) && (uParam0->f_49.f_73 == joaat("CONSUMABLE_COFFEE") || !func_403(uParam0->f_49.f_73, 1, 0))) && !func_390(uParam0->f_49.f_22)) && func_629(uParam0->f_49.f_73, uParam0->f_49.f_74, 0, func_394(), 0))
			{
				func_130(&(uParam0->f_149[3]), 1, 1, 1);
			}
		}
	}
	if (!func_136(&(uParam0->f_149[7]), 0))
	{
		func_130(&(uParam0->f_149[7]), 1, 1, 1);
		func_256(&(uParam0->f_149[7]), 0, 1);
	}
	if (!func_136(&(uParam0->f_149[1]), 0))
	{
		func_130(&(uParam0->f_149[1]), 1, 1, 1);
	}
}

void func_407(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_120((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

void func_408(var uParam0)
{
	int iVar0;
	int iVar1;

	func_120(uParam0->f_149[3], 1, 1);
	iVar0 = 6000;
	iVar1 = 10000;
	if (func_15(uParam0->f_139, 16384))
	{
		iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * 0.8f));
		iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
	}
	uParam0->f_149[3] = func_255("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar0, iVar1, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	func_384(uParam0, 3, 0, 0);
	func_126(&(uParam0->f_149[3]), -1067771379, 0, 1);
	if (func_78(0) && !func_79())
	{
		func_382(uParam0->f_49.f_73, uParam0->f_49.f_74, 1, func_394(), 0);
	}
	func_130(&(uParam0->f_149[3]), 0, 1, 1);
	func_395();
	uParam0->f_164 = MISC::GET_GAME_TIMER();
	AUDIO::_0xAC84686C06184B0D("crafting", "Player_Campfire_Scenes");
	func_60(uParam0, 1);
}

int func_409(int iParam0)
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

int func_410(int iParam0)
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

int func_411(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
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
		iVar1 = func_162(iParam1);
		iVar5 = func_638(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
			{
				if (func_575(iParam0, iVar1, iVar2))
				{
					*uParam4 = { func_188(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_270(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = iVar2;
					return 1;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_73(0);
			Var37 = { func_188(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_270(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_162(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
						{
							if (func_575(iParam0, iVar1, iVar2))
							{
								if (func_639(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = iVar2;
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

struct<4> func_412()
{
	struct<4> Var0;

	Var0 = { func_368(0) };
	return func_270(856287005, Var0, -218846335, 0);
}

int func_413(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_219(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_78(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_73(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_414(int iParam0, int iParam1)
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
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!func_411(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_412() };
	Var14 = { func_270(iParam0, Var10, iVar9, 0) };
	if (func_560(Var14, iParam1))
	{
		if (func_640(iParam0))
		{
			if (func_641(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_414(iVar18, 0))
				{
				}
			}
		}
		else if (func_642(iParam0))
		{
			if (func_641(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_414(iVar19, 0))
				{
				}
			}
			if (func_641(joaat("SLOTID_HORSE_BLANKET"), &iVar20))
			{
				if (func_414(iVar20, 0))
				{
				}
			}
		}
		else if (func_643(iParam0))
		{
			if (func_641(joaat("SLOTID_HORSE_HORN"), &iVar21))
			{
				if (func_414(iVar21, 0))
				{
				}
			}
			if (func_641(joaat("SLOTID_HORSE_BLANKET"), &iVar22))
			{
				if (func_414(iVar22, 0))
				{
				}
			}
			if (func_641(joaat("SLOTID_HORSE_BEDROLL"), &iVar23))
			{
				if (func_414(iVar23, 0))
				{
				}
			}
		}
		else if (func_415(iParam0))
		{
			if (func_641(joaat("SLOTID_HORSE_HORN"), &iVar24))
			{
				if (func_414(iVar24, 0))
				{
				}
			}
			if (func_641(joaat("SLOTID_HORSE_STIRRUP"), &iVar25))
			{
				if (func_414(iVar25, 0))
				{
				}
			}
			iVar26 = func_416(iParam0);
			if (func_90(iVar26, 0))
			{
				if (func_414(iVar26, 1))
				{
				}
			}
		}
		func_417();
		return 1;
	}
	return 0;
}

int func_415(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (func_150(iParam0, -251515357))
	{
		return 1;
	}
	return 0;
}

int func_416(int iParam0)
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

int func_417()
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

	Var0 = { func_188(856287005, 0, 0) };
	Var5 = { func_270(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_162(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_559(Var5, joaat("SLOTID_HORSE_SADDLE"), 0, -1);
	}
	if (!func_90(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_638(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_559(Var5, iVar11, 0, -1);
			if (!func_90(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (((func_415(iVar14) || func_640(iVar14)) || func_642(iVar14)) || func_643(iVar14))
					{
					}
					else
					{
						Jump @307; //curOff = 220
						if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
						{
							if (func_642(iVar14) || func_643(iVar14))
							{
							}
							else
							{
								Jump @307; //curOff = 257
								if (iVar11 == joaat("SLOTID_HORSE_BEDROLL"))
								{
									if (func_643(iVar14))
									{
									}
									else
									{
										Jump @307; //curOff = 282
										if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
										{
											if (func_415(iVar14))
											{
											}
											else
											{
												bVar15 = true;
												Jump @347; //curOff = 310
												if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
												{
													if (!func_415(iVar14) && func_644(iVar21))
													{
														bVar15 = true;
													}
												}
												if (bVar15)
												{
													if (func_645(iVar11, &Var16, 1))
													{
														if (!func_560(Var16, 1))
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
				}
			}
		}
	}

int func_418(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_108() == -1)
	{
		if (func_459(iParam0) && func_646(iParam0))
		{
			func_647(iParam0, iParam1, 1, &bParam2, iParam3);
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

int func_419(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_648(iParam0, iParam1);
	Var0 = { func_188(iParam0, 0, 1) };
	iVar5 = func_460(iParam0, &Var0, 0, 0);
	iVar6 = func_649(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_150(iParam0, -2051813666))
		{
			func_137(672, 1);
		}
		else if (func_108() == -1)
		{
			func_137(671, 0);
		}
	}
	if (func_219(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_420(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_650())
	{
		return;
	}
	switch (func_283(iParam0, -949239683))
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

int func_421(int iParam0)
{
	if (!func_651(iParam0))
	{
		return 0;
	}
	return func_652(iParam0);
}

void func_422(int iParam0)
{
	if (!func_651(iParam0))
	{
		return;
	}
	func_653(iParam0);
	func_654(iParam0);
}

void func_423(int iParam0)
{
	if (func_150(iParam0, -1522723129))
	{
		func_470(-848633709, 0, 255, 0, 0);
	}
	else if (func_150(iParam0, -283942357))
	{
		func_470(-981153234, 0, 255, 0, 0);
	}
	else if (func_150(iParam0, 683680997))
	{
		func_470(-756350192, 0, 255, 0, 0);
	}
	else if (func_150(iParam0, 1307628809))
	{
		func_470(603094518, 0, 255, 0, 0);
	}
}

int func_424(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_188(iParam0, 0, 1) };
		if (func_370(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_371(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_270(iParam0, Var0, Var0.f_4, 0) };
				func_271(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_78(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
		{
			return 0;
		}
		func_425(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
		func_655(iParam0, iParam1);
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

int func_425(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_428(iParam0))
	{
		return 0;
	}
	if (!func_78(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

int func_426(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_210(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_656(iParam0, iParam1, iParam2);
	}
	Var1 = { func_188(iParam0, 0, 1) };
	Var6 = { func_270(iParam0, Var1, Var1.f_4, 0) };
	return func_413(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

int func_427(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_194(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_108() == -1)
		{
			func_195(iVar0);
			if (iParam1 == 1248274121)
			{
				func_657(iVar0);
			}
		}
		if (!func_219(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_647(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_658(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_424(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
			{
				func_424(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(iVar0))
			{
				func_424(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_659())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_660(iVar0))
				{
					func_424(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_424(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_661(Global_34, 2, 0, 1);
				if ((((func_204(iVar7) && !Global_26386) && iVar7 != iVar0) && !func_23(joaat("UPGRADE_OFFHAND_HOLSTER"), 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_34, iVar7);
				}
				if (func_204(iVar7) && func_23(joaat("UPGRADE_OFFHAND_HOLSTER"), 1))
				{
					if (!func_424(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_424(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_424(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_137(513, 1);
	}
	return 1;
}

bool func_428(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_429(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_428(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	if (func_204(iVar4))
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
		func_439(func_662(iParam0), func_354(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_78(0))
	{
		if (func_425(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_426(iParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_430(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_431()
{
	return 0;
}

int func_432(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_108() == 0)
	{
		func_240(iParam0, 0);
		return 0;
	}
	iVar0 = func_663(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_664(iVar0, sParam4, iParam5, 0);
	}
	func_665(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_433(int iParam0)
{
}

void func_434(int iParam0)
{
}

void func_435(int iParam0)
{
}

void func_436(int iParam0)
{
}

void func_437()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_438(int iParam0, int iParam1)
{
	var uVar0;

	func_347(iParam0, iParam1, &uVar0);
}

void func_439(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_252(iParam0, &iVar0, &iVar1);
	if (!func_253(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_485(iParam0, 1024))
	{
		return;
	}
	func_254(iVar0, iVar1);
	(Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_440(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_252(iParam0, &iVar0, &iVar1);
	if (!func_253(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_485(iParam0, 1024))
	{
		return;
	}
	func_254(iVar0, iVar1);
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

void func_441(int iParam0)
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

void func_442(int iParam0)
{
	if (func_108() != -1)
	{
		return;
	}
}

void func_443(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_444(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_666(Global_1902942->f_37);
	func_362(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_667(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_445(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = func_448(iParam1);
	if (!func_668(iParam0, Var0.f_4))
	{
		return 0;
	}
	iVar5 = func_460(iParam0, &Var0, 0, 0);
	iVar6 = func_649(iParam0, 0, 0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return 0;
	}
	return 1;
}

int func_446(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
	}
	if (func_150(iParam0, -1881667932))
	{
		return 1;
	}
	return 0;
}

int func_447(int iParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14[10];
	int iVar35;
	int iVar36;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	*iParam2 = 0;
	Var0 = { func_669(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar12, &iVar13))
			{
				if (func_451(iVar13, iParam1, &Var14, &iVar35, 1, 0))
				{
					iVar36 = 0;
					while (iVar36 < iVar35)
					{
						if (iParam0 == &Var14[iVar36 /*2*/])
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

int func_448(int iParam0)
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

struct<2> func_449(int iParam0)
{
	return func_430(joaat("MADE"), iParam0);
}

struct<2> func_450(int iParam0)
{
	struct<2> Var0;

	if (func_225(iParam0, 0))
	{
		Var0 = { func_430(joaat("MADE_RECIPE_TYPE"), joaat("FOOD")) };
	}
	else if (func_225(iParam0, 2))
	{
		Var0 = { func_430(joaat("MADE_RECIPE_TYPE"), joaat("AMMO")) };
	}
	else if (func_225(iParam0, 5))
	{
		Var0 = { func_430(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE")) };
	}
	else if (func_225(iParam0, 1))
	{
		Var0 = { func_430(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES")) };
	}
	else if (func_225(iParam0, 3))
	{
		Var0 = { func_430(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS")) };
	}
	else if (func_225(iParam0, 4))
	{
		Var0 = { func_430(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING")) };
	}
	return Var0;
}

int func_451(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1);
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
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
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
		func_670(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_452(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (func_150(iParam0, -839724752))
	{
		return 1;
	}
	return 0;
}

int func_453(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!func_241(iParam0) && !func_452(iParam0))
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
	iVar13 = func_283(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_669(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_671(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_672(iVar15, iVar1);
			if (func_90(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_673(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_674(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_676(iVar16, func_675(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_677(iVar1);
	}
	return iVar0;
}

int func_454(int iParam0, int iParam1, int iParam2)
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

	iParam0 = func_326(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_90(iParam1, 0))
	{
		return 0;
	}
	if (!func_678(iParam0))
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
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
		if (!func_679(iVar28))
		{
		}
		else
		{
			MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = &Var3.f_1[iVar29];
				if (iVar30 == iParam1)
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

int func_455(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_326(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_90(iParam1, 0))
	{
		return 0;
	}
	if (!func_678(iParam0))
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	iVar1 = iParam1;
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
		if (PED::_0x0CEEB6F4780B1F2F(iVar0, iVar3) != iVar1)
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

int func_456(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (iParam0 == ENTITY::_0x31FEF6A20F00B963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

int func_457(int iParam0)
{
	if (!func_90(*iParam0, 0))
	{
		return 0;
	}
	if (!func_680(*iParam0))
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

int func_458(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_459(int iParam0)
{
	return func_91(iParam0) == joaat("WEAPON");
}

int func_460(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_90(iParam0, 0) && !func_458(func_278(iParam0), 2))
	{
		return 0;
	}
	if (func_91(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_210(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_73(bParam3), iParam0);
}

int func_461(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_681(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_682(iParam0))
	{
		return func_684(func_683(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_451(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_462(int iParam0)
{
	switch (iParam0)
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

struct<4> func_463()
{
	struct<4> Var0;

	return Var0;
}

int func_464(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if (func_99(iVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_99(iVar0, 8))
	{
		return 0;
	}
	else if (func_99(iVar0, 16))
	{
		return 0;
	}
	else if (func_99(iVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_465(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_685(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_685(iParam1, 2, 0, 0);
	return -1;
}

int func_466(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_685(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_467(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_686(35, iParam0);
}

int func_468(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 182)
	{
		return 1;
	}
	return 0;
}

int func_469(int iParam0)
{
	if (!func_468(iParam0))
	{
		return 0;
	}
	return (Global_1132968->f_11[iParam0 /*3*/])->f_2;
}

bool func_470(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_687(iParam0, &uVar25, &Var12, &Var0, bParam1, iParam2, iParam3, bParam4);
}

bool func_471()
{
	return (func_688(0) && func_688(1));
}

int func_472(int iParam0)
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

int func_473(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_689(1);
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

int func_474(int iParam0)
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

bool func_475(int iParam0)
{
	return func_231(iParam0, 2);
}

int func_476(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return iVar1;
		}
	}
	return 0;
}

void func_477(var uParam0, int iParam1)
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

int func_478(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_690(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_691(uParam2, iParam0, Var1);
	return 1;
}

int func_479(int iParam0)
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
	iVar2 = func_692(iVar0);
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
			iVar6 = func_693(iVar5);
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

int func_480(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = func_577(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = func_694(iVar0, iParam0);
		if (iParam1 < iVar1)
		{
			iVar1 = iParam1;
		}
		iParam1 = (iParam1 - iVar1);
		func_695(&iVar0, iParam0, &iVar1, bParam3, iParam4, iParam5);
		iParam1 = (iParam1 + iVar1);
	}
	iParam1 = func_696(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, iParam5);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	return iParam1;
}

int func_481(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_94(iParam0, 0, 0, 0);
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
		if (!func_76(iParam0, iVar1, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_697(iParam0, iVar1, 0);
		}
	}
	if (iVar2 > 0)
	{
		if (!func_698(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_697(iParam0, iVar1, 0);
		}
		if (!bParam2)
		{
			func_161("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_482(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_483(int iParam0)
{
	if (func_485(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_484(int iParam0)
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

bool func_485(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_486(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_487()
{
	if (!func_335())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

int func_488(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (iParam0 == 6 && iParam1 == 4)
	{
		return 1;
	}
	return 0;
}

int func_489(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_490(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;

	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_210(iParam2, joaat("DEFAULT"));
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
	if (!func_699(uParam0, iParam1, &uVar0, iParam4, bParam5))
	{
		return 0;
	}
	return 1;
}

struct<16> func_491(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_270(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_492(int iParam0)
{
	if (func_90(iParam0, 0))
	{
		if (func_150(iParam0, -1242251796))
		{
			if (func_150(iParam0, 2060589226))
			{
				return func_700();
			}
			return func_701();
		}
		else if (func_150(iParam0, 1919582297))
		{
			return func_501();
		}
		else if (func_150(iParam0, 1647670816))
		{
			return func_702();
		}
		else if (func_150(iParam0, 1147021565))
		{
			return func_504();
		}
	}
	if (Global_1939067->f_12)
	{
		return func_701();
	}
	else
	{
		return func_504();
	}
	return func_504();
}

int func_493(int iParam0)
{
	if ((((((((((func_150(iParam0, 1147021565) || func_150(iParam0, -136654233)) || func_150(iParam0, -524514947)) || func_150(iParam0, -1238310989)) || func_150(iParam0, 1765172170)) || func_150(iParam0, 1490540191)) || func_150(iParam0, 1573112293)) || func_150(iParam0, -1242251796)) || func_150(iParam0, 1919582297)) || func_150(iParam0, -2085281117)) || iParam0 == joaat("CONSUMABLE_OFFAL"))
	{
		return 1;
	}
	return 0;
}

int func_494()
{
	return 32759936;
}

int func_495()
{
	return 33012981;
}

int func_496()
{
	return 24885248;
}

int func_497()
{
	return 33269904;
}

int func_498()
{
	return 16228343;
}

int func_499()
{
	return 33269760;
}

int func_500()
{
	return 33030143;
}

int func_501()
{
	return 33274887;
}

int func_502()
{
	return 32189572;
}

int func_503()
{
	return 31080423;
}

int func_504()
{
	return 33012951;
}

int func_505()
{
	return 33022080;
}

bool func_506(int iParam0)
{
	return func_99(Global_1939067->f_7, iParam0);
}

int func_507(bool bParam0)
{
	int iVar0;

	if (func_506(1) && !Global_1956172->f_2)
	{
		if (bParam0)
		{
			func_161("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((func_506(2) && !Global_1956172->f_2) && MISC::GET_GAME_TIMER() >= Global_17150)
	{
		if (bParam0)
		{
			iVar0 = func_703(Global_34);
			if (iVar0 != 0)
			{
				if (ENTITY::_0x9A100F1CF4546629(iVar0))
				{
					func_161("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return 0;
				}
			}
			func_161("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_506(4194304))
	{
		return 0;
	}
	return 1;
}

int func_508(bool bParam0, bool bParam1)
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
			func_161("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_509(bool bParam0, int iParam1, bool bParam2)
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
					func_161("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return 0;
			case joaat("BREACH_CANNON"):
			case joaat("GATLING_GUN"):
			case joaat("GATLINGMAXIM02"):
			case joaat("HOTCHKISS_CANNON"):
				if (bParam0)
				{
					func_161("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return 0;
		}
		if (!func_15(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_34))
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

int func_510(int iParam0, int iParam1)
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

int func_511(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_512(int iParam0, bool bParam1)
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

int func_513(int iParam0, int iParam1)
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

bool func_514(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

int func_515()
{
	if (Global_17172.f_2954 == 1)
	{
		return 0;
	}
	if (func_704(4))
	{
		return 0;
	}
	if (func_518())
	{
		return 1;
	}
	if (func_705())
	{
		return 0;
	}
	if (func_706(1, 255))
	{
		return 0;
	}
	if (func_88(func_707()) && Global_1199613->f_1.f_20 != 3)
	{
		return 0;
	}
	return 1;
}

int func_516(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&(Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0] != 0 && func_23(&((Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0]), 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_517(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&(Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0] != 0 && func_708(&((Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_518()
{
	return func_709(func_87(0));
}

bool func_519(int iParam0, int iParam1, bool bParam2)
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

int func_520()
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
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_250(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_34, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_34, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_250(iVar0)) || WEAPON::_IS_WEAPON_LASSO(iVar0))
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

int func_521(int iParam0)
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

void func_522(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_710(iParam0);
	iVar1 = func_521(iVar0);
	if (iVar1 != iParam0)
	{
		func_711(iVar1, 4);
	}
	if (!func_712(iParam0))
	{
		return;
	}
	if (func_713(iParam0))
	{
		return;
	}
	func_711(iParam0, 4);
	func_714(iParam0, bParam1);
	if (!func_715(iParam0))
	{
		func_716(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_17(0, 0, 1))
		{
			func_717(1, 6);
		}
	}
}

int func_523(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
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

void func_524(int iParam0)
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
	if ((func_150(iParam0, 1573112293) || func_150(iParam0, 672467738)) || func_150(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_91(iParam0) == joaat("CONSUMABLE"))
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
				uVar30 = func_718(0, Var22.f_2);
				func_719(Var22.f_2);
				bVar39 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				uVar31 = func_718(2, Var22.f_2);
				func_720(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				uVar32 = func_718(1, Var22.f_2);
				func_721(Var22.f_2);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == Var22.f_1)
			{
				fVar33 = func_593(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_594(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == Var22.f_1)
			{
				fVar34 = func_593(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_594(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == Var22.f_1)
			{
				fVar35 = func_593(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_594(1, fVar35, 1, 1, bVar37);
			}
			else if (joaat("EFFECT_HEALTH_CORE_GOLD") == Var22.f_1)
			{
				fVar36 = func_596(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_597(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE_GOLD") == Var22.f_1)
			{
				fVar36 = func_596(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_597(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE_GOLD") == Var22.f_1)
			{
				fVar36 = func_596(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_597(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_596(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_597(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_596(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_597(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_596(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_597(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_595(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_150(iParam0, -537818634))
		{
			func_192(func_363(joaat("MEDICINE_ITEMS_USED")), 1);
		}
		if (func_150(iParam0, -1457797660))
		{
			func_192(func_363(joaat("PROVISION_ITEMS_USED")), 1);
		}
		if (bVar38)
		{
			func_192(func_363(joaat("DEADEYE_ITEMS_USED")), 1);
		}
		if (iParam0 == -241345764 || iParam0 == -1735850413)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_SALOONSNACK_00"), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(uVar30, uVar32, uVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

void func_525(int iParam0)
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

bool func_526(int iParam0)
{
	return &Global_1951141->f_593[iParam0] > 0;
}

void func_527(int iParam0)
{
	Global_1951141->f_593[iParam0] = &Global_1951141->f_593[iParam0] + 1;
}

int func_528()
{
	if (Global_1951141->f_3253)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1951141->f_3251)) < 1250)
	{
		return 1;
	}
	if (func_722())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34))
	{
		return 1;
	}
	return 0;
}

int func_529(int iParam0)
{
	int iVar0;

	iVar0 = func_162(iParam0);
	if ((iVar0 == 81053684 || iVar0 == -525676072) || func_150(iParam0, -1348134986))
	{
		return 1;
	}
	return 0;
}

void func_530(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_531(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_537(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_532(int iParam0)
{
	if (-1829635046 == func_723(81053684))
	{
		if (func_537(iParam0))
		{
			return 1;
		}
	}
	else if (func_132(-525676072, iParam0))
	{
		if (func_537(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_533()
{
	int iVar0;

	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_520())
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

int func_534()
{
	int iVar0;

	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_520())
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

int func_535()
{
	int iVar0;

	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_520())
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

int func_536()
{
	int iVar0;

	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_520())
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

int func_537(int iParam0)
{
	if (func_132(81053684, iParam0))
	{
		return 1;
	}
	if (func_132(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_538(int iParam0)
{
	Global_1951141 = (&Global_1951141 - (Global_1951141 && iParam0));
}

void func_539(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[func_249(iParam0, 1) /*12*/])->f_11 = ((Global_1951141->f_81[func_249(iParam0, 1) /*12*/])->f_11 - ((Global_1951141->f_81[func_249(iParam0, 1) /*12*/])->f_11 && iParam1));
}

int func_540(int iParam0, bool bParam1)
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
				return func_724();
			}
			break;
	}
	return 0;
}

int func_541(int iParam0, bool bParam1)
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

int func_542(int iParam0, int iParam1)
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

int func_543(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_542(iVar1, &uVar0))
	{
		return 0;
	}
	if (!func_725(iParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_726(iParam0, 0))
	{
		return 0;
	}
	Global_1951141->f_3109[Global_1951141->f_3109.f_25] = iVar1;
	Global_1951141->f_3109.f_25++;
	*uParam1++;
	return 1;
}

int func_544(int iParam0, int iParam1)
{
	return 1;
}

int func_545()
{
	return Global_1951141->f_1;
}

void func_546()
{
	int iVar0;

	if (func_108() == -1)
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

bool func_547(int iParam0)
{
	return func_728(func_727(iParam0));
}

void func_548(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_729();
	}
	if (bParam0)
	{
		func_304(8);
		func_304(512);
	}
	else
	{
		func_304(8);
		func_304(16);
	}
}

void func_549(int iParam0, int iParam1, bool bParam2)
{
	func_730(iParam0, 0, 0);
	func_315(iParam1, 1, bParam2, 0);
}

int func_550(int iParam0, int iParam1)
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

void func_551()
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

void func_552(int iParam0)
{
	func_539(iParam0, 8, 6);
}

void func_553(int iParam0)
{
	func_731(&(Global_1951141->f_2760), iParam0);
}

void func_554(int iParam0, int iParam1)
{
	func_732(&(Global_1951141->f_2760), iParam0, iParam1);
}

void func_555(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_556(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar2 = 0;
	iVar3 = iParam1;
	iVar4 = func_162(iVar3);
	iVar5 = 0;
	if (func_545() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
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
					func_554(iVar0, iVar5);
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
						func_554(iVar0, iVar5);
					}
					iVar0 = 36;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
						func_554(iVar0, iVar5);
					}
					iVar0 = 37;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, -1278198125))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_554(iVar0, iVar5);
					}
					iVar0 = 18;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
					{
						iVar1 = &uParam0->f_1[iVar0 /*3*/];
						if (912453393 == func_162(iVar1) && (uParam0->f_1[iVar0 /*3*/])->f_1 != -2081918609)
						{
							(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							func_554(iVar0, iVar5);
						}
					}
					Jump @3216; //curOff = 543
					if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
					{
					}
					else
					{
						iVar0 = 36;
						func_554(iVar0, iVar5);
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, -1473580422))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_150(iVar1, 1469783911))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							}
							else if (func_733(&(uParam0->f_1[iVar0 /*3*/]), iVar2, -2081918609) != -1)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							}
							else
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("BASE");
							}
						}
						iVar0 = 18;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, 1583165364))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_162(iVar1) == 912453393)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
								func_554(iVar0, iVar5);
							}
						}
						iVar0 = 35;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, -1650340550))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_162(iVar1) == 1769055947)
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_554(iVar0, iVar5);
							}
						}
						Jump @3216; //curOff = 918
						if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
						{
						}
						else
						{
							iVar0 = 36;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, 1718965018))
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("BASE");
							}
							func_554(iVar0, iVar5);
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_554(iVar0, iVar5);
							}
							iVar0 = 20;
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if ((&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar1, 1090938458)) && func_150(iVar3, 475297062))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_554(iVar0, iVar5);
							}
							Jump @3216; //curOff = 1171
							func_554(36, iVar5);
							iVar0 = 18;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_554(iVar0, iVar5);
							}
							iVar0 = 17;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_554(iVar0, iVar5);
							}
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && 1769055947 == func_162(&(uParam0->f_1[iVar0 /*3*/])))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_554(iVar0, iVar5);
							}
							iVar0 = 29;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_554(iVar0, iVar5);
							}
							Jump @3216; //curOff = 1454
							func_554(16, iVar5);
							if (func_321(iVar3, 0))
							{
							}
							else
							{
								iVar0 = 29;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, 1126863852))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									func_554(iVar0, iVar5);
								}
								iVar0 = 16;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, -985549034))
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
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, -1527414429))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									func_554(iVar0, iVar5);
								}
								Jump @3216; //curOff = 1747
								if (func_321(iVar3, 0))
								{
								}
								else
								{
									iVar0 = 12;
									if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, -1527414429))
									{
										uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
										(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
										func_554(iVar0, iVar5);
									}
									iVar0 = 16;
									if (((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721) && func_150(iVar3, -985549034))
									{
										if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("BASE");
											func_554(iVar0, iVar5);
										}
										else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
											func_554(iVar0, iVar5);
										}
									}
									Jump @3216; //curOff = 1988
									if (func_321(iVar3, 0))
									{
									}
									else
									{
										iVar0 = 17;
										if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
										{
											uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
											(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
											func_554(iVar0, iVar5);
										}
										if ((uParam0->f_1[iParam2 /*3*/])->f_1 != -2081918609)
										{
											iVar0 = 34;
											iVar1 = &uParam0->f_1[iVar0 /*3*/];
											if (func_150(iVar1, 1583165364))
											{
												(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
												func_554(iParam2, iVar5);
											}
											else
											{
												iVar0 = 35;
												iVar1 = &uParam0->f_1[iVar0 /*3*/];
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && 1769055947 == func_162(iVar1))
												{
													(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
													func_554(iParam2, iVar5);
												}
											}
										}
										Jump @3216; //curOff = 2214
										if (func_321(iVar3, 0))
										{
										}
										else
										{
											iVar0 = 12;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_554(iVar0, iVar5);
											}
											iVar0 = 13;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_554(iVar0, iVar5);
											}
											iVar0 = 25;
											if (&Global_1951141->f_1657.f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, 675650051))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_554(iVar0, iVar5);
											}
											Jump @3216; //curOff = 2438
											if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
											{
												iVar0 = 37;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_554(iVar0, iVar5);
												}
												iVar0 = 38;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_554(iVar0, iVar5);
												}
												iVar0 = 35;
												if (-923693316 == func_162(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_554(iVar0, iVar5);
												}
											}
											else
											{
												iVar0 = 35;
												iVar1 = &uParam0->f_1[iVar0 /*3*/];
												if ((func_150(iVar3, 813132419) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/]) && func_162(iVar1) == -923693316)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_554(iVar0, iVar5);
												}
												if ((func_150(iVar3, -1650340550) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/]) && func_162(iVar1) == 1769055947)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_554(iVar0, iVar5);
												}
												iVar0 = 37;
												if (func_150(iVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_554(iVar0, iVar5);
												}
											}
											Jump @3216; //curOff = 2921
											iVar0 = 37;
											if (func_150(iVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_554(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3003
											iVar0 = 10;
											if (-525676072 == func_162(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_554(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3067
											iVar0 = 12;
											if (81053684 == func_162(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_554(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3131
											if (!func_150(iVar3, -1348134986))
											{
											}
											else
											{
												iVar0 = 10;
												if (-525676072 == func_162(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_554(iVar0, iVar5);
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
			switch (func_550(iParam2, 1))
			{
				case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
					if (func_734(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) && func_150(iVar3, -1230785684))
					{
						iVar0 = 27;
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_554(iVar0, iVar5);
					}
					break;
				case 1742327865:
					iVar0 = 16;
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("BASE");
						func_554(iVar0, iVar5);
					}
					else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
						func_554(iVar0, iVar5);
					}
					break;
				case 1250092473:
					iVar0 = 12;
					if (joaat("NECKTIES") == PED::_GET_PED_COMPONENT_CATEGORY(&(uParam0->f_1[iVar0 /*3*/]), iVar2, true))
					{
						if ((iParam1 == &Global_1951141->f_81[iParam2 /*12*/] || func_150(iVar3, 1872585553)) || iVar4 == 1882579758)
						{
							uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
							(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							func_554(iVar0, iVar5);
						}
					}
					iVar0 = 17;
					if (!func_321(&(uParam0->f_1[iVar0 /*3*/]), 0) && func_150(iVar3, 1467402774))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_554(iVar0, iVar5);
					}
					iVar0 = 29;
					if (!func_321(&(uParam0->f_1[iVar0 /*3*/]), 0) && func_150(iVar3, 1126863852))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_554(iVar0, iVar5);
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

int func_557(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (func_545() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_733(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_735(iParam0, func_550(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_558(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_311(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_736(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1951141->f_1657 != 491602716 || !func_737(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_150(Global_1951141->f_1657, -166674229) && (Global_1951141->f_1657 != 491602716 || !func_737(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1951141->f_1657 = 491602716; /* GXTEntry: "Custom Outfit" */
			Global_1951141->f_1538 = 491602716; /* GXTEntry: "Custom Outfit" */
			func_738(-1, 0, 6);
			func_165(27, 0, 0, 0, 0);
		}
	}
	if (bParam3)
	{
		func_548(0, 1);
	}
}

int func_559(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_739(&uParam0, iParam4, bParam5, iParam6);
}

int func_560(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_78(0))
	{
		return func_740(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_374(Param0, &Var0, 0, 0, -1))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_73(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_561(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (func_741(Global_34, iParam0, 0, 1) < 2f && PED::_0xD543D3A8FDE4F185(Global_34, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_562()
{
	return Global_1915180->f_20141;
}

int func_563(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	if (func_742())
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

bool func_564(int iParam0, int iParam1, int iParam2)
{
	return func_99((*Global_1184801)[iParam2 /*10*/][iParam0], iParam1);
}

var func_565(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_743() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_744());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_744());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_744());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_745(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_467(iVar2))
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
				if (iVar9 & 8192 != 0 && func_746(iVar2) != 1)
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
					if (!func_747(iVar10))
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

int func_566(var uParam0, struct<21> Param1)
{
	if (!func_748(uParam0))
	{
		return 0;
	}
	*(uParam0->f_2[*uParam0 /*21*/]) = { Param1 };
	*uParam0++;
	return 1;
}

int func_567(int iParam0)
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

int func_568(int iParam0, int iParam1)
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

char* func_569(int iParam0)
{
	int iVar0;

	if (!func_90(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_354(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_570(int iParam0)
{
	if (func_162(iParam0) == -126813555 || func_162(iParam0) == 1946043663)
	{
		return 1;
	}
	return 0;
}

char* func_571(int iParam0)
{
	int iVar0;

	if (!func_90(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_356(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

void func_572(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_573()
{
	return (func_649(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_559(func_270(joaat("WARDROBE"), func_368(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_574(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_73(0);
	*uParam1 = { func_270(iParam0, func_365(0), iParam3, 0) };
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

int func_575(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

int func_576(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_73(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_577(int iParam0)
{
	return PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
}

int func_578(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_94(iParam1, bParam2, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = (iVar0 + func_749(INVENTORY::_0x13D234A2A3F66E63(iParam0), iParam1));
	}
	if (bParam3)
	{
		iVar0 = (iVar0 + func_750(iParam1, bParam4));
	}
	return iVar0;
}

void func_579()
{
	if (!func_90(Global_1939231->f_10478, 0))
	{
		Global_1939231->f_6 = 0;
	}
	else if ((((func_283(Global_1939231->f_10478, 1224357681) != 0 && Global_1939231->f_10477 != 0) && Global_1939231->f_10477 != -2074770370) && !Global_1915180->f_20136) && !Global_1915180->f_21989.f_1)
	{
		Global_1939231->f_6 = 1;
	}
	else
	{
		Global_1939231->f_6 = 0;
	}
}

void func_580(var uParam0)
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

bool func_581(char* sParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

int func_582(var uParam0, var uParam1)
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
		func_580(uParam0);
		return 0;
	}
	return 1;
}

int func_583(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_188(iParam0, 1, 0) };
	return func_318(Var0.f_4);
}

void func_584(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	iVar1 = func_583(iParam0);
	iVar2 = func_249(iVar1, 1);
	if (iVar2 == 39)
	{
		return;
	}
	if (func_751(iParam0) && func_314(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar1 == 1108822547 && func_311(32768)) || &Global_1951141->f_1657.f_1[iVar2 /*3*/] != &Global_1951141->f_81[iVar2 /*12*/]) && iParam0 != &Global_1951141->f_1657.f_1[iVar2 /*3*/])
	{
		if (func_751(&(Global_1951141->f_1657.f_1[iVar2 /*3*/])) && func_314(&(Global_1951141->f_1657.f_1[iVar2 /*3*/])))
		{
			iParam1 |= 32;
		}
		if ((Global_1951141->f_81[iVar2 /*12*/])->f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar3 = 0;
		switch (func_162(iParam0))
		{
			case 81053684:
				if (func_132(-525676072, &uVar0))
				{
					iVar3 = func_249(func_248(-525676072), 1);
					if (iVar3 == 39)
					{
					}
					else
					{
						Global_1951141->f_2548[iVar3 /*2*/] = &Global_1951141->f_81[iVar3 /*12*/];
						Jump @465; //curOff = 294
						if (func_311(32768))
						{
							func_552(func_550(iVar2, 1));
						}
						if (func_132(81053684, &uVar4))
						{
							iVar3 = func_249(func_248(81053684), 1);
							if (iVar3 == 39)
							{
							}
							else
							{
								Global_1951141->f_2548[iVar3 /*2*/] = &Global_1951141->f_81[iVar3 /*12*/];
								Jump @465; //curOff = 380
								if (!func_150(iParam0, -1348134986))
								{
								}
								else
								{
									if (func_132(-525676072, &uVar0))
									{
										iVar3 = func_249(func_248(-525676072), 1);
										if (iVar3 == 39)
										{
										}
										else
										{
											Global_1951141->f_2548[iVar3 /*2*/] = &Global_1951141->f_81[iVar3 /*12*/];
										}
										Global_1951141->f_2548[iVar2 /*2*/] = iParam0;
										func_752(iVar1, iParam1, 6);
									}
								}
							}
						}
					}
				}
		}
	}

int func_585(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar33;
	int iVar34;
	var uVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;

	if (!func_78(0))
	{
		return 0;
	}
	else if (func_79())
	{
		return 0;
	}
	if (iParam4 != 0)
	{
		bParam3 = false;
	}
	if (!func_753(iParam0, 1, iParam1, &iVar31, &uVar35, bParam3, iParam4))
	{
		iVar33 = iVar31;
		return 0;
	}
	if (func_451(iParam0, iParam1, &Var0, &iVar34, 1, 0))
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			iVar33 = &Var0[iVar36 /*2*/];
			if (func_90(iVar33, 0))
			{
				if (iVar33 == joaat("CURRENCY_CASH"))
				{
					func_754((Var0[iVar36 /*2*/])->f_1, 0, 0, bParam2, 0);
				}
				else if (bParam3)
				{
					if (func_241(iVar33) || func_452(iVar33))
					{
						if (!func_23(iVar33, (Var0[iVar36 /*2*/])->f_1))
						{
							iVar37 = func_755(7, iVar33, (Var0[iVar36 /*2*/])->f_1);
						}
						func_147(iVar33, iVar37, 562618531, 0, 0);
						(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - iVar37);
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							if (!func_23(iVar33, (Var0[iVar36 /*2*/])->f_1))
							{
								func_756(iVar33, (Var0[iVar36 /*2*/])->f_1);
							}
							if (func_23(iVar33, (Var0[iVar36 /*2*/])->f_1))
							{
								func_76(iVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, -142743235);
							}
						}
					}
					else
					{
						if (func_456(iVar33) > 0)
						{
							func_757(iVar33);
							(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - 1);
						}
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							if (func_455(7, iVar33) > 0)
							{
								func_758(7, iVar33, (Var0[iVar36 /*2*/])->f_1);
								(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - func_758(7, iVar33, (Var0[iVar36 /*2*/])->f_1));
							}
						}
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							func_76(iVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, 562618531);
						}
					}
				}
				else if (iParam4 == 0)
				{
					if (func_241(iVar33) || func_452(iVar33))
					{
						if (!func_23(iVar33, (Var0[iVar36 /*2*/])->f_1))
						{
							func_756(iVar33, (Var0[iVar36 /*2*/])->f_1);
						}
					}
					func_76(iVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, 562618531);
				}
				else
				{
					func_759(iVar33, iParam4, (Var0[iVar36 /*2*/])->f_1, 562618531);
				}
				iVar38 = func_521(iVar33);
				if (func_712(iVar38))
				{
					iVar39 = func_760(iVar38);
					func_192(func_430(joaat("USED_IN_RECIPE"), iVar39), (Var0[iVar36 /*2*/])->f_1);
				}
			}
			iVar36++;
		}
		return 1;
	}
	return 0;
}

int func_586(int iParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

int func_587(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_188(iParam0, 0, 0) };
	return func_460(iParam0, &Var0, 0, bParam1);
}

int func_588(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

float func_589(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	switch (iParam0)
	{
		case 0:
			fVar0 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_34));
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_34, false));
			break;
		case 1:
			fVar0 = PED::_GET_PED_STAMINA(Global_34);
			fVar1 = PED::_GET_PED_MAX_STAMINA(Global_34);
			break;
		case 2:
			fVar0 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar1 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
	}
	fVar3 = (fParam1 + fVar0);
	if (fVar3 > fVar1)
	{
		fVar2 = (fVar1 - fVar0);
	}
	else
	{
		fVar2 = (fVar3 - fVar0);
	}
	return (fVar2 / 2f);
}

void func_590(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(PED::_0x16F2C8C084AB2092(iVar0));
	}
	iVar1 = func_761(2);
	func_762((fParam0 * IntToFloat(iVar1)), 0);
}

void func_591(float fParam0, bool bParam1)
{
	int iVar0;

	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(10);
	}
	iVar0 = func_763(2);
	func_764((fParam0 * IntToFloat(iVar0)), 0, bParam1);
}

void func_592(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(PED::_0xFC3B580C4380B5B7(iVar0));
	}
	iVar1 = func_765(2);
	func_766((fParam0 * IntToFloat(iVar1)), 0);
}

float func_593(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_594(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_767(iParam0, fParam1, 1);
	}
	func_769(iParam0, (func_768(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_595(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_770(13, 2);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_771())
	{
		iVar1 = func_772(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_772(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1954472->f_1331.f_107 = func_773();
			func_774(&(Global_1954472->f_1331.f_107), 0, 0, 1, 0, 0, 0, 0);
		}
		func_775(13, func_405(fVar0, 0f, 100f), 2);
	}
	if (bParam1)
	{
		Global_17172.f_54.f_2438.f_41++;
		if (5 == Global_17172.f_54.f_2438.f_41)
		{
			func_137(109, 0);
		}
	}
}

float func_596(float fParam0, int iParam1)
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

int func_597(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_776(iParam0, fParam1, bParam2, bParam3);
}

void func_598(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (bParam2 || func_150(iParam0, -537818634))
	{
		func_192(func_363(joaat("MEDICINE_ITEMS_USED")), 1);
	}
	if (func_150(iParam0, -1457797660))
	{
		func_192(func_363(joaat("PROVISION_ITEMS_USED")), 1);
	}
	if (func_150(iParam0, 1573112293))
	{
		func_777(func_521(iParam0), 1);
	}
	if (func_150(iParam0, 1939071949))
	{
		func_192(func_430(joaat("USED"), joaat("TONIC")), 1);
	}
	if (func_150(iParam0, 1992556171))
	{
		func_192(func_363(joaat("CAMP_STEWS_CONSUMED")), 1);
	}
	if (func_150(iParam0, 1239889275))
	{
		func_192(func_363(joaat("ANTIQUE_BOTTLES_DRUNK")), 1);
	}
	switch (iParam0)
	{
		case joaat("CONSUMABLE_OAT_CAKES"):
		case joaat("CONSUMABLE_SUGARCUBE"):
		case joaat("CONSUMABLE_HAYCUBE"):
			func_192(func_430(joaat("USED"), joaat("FEED_BAG")), 1);
			break;
	}
	switch (iParam0)
	{
		case joaat("CONSUMABLE_MOONSHINE"):
			func_192(func_430(joaat("USED"), joaat("MOONSHINE")), 1);
			break;
		case joaat("CONSUMABLE_WHISKEY_USED"):
		case joaat("CONSUMABLE_WHISKEY"):
			func_192(func_430(joaat("USED"), joaat("WHISKEY")), 1);
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			func_192(func_430(joaat("USED"), joaat("COCAINE_GUM")), 1);
			break;
		case joaat("CONSUMABLE_SNAKE_OIL"):
		case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
		case joaat("CONSUMABLE_SNAKE_OIL_USED"):
			func_192(func_430(joaat("USED"), joaat("SNAKE_OIL")), 1);
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO"):
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			func_192(func_430(joaat("USED"), joaat("CHEWING_TOBACCO")), 1);
			break;
		case joaat("CONSUMABLE_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_SPECIAL_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_HORSE_MEDICINE_USED"):
		case joaat("CONSUMABLE_POTENT_HORSE_MEDICINE"):
			func_192(func_430(joaat("USED"), joaat("HORSE_PILLS")), 1);
			break;
		case joaat("CONSUMABLE_HERBIVORE_BAIT"):
		case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
			func_192(func_430(joaat("USED"), joaat("POTENT_HERBIVORE_BAIT")), 1);
			break;
		case joaat("CONSUMABLE_PREDATOR_BAIT"):
		case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
			func_192(func_430(joaat("USED"), joaat("POTENT_PREDATOR_BAIT")), 1);
			break;
	}
	if (func_108() == -1)
	{
		if (iParam0 == joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"))
		{
			func_192(func_430(joaat("USED"), joaat("SPECIAL_TONIC")), 1);
		}
	}
	if (bParam1)
	{
		func_192(func_363(joaat("DEADEYE_ITEMS_USED")), 1);
	}
	func_778(iParam0, iParam3);
}

int func_599(int iParam0)
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

bool func_600()
{
	return Global_1896726->f_382;
}

bool func_601(var uParam0)
{
	return uParam0->f_19;
}

void func_602(var uParam0)
{
	uParam0->f_19 = 0;
}

void func_603(var uParam0)
{
	func_106(1);
	func_44(uParam0, 4);
}

int func_604(var uParam0)
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
		uParam0->f_26 = func_779(iVar0);
		uParam0->f_27 = func_780(iVar0);
		func_781(uParam0, uParam0->f_26, 1472825031);
		func_781(uParam0, -1171462349 /* GXTEntry: "Superior Quality Stew" */, 1472825031);
		func_781(uParam0, 1689071181 /* GXTEntry: "High Quality Stew" */, 1472825031);
		func_781(uParam0, -1612693182 /* GXTEntry: "Medium Quality Stew" */, 1472825031);
		func_781(uParam0, 1856073229 /* GXTEntry: "Low Quality Stew" */, 1472825031);
		return 1;
	}
	if (uParam0->f_50 == 0)
	{
		Global_1913166->f_1576 = 0;
		uParam0->f_51 = 0;
		func_782(uParam0, 600942249);
		uParam0->f_50++;
		return 0;
	}
	else if (uParam0->f_50 == 1)
	{
		func_782(uParam0, -257768755);
		uParam0->f_50++;
		return 0;
	}
	else
	{
		func_782(uParam0, -214678071);
		uParam0->f_50 = 0;
	}
	uParam0->f_51 = 0;
	return 1;
}

int func_605(var uParam0)
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
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_35, "filter", func_784(uParam0->f_25, joaat("RECIPES"), func_783(uParam0->f_48)));
	if (uParam0->f_25)
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterCount", 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterIndex", 0);
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
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "variantCount", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "variantIndex", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_35, "RPGDescription", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "ingredient", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		func_785(uParam0->f_37[iVar0], &cVar1, uParam0);
		StringCopy(&cVar1, "tip", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_42[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_35, &cVar1);
		StringCopy(&cVar1, "Text", 16);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_42[iVar0]), &cVar1, "");
		StringCopy(&cVar1, "Enabled", 16);
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_42[iVar0]), &cVar1, 0);
		iVar0++;
	}
	return 1;
}

int func_606(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_394();
	iVar0 = uParam0->f_51;
	while (iVar0 <= (Global_1913166->f_1576 - 1))
	{
		if (func_90(((*Global_1913166)[iVar0 /*9*/])->f_6, 0))
		{
			func_786(uParam0, 0, iVar0, bVar2, 1, 0);
			if (iVar1 >= 10)
			{
				uParam0->f_51 = iVar0 + 1;
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_51 = 0;
	if (uParam0->f_56 == 0)
	{
		uParam0->f_53 = 0;
	}
	uParam0->f_52 = 0;
	return 1;
}

void func_607(var uParam0)
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

int func_608(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = func_394();
	iVar0 = uParam0->f_51;
	while (iVar0 <= (Global_1913166->f_1576 - 1))
	{
		if ((uParam0->f_53 && ((*Global_1913166)[iVar0 /*9*/])->f_2) || !uParam0->f_53)
		{
			if (Global_1913166->f_1585 != 0)
			{
				bVar3 = func_150(((*Global_1913166)[iVar0 /*9*/])->f_6, Global_1913166->f_1585);
				if (uParam0->f_77 == bVar3)
				{
				}
				else
				{
					func_786(uParam0, 1, iVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_51 = iVar0 + 1;
						return 0;
					}
					iVar1++;
				}
				iVar0++;
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

int func_609(var uParam0, bool bParam1)
{
	int iVar0;

	uParam0->f_54 = 1;
	if (bParam1 && UIAPPS::_IS_APP_ACTIVE(joaat("CRAFTING")))
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("CRAFTING"), joaat("RESTORE_MENU")))
		{
			func_46(8);
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
			func_46(8);
			return 1;
		}
	}
	return 0;
}

int func_610(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_394();
	iVar0 = uParam0->f_51;
	while (iVar0 <= (Global_1913166->f_1576 - 1))
	{
		func_787(uParam0, iVar0, bVar2, 0, 1, 0, 1);
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

void func_611(bool bParam0)
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
	iVar0 = func_788(Global_34);
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

void func_612(var uParam0)
{
	int iVar0;

	func_103(uParam0);
	func_789(uParam0, 1);
	(*uParam0)[2] = func_255("CAMP_REC_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (func_63(32))
	{
		func_130(uParam0[2], 0, 1, 1);
	}
	else
	{
		func_130(uParam0[2], 1, 1, 1);
	}
	(*uParam0)[1] = func_255("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (!uParam0->f_25)
	{
		if (func_90(uParam0->f_71, 0))
		{
			uParam0->f_73 = uParam0->f_71;
			uParam0->f_74 = uParam0->f_72;
			func_790(uParam0, &(uParam0->f_70));
		}
		else
		{
			uParam0->f_73 = 0;
		}
		if (func_90(uParam0->f_71, 0))
		{
			if (func_234(uParam0->f_71))
			{
				func_129(uParam0[1], "CAMP_REC_COOK", 1);
			}
			else if (func_283(uParam0->f_71, -1636519629) == -701492487)
			{
				func_129(uParam0[1], "CAMP_REC_BREW", 1);
			}
			else
			{
				func_129(uParam0[1], "CAMP_REC_MAKE", 1);
			}
		}
		(*uParam0)[3] = func_255(func_791(uParam0), joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		(*uParam0)[7] = func_255("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	(*uParam0)[5] = func_792("RECIPE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
	func_793(uParam0[5], joaat("INPUT_GAME_MENU_LEFT"));
	func_793(uParam0[5], joaat("INPUT_GAME_MENU_RIGHT"));
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_69))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iNumCostVariants");
	}
	if (iVar0 > 1 && func_90(uParam0->f_73, 0))
	{
		func_130(uParam0[5], 1, 1, 1);
	}
	else
	{
		func_130(uParam0[5], 0, 1, 1);
	}
	(*uParam0)[6] = func_255("INFO", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 2, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (!uParam0->f_78)
	{
		func_129(uParam0[6], "INFO", 1);
	}
	else
	{
		func_129(uParam0[6], "INGREDIENTS", 1);
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_36) == 0)
	{
		func_614(uParam0);
		func_130(uParam0[6], 0, 1, 1);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_NO_REC_TIP"));
	}
	func_615(uParam0, uParam0->f_73, uParam0->f_74);
}

int func_613(var uParam0)
{
	int iVar0;

	if (!uParam0->f_25)
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (uParam0->f_27 != func_780(iVar0))
	{
		uParam0->f_27 = func_780(iVar0);
		func_44(uParam0, 15);
		return 1;
	}
	if (uParam0->f_26 != func_779(iVar0))
	{
		func_44(uParam0, 4);
		return 1;
	}
	return 0;
}

void func_614(var uParam0)
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

void func_615(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (!func_90(iParam1, 0))
	{
		if (func_100(uParam0[1]))
		{
			func_130(uParam0[1], 0, 1, 1);
		}
		return;
	}
	bVar2 = func_394();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1913166->f_1579 && func_794(iParam1, iParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!func_795(iParam1, iParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0) || func_390(uParam0->f_22))
	{
		bVar3 = false;
	}
	else if (uParam0->f_25 && !func_796(iParam1))
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		if ((iParam1 != joaat("CONSUMABLE_COFFEE") && func_403(iParam1, 1, 0)) || (!uParam0->f_28 && ((uParam0->f_76 || iParam2 == -214678071) || iParam2 == joaat("COST_CRAFTING_GRILL"))))
		{
			bVar3 = false;
		}
		else if (!func_396(2) && func_283(iParam1, -1636519629) == -701492487)
		{
			bVar3 = false;
		}
		else if (uParam0->f_33 == -1)
		{
			iVar6 = func_94(iParam1, 0, 0, 0);
			iVar7 = func_587(iParam1, 0);
			iVar8 = func_218(iParam1, iParam2, bVar2);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 = (iVar7 - iVar6);
			}
			uParam0->f_33 = func_588(iVar7, iVar8);
		}
	}
	if (func_100(uParam0[1]))
	{
		if (uParam0->f_25)
		{
			func_129(uParam0[1], "DONATE_ING", 1);
		}
		else if (func_234(iParam1))
		{
			func_129(uParam0[1], "CAMP_REC_COOK", 1);
		}
		else if (func_283(iParam1, -1636519629) == -701492487)
		{
			func_129(uParam0[1], "CAMP_REC_BREW", 1);
		}
		else
		{
			func_129(uParam0[1], "CAMP_REC_MAKE", 1);
		}
		func_130(uParam0[1], bVar3, 1, 1);
	}
	func_797(iParam1, iParam2, uParam0, iVar5, bVar4);
	if (func_100(uParam0[6]))
	{
		func_130(uParam0[6], !bVar4, 1, 1);
	}
	func_798(uParam0);
}

bool func_616(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_100(iParam0))
	{
		return false;
	}
	iVar0 = func_229(iParam0);
	return HUD::_UIPROMPT_IS_JUST_RELEASED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_617(char* sParam0, char* sParam1, int iParam2)
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

void func_618(var uParam0)
{
	int iVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	int iVar34;
	char* sVar35;
	int iVar36;
	bool bVar37;
	struct<2> Var38;
	char* sVar41;

	if (func_90(uParam0->f_73, 0))
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(8, uParam0->f_73))
		{
			return;
		}
		UILOG::_UILOG_ADD_ENTRY_HASH(8, uParam0->f_73, Global_35, uParam0->f_73, -2136842124, 0);
		func_451(uParam0->f_73, uParam0->f_74, &Var1, &iVar0, 1, 0);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, uParam0->f_73, 0, "CAMP_RECIPE_LOG_ALL_OBJ", false, true, false);
		iVar33 = 0;
		while (iVar33 < iVar0)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				iVar34 = &Var1[iVar33 /*2*/];
				if (func_90(iVar34, 0))
				{
					iVar36 = func_94(iVar34, 0, 0, 0);
					sVar35 = MISC::_CREATE_VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", iVar36, (Var1[iVar33 /*2*/])->f_1, MISC::_CREATE_VAR_STRING(0, iVar34));
					bVar37 = func_23(iVar34, (Var1[iVar33 /*2*/])->f_1);
					if (bVar37)
					{
						iVar32++;
					}
					UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, uParam0->f_73, iVar34, sVar35, bVar37, true, true);
				}
				iVar33++;
			}
		}
		if (func_799(uParam0->f_73, &Var38, joaat("INVENTORY"), 0, 0, 0))
		{
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(8, uParam0->f_73, Var38, Var38.f_1);
			UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(8, uParam0->f_73, Var38, Var38.f_1);
		}
		Global_1131092->f_339.f_16 = uParam0->f_73;
		Global_1131092->f_339.f_17 = uParam0->f_74;
		sVar41 = MISC::_CREATE_VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar32, iVar0);
		UILOG::_0x763637F9B838B0A7(8, uParam0->f_73, sVar41);
	}
	func_798(uParam0);
}

void func_619(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_136(uParam0[1], 0))
	{
		return;
	}
	if (uParam0->f_25)
	{
		if (func_90(uParam0->f_73, 0))
		{
			func_632(1);
			func_29(&(uParam0->f_86));
			func_44(uParam0, 16);
		}
		return;
	}
	func_104(uParam0, 1);
	func_120((*uParam0)[1], 1, 1);
	func_120((*uParam0)[5], 1, 1);
	func_120((*uParam0)[6], 1, 1);
	func_120((*uParam0)[3], 1, 1);
	func_120((*uParam0)[7], 1, 1);
	uParam0->f_32 = 1;
	if (!uParam0->f_76 && !func_234(uParam0->f_73))
	{
		func_46(131072);
		iVar0 = func_283(uParam0->f_73, -1636519629);
		iVar1 = func_628(uParam0, iVar0);
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
				else if (func_150(uParam0->f_73, -1588156645))
				{
					uParam0->f_85 = func_586(func_193(uParam0->f_73, 0));
				}
				else if (func_150(uParam0->f_73, 457423347))
				{
					uParam0->f_85 = joaat("S_CFT_ARROW_DYNAMITE");
				}
				else if (func_150(uParam0->f_73, -1846429632))
				{
					uParam0->f_85 = joaat("S_CFT_ARROW_FIRE");
				}
				else if (func_150(uParam0->f_73, -1067199465))
				{
					uParam0->f_85 = joaat("S_CFT_ARROW_SMALLGAME");
				}
				else
				{
					uParam0->f_85 = func_586(uParam0->f_73);
				}
			}
			if (uParam0->f_85 != 0)
			{
				STREAMING::REQUEST_MODEL(uParam0->f_85, false);
			}
		}
		func_129(uParam0[2], "CAMP_REC_BACK", 1);
		func_126(uParam0[2], -1067771379, 0, 1);
		func_130(uParam0[2], 0, 1, 1);
		func_256(uParam0[2], 0, 1);
		(*uParam0)[4] = func_255("CAMP_REC_BACK", joaat("INPUT_GAME_MENU_CANCEL"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
		func_258((*uParam0)[4], "INPUT_PCRAFT_EXIT");
		func_126(uParam0[4], -1067771379, 0, 1);
		func_130(uParam0[4], 0, 1, 1);
		func_257(uParam0[4], 19, 1, 1);
		func_257(uParam0[4], 20, 1, 1);
		func_257(uParam0[4], 13, 1, 1);
		func_257(uParam0[2], 13, 1, 1);
		if (func_100(uParam0[2]))
		{
			func_126(uParam0[2], -1067771379, 0, 1);
		}
		uParam0->f_34 = 0;
		func_44(uParam0, 12);
	}
	else
	{
		func_44(uParam0, 11);
	}
}

bool func_620(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_100(iParam0))
	{
		return false;
	}
	iVar0 = func_229(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1);
}

void func_621(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<37> Var19;
	int iVar66;
	int iVar67;
	int iVar68;

	ATTRIBUTE::_0xD962F8579D702DB5();
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_69))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iCurCostVariant");
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_74 == -214678071 || uParam0->f_74 == joaat("COST_CRAFTING_GRILL"))
		{
			if (bParam1)
			{
				iVar0++;
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
			if (iVar0 < 0)
			{
				iVar0 = (iVar1 - 1);
			}
			else if (iVar0 >= iVar1)
			{
				iVar0 = 0;
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
			if (iVar0 == 0)
			{
				Var5 = { func_669(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, func_283(uParam0->f_73, 1697966752), 0) };
				if (func_671(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_74 = -214678071;
						uParam0->f_73 = func_672(0, iVar3);
						bVar2 = true;
					}
					func_677(iVar3);
				}
			}
			else
			{
				Var5 = { func_669(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, func_283(uParam0->f_73, 1697966752), 0) };
				if (func_671(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						if (iVar0 == 1)
						{
							iVar15 = 2127114599;
						}
						else if (iVar0 == 2)
						{
							iVar15 = -1864584831;
						}
						else if (iVar0 == 3)
						{
							iVar15 = 1967571132;
						}
						iVar16 = 0;
						while (iVar16 < iVar4)
						{
							iVar17 = func_672(iVar16, iVar3);
							if (func_150(iVar17, iVar15))
							{
								uParam0->f_74 = joaat("COST_CRAFTING_GRILL");
								uParam0->f_73 = iVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					func_677(iVar3);
				}
			}
		}
		else
		{
			iVar18 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_73);
			Var19.f_4 = 15;
			Var19.f_36 = 10;
			while ((((Var19.f_2 != joaat("COST_TYPE_CRAFT") || Var19 == -489628648) || Var19 == -2141192156) || (!Global_1913166->f_1579 && func_794(uParam0->f_73, Var19, 1))) && iVar66 < iVar18)
			{
				iVar66++;
				if (bParam1)
				{
					iVar0++;
				}
				else
				{
					iVar0 = (iVar0 - 1);
				}
				if (iVar0 < 0)
				{
					iVar0 = (iVar18 - 1);
				}
				else if (iVar0 >= iVar18)
				{
					iVar0 = 0;
				}
				if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(uParam0->f_73, iVar0, &Var19))
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
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_69, "iCurCostVariant", iVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_35, "variantIndex", (iVar0 + 1 - iVar68));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_73));
		uParam0->f_33 = -1;
		uParam0->f_21 = 0;
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription"))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_73, 1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "RPGDescription", func_800(uParam0->f_73));
		func_787(uParam0, -1, func_394(), uParam0->f_69, 0, bVar2, 0);
		func_615(uParam0, uParam0->f_73, uParam0->f_74);
	}
}

void func_622(var uParam0, bool bParam1)
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
		if (func_100(uParam0[6]))
		{
			func_129(uParam0[6], "INFO", 1);
		}
		ATTRIBUTE::_0xD962F8579D702DB5();
		func_801(uParam0);
	}
	else
	{
		if (func_100(uParam0[6]))
		{
			func_129(uParam0[6], "INGREDIENTS", 1);
		}
		func_802(uParam0);
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
				iVar0 = func_218(uParam0->f_73, uParam0->f_74, func_394());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar0));
			}
		}
	}
}

void func_623(var uParam0)
{
	if (uParam0->f_25)
	{
		return;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	func_803(uParam0);
	func_614(uParam0);
	func_801(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowIngredients", false);
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	func_615(uParam0, 0, 0);
	func_44(uParam0, 9);
}

void func_624(var uParam0, int iParam1)
{
	func_614(uParam0);
	func_801(uParam0);
	func_790(uParam0, &(iParam1->f_3));
}

void func_625(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_283(uParam0->f_73, -1636519629);
	if (iVar0 == 414472632)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_79))
		{
			iVar1 = func_804(uParam0->f_73);
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
			iVar2 = func_804(uParam0->f_73);
			if (iVar2 != 0)
			{
				uParam0->f_79 = OBJECT::CREATE_OBJECT(iVar2, Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_79, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_79, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_79, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), func_805(uParam0->f_73), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
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
		uParam0->f_49 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_806(uParam0->f_73), func_807(uParam0->f_73)) * 1000f));
		func_29(&(uParam0->f_86));
		TASK::TASK_PLAY_ANIM(Global_34, func_806(uParam0->f_73), func_807(uParam0->f_73), 8f, -8f, -1, 67108880, 0f, false, 4096, false, "Satchel_Only_filter", false);
	}
}

void func_626(var uParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_100(uParam0[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (func_100(uParam2[iVar1]))
				{
					if (uParam0[iVar0] == uParam2[iVar1])
					{
					}
				}
				iVar1++;
			}
			func_130(uParam0[iVar0], bParam1, 1, 1);
		}
		iVar0++;
	}
}

int func_627(int iParam0)
{
	if ((((((((iParam0 == -715814988 || iParam0 == -1136843638) || iParam0 == -732326901) || iParam0 == 786205940) || iParam0 == -1141771998) || iParam0 == 364689687) || iParam0 == 414472632) || iParam0 == -842117252) || iParam0 == -1610298873)
	{
		return 1;
	}
	return 0;
}

int func_628(var uParam0, int iParam1)
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

bool func_629(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	var uVar0;
	var uVar1;
	var uVar2;

	return func_795(iParam0, iParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, iParam4);
}

void func_630(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	uParam0->f_51 = 0;
	func_46(262144);
	func_98(&(uParam0->f_81), &(uParam0->f_82));
	func_98(&(uParam0->f_79), &(uParam0->f_80));
	iVar0 = func_628(uParam0, iParam1);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "bStopLoop", true, false);
	if (!func_63(128))
	{
		func_130(uParam0[2], 1, 1, 1);
		func_130(uParam0[4], 1, 1, 1);
	}
	func_256(uParam0[2], 0, 1);
	func_256(uParam0[4], 1, 1);
	func_402(uParam0[1], 1);
	func_120((*uParam0)[1], 1, 1);
	(*uParam0)[1] = func_255("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_49, uParam0->f_49 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	func_257(uParam0[1], 11, 1, 1);
	func_257(uParam0[1], 19, 1, 1);
	func_126(uParam0[1], -1067771379, 0, 1);
	func_130(uParam0[1], bParam2, 1, 1);
	func_44(uParam0, 13);
}

int func_631()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_2;
	}
	return 255;
}

void func_632(bool bParam0)
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
	func_809(iVar14, Var0, func_808(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))));
}

void func_633(var uParam0)
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		func_810(iVar0, 1);
		func_811(iVar0, uParam0);
		func_813(func_812(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())), uParam0);
	}
	else
	{
		func_632(0);
		func_814(uParam0);
	}
}

void func_634(var uParam0)
{
	var uVar0;
	vector3 vVar4;

	if (TELEMETRY::_0xF184B3ECE36219CF(uParam0->f_22, &uVar0))
	{
		vVar4 = { func_815(&Global_1275573) };
		TELEMETRY::_0xDF516E598D966D06(&uVar0, 0, vVar4.z, 0, 1, 1084182731, joaat("STEW_POT"), uParam0->f_73, func_150(uParam0->f_73, -2011345500));
	}
}

void func_635(int iParam0)
{
	if (Global_1939067->f_102.f_2 >= iParam0)
	{
		return;
	}
	Global_1939067->f_102.f_2 = iParam0;
}

int func_636(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("HUD_CTX_ITEM_CONSUMPTION_HEALTH_CORE");
		case 2:
			return joaat("HUD_CTX_ITEM_CONSUMPTION_DEADEYE_CORE");
		case 1:
			return joaat("HUD_CTX_ITEM_CONSUMPTION_STAMINA_CORE");
		default:
			break;
	}
	return joaat("HUD_CTX_ITEM_CONSUMPTION_HEALTH_CORE");
}

int func_637(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("HUD_CTX_ITEM_CONSUMPTION_HEALTH");
		case 2:
			return joaat("HUD_CTX_ITEM_CONSUMPTION_DEADEYE");
		case 1:
			return joaat("HUD_CTX_ITEM_CONSUMPTION_STAMINA");
		default:
			break;
	}
	return joaat("HUD_CTX_ITEM_CONSUMPTION_HEALTH");
}

int func_638(int iParam0)
{
	int iVar0;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_162(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_639(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_816(&uParam0, iParam4, iParam5, bParam6, iParam7);
}

int func_640(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
	}
	if (func_150(iParam0, 162787671))
	{
		return 1;
	}
	return 0;
}

int func_641(int iParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_817(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_412() };
	*iParam1 = func_559(Var0, iParam0, 0, -1);
	if (!func_90(*iParam1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_642(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
	}
	return ((iParam0 == 1362183957 || iParam0 == 563996796) || iParam0 == joaat("HORSE_EQUIPMENT_MOONSHINERSADDLE_001_IMPROVED_NEW_SADDLE_000"));
}

bool func_643(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
	}
	return iParam0 == 2031387366;
}

int func_644(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return 1;
	}
	return 0;
}

int func_645(int iParam0, var uParam1, bool bParam2)
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
	Var2 = { func_364(0, iParam0, -1591664384, -1591664384, 0, 0, 0) };
	func_366(&Var2, func_412());
	if (func_367(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_203(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_90(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_644(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_205(iVar0);
						return 1;
					}
				}
			}
			iVar30++;
		}
		func_205(iVar0);
	}
	return 0;
}

int func_646(int iParam0)
{
	var uVar0;

	if (func_108() != -1)
	{
		return 0;
	}
	if (func_351(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_219(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_23(iParam0, 1);
}

void func_647(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_91(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_194(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_410(iVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iVar0, 0, false) && func_94(iParam0, 0, 0, 0) == 0))
		{
			if (func_108() == -1)
			{
				func_195(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_185(iParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_648(int iParam0, int iParam1)
{
	if (func_150(iParam0, 58855631))
	{
		func_818(iParam0, -915411861, iParam1, 1);
	}
}

int func_649(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_428(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_73(bParam1), iParam0, iParam3);
}

int func_650()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_34)) && !func_819(Global_34, 1369124074)) && !func_819(Global_34, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_34)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return 1;
	}
	return 0;
}

int func_651(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_652(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_39.f_3434[iVar1]), iVar2);
}

void func_653(int iParam0)
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

void func_654(int iParam0)
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
			func_820(1);
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
			func_821(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_821(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_821(3);
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
			func_822(1);
			break;
		case 33:
			func_823(1);
			break;
		case 34:
			func_824(1);
			break;
		case 35:
			break;
		case 36:
			func_825(0);
			break;
		case 37:
			func_826(0);
			break;
		case 38:
			func_827(0);
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
			if (func_828() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_829("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_137(675, 0);
			break;
		case 3:
			if (func_828() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_829("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_137(676, 0);
			break;
		case 4:
			if (func_828() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_829("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_137(677, 0);
			break;
		case 5:
			if (func_828() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_829("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_137(678, 0);
			break;
		case 23:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			if (func_108() == -1)
			{
				if (!func_23(1013902307, 1))
				{
					func_426(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_108() == -1)
			{
				if (!func_23(1013902307, 1))
				{
					func_426(1013902307, 1, 752097756);
				}
				if (!func_23(142640135, 1))
				{
					func_426(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_108() == -1)
			{
				if (!func_23(786809402, 1))
				{
					func_426(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_108() == -1)
			{
				if (!func_23(786809402, 1))
				{
					func_426(786809402, 1, 752097756);
				}
				if (!func_23(-518019409, 1))
				{
					func_426(-518019409, 1, 752097756);
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

void func_655(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar2 = func_588(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

int func_656(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_210(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_188(iParam0, 0, 0) };
	if (func_219(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_78(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_73(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_657(int iParam0)
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
	iVar2 = func_773();
	func_774(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_34, sVar1, iVar2);
}

int func_658(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_250(iParam0))
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

int func_659()
{
	return 0;
}

bool func_660(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_661(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_662(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_421(49))
			{
				if (!func_421(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_421(50))
			{
				if (!func_421(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

int func_663(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (func_108() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_23(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1))
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
			if (func_90(iVar25, 0) && func_150(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_664(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_830(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_362(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_665(int iParam0, bool bParam1, float fParam2, int iParam3)
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
		if (func_831() || func_832())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_362(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_362(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_192(func_363(joaat("CAREER_CASH")), iVar1);
	}
}

char* func_666(int iParam0)
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

int func_667(int iParam0)
{
	var uVar0;

	if (!func_799(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

int func_668(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam0 != 0)
	{
		iVar3 = func_162(iParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_833(iParam0);
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

struct<10> func_669(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

void func_670(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_671(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_672(int iParam0, int iParam1)
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

int func_673(int iParam0)
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

int func_674(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_368(0) };
	Var0.f_4 = func_448(iParam1);
	Var5 = { func_270(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_0xC97E0D2302382211(func_73(0), &Var5, 0);
	return iVar9;
}

int func_675(int iParam0)
{
	if (func_150(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_150(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_150(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_676(int iParam0, int iParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_90(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_677(int iParam0)
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

int func_678(int iParam0)
{
	iParam0 = func_326(iParam0);
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

int func_679(int iParam0)
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
	if (ENTITY::_GET_IS_LOOTED(iParam0))
	{
		return 0;
	}
	if (FIRE::_0xCDC25355C0D65963(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_680(int iParam0)
{
	return func_150(iParam0, 1279601681);
}

bool func_681(int iParam0, int iParam1)
{
	if (!func_90(iParam0, 0))
	{
		return false;
	}
	if (func_682(iParam0))
	{
		return func_834(func_683(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

int func_682(int iParam0)
{
	if (func_150(iParam0, 75135761))
	{
		return 1;
	}
	return 0;
}

int func_683(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_90(iParam0, 0))
	{
		return func_835(func_278(iParam0), bParam1);
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

int func_684(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_836(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

void func_685(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_837(iParam0, iParam1, iParam2, iParam3);
}

int func_686(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_838(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_839())
	{
		return func_838(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_838(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_687(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
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
		func_840(iParam2, -372840566);
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
	func_841(uParam1, iParam0, Var3);
	return 1;
}

bool func_688(int iParam0)
{
	return func_838(&(Global_1954472->f_1465), iParam0, 1);
}

int func_689(int iParam0)
{
	return func_842(func_688(iParam0));
}

void func_690(var uParam0)
{
	func_477(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_545() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_477(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_477(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_691(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_843(uParam0))
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

int func_692(int iParam0)
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

int func_693(int iParam0)
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

int func_694(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return func_749(INVENTORY::_0x13D234A2A3F66E63(iParam0), iParam1);
	}
	return 0;
}

int func_695(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<2> Var0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (func_844(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var0 = { func_186(iParam1) };
		if (STATS::_STAT_ID_IS_VALID(&Var0))
		{
			STATS::_0xBD861AE8A5181ED7(&Var0, *iParam2);
		}
		*iParam2 = func_696(*iParam0, iParam1, *iParam2, 1, iParam5);
		if (*iParam2 > 0)
		{
			if (func_845(iParam1))
			{
				if (!func_846(0, iParam1, *iParam2))
				{
				}
				if (func_847(PLAYER::PLAYER_ID(), 1, 0))
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 32, true);
				}
				else
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 32, false);
				}
				*iParam2 = func_848(*iParam0, iParam1, *iParam2);
			}
		}
		*iParam2 = 0;
		func_189(1, 0, 0);
		return 1;
	}
	return 0;
}

int func_696(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
				iVar0 = func_849(iVar2);
				if (!func_850(iVar0, &uVar101))
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
									func_851(&Var6, Global_1903929->f_131[iVar5 /*95*/]);
								}
								else
								{
									iVar5++;
								}
							}
							if (bParam3)
							{
								func_852(iVar2);
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

void func_697(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (Global_1915180->f_20135)
	{
		if (Global_1915180->f_19742 == 29)
		{
			if (func_244(iParam0))
			{
				iVar1 = 0;
				if (bParam2)
				{
					switch (func_853(iParam0))
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
					STATS::_0x7C2ABF6E556B21FC(func_854(iParam0), iVar1, func_150(iParam0, 1064293907), 0);
					iVar0++;
				}
			}
		}
	}
}

bool func_698(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;

	Var0 = { func_186(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var0))
	{
		STATS::_0xBD861AE8A5181ED7(&Var0, iParam1);
	}
	func_855(iParam0, iParam1);
	return func_856(iParam0, iParam1, bParam2, iParam3);
}

int func_699(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
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

int func_700()
{
	return 31014903;
}

int func_701()
{
	return 31113207;
}

int func_702()
{
	return 28818647;
}

int func_703(int iParam0)
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

bool func_704(int iParam0)
{
	return func_99(Global_1199613->f_1196, iParam0);
}

bool func_705()
{
	return Global_262996[&Global_1275573 /*70*/] > 2;
}

bool func_706(int iParam0, int iParam1)
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

struct<2> func_707()
{
	if (Global_1184439->f_129 <= 0)
	{
		return func_87(0);
	}
	if (Global_1184439->f_130 < 0 || Global_1184439->f_131 == 0)
	{
		return func_87(0);
	}
	return ((*Global_1184439)[Global_1184439->f_130 /*4*/])->f_1;
}

int func_708(int iParam0)
{
	if (func_857(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

bool func_709(struct<2> Param0)
{
	return func_858(Param0, 1, 4);
}

int func_710(int iParam0)
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

void func_711(int iParam0, int iParam1)
{
	if (!func_712(iParam0))
	{
		return;
	}
	if (func_108() != -1)
	{
		Global_17172[iParam0] = (Global_17172[iParam0] || iParam1);
		return;
	}
	Global_39.f_4458[iParam0] = (Global_39.f_4458[iParam0] || iParam1);
}

bool func_712(int iParam0)
{
	return !iParam0 <= 0;
}

int func_713(int iParam0)
{
	if (!func_712(iParam0))
	{
		return 0;
	}
	return func_859(iParam0, 4, 1);
}

void func_714(int iParam0, bool bParam1)
{
	if (!func_712(iParam0))
	{
		return;
	}
	if (func_860(iParam0))
	{
		return;
	}
	func_711(iParam0, 2);
	if (bParam1)
	{
		if (!func_17(0, 0, 1))
		{
			if (func_108() == -1)
			{
				func_717(1, 6);
			}
			else
			{
				func_861(1, 1017438712);
			}
		}
	}
}

int func_715(int iParam0)
{
	if (!func_712(iParam0))
	{
		return 0;
	}
	return func_859(iParam0, 1, 1);
}

void func_716(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_712(iParam0))
	{
		return;
	}
	if (func_715(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_862(iParam0);
	}
	if (!bParam1)
	{
		func_863(iParam0);
	}
	func_711(iParam0, 1);
	func_714(iParam0, 1);
	if (bParam2)
	{
		if (!func_17(0, 0, 1))
		{
			func_717(1, 6);
		}
	}
}

void func_717(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_864(&Global_0, 8);
	}
	if (!func_828() || func_108() != -1)
	{
		return;
	}
	func_864(&Global_0, 1);
}

float func_718(int iParam0, int iParam1)
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

void func_719(int iParam0)
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
	iVar1 = func_761(2);
	func_762(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_720(int iParam0, bool bParam1)
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
	iVar0 = func_763(2);
	func_764(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_721(int iParam0)
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
	iVar1 = func_765(2);
	func_766(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

bool func_722()
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

int func_723(int iParam0)
{
	int iVar0;

	iVar0 = func_249(func_248(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1951141->f_1657.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_724()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1951141->f_3109.f_25)
	{
		iVar1 = &Global_1951141->f_3109[iVar0];
		if (func_162(iVar1) == -999503751)
		{
			if (func_865() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_725(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = func_866(0);
	}
	if (func_162(iParam0) == -999503751 && func_867(iParam0) != -1)
	{
		return 1;
	}
	if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		return func_150(iParam0, -287432114);
	}
	else if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		return func_150(iParam0, -133342564);
	}
	return 0;
}

int func_726(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_188(iParam0, 0, 0) };
	Var5 = { func_270(iParam0, Var0, Var0.f_4, 0) };
	if (func_325(iParam0, Var0, Var0.f_4, 0, 0, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_73(0), &Var5, iParam1);
	return 1;
}

int func_727(int iParam0)
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

bool func_728(var uParam0)
{
	return (Global_1951141->f_3109.f_32.f_6 && uParam0) != 0;
}

void func_729()
{
	Global_1951141->f_1054 = 0;
}

void func_730(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;
	var uVar119;
	int iVar120;
	int iVar121;

	switch (func_162(iParam0))
	{
		case -2061583405:
			func_868(iParam0, &(Global_1951141->f_3109.f_27));
			break;
		case 81053684:
			func_868(iParam0, &(Global_1951141->f_3109.f_29));
			break;
		case -999503751:
			func_868(iParam0, &(Global_1951141->f_3109.f_26));
			if (func_150(iParam0, -166674229))
			{
				Var0.f_1 = 39;
				if (func_869(&Var0, iParam0, &uVar119, 0, 1, 0, 0, 0))
				{
					iVar120 = 0;
					while (iVar120 < 39)
					{
						iVar121 = &Var0.f_1[iVar120 /*3*/];
						if (func_90(iVar121, 0))
						{
							func_730(iVar121, 0, 0);
						}
						iVar120++;
					}
				}
			}
			break;
		case -525676072:
			func_868(iParam0, &(Global_1951141->f_3109.f_28));
			break;
		case -1719060085:
			func_868(iParam0, &(Global_1951141->f_3109.f_30));
			break;
		case -413129408:
			func_868(iParam0, &(Global_1951141->f_3109.f_31));
			break;
		default:
			if (func_150(iParam0, -1348134986))
			{
				func_868(iParam0, &(Global_1951141->f_3109.f_29));
			}
			break;
	}
	if (bParam2)
	{
		func_546();
	}
	if (bParam1)
	{
		func_548(0, 0);
	}
}

void func_731(var uParam0, int iParam1)
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
			if ((func_870(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_870(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_871(uParam0->f_2[iVar0 /*2*/], 2, 6);
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

void func_732(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_872(uParam0, 1))
	{
		func_873(uParam0, 1);
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

int func_733(int iParam0, int iParam1, int iParam2)
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

bool func_734(int iParam0)
{
	return &Global_1951141->f_1657.f_1[func_249(iParam0, 1) /*3*/] != &Global_1951141->f_81[func_249(iParam0, 1) /*12*/];
}

int func_735(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return 1;
}

void func_736(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1951141->f_1657.f_1[iParam0 /*3*/]) = { *(Global_1951141->f_1538.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	func_874(Global_1951141->f_1657.f_1[iParam0 /*3*/], iParam0, Global_17172.f_54.f_644.f_1776);
}

int func_737(int iParam0, int iParam1)
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

void func_738(int iParam0, bool bParam1, int iParam2)
{
	func_875(&(Global_1951141->f_1538), iParam0);
	func_876(2, iParam0, 6);
	if (bParam1)
	{
		func_548(0, 1);
	}
}

int func_739(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_816(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_740(struct<4> Param0, int iParam4, bool bParam5)
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
	if (!func_374(Param0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_91(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_877(Param0, 1, 0) };
		Var16.f_10 = iParam4;
		iVar0 = func_878(joaat("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("COACH"))
	{
		Var44 = { func_879(Param0, 1, 0) };
		Var44.f_10 = iParam4;
		iVar0 = func_880(joaat("UPDATE"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var69 = { func_881(Param0, 1, 0) };
		Var69.f_10 = iParam4;
		iVar0 = func_882(joaat("UPDATE"), &Var69, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_883(&Var1, 0) };
		Var86.f_10 = iParam4;
		iVar0 = func_222(joaat("UPDATE"), &Var86, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

float func_741(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_742()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_26285) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_26285, 0));
}

int func_743()
{
	return Global_1051202->f_12;
}

char* func_744()
{
	return "unnamed";
}

int func_745(int iParam0)
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

int func_746(int iParam0)
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

bool func_747(int iParam0)
{
	if (func_884(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_885(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_748(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return 0;
	}
	return 1;
}

int func_749(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_90(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_886(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return iVar4;
}

int func_750(int iParam0, bool bParam1)
{
	if (!bParam1 || func_887())
	{
		return func_325(iParam0, func_368(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

int func_751(int iParam0)
{
	switch (func_162(iParam0))
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
	if (func_150(iParam0, -1348134986))
	{
		return 1;
	}
	return 0;
}

void func_752(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_2548[func_249(iParam0, 1) /*2*/])->f_1 = ((Global_1951141->f_2548[func_249(iParam0, 1) /*2*/])->f_1 || iParam1);
}

int func_753(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;

	if (func_682(iParam0))
	{
		return func_888(func_683(iParam0, 1), iParam2, uParam3);
	}
	if (!func_451(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar35 = (func_78(0) && !func_79());
	if (iParam6 != 0)
	{
		if (func_108() == 0)
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
			if (&Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && func_889(iVar32))
			{
				Jump @438; //curOff = 179
			}
			else if (&Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && func_890(iVar32))
			{
			}
			else
			{
				if (iParam6 != 0)
				{
					iVar33 = func_674(&(Var0[iVar34 /*2*/]), iParam6);
				}
				else
				{
					iVar33 = func_94(&(Var0[iVar34 /*2*/]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_241(&(Var0[iVar34 /*2*/])) || func_452(&(Var0[iVar34 /*2*/])))
					{
						iVar36 = 0;
						if (bParam5)
						{
							iVar37 = func_454(7, &(Var0[iVar34 /*2*/]), &iVar36);
						}
						iVar38 = func_453(&(Var0[iVar34 /*2*/]), iParam6);
						if (((iVar33 + iVar37) + iVar38) >= iVar32)
						{
							if ((iVar33 + iVar38) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar36))
							{
								*iParam4 = iVar36;
							}
						}
						else
						{
							Jump @422; //curOff = 378
							if (bParam5 && ((iVar33 + func_455(7, &(Var0[iVar34 /*2*/]))) + func_456(&(Var0[iVar34 /*2*/]))) >= iVar32)
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

void func_754(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_108() == 0)
	{
		iVar0 = func_891();
		if (iVar0 < iParam0)
		{
			iParam0 = iVar0;
		}
		func_892(iParam0, sParam1, -142743235, bParam4);
	}
	else
	{
		func_893(iParam0);
		if (bParam3)
		{
			func_894(iParam0, sParam1, iParam2);
		}
	}
}

int func_755(int iParam0, int iParam1, int iParam2)
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
	int iVar31;

	iParam0 = func_326(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_90(iParam1, 0))
	{
		return 0;
	}
	if (!func_678(iParam0))
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
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
			if (!func_679(iVar28))
			{
			}
			else
			{
				MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
				iVar29 = 0;
				while (iVar29 < 10)
				{
					iVar30 = &Var3.f_1[iVar29];
					if (iVar30 == iParam1)
					{
						func_426(iParam1, 1, 752097756);
						if (ENTITY::DOES_ENTITY_EXIST(iVar28))
						{
							iVar31 = func_245(&iVar28);
							if (!func_90(iVar31, 0))
							{
								iVar31 = func_246(iVar28);
							}
							if (func_90(iVar31, 0))
							{
								func_247(iVar31, 1, 1, -142743235);
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

void func_756(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

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
		iVar12 = func_283(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return;
		}
		Var2 = { func_669(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar12, 0) };
		if (func_671(Var2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					iVar13 = func_672(iVar14, iVar0);
					if (func_90(iVar13, 0) && iParam0 != iVar13)
					{
						iVar15 = func_94(iVar13, 0, 0, 0);
						while (iVar15 > 0 && iParam1 > 0)
						{
							iParam1 = (iParam1 - func_895(iVar13, iParam0, 0));
							iVar15 = (iVar15 - 1);
						}
					}
					iVar14++;
				}
			}
			func_677(iVar0);
		}
	}
}

void func_757(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;

	if (!func_90(iParam0, 0))
	{
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar13 = func_896(iVar1, &uVar2);
				iVar14 = 0;
				while (iVar14 < iVar13)
				{
					if (&uVar2[iVar14] == iParam0)
					{
						ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
					}
					else
					{
						iVar14++;
					}
				}
			}
			else if (PED::_0x9E7738B291706746(&iVar15, iVar1, PED::_GET_PED_DAMAGE(iVar1)) && iVar15 == iParam0)
			{
				ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
			}
		}
	}
}

int func_758(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_326(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_90(iParam1, 0))
	{
		return 0;
	}
	if (!func_678(iParam0))
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	iVar1 = iParam1;
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
	while (iVar3 < iParam2)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iVar0, iVar3) != iVar1)
		{
		}
		else if (func_856(iParam1, iParam2, 1, -142743235))
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_759(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (func_108() == 0)
	{
		return 0;
	}
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_368(0) };
	Var0.f_4 = func_448(iParam1);
	Var5 = { func_270(iParam0, Var0, Var0.f_4, 0) };
	if (!func_271(iParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_760(int iParam0)
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

int func_761(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_689(1);
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

void func_762(float fParam0, int iParam1)
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

int func_763(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_689(1);
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

void func_764(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_897(iVar0))
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

int func_765(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_689(1);
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

void func_766(float fParam0, int iParam1)
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

float func_767(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_773();
	func_898(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_899(iParam0, 2);
	if (func_901(iVar0, func_900(iParam0, 2), 1))
	{
		func_902(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_137(103, bParam2);
		return 0f;
	}
	func_903(iParam0, func_773(), 2);
	func_902(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_768(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_689(2);
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

int func_769(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_689(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_904(iVar0, iParam0, fParam1))
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
			func_905(iParam0, 7000, iParam5);
		}
		func_906(iVar0, iParam0, fParam1);
		func_907(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

float func_770(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_689(1);
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

int func_771()
{
	if (Global_1954472->f_1331.f_107 == -15)
	{
		return 1;
	}
	return func_908(Global_1954472->f_1331.f_107, 0);
}

int func_772(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

int func_773()
{
	return &Global_1902689;
}

void func_774(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_909(*iParam0);
	iVar1 = func_910(*iParam0);
	iVar2 = func_911(*iParam0);
	iVar3 = func_912(*iParam0);
	iVar4 = func_913(*iParam0);
	iVar5 = func_914(*iParam0);
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
	iVar6 = func_915(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_915(iVar1, iVar0);
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
	func_916(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_775(int iParam0, float fParam1, int iParam2)
{
	if (!func_917(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_689(2);
	}
	func_918(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1275573->f_8))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1275573->f_8, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

int func_776(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_919(iParam0))
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
				sVar0 = func_920(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_719(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			Global_17172.f_54.f_2438.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_920(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_921(joaat("STATUS_EFFECT__TRACKING"));
			func_721(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			Global_17172.f_54.f_2438.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_920(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_720(-1, 0);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			Global_17172.f_54.f_2438.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_921(joaat("STATUS_EFFECT__POISON"));
			func_922(0, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			(Global_17172.f_54.f_2438.f_34[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_922(1, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			(Global_17172.f_54.f_2438.f_34[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_922(2, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			(Global_17172.f_54.f_2438.f_34[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

void func_777(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_430(joaat("EATEN"), func_760(iParam0)) };
	STATS::_0x6A0184E904CDF25E(&Var0, iParam1);
	func_192(func_191(joaat("HERBS_EATEN")), iParam1);
}

void func_778(int iParam0, int iParam1)
{
	int iVar0;

	if (func_108() == 0)
	{
		iVar0 = func_283(iParam0, -949239683);
		if (iParam1 == -1387038764)
		{
			return;
		}
		if (func_150(iParam0, -136654233))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_CANNEDGOODSEATEN_00"), 1);
		}
		if ((func_150(iParam0, 1765172170) || 1443104131 == iVar0) || -1919515848 == iVar0)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_TOBACCOSMOKEDCHEWED_00"), 1);
		}
		if (func_150(iParam0, 1573112293))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_HERBSTASTED_00"), 1);
		}
		if (func_150(iParam0, -2085281117) && !func_150(iParam0, -1237028043))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_FRESHPRODUCEEATEN_00"), 1);
		}
		if (func_150(iParam0, 200705431))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_DRYGOODSEATEN_00"), 1);
		}
		if (((func_150(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_150(iParam0, -839724752)) || func_150(iParam0, 1264218912)) || iParam0 == joaat("CONSUMABLE_OFFAL"))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_MEATEATEN_00"), 1);
		}
		if (func_150(iParam0, -764700608))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_TONICOILUSED_00"), 1);
		}
	}
}

int func_779(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return ((*Global_1128435)[iParam0 /*83*/])->f_38.f_28;
}

int func_780(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return ((*Global_1128435)[iParam0 /*83*/])->f_38.f_28.f_1;
}

void func_781(var uParam0, int iParam1, int iParam2)
{
	((*Global_1913166)[uParam0->f_51 /*9*/])->f_5 = iParam2;
	((*Global_1913166)[uParam0->f_51 /*9*/])->f_6 = iParam1;
	((*Global_1913166)[uParam0->f_51 /*9*/])->f_7 = 1;
	((*Global_1913166)[uParam0->f_51 /*9*/])->f_8 = 0;
	Global_1913166->f_1576++;
	uParam0->f_51++;
	if ((iParam2 == 600942249 || iParam2 == -257768755) || iParam2 == 1472825031)
	{
		func_923(uParam0, iParam1, iParam2);
	}
	else if (iParam2 == -214678071)
	{
		func_924(uParam0, iParam1);
	}
}

int func_782(var uParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	Var0 = { func_669(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, Global_1913166->f_1584, 0) };
	if (func_671(Var0, &iVar10, &iVar11, 0))
	{
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			iVar13 = func_672(iVar12, iVar10);
			if (func_90(iVar13, 0))
			{
				if (uParam0->f_51 >= 175)
				{
				}
				else
				{
					if (Global_1913166->f_1584 == 0 && func_150(iVar13, 302810039))
					{
						if (!(Global_1913166->f_1585 != 0 && func_150(iVar13, Global_1913166->f_1585)))
						{
						}
						else if (func_150(iVar13, 266762988))
						{
						}
						else
						{
							func_781(uParam0, iVar13, iParam1);
							func_925(uParam0, iVar13, iParam1);
						}
						iVar12++;
						func_926(&iVar10);
						return 1;
						return 0;
					}
				}
			}
		}
	}

int func_783(int iParam0)
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

int func_784(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_785(var uParam0, char* sParam1, var uParam2)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_35, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
}

void func_786(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;

	iVar0 = ((*Global_1913166)[iParam2 /*9*/])->f_6;
	if ((iParam4 || uParam0->f_25) || func_225(iVar0, uParam0->f_48))
	{
		if (bParam1)
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913166)[iParam2 /*9*/])->f_1))
			{
				if (bParam5)
				{
					func_787(uParam0, -1, bParam3, ((*Global_1913166)[iParam2 /*9*/])->f_1, 1, 0, 1);
				}
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_36, uParam0->f_52, joaat("CRAFTING_LIST_ITEM"), ((*Global_1913166)[iParam2 /*9*/])->f_1);
			}
			else
			{
				func_927(uParam0, iParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913166)[iParam2 /*9*/])->f_1))
			{
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1913166)[iParam2 /*9*/])->f_1);
			}
			func_927(uParam0, iParam2, 0, bParam3);
		}
		if (uParam0->f_52 == 0)
		{
			uParam0->f_71 = ((*Global_1913166)[iParam2 /*9*/])->f_6;
			uParam0->f_72 = ((*Global_1913166)[iParam2 /*9*/])->f_5;
			uParam0->f_70 = ((*Global_1913166)[iParam2 /*9*/])->f_1;
		}
		uParam0->f_52++;
	}
}

void func_787(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char[] cVar8[8];
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
	struct<2> Var18;
	bool bVar40;
	int iVar41;
	struct<7> Var42;
	int iVar49;

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
	iVar3 = iVar1;
	iVar4 = iVar2;
	iVar5 = func_218(iVar3, iVar4, bParam2);
	iVar6 = func_94(iVar3, 0, 0, 0);
	iVar7 = func_587(iVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - iVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, func_588(iVar7, iVar5), 8);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "count", &cVar8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "visible", false);
	if (uParam0->f_25)
	{
		iVar9 = func_784((iVar5 > 0 && func_796(iVar3)), 1, 0);
	}
	else
	{
		iVar9 = func_784((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (iVar9 == 0 && func_928(iVar3))
	{
		if (func_929(iVar3, iVar4, uParam0, bParam2, &iVar11, &iVar12, &iVar13))
		{
			iVar9 = 1;
			bVar10 = true;
			if (bParam6)
			{
				iVar3 = iVar11;
				iVar4 = iVar12;
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", iVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eOutputItem", iVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eCost", iVar12);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "iCurCostVariant", iVar13);
				bParam5 = true;
			}
		}
	}
	if (!uParam0->f_28)
	{
		if ((iVar4 == -214678071 || iVar4 == joaat("COST_CRAFTING_GRILL")) || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	if (!Global_1913166->f_1579 && func_794(iVar3, iVar4, 1))
	{
		iVar9 = 0;
		bVar14 = true;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "lockVisible", bVar14);
	if (iVar9 == 1)
	{
		if (!func_396(2) && func_283(iVar3, -1636519629) == -701492487)
		{
			((*Global_1913166)[iParam1 /*9*/])->f_2 = 0;
			iVar9 = 0;
		}
		else
		{
			((*Global_1913166)[iParam1 /*9*/])->f_2 = 1;
		}
	}
	else
	{
		if (((uParam0->f_53 && iVar9 == 0) && ((*Global_1913166)[iParam1 /*9*/])->f_2) && bParam4)
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_36, iVar0);
		}
		((*Global_1913166)[iParam1 /*9*/])->f_2 = 0;
	}
	if (bParam5)
	{
		if (func_352(iVar3, &Var15, joaat("INVENTORY"), 0, 0, 0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "texture", Var15);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "textureDictionary", Var15.f_1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", iVar3);
		Var18.f_1 = 20;
		bVar40 = false;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", 0);
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar3, &Var18))
		{
			iVar41 = 0;
			while (iVar41 < Var18)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var18.f_1[iVar41]), &Var42))
				{
					iVar49 = Var42.f_2;
					switch (Var42.f_1)
					{
						case -1104847406:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", iVar49);
							break;
						case joaat("EFFECT_DEADEYE_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", iVar49);
							break;
						case joaat("EFFECT_DEADEYE_CORE_GOLD"):
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
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", iVar49);
							break;
						case joaat("EFFECT_HEALTH_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", iVar49);
							break;
						case 1869697234:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", Var42.f_6);
							break;
						case joaat("EFFECT_HEALTH_CORE_GOLD"):
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", Var42.f_6);
							break;
						case 381158954:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", iVar49);
							break;
						case joaat("EFFECT_STAMINA_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", iVar49);
							break;
						case joaat("EFFECT_STAMINA_CORE_GOLD"):
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
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", iVar49);
							break;
						case -778289619:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", Var42.f_6);
							break;
						case joaat("EFFECT_HORSE_HEALTH_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", iVar49);
							break;
						case 1136630075:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", Var42.f_6);
							break;
						case 855745648:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", iVar49);
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
			iVar9 = 0;
		}
	}
	if (bVar10 && !bParam6)
	{
		iVar9 = 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "enabled", iVar9);
}

int func_788(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_789(var uParam0, bool bParam1)
{
	int iVar0;

	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_10))
	{
		iVar0 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(uParam0->f_10);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar0, bParam1, false);
	}
}

void func_790(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	ATTRIBUTE::_0xD962F8579D702DB5();
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eOutputItem");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eCost");
	iVar2 = iVar0;
	ATTRIBUTE::_0xD962F8579D702DB5();
	if (func_90(iVar2, 0) && (uParam0->f_25 || func_225(iVar2, uParam0->f_48)))
	{
		uParam0->f_33 = -1;
		uParam0->f_21 = 0;
		uParam0->f_73 = iVar2;
		uParam0->f_74 = iVar1;
		func_120((*uParam0)[1], 1, 1);
		iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
		if (iVar3 > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "variantVisible", true);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_73));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_35, "variantCount", iVar3);
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < &Global_1913166)
			{
				iVar6 = ((*Global_1913166)[iVar5 /*9*/])->f_8;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_35, "variantIndex", (iVar4 + 1 - iVar6));
			uParam0->f_75 = 1;
			if (func_100(uParam0[5]))
			{
				func_130(uParam0[5], 1, 1, 1);
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "variantVisible", false);
			uParam0->f_75 = 0;
			if (func_100(uParam0[5]))
			{
				func_130(uParam0[5], 0, 1, 1);
			}
		}
		uParam0->f_49 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_806(uParam0->f_73), func_807(uParam0->f_73)) * 1000f));
		uParam0->f_76 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting");
		uParam0->f_69 = *uParam1;
		(*uParam0)[1] = func_255("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_615(uParam0, uParam0->f_73, uParam0->f_74);
		func_257(uParam0[1], 11, 1, 1);
		if (Global_1913166->f_1579 || !func_794(uParam0->f_73, uParam0->f_74, 1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "RPGDescription", func_800(iVar2));
			func_622(uParam0, 0);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "RPGDescription", 0);
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription"))
		{
			if (Global_1913166->f_1579 || !func_794(uParam0->f_73, uParam0->f_74, 1))
			{
				func_802(uParam0);
			}
		}
	}
}

char* func_791(var uParam0)
{
	if (uParam0->f_53)
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

int func_792(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_231(iVar0, 2))
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
		func_232(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

void func_793(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_100(iParam0))
	{
		return;
	}
	iVar0 = func_229(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ALLOWED_ACTION(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1);
}

int func_794(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_90(iParam0, 0))
	{
		return func_930(func_278(iParam0), iParam1, bParam2);
	}
	if (func_682(iParam0))
	{
		return func_931(func_683(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_108() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_932(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

int func_795(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	struct<2> Var0;

	*uParam2 = 0;
	*uParam3 = 0;
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if ((!Global_1913166->f_1579 && func_794(iParam0, iParam1, 1)) && !bParam5)
	{
		return 0;
	}
	if (!func_753(iParam0, 1, iParam1, &Var0, iParam4, bParam6, iParam7))
	{
		*uParam2 = Var0;
		*uParam3 = Var0.f_1;
		return 0;
	}
	return 1;
}

bool func_796(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_934(func_933());
	iVar1 = func_934(iParam0);
	return iVar1 > iVar0;
}

bool func_797(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<2> Var35;
	int iVar38;
	bool bVar39;
	char* sVar40;
	char cVar41[16];
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	var uVar47;
	int iVar48;
	int iVar49;

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
	if (!bParam4 && func_451(iParam0, iParam1, &Var0, &iVar32, 1, 0))
	{
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				iVar31 = &Var0[iVar33 /*2*/];
				if (func_90(iVar31, 0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "visible", true);
					if (func_352(iVar31, &Var35, joaat("INVENTORY"), 0, 0, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_37[iVar33]), "texture", Var35);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_37[iVar33]), "textureDictionary", Var35.f_1);
					}
					iVar38 = func_94(iVar31, 0, 0, 0);
					bVar39 = iVar38 >= (Var0[iVar33 /*2*/])->f_1;
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_37[iVar33]), "count", iVar38);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_37[iVar33]), "enabled", func_784(bVar39, 1, 0));
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "inUse", true);
					if (!bVar39)
					{
						bVar34 = false;
					}
					sVar40 = MISC::_CREATE_VAR_STRING(10, "CRFT_ING_LIST", MISC::_CREATE_VAR_STRING(0, &(Var0[iVar33 /*2*/])), (Var0[iVar33 /*2*/])->f_1);
					StringCopy(&cVar41, "Text", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_42[iVar33]), &cVar41, sVar40);
					StringCopy(&cVar41, "Enabled", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_42[iVar33]), &cVar41, func_784(bVar39, 1, 0));
					DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_47, -1, joaat("CRAFTING_RECIPE_LINE"), &(uParam2->f_42[iVar33]));
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
			if (func_234(iParam0))
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
			iVar43 = func_94(iParam0, 0, 0, 0);
			iVar44 = func_587(iParam0, 0);
			if (uParam2->f_25 && !func_796(iParam0))
			{
				bVar34 = false;
				iVar45 = func_933();
				if (iParam0 == iVar45)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE_BETTER"));
				}
			}
			else if ((iVar44 - iVar43) > 0 || iVar44 == -1)
			{
				iVar46 = func_283(iParam0, -1636519629);
				if (!func_396(2) && iVar46 == -701492487)
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
					iVar48 = func_218(iParam0, uParam2->f_74, func_394());
					if (uParam2->f_25)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, func_935(iParam0)));
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
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(130, "CRFT_ING_MAX", iVar43, iVar44, MISC::_CREATE_VAR_STRING(0, iParam0)));
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
		if (func_234(iParam0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
		}
	}
	else if (uParam2->f_25 && !func_796(iParam0))
	{
		iVar49 = func_933();
		if (iParam0 == iVar49)
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

void func_798(var uParam0)
{
	if (uParam0->f_25)
	{
		if (!func_150(uParam0->f_73, -2011345500))
		{
			func_120((*uParam0)[7], 1, 1);
			return;
		}
		if (!func_100(uParam0[7]))
		{
			(*uParam0)[7] = func_255("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if ((uParam0->f_33 > 0 || uParam0->f_73 == Global_1131092->f_339.f_16) || !func_796(uParam0->f_73))
		{
			func_130(uParam0[7], 0, 1, 1);
		}
		else
		{
			func_130(uParam0[7], 1, 1, 1);
		}
	}
}

int func_799(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_800(int iParam0)
{
	struct<19> Var0;

	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

void func_801(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", false);
}

void func_802(var uParam0)
{
	if ((func_150(uParam0->f_73, 1147021565) || uParam0->f_25) && !func_150(uParam0->f_73, 1919582297))
	{
		if (func_225(uParam0->f_73, 5))
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

void func_803(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_35, "filterIndex");
	uParam0->f_48 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "filter", func_783(uParam0->f_48));
}

int func_804(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_IS_WEAPON_PISTOL(iVar0))
	{
		return joaat("S_AMMO_9MM");
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iVar0))
	{
		return joaat("S_AMMO_45MM");
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iVar0))
	{
		return joaat("S_AMMO_RIFLE");
	}
	else if (WEAPON::_IS_WEAPON_REPEATER(iVar0))
	{
		return joaat("S_AMMO_REPEATER");
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iVar0))
	{
		return joaat("S_AMMO_SHOTGUN");
	}
	return 0;
}

Vector3 func_805(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_IS_WEAPON_PISTOL(iVar0))
	{
		return 0f, 0f, 0f;
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iVar0))
	{
		return -0.005f, 0f, 0f;
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iVar0))
	{
		return -0.03f, 0f, 0f;
	}
	else if (WEAPON::_IS_WEAPON_REPEATER(iVar0))
	{
		return 0.005f, 0f, 0f;
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iVar0))
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

char* func_806(var uParam0)
{
	if (PED::IS_PED_MALE(Global_34))
	{
		return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
	}
	return "MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A";
}

char* func_807(var uParam0)
{
	return "craft_trans_stow";
}

var func_808(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x31010318BA9897AC(&uVar0, iParam0);
	return uVar0;
}

void func_809(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam15))
	{
		return;
	}
	if (!func_936(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = PLAYER::PLAYER_ID();
	Param1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param1.f_4 = iParam0;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param1, 14, 13, &uParam15);
}

void func_810(int iParam0, bool bParam1)
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

void func_811(int iParam0, var uParam1)
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

int func_812(int iParam0)
{
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return -1;
	}
	if (iParam0 == _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return func_341(PLAYER::PLAYER_ID());
	}
	return func_937(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0));
}

void func_813(var uParam0, var uParam1)
{
	struct<14> Var0;

	Var0.f_8 = uParam0;
	Var0.f_12 = uParam1;
	func_809(17, Var0, func_344(0, 8));
}

void func_814(var uParam0)
{
	struct<14> Var0;

	Var0.f_12 = uParam0;
	func_809(13, Var0, func_808(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))));
}

Vector3 func_815(int iParam0)
{
	if (iParam0 == 255)
	{
		return ((*Global_1128435)[func_839() /*83*/])->f_38;
	}
	return ((*Global_1128435)[iParam0 /*83*/])->f_38;
}

int func_816(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_73(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_576(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_817(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_162(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_638(iParam0);
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

int func_818(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_90(iParam0, 0) && !func_458(func_278(iParam0), 2))
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

int func_819(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_820(bool bParam0)
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

void func_821(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1954472->f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954472->f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954472->f_5.f_7, iParam0);
		if (iVar0 == &Global_1954472->f_5.f_14[iParam0 /*82*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954472->f_5.f_7, iParam0, "pause_info_panel_list", &(Global_1954472->f_5.f_14[iParam0 /*82*/]));
}

void func_822(bool bParam0)
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

void func_823(bool bParam0)
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

void func_824(bool bParam0)
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

void func_825(bool bParam0)
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

void func_826(bool bParam0)
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

void func_827(bool bParam0)
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

int func_828()
{
	return 1;
	if (Global_1572887->f_13 == 0)
	{
		return 1;
	}
	return Global_39.f_1;
}

var func_829(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_830(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_938())
	{
		Global_1912978->f_125 = MISC::GET_GAME_TIMER();
		Global_1912978->f_126 = iParam1;
	}
	Global_1912978->f_127 = (Global_1912978->f_127 + iParam0);
}

bool func_831()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_832()
{
	return DLC::IS_DLC_PRESENT(joaat("DLC_ULTIMATEEDITION"));
}

int func_833(int iParam0)
{
	int iVar0;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_162(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar0);
}

int func_834(int iParam0, int iParam1, bool bParam2)
{
	if (!func_939(iParam0))
	{
		return 0;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return 0;
	}
	if (bParam2)
	{
		return !func_931(iParam0, iParam1);
	}
	return 1;
}

int func_835(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_458(iParam0, 2))
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

int func_836(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_939(iParam0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1);
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
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
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
		func_940(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

void func_837(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_838(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_839()
{
	return Global_1099294->f_339;
}

void func_840(int iParam0, int iParam1)
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

void func_841(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_843(uParam0))
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

int func_842(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_843(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_844(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_941(INVENTORY::_0x13D234A2A3F66E63(iParam0), iParam1, iParam2, bParam3, iParam4);
}

int func_845(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_942(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		iVar1 = func_943(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_846(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_326(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_944(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = func_945(iVar0, 1);
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
				if (!func_946(iVar3, 0))
				{
				}
				Global_1903929->f_417[iVar1] = (&Global_1903929->f_417[iVar1] - iVar3);
				return 1;
			}
		}
	}
	return 0;
}

bool func_847(int iParam0, int iParam1, bool bParam2)
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
	return func_947(iVar0, bParam2) >= func_948(bParam2);
}

int func_848(int iParam0, int iParam1, int iParam2)
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

int func_849(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_IS_ENTITY_A_BIRD(iParam0))
	{
		iVar0 = func_245(&iParam0);
		if (!func_90(iVar0, 0))
		{
			iVar0 = func_246(iParam0);
		}
	}
	else
	{
		iVar0 = func_246(iParam0);
	}
	return iVar0;
}

bool func_850(int iParam0, int iParam1)
{
	*iParam1 = func_949(iParam0);
	return *iParam1 != 0;
}

void func_851(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(iParam1, iParam0, 95);
}

void func_852(int iParam0)
{
	int iVar0;
	var uVar1[10];
	int iVar12;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	func_896(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), &uVar1);
	iVar12 = 0;
	while (iVar12 < 10)
	{
		if (func_90(&(uVar1[iVar12]), 0))
		{
			if (func_150(&(uVar1[iVar12]), -1690954218))
			{
				func_950(iVar0, -1760041550 /* GXTEntry: "High Quality Beef Stew" */);
			}
			else if (func_150(&(uVar1[iVar12]), 1149630095))
			{
				func_950(iVar0, -1760041550 /* GXTEntry: "High Quality Beef Stew" */);
			}
			else if (func_150(&(uVar1[iVar12]), 194498509))
			{
				func_950(iVar0, 116793994 /* GXTEntry: "Medium Quality Beef Stew" */);
			}
			else if (func_150(&(uVar1[iVar12]), 43251425))
			{
				func_950(iVar0, 1869130580 /* GXTEntry: "Low Quality Beef Stew" */);
			}
			else
			{
				func_950(iVar0, 1869130580 /* GXTEntry: "Low Quality Beef Stew" */);
			}
		}
		iVar12++;
	}
}

int func_853(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_850(iParam0, &iVar1))
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

int func_854(int iParam0)
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

void func_855(int iParam0, int iParam1)
{
	int iVar0;

	if (func_108() == -1)
	{
		iVar0 = func_173(7);
	}
	else
	{
		iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	}
	func_848(iVar0, iParam0, iParam1);
}

int func_856(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_368(0) };
	Var0.f_4 = 724026534;
	Var5 = { func_270(iParam0, Var0, Var0.f_4, 0) };
	return func_271(iParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

int func_857(int iParam0)
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

bool func_858(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_88(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_951(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_859(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_712(iParam0))
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

int func_860(int iParam0)
{
	if (!func_712(iParam0))
	{
		return 0;
	}
	return func_859(iParam0, 2, 1);
}

int func_861(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_952())
	{
		return 0;
	}
	if (!func_335())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_864(&Global_0, 8);
	}
	func_864(&Global_0, 1);
	return 1;
}

int func_862(int iParam0)
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

void func_863(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_137(239, 0);
			break;
		case 16:
			func_137(240, 0);
			break;
		case 33:
			func_137(241, 0);
			break;
		case 51:
			func_137(242, 0);
			break;
		case 2:
			func_137(243, 0);
			break;
		case 3:
			func_137(244, 0);
			break;
		case 52:
			func_137(245, 0);
			break;
		case 15:
			func_137(246, 0);
			break;
		case 23:
			func_137(247, 0);
			break;
		case 37:
			func_137(248, 0);
			break;
		case 26:
			func_137(249, 0);
			break;
		case 13:
			func_137(250, 0);
			break;
		case 19:
			func_137(251, 0);
			break;
		case 34:
			func_137(252, 0);
			break;
		case 38:
			func_137(253, 0);
			break;
		case 49:
			func_137(254, 0);
			break;
		case 7:
			func_137(255, 0);
			break;
		case 20:
			func_137(256, 0);
			break;
		case 18:
			func_137(257, 0);
			break;
		case 6:
			func_137(258, 0);
			break;
		case 29:
			func_137(259, 0);
			break;
		case 48:
			func_137(260, 0);
			break;
		case 11:
			break;
		case 4:
			func_137(262, 0);
			break;
		case 8:
			func_137(263, 0);
			break;
		case 28:
			func_137(264, 0);
			break;
		case 31:
			func_137(265, 0);
			break;
		case 12:
			func_137(266, 0);
			break;
		case 27:
			func_137(267, 0);
			break;
		case 50:
			func_137(268, 0);
			break;
	}
}

void func_864(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_865()
{
	return Global_1951141->f_1657;
}

int func_866(bool bParam0)
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
	Var15 = { func_270(joaat("WARDROBE"), func_368(1), 1034665895, 1) };
	iVar19 = func_559(Var15, 552979403, 1, -1);
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
	Var22 = { func_364(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_367(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_203(&Var0, 0, iVar20, iVar21))
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
				func_205(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_560(Var0, 1);
			}
			func_205(iVar20);
			return iVar14;
		}
		func_205(iVar20);
	}
	return 0;
}

int func_867(int iParam0)
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

int func_868(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_542(iVar1, &iVar0))
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
	func_726(iParam0, 1);
	return 1;
}

int func_869(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_953(iParam6);
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
		func_955(uParam0, func_954(iVar0), 1, 1, bParam7);
	}
	if (bVar2 && DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, -1212855483))
	{
		iVar11 = func_954(iVar0);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_249(iVar3, 1);
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
					func_956(iVar3, 16, 6);
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
							if (func_957(iVar3) && func_735(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
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
						func_959(uParam0, iVar11, func_958(iParam1) != 0);
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

bool func_870(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_871(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_872(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_873(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_874(var uParam0, int iParam1, int iParam2)
{
	*((Global_17172.f_54.f_644.f_32[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
}

void func_875(var uParam0, int iParam1)
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
		func_874(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_876(int iParam0, int iParam1, int iParam2)
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

struct<28> func_877(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_73(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_883(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_878(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_464(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_465(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28), iVar0, uParam1);
		}
	}
	else
	{
		return func_466(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_879(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_73(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_883(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_880(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_465(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 25), iVar0, uParam1);
		}
	}
	else
	{
		return func_466(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_881(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_73(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_883(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_882(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_464(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_465(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17), iVar0, uParam1);
		}
	}
	else
	{
		return func_466(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_883(var uParam0, bool bParam1)
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
		Var0.f_15 = func_210(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_463() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_884(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_885(int iParam0)
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
		func_960(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_961(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

struct<4> func_886(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_962(iParam0) };
	return func_963(iParam0, iParam1, Var0, Var0.f_4);
}

int func_887()
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
	if (!func_964(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_888(int iParam0, int iParam1, var uParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_836(iParam0, iParam1, &Var0, &iVar31, 0, 1))
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
				if (!func_889((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (&Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
			{
				if (!func_890((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (func_94(&(Var0[iVar32 /*2*/]), 0, 0, 1) < (Var0[iVar32 /*2*/])->f_1)
			{
				*uParam2 = { *(Var0[iVar32 /*2*/]) };
				return 0;
			}
			iVar32++;
		}
	}
	return 1;
}

bool func_889(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_108() == 0)
	{
		return func_965(iParam0);
	}
	return iParam0 <= func_891();
}

bool func_890(int iParam0)
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

int func_891()
{
	if (func_108() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_892(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<16> Var6;
	struct<16> Var22;

	iVar0 = -1;
	Var1 = { func_188(joaat("CURRENCY_CASH"), 1, 0) };
	Var6 = { func_221(joaat("CURRENCY_CASH"), Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_222(joaat("USE"), &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_223(iVar0, Var22);
	}
	return iVar0;
}

void func_893(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_891() < iParam0)
	{
		iParam0 = func_891();
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_363(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_894(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_362(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

int func_895(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	struct<4> Var8;
	int iVar12;
	struct<16> Var13;

	iVar0 = -1;
	iVar1 = func_675(iParam0);
	iVar2 = func_673(iParam0);
	if (iVar2 != 0)
	{
		if (!func_78(0) || func_79())
		{
			if (bParam2)
			{
				func_192(func_430(joaat("BROKEN_DOWN"), joaat("SMALL_ANIMALS")), 1);
				return func_966(iVar2, iVar1, iParam0, iParam1);
			}
			Var3 = { func_188(iParam0, 1, 0) };
			Var8 = { func_270(iParam0, Var3, Var3.f_4, 1) };
			iVar12 = func_967(iParam0, &Var8, 1, -142743235, 0, 1);
			if (iVar12 != -1)
			{
				Var13.f_7 = -142743235;
				Var13 = 1;
				Var13.f_3 = 1;
				func_223(iVar12, Var13);
			}
			return 0;
		}
		if (func_76(iParam0, 1, 1, -142743235))
		{
			iVar0 = func_966(iVar2, iVar1, iParam0, iParam1);
		}
	}
	return iVar0;
}

int func_896(int iParam0, var uParam1)
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

bool func_897(int iParam0)
{
	float fVar0;

	fVar0 = (func_968(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

void func_898(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_909(*iParam0);
	iVar1 = func_910(*iParam0);
	iVar2 = func_911(*iParam0);
	iVar3 = func_912(*iParam0);
	iVar4 = func_913(*iParam0);
	iVar5 = func_914(*iParam0);
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
		iVar7 = func_915(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_916(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_899(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_689(2);
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

int func_900(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_689(2);
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

bool func_901(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_969(iParam1) || !func_969(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_902(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_689(2);
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

void func_903(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_689(2);
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

int func_904(int iParam0, int iParam1, float fParam2)
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
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_970(iParam1), BUILTIN::CEIL(fParam2));
	return 1;
}

void func_905(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_689(2);
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

void func_906(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_971(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_972(iParam1), fParam2, -1);
	}
}

void func_907(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_689(2);
	}
	uVar0 = Global_1275573->f_21;
	func_973(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_974(iParam0, uVar0, iParam3);
	}
}

bool func_908(int iParam0, bool bParam1)
{
	return func_901(func_773(), iParam0, bParam1);
}

int func_909(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_784(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_910(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_911(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_912(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_913(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_914(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_915(int iParam0, int iParam1)
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

void func_916(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_975(iParam0, iParam6);
	func_976(iParam0, iParam5);
	func_977(iParam0, iParam4);
	func_978(iParam0, iParam3);
	func_979(iParam0, iParam2);
	func_980(iParam0, iParam1);
}

int func_917(int iParam0)
{
	if (func_919(iParam0))
	{
		return 1;
	}
	else if (func_981(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_918(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 <= 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_689(1);
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

int func_919(int iParam0)
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

char* func_920(int iParam0)
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

void func_921(int iParam0)
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
		iVar3 = func_982(iVar0, 1);
		if (&Global_1140484->f_30603.f_847[iVar3 /*12*/] == iParam0)
		{
			func_983(iVar0);
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

void func_922(int iParam0, bool bParam1, bool bParam2)
{
	func_769(iParam0, 100f, bParam1, bParam2, 1, 2);
}

void func_923(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<37> Var1;
	int iVar48;

	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam1);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam1, iVar48, &Var1))
		{
			if (Var1 != iParam2)
			{
				if ((Var1.f_2 == joaat("COST_TYPE_CRAFT") && (Var1 != -489628648 && Var1 != -2141192156)) && (Global_1913166->f_1579 || !func_794(iParam1, Var1, 1)))
				{
					((*Global_1913166)[(uParam0->f_51 - 1) /*9*/])->f_7++;
				}
			}
			else
			{
				((*Global_1913166)[(uParam0->f_51 - 1) /*9*/])->f_8 = iVar48;
			}
		}
		iVar48++;
	}
}

void func_924(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;

	iVar2 = func_283(iParam1, 1697966752);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_669(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, iVar2, 0) };
	if (func_671(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			iVar14 = func_672(iVar13, iVar0);
			if (func_90(iVar14, 0))
			{
				if (Global_1913166->f_1579 || !func_794(iVar14, joaat("COST_CRAFTING_GRILL"), 1))
				{
					((*Global_1913166)[(uParam0->f_51 - 1) /*9*/])->f_7++;
				}
			}
			iVar13++;
		}
		func_677(iVar0);
	}
}

void func_925(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;

	iVar2 = func_283(iParam1, -1859264326);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_669(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar2, 0) };
	if (func_671(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			if (uParam0->f_51 >= 175)
			{
			}
			else
			{
				iVar14 = func_672(iVar13, iVar0);
				if (func_90(iVar14, 0) && iVar14 != iParam1)
				{
					func_781(uParam0, iVar14, iParam2);
				}
				iVar13++;
			}
		}
		func_677(iVar0);
	}
}

void func_926(int iParam0)
{
	func_677(*iParam0);
	*iParam0 = -1;
}

void func_927(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	char cVar1[32];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	char[] cVar11[8];
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<2> Var17;
	struct<2> Var20;
	bool bVar42;
	int iVar43;
	struct<7> Var44;
	int iVar51;

	iVar0 = ((*Global_1913166)[iParam1 /*9*/])->f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, iVar0, 32);
	StringIntConCat(&cVar1, iParam1, 32);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913166)[iParam1 /*9*/])->f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1913166)[iParam1 /*9*/])->f_1);
	}
	iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_36, &cVar1);
	((*Global_1913166)[iParam1 /*9*/])->f_1 = iVar5;
	iVar6 = ((*Global_1913166)[iParam1 /*9*/])->f_5;
	iVar7 = func_218(iVar0, iVar6, bParam3);
	iVar8 = func_94(iVar0, 0, 0, 0);
	iVar9 = func_587(iVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 = (iVar9 - iVar8);
	}
	else
	{
		iVar9 = iVar7;
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "name", iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eOutputItem", iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eCost", iVar6);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iIndex", iParam1);
	if (!Global_1913166->f_1579 && func_794(iVar0, iVar6, 1))
	{
		bVar10 = true;
		((*Global_1913166)[iParam1 /*9*/])->f_7 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iCurCostVariant", ((*Global_1913166)[iParam1 /*9*/])->f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iNumCostVariants", ((*Global_1913166)[iParam1 /*9*/])->f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "bFireCrafting", iVar6 == -257768755);
	StringIntConCat(&cVar11, func_588(iVar9, iVar7), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "count", &cVar11);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "visible", false);
	bVar13 = false;
	if (uParam0->f_25)
	{
		iVar12 = func_784(((iVar7 > 0 && func_796(iVar0)) && !bVar10), 1, 0);
	}
	else
	{
		iVar12 = func_784(((iVar9 > 0 && iVar7 > 0) && !bVar10), 1, 0);
	}
	if (iVar12 == 0 && func_928(iVar0))
	{
		if (func_929(iVar0, iVar6, uParam0, bParam3, &iVar14, &iVar15, &iVar16))
		{
			iVar12 = 1;
			bVar13 = true;
			iVar0 = iVar14;
			iVar6 = iVar15;
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "name", iVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eOutputItem", iVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eCost", iVar15);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "iCurCostVariant", iVar16);
		}
	}
	if (func_352(iVar0, &Var17, joaat("INVENTORY"), 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "texture", Var17);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureDictionary", Var17.f_1);
	}
	if (!uParam0->f_28)
	{
		if ((iVar6 == -214678071 || iVar6 == joaat("COST_CRAFTING_GRILL")) || iVar6 == -257768755)
		{
			iVar12 = 0;
		}
	}
	if (iVar12 == 1)
	{
		if (!func_396(2) && func_283(iVar0, -1636519629) == -701492487)
		{
			((*Global_1913166)[iParam1 /*9*/])->f_2 = 0;
			iVar12 = 0;
		}
		else
		{
			uParam0->f_55++;
			if (func_225(iVar0, uParam0->f_48))
			{
				uParam0->f_56++;
			}
			((*Global_1913166)[iParam1 /*9*/])->f_2 = 1;
		}
	}
	else
	{
		((*Global_1913166)[iParam1 /*9*/])->f_2 = 0;
	}
	if (bVar13)
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "lockVisible", bVar10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "enabled", iVar12);
	Var20.f_1 = 20;
	bVar42 = false;
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaHorseDurationCategory", 0);
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar0, &Var20))
	{
		iVar43 = 0;
		while (iVar43 < Var20)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var20.f_1[iVar43]), &Var44))
			{
				iVar51 = Var44.f_2;
				switch (Var44.f_1)
				{
					case -1104847406:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", iVar51);
						break;
					case joaat("EFFECT_DEADEYE_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", iVar51);
						break;
					case joaat("EFFECT_DEADEYE_CORE_GOLD"):
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
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", iVar51);
						break;
					case joaat("EFFECT_HEALTH_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", iVar51);
						break;
					case 1869697234:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthDurationCategory", Var44.f_6);
						break;
					case joaat("EFFECT_HEALTH_CORE_GOLD"):
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreDurationCategory", Var44.f_6);
						break;
					case 381158954:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", iVar51);
						break;
					case joaat("EFFECT_STAMINA_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", iVar51);
						break;
					case joaat("EFFECT_STAMINA_CORE_GOLD"):
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
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", iVar51);
						break;
					case -778289619:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthHorseDurationCategory", Var44.f_6);
						break;
					case joaat("EFFECT_HORSE_HEALTH_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", iVar51);
						break;
					case 1136630075:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreHorseDurationCategory", Var44.f_6);
						break;
					case 855745648:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", iVar51);
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
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_36, -1, joaat("CRAFTING_LIST_ITEM"), iVar5);
	}
}

int func_928(int iParam0)
{
	if (func_54(4096))
	{
		if (func_283(iParam0, 1697966752) != 337650881)
		{
			return 0;
		}
	}
	else if (func_54(8192))
	{
		if (iParam0 != joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"))
		{
			return 0;
		}
	}
	return 1;
}

int func_929(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<37> Var18;
	int iVar65;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!Global_1913166->f_1579 && func_794(iParam0, iParam1, 1))
	{
		return 0;
	}
	if (uParam2->f_25 && !func_796(iParam0))
	{
		return 0;
	}
	if (iParam1 == -214678071 || iParam1 == joaat("COST_CRAFTING_GRILL"))
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
		iVar12 = func_283(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return 0;
		}
		Var2 = { func_669(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, iVar12, 0) };
		if (func_671(Var2, &iVar0, &iVar1, 0))
		{
			iVar13 = 0;
			while (iVar13 < iVar1)
			{
				iVar14 = func_672(iVar13, iVar0);
				if (iParam0 == iVar14)
				{
				}
				else if (!Global_1913166->f_1579 && func_794(iVar14, joaat("COST_CRAFTING_GRILL"), 1))
				{
				}
				else if (func_629(iVar14, joaat("COST_CRAFTING_GRILL"), 0, bParam3, 0) && !func_403(iVar14, 1, 0))
				{
					func_677(iVar0);
					*iParam4 = iVar14;
					*iParam5 = joaat("COST_CRAFTING_GRILL");
					*iParam6 = iVar13;
					return 1;
				}
				iVar13++;
			}
			func_677(iVar0);
		}
		if (iParam1 == joaat("COST_CRAFTING_GRILL"))
		{
			Var2 = { func_669(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar12, 0) };
			if (func_671(Var2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					iVar16 = func_672(iVar15, iVar0);
					if (iParam0 == iVar16)
					{
					}
					else if (!Global_1913166->f_1579 && func_794(iVar16, -214678071, 1))
					{
					}
					else if (func_629(iVar16, -214678071, 0, bParam3, 0) && !func_403(iVar16, 1, 0))
					{
						func_677(iVar0);
						*iParam4 = iVar16;
						*iParam5 = -214678071;
						*iParam6 = iVar15;
						return 1;
					}
					iVar15++;
				}
				func_677(iVar0);
			}
		}
	}
	else
	{
		iVar17 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var18.f_4 = 15;
		Var18.f_36 = 10;
		iVar65 = 0;
		while (iVar65 < iVar17)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar65, &Var18))
			{
				if (Var18.f_2 == joaat("COST_TYPE_CRAFT"))
				{
					if ((Var18 != -489628648 && Var18 != -2141192156) && (Global_1913166->f_1579 || !func_794(iParam0, Var18, 1)))
					{
						if (func_629(iParam0, Var18, 0, bParam3, 0) && !func_403(iParam0, 1, 0))
						{
							*iParam4 = iParam0;
							*iParam5 = Var18;
							*iParam6 = iVar65;
							return 1;
						}
					}
				}
			}
			iVar65++;
		}
	}
	return 0;
}

int func_930(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_458(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_108() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_984(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

int func_931(int iParam0, int iParam1)
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
		if (&Var0[iVar474 /*47*/] == iParam1)
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

int func_932(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
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

int func_933()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	return func_780(iVar0);
}

int func_934(int iParam0)
{
	switch (iParam0)
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
	if (func_150(iParam0, -2011345500))
	{
		return 5;
	}
	return 0;
}

char* func_935(int iParam0)
{
	switch (func_934(iParam0))
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

int func_936(bool bParam0)
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

int func_937(int iParam0)
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

bool func_938()
{
	return Global_1912978->f_127 == 0;
}

bool func_939(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

void func_940(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_941(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_90(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_985(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_186(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((func_749(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((func_749(iParam0, iParam1) - iParam2) < 0)
		{
			func_941(iParam0, iParam1, func_94(iParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_986(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_185(iParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

int func_942(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x4AEF1FB5B9011D75(iParam0);
}

int func_943(int iParam0, int iParam1)
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

int func_944(int iParam0)
{
	if (!func_845(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_945(int iParam0, int iParam1)
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

int func_946(int iParam0, bool bParam1)
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
	if (func_947(iVar1, bParam1) == 0)
	{
		return 0;
	}
	iVar2 = iParam0;
	if (iVar2 > func_947(iVar1, bParam1))
	{
		iVar2 = func_947(iVar1, bParam1);
	}
	if (!bParam1)
	{
		((*Global_1269869)[iVar1 /*20*/])->f_8 = (((*Global_1269869)[iVar1 /*20*/])->f_8 - iVar2);
	}
	else
	{
		((*Global_1269869)[iVar1 /*20*/])->f_9 = (((*Global_1269869)[iVar1 /*20*/])->f_9 - iVar2);
	}
	if (func_947(iVar1, bParam1) < 0)
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
	else if (func_947(iVar1, bParam1) > func_948(bParam1))
	{
		if (!bParam1)
		{
			((*Global_1269869)[iVar1 /*20*/])->f_8 = func_948(bParam1);
		}
		else
		{
			((*Global_1269869)[iVar1 /*20*/])->f_9 = func_948(bParam1);
		}
	}
	return 1;
}

int func_947(int iParam0, bool bParam1)
{
	return func_784(bParam1, ((*Global_1269869)[iParam0 /*20*/])->f_9, ((*Global_1269869)[iParam0 /*20*/])->f_8);
}

int func_948(bool bParam0)
{
	return func_784(bParam0, Global_1901929->f_638.f_30, Global_1901929->f_638.f_29);
}

int func_949(int iParam0)
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

void func_950(int iParam0, int iParam1)
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
	func_987(iParam0, &uVar0);
	func_988(&uVar0);
}

int func_951(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_989(Param0);
	}
	return -1;
}

bool func_952()
{
	return !Global_1572887->f_9;
}

int func_953(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_545();
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

int func_954(int iParam0)
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

void func_955(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_990(uParam0->f_1[iVar0 /*3*/], 2))
		{
			if (func_991(iVar0, iParam1))
			{
				vVar4 = { func_992(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1951141->f_81[iVar0 /*12*/]) && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_993(iVar0, 4))
				{
					func_994(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_995(iVar0, 4, 6);
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

void func_956(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[func_249(iParam0, 1) /*12*/])->f_11 = ((Global_1951141->f_81[func_249(iParam0, 1) /*12*/])->f_11 || iParam1);
}

int func_957(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1951141->f_1040.f_2 = 0;
	iVar0 = 1226838104;
	func_996(&(Global_1951141->f_1040), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1951141->f_1040));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1951141->f_1040), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_958(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_90(iParam0, 0))
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

void func_959(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_150(&(uParam0->f_1[34 /*3*/]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (&(Global_1951141->f_81[iVar0 /*12*/])->f_3[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else if (!bParam2 && func_958(&(uParam0->f_1[iVar0 /*3*/])) != 0)
		{
		}
		else if (!func_991(iVar0, iParam1))
		{
		}
		else if (func_993(iVar0, 16))
		{
			func_994(iVar0, 16, 6);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
			(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
		}
		iVar0++;
	}
}

void func_960(int iParam0)
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
	func_961(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_961(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

struct<5> func_962(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_963(iParam0, joaat("CHARACTER"), func_463(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_963(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_90(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_964(int iParam0)
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

bool func_965(int iParam0)
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

int func_966(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<2> Var1;
	var uVar13[15];
	int iVar29;
	int iVar30;

	if (!func_78(0) || func_79())
	{
		iVar0 = iParam0;
		Var1.f_1 = 10;
		func_998(iParam1, func_997(iParam2), &Var1, 1);
		if (func_999(iVar0, &Var1, 0))
		{
		}
		func_137(499, 0);
		return 0;
	}
	PED::_0xB29C553BA582D09E(&uVar13, iParam0, iParam1, func_997(iParam2));
	iVar29 = 0;
	while (iVar29 < 15)
	{
		if ((func_90(&(uVar13[iVar29]), 0) && !func_150(&(uVar13[iVar29]), 1286414894)) && !&uVar13[iVar29] == iParam2)
		{
			func_197(&(uVar13[iVar29]), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
	func_189(func_78(0), 0, 0);
	return iVar30;
}

int func_967(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<12> Var0;
	struct<16> Var14;
	int iVar30;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return -1;
	}
	if (func_489(iParam0))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_374(*uParam1, &Var0, 1, 0, -1))
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
	Var14 = { func_883(&Var0, 0) };
	Var14.f_9 = iParam2;
	Var14.f_12 = iParam3;
	iVar30 = -1;
	iVar30 = func_222(joaat("USE"), &Var14, bParam5);
	if (bParam4 && iVar30 != -1)
	{
		Var31.f_7 = -142743235;
		Var31 = 1;
		func_223(iVar30, Var31);
	}
	return iVar30;
}

float func_968(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_1000(2)));
}

int func_969(int iParam0)
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
	iVar0 = func_914(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_913(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_912(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_909(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_910(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_911(iParam0);
	if (iVar5 < 1 || iVar5 > func_915(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_970(int iParam0)
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

char* func_971(int iParam0)
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

char* func_972(int iParam0)
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

void func_973(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_689(2);
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

void func_974(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_689(2);
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

void func_975(int iParam0, int iParam1)
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

void func_976(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_977(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_910(*iParam0);
	iVar1 = func_909(*iParam0);
	if (iParam1 < 1 || iParam1 > func_915(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_978(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_979(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_980(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_981(int iParam0)
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

int func_982(int iParam0, int iParam1)
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

int func_983(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_1001(iParam0))
	{
		return 0;
	}
	iVar0 = func_982(iParam0, 1);
	if (!func_1002(&(Global_1140484->f_30603.f_847[iVar0 /*12*/])))
	{
		return 1;
	}
	iVar3 = func_1003(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603[iVar3 /*6*/])->f_5)
	{
		iVar1 = Global_1140484->f_30603[iVar3 /*6*/][iVar4];
		switch (func_1004(iParam0, iVar1))
		{
			case 0:
				func_1005(iVar1, iParam0, iVar4);
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
						func_1005(iVar1, iParam0, iVar4);
						func_1006(Global_1140484->f_30603.f_8871[iVar5 /*3*/]);
						Global_1140484->f_30603.f_10924 = (Global_1140484->f_30603.f_10924 - 1);
						*(Global_1140484->f_30603.f_8871[iVar5 /*3*/]) = { *(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]) };
						func_1006(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @554; //curOff = 357
				iVar2 = func_1007(iVar1, 1);
				func_1008(iVar2, -1);
				if ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_29 <= 0)
				{
					func_1009(iVar2, 0);
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
			func_1010(Global_1140484->f_30603.f_847[iVar0 /*12*/]);
			return 1;
		}

int func_984(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_458(iParam0, 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_1011(iParam0, iParam1, &Var0))
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

bool func_985(int iParam0, int iParam1, int iParam2)
{
	if (!func_90(iParam1, 0))
	{
		return false;
	}
	return func_749(iParam0, iParam1) >= iParam2;
}

int func_986(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_90(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_962(iParam0) };
	Var5 = { func_963(iParam0, iParam1, Var0, Var0.f_4) };
	return func_1012(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

void func_987(int iParam0, var uParam1)
{
}

void func_988(var uParam0)
{
}

int func_989(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1013(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

bool func_990(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_991(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return ((Global_1951141->f_81[iParam0 /*12*/])->f_10 && iParam1) != 0;
}

Vector3 func_992(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17172.f_54.f_644.f_1776;
	}
	return *((Global_17172.f_54.f_644.f_32[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

bool func_993(int iParam0, int iParam1)
{
	return ((Global_1951141->f_81[iParam0 /*12*/])->f_11 && iParam1) != 0;
}

void func_994(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[iParam0 /*12*/])->f_11 = ((Global_1951141->f_81[iParam0 /*12*/])->f_11 - ((Global_1951141->f_81[iParam0 /*12*/])->f_11 && iParam1));
}

void func_995(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[iParam0 /*12*/])->f_11 = ((Global_1951141->f_81[iParam0 /*12*/])->f_11 || iParam1);
}

void func_996(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

int func_997(int iParam0)
{
	if (func_150(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_150(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_150(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

struct<12> func_998(int iParam0, int iParam1, var uParam2, bool bParam3)
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
		func_477(uParam2, joaat("LOOT_TYPE_BREAKDOWN"));
	}
	else
	{
		func_477(uParam2, joaat("LOOT_TYPE_SKINNING"));
	}
	func_477(uParam2, iVar0);
	return *uParam2;
}

int func_999(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (0 == iParam0)
	{
		return 0;
	}
	return func_478(iParam0, uParam1, &uVar0, iParam2);
}

int func_1000(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_761(2) * 2;
		case 1:
			return func_765(2) * 2;
		case 2:
			return func_763(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_1001(int iParam0)
{
	int iVar0;

	iVar0 = func_982(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 171)
	{
		return 0;
	}
	return 1;
}

int func_1002(int iParam0)
{
	int iVar0;

	iVar0 = func_1003(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 141)
	{
		return 0;
	}
	return 1;
}

int func_1003(int iParam0, int iParam1)
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

int func_1004(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1014(iParam0);
	iVar1 = &Global_1275573;
	iVar2 = func_1007(iParam1, 1);
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

int func_1005(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_1001(iParam1))
	{
		return 0;
	}
	if (!func_1015(iParam0))
	{
		return 0;
	}
	iVar0 = func_1007(iParam0, 1);
	func_1016(iParam0, iParam1, iParam2);
	if (func_1017(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])) && func_1018(iParam0, (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4))
	{
		vVar1 = { func_1019((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4) };
		if (func_1020(vVar1))
		{
			if (func_1021(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1022((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1023((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
			}
		}
		else
		{
			func_1023((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
		}
	}
	return 1;
}

void func_1006(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_1007(int iParam0, int iParam1)
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

void func_1008(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = ((Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 + iParam1);
}

void func_1009(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = iParam1;
}

void func_1010(var uParam0)
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

int func_1011(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(iParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1012(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_489(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1024(iParam0, *uParam2, &Var0, 0))
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
	if (!INVENTORY::_0x3E4E811480B3AE79(iParam0, uParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1013(struct<2> Param0, int iParam2)
{
	if (!func_88(Param0))
	{
		return 0;
	}
	func_1025(iParam2);
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

int func_1014(int iParam0)
{
	if (func_1026(iParam0))
	{
		return (func_1027(iParam0) % 32);
	}
	return &Global_1275573;
}

int func_1015(int iParam0)
{
	int iVar0;

	iVar0 = func_1007(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 186)
	{
		return 0;
	}
	return 1;
}

int func_1016(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_982(iParam1, 1);
	iVar1 = func_1007(iParam0, 1);
	iVar2 = func_1003(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
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
		iVar5 = func_1028(iVar3, 1);
		if (!func_1029(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = (&(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] - 1);
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 - func_1030((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_1031(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_1032(iVar6))
		{
		}
		else
		{
			iVar8 = func_1033(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = (Global_1140484->f_18706[iVar8 /*195*/][iVar1] - 1);
			if (Global_1140484->f_18706[iVar8 /*195*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187)))
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 0;
				func_1034(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_1017(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1018(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1015(iParam0))
	{
		return false;
	}
	if (!func_1035(iParam1))
	{
		return false;
	}
	iVar0 = func_1036(iParam1, 1);
	return &Global_1140484->f_30603.f_8667[iVar0 /*3*/] == iParam0;
}

Vector3 func_1019(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_1037(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *(Global_1140484->f_30603.f_8871[iVar0 /*3*/]);
}

int func_1020(vector3 vParam0)
{
	if (!func_1015(vParam0.x))
	{
		return 0;
	}
	if (!func_1001(vParam0.y))
	{
		return 0;
	}
	if (!func_1038(vParam0.z))
	{
		return 0;
	}
	return 1;
}

int func_1021(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_982(iParam1, 1);
	iVar1 = func_1007(iParam0, 1);
	iVar2 = func_1003(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
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
		iVar5 = func_1028(iVar3, 1);
		if (!func_1029(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = &(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] + 1;
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 + func_1030((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_1039(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_1032(iVar6))
		{
		}
		else if (!func_1040((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/]))
		{
		}
		else
		{
			iVar8 = func_1033(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = Global_1140484->f_18706[iVar8 /*195*/][iVar1] + 1;
			MISC::_0xE84AAC1B22A73E99(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			if (!(Global_1140484->f_18706[iVar8 /*195*/])->f_194)
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 1;
				func_1041(iVar6);
			}
		}
		iVar7++;
	}
	func_1042((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_2);
	return 1;
}

void func_1022(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_1035(iParam0))
	{
		return;
	}
	iVar0 = func_1036(iParam0, 1);
	if (!func_1015(iParam1))
	{
		return;
	}
	if (!func_1001(iParam2))
	{
		return;
	}
	if (!func_1038(iParam3))
	{
		return;
	}
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = iParam1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = iParam2;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = iParam3;
}

void func_1023(int iParam0)
{
	int iVar0;

	if (!func_1035(iParam0))
	{
		return;
	}
	iVar0 = func_1036(iParam0, 1);
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = -1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = 0;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = -1;
}

int func_1024(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
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

void func_1025(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
}

int func_1026(int iParam0)
{
	int iVar0;

	iVar0 = func_982(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return 1;
	}
	return 0;
}

int func_1027(int iParam0)
{
	int iVar0;

	iVar0 = func_982(iParam0, 1);
	if (func_1026(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_1043(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_1044(iParam0))
	{
		return (iVar0 - 161);
	}
	else if (func_1045(iParam0))
	{
		return (iVar0 - 162);
	}
	else if (func_1046(iParam0))
	{
		return (iVar0 - 170);
	}
	else if (func_1047(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_1028(int iParam0, int iParam1)
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

int func_1029(int iParam0)
{
	int iVar0;

	iVar0 = func_1028(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 87)
	{
		return 0;
	}
	return 1;
}

float func_1030(var uParam0)
{
	var uVar0;

	if (uParam0->f_2 != 0)
	{
		uVar0 = func_1048(794259616, uParam0->f_2, uParam0->f_1, "");
		return uVar0;
	}
	return uParam0->f_1;
}

void func_1031(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1029(iParam0))
	{
		return;
	}
	iVar0 = func_1028(iParam0, 1);
	if (!func_1049(&(Global_1140484->f_2001[iVar0 /*192*/])))
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
	if (!func_1050((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_1051((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
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

int func_1032(int iParam0)
{
	int iVar0;

	iVar0 = func_1033(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 61)
	{
		return 0;
	}
	return 1;
}

int func_1033(int iParam0, int iParam1)
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

void func_1034(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_1052();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_1053();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_0xA5950E16B8F31052(iVar0, 0, 0);
			GRAPHICS::_0xC5CB91D65852ED7E(func_1054(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_1054(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_1054(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_137(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_1054(iParam0));
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
			func_1056(func_1055(iParam0));
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
			func_1057();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_1049(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1049(16);
			break;
	}
}

int func_1035(int iParam0)
{
	int iVar0;

	iVar0 = func_1036(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_1036(int iParam0, int iParam1)
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

int func_1037(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_1058(iParam0);
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
		iVar64 = func_1007(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), 1);
		if ((Global_1140484->f_30603.f_2900[iVar64 /*31*/])->f_4 != iParam0)
		{
		}
		else if (&Global_1140484->f_30603.f_8871[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_1059(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), (Global_1140484->f_30603.f_8871[iVar65 /*3*/])->f_1))
		{
		}
		else
		{
			Var1 = { func_1060(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/])) };
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

int func_1038(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return 1;
}

void func_1039(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1029(iParam0))
	{
		return;
	}
	iVar0 = func_1028(iParam0, 1);
	if (!func_1049(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = (*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] + 1;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 1;
	if (!func_1050((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_1051((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
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

int func_1040(var uParam0)
{
	var uVar0;

	if (uParam0->f_1 != 0)
	{
		uVar0 = func_1061(794259616, uParam0->f_1, 1, "");
		return uVar0;
	}
	return 1;
}

void func_1041(int iParam0)
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
			func_1052();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_1053();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 2.019411E-41f, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_0xA5950E16B8F31052(iVar0, 1, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_1054(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1054(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1054(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_137(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1054(iParam0));
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
			iVar2 = func_1055(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1062(iParam0, 0));
			func_1063(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1062(iParam0, 1));
			func_1063(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1062(iParam0, 2));
			func_1063(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1062(iParam0, 3));
			func_1063(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_1055(iParam0);
			func_1063(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_1055(iParam0);
			func_1063(iVar2, 4, 1, -1, 0);
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
			func_1064();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_1049(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1049(16);
			break;
	}
}

void func_1042(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_1065(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_1066(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1275573->f_8, sVar1, false, 0, 0);
}

int func_1043(int iParam0)
{
	int iVar0;

	iVar0 = func_982(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_1044(int iParam0)
{
	int iVar0;

	iVar0 = func_982(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_1045(int iParam0)
{
	int iVar0;

	iVar0 = func_982(iParam0, 1);
	if (iVar0 >= 162 && iVar0 <= 169)
	{
		return 1;
	}
	return 0;
}

int func_1046(int iParam0)
{
	int iVar0;

	iVar0 = func_982(iParam0, 1);
	if (iVar0 >= 170 && iVar0 <= 170)
	{
		return 1;
	}
	return 0;
}

int func_1047(int iParam0)
{
	int iVar0;

	iVar0 = func_982(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 160)
	{
		return 1;
	}
	return 0;
}

float func_1048(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_1067(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

int func_1049(int iParam0)
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

int func_1050(int iParam0)
{
	int iVar0;

	iVar0 = func_1051(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_1051(int iParam0, int iParam1)
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

void func_1052()
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

void func_1053()
{
	bool bVar0;

	bVar0 = false;
	if ((Global_1140484->f_18706[12 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 263, bVar0);
}

char* func_1054(int iParam0)
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

int func_1055(int iParam0)
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

void func_1056(int iParam0)
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

void func_1057()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1275573->f_8);
}

int func_1058(int iParam0)
{
	int iVar0;

	if (!func_1035(iParam0))
	{
		return -1;
	}
	iVar0 = func_1036(iParam0, 1);
	return &(Global_1140484->f_30603.f_8667[iVar0 /*3*/]);
}

int func_1059(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_1015(iParam0))
	{
		return 0;
	}
	iVar0 = func_1007(iParam0, 1);
	iVar2 = (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4;
	if (func_1017(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])))
	{
		iVar3 = &Global_1140484->f_30603.f_8667[func_1036(iVar2, 1) /*3*/];
		Var4 = { func_1060(iVar3) };
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
			if (!func_1068() && !func_1069())
			{
				return 0;
			}
			return 1;
		case -2010146101:
			if (!func_1068())
			{
				return 0;
			}
			return 1;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_1014(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			return 1;
		case -2129621195:
			iVar1 = func_1014(iParam1);
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
			iVar1 = func_1014(iParam1);
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (iVar1 != &Global_1275573 && !func_747(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (!func_1070(512, iVar1))
			{
				return 0;
			}
			return 1;
		case -1503245593:
			if (!&Global_1954472->f_1616[8])
			{
				return 0;
			}
			iVar1 = func_1014(iParam1);
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

struct<31> func_1060(int iParam0)
{
	int iVar0;

	iVar0 = func_1007(iParam0, 1);
	return *(Global_1140484->f_30603.f_2900[iVar0 /*31*/]);
}

bool func_1061(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_1067(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_1062(int iParam0, int iParam1)
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

void func_1063(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_1064()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1275573->f_8, 0.7f);
}

char* func_1065(int iParam0)
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

char* func_1066(int iParam0)
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

int func_1067(int iParam0, int iParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_1071(iVar7);
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

bool func_1068()
{
	return Global_1572887->f_6;
}

int func_1069()
{
	if (!&Global_1048577)
	{
		return 0;
	}
	if (!func_88(func_87(0)))
	{
		return 0;
	}
	if (&Global_3145858 != -504335712)
	{
		return 0;
	}
	if (func_1072(Global_524288->f_39792))
	{
		return 1;
	}
	return 0;
}

bool func_1070(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

int func_1071(int iParam0)
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

bool func_1072(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

