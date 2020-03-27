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
	var uLocal_14 = 0;
	var uLocal_15 = 3;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	bool bLocal_43 = false;
	bool bLocal_44 = false;
	int iLocal_45 = 0;
	int iLocal_46[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_56 = false;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_63 = { 0f, 0f, 0f };
	bool bLocal_66 = false;
	bool bLocal_67 = false;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_67 = true;
	iLocal_41 = iScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (func_3(iLocal_41) && iLocal_42 != 7)
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	bool bVar0;
	int iVar1;

	LAW::_0x29CD4896ECB66C12();
	PLAYER::SET_POLICE_RADAR_BLIPS(false);
	MISC::ENABLE_DISPATCH_SERVICE(8, false);
	VOLUME::_DELETE_VOLUME(bLocal_56);
	bVar0 = func_5(PLAYER::PLAYER_ID(), 1, 0, 1);
	iVar1 = 0;
	while (iVar1 < iLocal_46)
	{
		if (func_6(&(iLocal_46[iVar1]), 0))
		{
			if (!bVar0)
			{
				if (iVar1 == 0)
				{
					PED::SET_PED_CONFIG_FLAG(&(iLocal_46[iVar1]), 155, false);
				}
				else
				{
					PED::SET_PED_CONFIG_FLAG(&(iLocal_46[iVar1]), 156, false);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(iLocal_46[iVar1]), joaat("REL_CIVMALE"));
			}
			func_7(iLocal_46[iVar1], 1, 0, 1);
		}
		iVar1++;
	}
	if (PED::DOES_GROUP_EXIST(iLocal_45))
	{
		PED::REMOVE_GROUP(iLocal_45);
	}
}

void func_2()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	iLocal_42 = 1;
	PED::_0xED9582B3DA8F02B4(9);
	switch (iLocal_41)
	{
		case 76:
			vLocal_60 = { -297.8979f, 783.4763f, 117.3506f };
			bVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-266.4598f, 686.257f, 121.6327f, 0f, 0f, 29.92756f, 64.32985f, 90.86015f, 10f, "Main Town");
			bVar1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-301.8687f, 775.7222f, 117.88f, 0f, 0f, 111.0193f, 113.049f, 150.2262f, 41.61763f, "Stockyard");
			bLocal_56 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volTownMob Valentine Agg");
			VOLUME::_0x6E0D3C3F828DA773(bLocal_56, bVar0);
			VOLUME::_0x6E0D3C3F828DA773(bLocal_56, bVar1);
			break;
		case 26:
			vLocal_60 = { -1791.522f, -395.2781f, 159.2376f };
			bLocal_56 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1789.582f, -395.4769f, 153.0447f, 0f, 0f, -30.95195f, 70.53338f, 56.72839f, 31.99624f, "m_volTownMob Strawberry");
			break;
		case 105:
			vLocal_60 = { 1323.98f, -1305.5f, 75.625f };
			bLocal_56 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1334.686f, -1305.615f, 86f, 0f, 0f, 65.0729f, 82.5293f, 147.408f, 20f, "m_volTownMob Rhodes Agg");
			break;
		default:
			bLocal_56 = func_8(iLocal_41);
			vLocal_60 = { func_9(iLocal_41, 1) };
			break;
	}
	iVar2 = 0;
	func_10(&iVar2, 0);
	func_10(&iVar2, 29);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_56, 2, iVar2);
}

