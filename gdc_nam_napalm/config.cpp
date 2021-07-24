class CfgPatches
{
	class gdc_nam_napalm
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {"vn_weapons","weapons_f_vietnam_c","weapons_f_vietnam","weapons_v_f_vietnam","weapons_v_f_vietnam_c"};
	};
};

class CfgAmmo
{
	class vn_bomb_500_blu1b_fb_ammo;
	class gdc_nam_ammo_napalm_lg: vn_bomb_500_blu1b_fb_ammo
	{
		laserLock = 1;
		autoSeekTarget = 1;
		lockSeekRadius = 500;
		lockType = 1; //0
	};
};
class CfgMagazines
{
	class vn_bomb_f4_out_500_blu1b_fb_mag_x4;
	class gdc_nam_magazine_napalm_lg: vn_bomb_f4_out_500_blu1b_fb_mag_x4
	{
		ammo = "gdc_nam_ammo_napalm_lg";
		initSpeed = 150;
	};
};
class CfgWeapons
{
	class vn_bomb_blu1b_500_fb_launcher;
	class gdc_nam_weapon_napalm_lg: vn_bomb_blu1b_500_fb_launcher
	{
		magazines[] = {"gdc_nam_magazine_napalm_lg"};
		canLock = 2;
		weaponLockSystem = 4;
		initSpeed = 150;
	};
};