int func_3(int iParam0)
{
	if (func_11() != -1)
	{
		return 0;
	}
	if (!func_12(iParam0, 8))
	{
		return 0;
	}
	if (!func_13(Global_35, func_8(iParam0), 1, 0))
	{
		return 0;
	}
	if (!func_5(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		return 0;
	}
	return 1;
}

void func_4()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	switch (iLocal_42)
	{
		case 1:
			if (func_14(Global_35, vLocal_60, 1) < 100f)
			{
				bLocal_44 = func_15(0, 2, -156825994, 1, 0, 0f, 0f, 0f);
				switch (iLocal_41)
				{
					case 76:
						bLocal_43 = joaat("A_M_M_VALDEPUTYRESIDENT_01");
						break;
					case 26:
						bLocal_43 = joaat("A_M_M_STRDEPUTYRESIDENT_01");
						break;
					case 105:
						bLocal_43 = joaat("A_M_M_RHDDEPUTYRESIDENT_01");
						break;
					default:
						bLocal_43 = joaat("A_M_M_VALDEPUTYRESIDENT_01");
						break;
				}
				iLocal_42 = 2;
			}
			else
			{
				iLocal_42 = 6;
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(bLocal_44, false);
			STREAMING::REQUEST_MODEL(bLocal_43, false);
			if ((STREAMING::HAS_MODEL_LOADED(bLocal_44) && STREAMING::HAS_MODEL_LOADED(bLocal_43)) && PED::_0x5E420FF293EE5472())
			{
				iLocal_42 = 4;
			}
			break;
		case 4:
			if (func_16())
			{
				func_17();
				func_18(&uLocal_57);
				iLocal_42 = 5;
			}
			else
			{
				iLocal_42 = 6;
			}
			break;
		case 5:
			if (bLocal_67)
			{
				LAW::_0x7EF2A2FE38D74456(func_19(1), 1);
			}
			fVar0 = 150f;
			iVar3 = 0;
			while (iVar3 < iLocal_46)
			{
				if (func_6(&(iLocal_46[iVar3]), 0))
				{
					iVar2++;
					fVar1 = func_14(&(iLocal_46[iVar3]), Global_36, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
				iVar3++;
			}
			if (iVar2 <= 2)
			{
				bLocal_67 = false;
				LAW::_0x7EF2A2FE38D74456(func_19(1), 0);
			}
			if (iVar2 <= 0 || fVar0 >= 150f)
			{
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < iLocal_46)
				{
					if (func_6(&(iLocal_46[iVar3]), 0))
					{
						func_20(&(iLocal_46[iVar3]));
					}
					iVar3++;
				}
				iLocal_42 = 6;
			}
			break;
		case 6:
			iVar4 = 0;
			while (iVar4 < iLocal_46)
			{
				if (func_6(&(iLocal_46[iVar4]), 0))
				{
					func_7(iLocal_46[iVar4], 1, 1, 1);
				}
				iVar4++;
			}
			LAW::_0x7EF2A2FE38D74456(func_19(1), 0);
			iLocal_42 = 7;
			break;
	}
}

int func_5(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_21(bParam1, bParam2, bParam3);
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

int func_6(bool bParam0, int iParam1)
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
	if (func_22(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return 0;
		}
	}
	if (func_22(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(bParam0))
		{
			return 0;
		}
	}
	if (func_22(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_22(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return 0;
		}
	}
	if (func_22(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return 0;
		}
	}
	if (func_22(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(bParam0))
		{
			return 0;
		}
	}
	if (func_22(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return 0;
		}
	}
	if (func_22(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(bParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_7(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*bParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*bParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*bParam0, false);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*bParam0);
		}
		PED::SET_PED_KEEP_TASK(*bParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*bParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(bParam0);
}

int func_8(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

Vector3 func_9(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_23(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1888801)[iParam0 /*35*/])->f_3))
	{
		vVar0 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iParam0 /*35*/])->f_3) };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

void func_10(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

int func_11()
{
	return Global_1572887->f_12;
}

bool func_12(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

bool func_13(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, bParam1, bParam2, iParam3);
}

float func_14(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, vector3 vParam5)
{
	if (!func_24(iParam0))
	{
		return 0;
	}
	if (func_25(iParam0) == -1)
	{
		return 0;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(func_25(iParam0), iParam1, iParam2, bParam3, bParam4, vParam5);
}

int func_16()
{
	float fVar0;

	if (!func_26(iLocal_41, &vLocal_63, bLocal_43))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, vLocal_63);
	if (fVar0 > 10000f)
	{
		return 0;
	}
	if (fVar0 < 1225f)
	{
		return 0;
	}
	if (CAM::IS_SPHERE_VISIBLE(vLocal_63, 2f) || !ENTITY::WOULD_ENTITY_BE_OCCLUDED(bLocal_43, vLocal_63, true))
	{
		return 0;
	}
	bLocal_66 = VOLUME::_CREATE_VOLUME_CYLINDER(vLocal_63, 0f, 0f, 0f, 3f, 3f, 3f);
	func_27(bLocal_66, 0, 0, 0, 0, 0);
	func_28(bLocal_66, 0);
	return 1;
}

void func_17()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;

	if (!PED::DOES_GROUP_EXIST(iLocal_45))
	{
		iLocal_45 = PED::CREATE_GROUP(1);
		PED::SET_GROUP_FORMATION_SPACING(iLocal_45, 5f, 1f, 2f);
		PED::SET_GROUP_FORMATION(iLocal_45, 8);
		PED::_0x89E59DBD15E21177(iLocal_45, 0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_46)
	{
		vVar1 = { func_29(vLocal_63, 3f, 1f) };
		if (iVar0 == 0)
		{
			iLocal_46[iVar0] = func_30(bLocal_43, vVar1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iLocal_46[iVar0]), 1, false);
			PED::SET_COMBAT_FLOAT(&(iLocal_46[iVar0]), 48, 8f);
			if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(&(iLocal_46[iVar0]), joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
			else
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(&(iLocal_46[iVar0]), joaat("WEAPON_REPEATER_CARBINE"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
		}
		else
		{
			iLocal_46[iVar0] = func_30(bLocal_44, vVar1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			if (func_6(&(iLocal_46[iVar0]), 0))
			{
				if ((iVar0 % 4) == 0 && (func_32(func_31()) >= 22 || func_32(func_31()) <= 4))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(&(iLocal_46[iVar0]), joaat("WEAPON_REVOLVER_CATTLEMAN"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					WEAPON::_GIVE_WEAPON_TO_PED_2(&(iLocal_46[iVar0]), joaat("WEAPON_MELEE_TORCH"), 999, true, false, 1, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				else
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(&(iLocal_46[iVar0]), joaat("WEAPON_REPEATER_CARBINE"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
		}
		if (func_6(&(iLocal_46[iVar0]), 0))
		{
			PED::_0xFC3DB99C8144CD81(&(iLocal_46[iVar0]), bLocal_56, 0, false, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iLocal_46[iVar0]), 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iLocal_46[iVar0]), 58, true);
			PED::_0x815C0074A1BC0D93(&(iLocal_46[iVar0]), 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(iLocal_46[iVar0]), joaat("REL_TOWN_MOB"));
			PED::REGISTER_TARGET(&(iLocal_46[iVar0]), Global_35, 1);
			PED::SET_PED_ACCURACY(&(iLocal_46[iVar0]), 60);
			PED::SET_PED_CONFIG_FLAG(&(iLocal_46[iVar0]), 279, true);
			if (iVar0 == 0)
			{
				PED::SET_PED_AS_GROUP_LEADER(&(iLocal_46[iVar0]), iLocal_45, false);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_46[iVar0]), 155, true);
				COMPANION::_0xCBD9EC60495C728C(iLocal_45);
				COMPANION::_0x0F1CD8CA9E65D5F6(iLocal_45, -1327202964);
			}
			else
			{
				PED::SET_PED_AS_GROUP_MEMBER(&(iLocal_46[iVar0]), iLocal_45);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_46[iVar0]), 156, true);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_46[iVar0]), 152, true);
			}
			iVar4 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), &(iLocal_46[iVar0]));
			MAP::_0x662D364ABF16DE2F(iVar4, 2096805056);
			MAP::_0x662D364ABF16DE2F(iVar4, 1086257954);
			PED::_0x1E017404784AA6A3(&(iLocal_46[iVar0]), joaat("town_mob"));
			PED::SET_PED_COMBAT_MOVEMENT(&(iLocal_46[iVar0]), 2);
			PED::SET_PED_COMBAT_RANGE(&(iLocal_46[iVar0]), 1);
			PED::_0x9238A3D970BBB0A9(&(iLocal_46[iVar0]), 2018638702);
			iVar5 = 0;
			func_33(&iVar5, 15);
			func_33(&iVar5, 16);
			COMPANION::_0xDEB369F6AD168C58(&(iLocal_46[iVar0]), iVar5);
		}
		iVar0++;
	}
}

void func_18(var uParam0)
{
	func_34(uParam0, 0f);
}

int func_19(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 1;
			break;
		case 6:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 32;
			break;
		case 7:
			iVar0 = 16;
			break;
		case 8:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

void func_20(bool bParam0)
{
	if (!func_6(Global_35, 0))
	{
		return;
	}
	if (!func_6(bParam0, 0))
	{
		return;
	}
	TASK::TASK_SMART_FLEE_PED(bParam0, Global_35, 500f, -1, 0, 3f, false);
	func_35(bParam0);
	func_7(&bParam0, 1, 1, 1);
}

int func_21(bool bParam0, bool bParam1, bool bParam2)
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

bool func_22(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_23(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_24(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

int func_25(int iParam0)
{
	int iVar0;

	if (!func_24(iParam0))
	{
		return -1;
	}
	iVar0 = func_37(func_36());
	if (iVar0 != 1 && iVar0 != 2)
	{
		return Global_1898147[iParam0];
	}
	return Global_1898130[iParam0];
}

int func_26(int iParam0, var uParam1, bool bParam2)
{
	vector3 vVar0[4];
	bool bVar13;
	float fVar14;
	int iVar15;
	float fVar16;

	bVar13 = false;
	switch (iParam0)
	{
		case 76:
			*(vVar0[0 /*3*/]) = { -344.5539f, 730.0873f, 116.3921f };
			*(vVar0[1 /*3*/]) = { -281.1094f, 847.3516f, 118.6537f };
			*(vVar0[2 /*3*/]) = { -361.3619f, 809.3384f, 114.9999f };
			*(vVar0[3 /*3*/]) = { -236.5398f, 702.7105f, 112.5291f };
			break;
		case 26:
			*(vVar0[0 /*3*/]) = { -1761.082f, -398.9954f, 154.8396f };
			*(vVar0[1 /*3*/]) = { -1795.016f, -366.7957f, 160.3465f };
			*(vVar0[2 /*3*/]) = { -1834.661f, -433.5942f, 158.4428f };
			*(vVar0[3 /*3*/]) = { -1796.619f, -448.2619f, 156.146f };
			break;
		case 105:
			*(vVar0[0 /*3*/]) = { 1308.71f, -1258.847f, 76.3559f };
			*(vVar0[1 /*3*/]) = { 1317.515f, -1303.441f, 75.2424f };
			*(vVar0[2 /*3*/]) = { 1346.54f, -1354.946f, 77.4856f };
			*(vVar0[3 /*3*/]) = { 1398.272f, -1314.57f, 76.6552f };
			break;
		default:
			*uParam1 = { func_9(iParam0, 1) };
			return 0;
	}
	*uParam1 = { *(vVar0[0 /*3*/]) };
	fVar14 = 999999f;
	iVar15 = 0;
	while (iVar15 < 4)
	{
		if (!CAM::IS_SPHERE_VISIBLE(*(vVar0[iVar15 /*3*/]), 2f) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(bParam2, *(vVar0[iVar15 /*3*/]), true))
		{
			fVar16 = BUILTIN::VDIST2(Global_36, *(vVar0[iVar15 /*3*/]));
			if (bVar13)
			{
				bVar13 = false;
				*uParam1 = { *(vVar0[iVar15 /*3*/]) };
				fVar16 = fVar14;
			}
			else if (fVar16 < fVar14 && !fVar16 < 1225f)
			{
				*uParam1 = { *(vVar0[iVar15 /*3*/]) };
				fVar16 = fVar14;
			}
		}
		else if (iVar15 == 0)
		{
			bVar13 = true;
		}
		iVar15++;
	}
	return 1;
}

void func_27(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(bParam0, iVar0);
}

void func_28(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 512;
	if (iParam1 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam1 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam1 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam1 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam1 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::_0x2FCD528A397E5C88(bParam0, iVar0);
}

Vector3 func_29(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_38(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

bool func_30(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;

	bVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	func_39(bVar0, bParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

int func_31()
{
	return &Global_1899515;
}

int func_32(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

void func_33(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

void func_34(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_40() - fParam1);
	func_41(uParam0, 1);
	func_42(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_35(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(bParam0);
	func_43(&iVar0);
}

int func_36()
{
	return Global_1894899->f_2;
}

int func_37(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

Vector3 func_38(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

void func_39(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_44(bParam1))
		{
			func_45(bParam0, 41788943);
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
			func_46(bParam0, 0, 1);
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
			func_47(bParam0, 0);
			bVar0 = true;
		}
		func_48(bParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
	}
}

float func_40()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_41(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_42(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_43(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

int func_44(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CS_sistercalderon"):
		case joaat("CS_strsheriff_01"):
		case joaat("CS_mud2bigguy"):
		case joaat("CS_rainsfall"):
		case joaat("CS_penelopebraithwaite"):
		case joaat("CS_SWAMPWEIRDOSONNY"):
		case joaat("CS_UNIDUSTERJAIL_01"):
		case joaat("CS_IANGRAY"):
		case joaat("CS_TINYHERMIT"):
		case joaat("CS_TimothyDonahue"):
		case joaat("CS_PrincessIsabeau"):
		case joaat("CS_leviticuscornwall"):
		case joaat("CS_DIDSBURY"):
		case joaat("CS_FEATHERSTONCHAMBERS"):
		case joaat("CS_FeatsOfStrength"):
		case joaat("CS_bandpianist"):
		case joaat("CS_EscapeArtistAssistant"):
		case joaat("CS_garethbraithwaite"):
		case joaat("CS_creoleguy"):
		case joaat("CS_leighgray"):
		case joaat("CS_strawberryoutlaw_02"):
		case joaat("cs_GLORIA"):
		case joaat("CS_warvet"):
		case joaat("CS_jockgray"):
		case joaat("CS_DavidGeddes"):
		case joaat("CS_GuidoMartelli"):
		case joaat("CS_DUNCANGEDDES"):
		case joaat("CS_DusterInformant_01"):
		case joaat("CS_PinkertonGoon"):
		case joaat("CS_Mickey"):
		case joaat("CS_twinbrother_02"):
		case joaat("CS_HestonJameson"):
		case joaat("CS_strdeputy_01"):
		case joaat("CS_abe"):
		case joaat("CS_oddfellowspinhead"):
		case joaat("CS_SwampFreak"):
		case joaat("CS_mradler"):
		case joaat("CS_AberdeenPigFarmer"):
		case joaat("CS_hobartcrawley"):
		case joaat("CS_FORMYARTBIGWOMAN"):
		case joaat("CS_NorrisForsythe"):
		case joaat("CS_Jules"):
		case joaat("CS_TomDickens"):
		case joaat("CS_geraldbraithwaite"):
		case joaat("CS_PAYTAH"):
		case joaat("CS_cancan_03"):
		case joaat("CS_GrizzledJon"):
		case joaat("CS_WROBEL"):
		case joaat("CS_Meredith"):
		case joaat("CS_creepyoldlady"):
		case joaat("CS_nbxreceptionist_01"):
		case joaat("CS_NbxPoliceChiefFormal"):
		case joaat("CS_CornwallTrainConductor"):
		case joaat("CS_rhodeputy_01"):
		case joaat("CS_DrMalcolmMacIntosh"):
		case joaat("CS_leon"):
		case joaat("CS_SheriffOwens"):
		case joaat("CS_SDDOCTOR_01"):
		case joaat("CS_SCOTTGRAY"):
		case joaat("CS_cancan_01"):
		case joaat("CS_CREOLECAPTAIN"):
		case joaat("CS_BrontesButler"):
		case joaat("CS_JANSON"):
		case joaat("CS_forgivenwife_01"):
		case joaat("CS_TigerHandler"):
		case joaat("CS_frenchartist"):
		case joaat("CS_genstorymale"):
		case joaat("CS_clay"):
		case joaat("CS_strdeputy_02"):
		case joaat("CS_famousgunslinger_03"):
		case joaat("CS_BivCoachDriver"):
		case joaat("CS_braithwaitebutler"):
		case joaat("CS_CLEET"):
		case joaat("CS_Joe"):
		case joaat("CS_slavecatcher"):
		case joaat("CS_braithwaitemaid"):
		case joaat("CS_twingroupie_02"):
		case joaat("CS_mrsgeddes"):
		case joaat("CS_samaritan"):
		case joaat("CS_EXCONFEDINFORMANT"):
		case joaat("CS_FRENCHMAN_01"):
		case joaat("CS_bandsinger"):
		case joaat("CS_baptiste"):
		case joaat("CS_ANGUSGEDDES"):
		case joaat("CS_MysteriousStranger"):
		case joaat("CS_famousgunslinger_01"):
		case joaat("CS_bartholomewbraithwaite"):
		case joaat("CS_MIXEDRACEKID"):
		case joaat("CS_BeatenUpCaptain"):
		case joaat("CS_edgarross"):
		case joaat("CS_twingroupie_01"):
		case joaat("CS_MrsWeathers"):
		case joaat("CS_JAMIE"):
		case joaat("CS_KarensJohn_01"):
		case joaat("CS_thomasdown"):
		case joaat("CS_obediahhinton"):
		case joaat("CS_AgnesDowd"):
		case joaat("cs_CAVEHERMIT"):
		case joaat("CS_brynntildon"):
		case joaat("CS_GermanSon"):
		case joaat("CS_brendacrawley"):
		case joaat("CS_colfavours"):
		case joaat("CS_rhodeskidnapvictim"):
		case joaat("CS_exconfedsleader_01"):
		case joaat("CS_cancan_04"):
		case joaat("CS_TownCrier"):
		case joaat("CS_famousgunslinger_04"):
		case joaat("CS_dalemaroney"):
		case joaat("CS_angryhusband"):
		case joaat("CS_LillianPowell"):
		case joaat("CS_AndersHelgerson"):
		case joaat("CS_POORJOE"):
		case joaat("CS_braithwaiteservant"):
		case joaat("CS_brotherdorkins"):
		case joaat("CS_albertmason"):
		case joaat("CS_FamousGunslinger_05"):
		case joaat("CS_balloonoperator"):
		case joaat("CS_albertcakeesquire"):
		case joaat("CS_MrsFellows"):
		case joaat("CS_CanCanMan_01"):
		case joaat("CS_POISONWELLSHAMAN"):
		case joaat("CS_cancan_02"):
		case joaat("CS_MeredithsMother"):
		case joaat("CS_ANGEL"):
		case joaat("CS_archerfordham"):
		case joaat("CS_DisguisedDuster_01"):
		case joaat("CS_ChelonianMaster"):
		case joaat("CS_twinbrother_01"):
		case joaat("CS_GermanDaughter"):
		case joaat("CS_LemiuxAssistant"):
		case joaat("CS_creoledoctor"):
		case joaat("cs_crackpotRobot"):
		case joaat("CS_bandbassist"):
		case joaat("CS_genstoryfemale"):
		case joaat("CS_marylinton"):
		case joaat("CS_ValPrayingMan"):
		case joaat("CS_JOHNTHEBAPTISINGMADMAN"):
		case joaat("CS_Mrs_Calhoun"):
		case joaat("CS_theodorelevin"):
		case joaat("CS_NicholasTimmins"):
		case joaat("CS_DisguisedDuster_03"):
		case joaat("CS_DinoBonesLady"):
		case joaat("CS_beaugray"):
		case joaat("CS_strawberryoutlaw_01"):
		case joaat("CS_crackpotinventor"):
		case joaat("CS_hercule"):
		case joaat("CS_GAVIN"):
		case joaat("CS_LeviSimon"):
		case joaat("CS_LondonderrySon"):
		case joaat("CS_captainmonroe"):
		case joaat("CS_famousgunslinger_02"):
		case joaat("CS_MrsLondonderry"):
		case joaat("CS_SOOTHSAYER"):
		case joaat("CS_tavishgray"):
		case joaat("CS_JoeButler"):
		case joaat("CS_banddrummer"):
		case joaat("CS_lillymillet"):
		case joaat("CS_ansel_atherton"):
		case joaat("CS_RhoDeputy_02"):
		case joaat("CS_EDMUNDLOWRY"):
		case joaat("CS_DisguisedDuster_02"):
		case joaat("CS_Magnifico"):
		case joaat("CS_ARTAPPRAISER"):
		case joaat("CS_forgivenhusband_01"):
		case joaat("CS_ReverendFortheringham"):
		case joaat("CS_DaveyCallender"):
		case joaat("CS_DESMOND"):
		case joaat("CS_adamgray"):
		case joaat("CS_jimcalloway"):
		case joaat("CS_SDSALOONDRUNK_01"):
		case joaat("CS_NbxDrunk"):
		case joaat("CS_GermanMother"):
		case joaat("CS_ringmaster"):
		case joaat("cs_LUCANAPOLI"):
		case joaat("CS_RhodesAssistant"):
		case joaat("CS_AberdeenSister"):
		case joaat("CS_NbxExecuted"):
		case joaat("CS_FamousGunslinger_06"):
		case joaat("CS_JohnWeathers"):
		case joaat("CS_professorbell"):
		case joaat("CS_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_45(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_49(bParam0, iParam1))
		{
			if (func_50(bParam0, iParam1))
			{
				if (func_51(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_52(bParam0);
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

void func_46(bool bParam0, int iParam1, bool bParam2)
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

void func_47(bool bParam0, bool bParam1)
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

void func_48(bool bParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(bParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(bParam0, 41611, 1f);
	}
}

bool func_49(bool bParam0, int iParam1)
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

int func_50(bool bParam0, int iParam1)
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

bool func_51(bool bParam0, int iParam1)
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
	if (!func_49(bParam0, iVar0))
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

void func_52(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

