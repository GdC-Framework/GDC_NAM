/*
Exporter une composition :
1 - sélectionnez les objets de la composition dans 3DEN
2 - ouvrez la console de debug dans 3DEN
3 - exécutez la commande ci dessous :
[(screenToWorld [0.5,0.5]),(get3DENSelected "object")] call BIS_fnc_exportCfgGroups;
Le premier paramètre correspond au centre de la compositions. La position des objets est calculée en fonction de ce centre. Ce centre correspond à la position du pointeur souris au moment où vous cliquez pour créer la composition.
Dans le cas ci-dessus, le centre choisi est le centre de votre écran.
La composition est désormais exportée dans votre presse papier windows
4 - collez le contenu du presse papier au bon endroit dans la config.
*/


class CfgPatches
{
	class gdc_nam_compositions
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgGroups
{
	class Empty
	{
		class gdc_nam
		{
			name = "GDC NAM";
			class gdc_nam_fob // Catégorie de classement (possible d'en ajouter d'autres)
			{
				name = "FOBs"; // Nom de la catégorie
				class gdc_nam_fob_1
				{
					name = "FOB Sparfell 1";
					side = 8;
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					class Object0	{side = 8; vehicle = "Land_vn_b_trench_firing_03"; rank = ""; position[] = {-3.35645,-16.3389,0}; dir = 184.15;};
					class Object1	{side = 8; vehicle = "Land_vn_b_trench_bunker_01_03"; rank = ""; position[] = {-12.0762,4.31299,0}; dir = 183.72;};
					class Object2	{side = 8; vehicle = "vn_flag_usa_dmg"; rank = ""; position[] = {0.130859,-0.0576172,0}; dir = 0;};
					class Object3	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {-11.0127,-13.8286,0}; dir = 70.8297;};
					class Object4	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {15.3613,-0.190918,0}; dir = 318.156;};
					class Object5	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {15.543,10.3286,0}; dir = 270.168;};
					class Object6	{side = 8; vehicle = "Land_vn_b_trench_bunker_04_01"; rank = ""; position[] = {6.25293,6.17871,0}; dir = 271.751;};
					class Object7	{side = 8; vehicle = "Land_vn_b_trench_firing_05"; rank = ""; position[] = {-13.5264,-6.15527,0}; dir = 254.593;};
					class Object8	{side = 8; vehicle = "Land_vn_b_trench_firing_04"; rank = ""; position[] = {-12.1504,12.6123,0}; dir = 181.135;};
					class Object9	{side = 8; vehicle = "Land_vn_b_trench_bunker_02_01"; rank = ""; position[] = {-3.97656,-8.82764,0}; dir = 90.362;};
					class Object10	{side = 8; vehicle = "Land_vn_b_trench_90_02"; rank = ""; position[] = {3.20801,19.0483,0}; dir = 208.147;};
					class Object11	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-1.62598,3.63721,0}; dir = 340.516;};
					class Object12	{side = 8; vehicle = "Land_vn_b_trench_end_01"; rank = ""; position[] = {-7.2793,11.6221,0}; dir = 198.19;};
					class Object13	{side = 8; vehicle = "Land_vn_b_trench_firing_05"; rank = ""; position[] = {11.9824,-9.16699,0}; dir = 39.1782;};
					class Object14	{side = 8; vehicle = "Land_vn_b_trench_90_01"; rank = ""; position[] = {2.01758,-16.5122,0}; dir = 0;};
					class Object15	{side = 8; vehicle = "Land_vn_b_trench_05_03"; rank = ""; position[] = {9.88281,15.1279,0}; dir = 212.509;};
					class Object16	{side = 8; vehicle = "Land_vn_b_trench_firing_03"; rank = ""; position[] = {-1.77539,12.8428,0}; dir = 301.412;};
					class Object17	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-17.6924,7.94434,0}; dir = 93.8125;};
					class Object18	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-18.4941,-0.569824,0}; dir = 93.8125;};
					class Object19	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-17.9023,-8.40967,0}; dir = 64.3093;};
					class Object20	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-13.7686,-15.4731,0}; dir = 38.678;};
					class Object21	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {8.00684,19.1846,0}; dir = 200.412;};
					class Object22	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {17.0605,13.1123,0}; dir = 230.404;};
					class Object23	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {19.1689,2.70166,0}; dir = 268.774;};
					class Object24	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {17.7793,-5.29492,0}; dir = 284.779;};
					class Object25	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-0.0146484,-19.4639,0}; dir = 358.638;};
					class Object26	{side = 8; vehicle = "vn_b_ammobox_supply_01"; rank = ""; position[] = {-2.23535,1.56494,0}; dir = 88.5391;};
					class Object27	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-1.60742,-15.9297,0}; dir = 0;};
					class Object28	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {3.375,17.666,0}; dir = 0;};
					class Object29	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {6.97754,4.65137,0}; dir = 0;};
					class Object30	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-0.744141,0.702148,0}; dir = 0;};
				};
				class gdc_nam_fob_2
				{
					name = "FOB Sparfell 2";
					side = 8;
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					class Object0	{side = 8; vehicle = "Land_vn_b_trench_firing_05"; rank = ""; position[] = {13.5273,7.89453,0}; dir = 328.09;};
					class Object1	{side = 8; vehicle = "vn_flag_usa_dmg"; rank = ""; position[] = {-0.015625,-0.043457,0}; dir = 0;};
					class Object2	{side = 8; vehicle = "Land_vn_b_trench_firing_01"; rank = ""; position[] = {-1.03418,13.1206,9.53674e-007}; dir = 269.878;};
					class Object3	{side = 8; vehicle = "Land_vn_b_trench_bunker_02_01"; rank = ""; position[] = {1.18848,-7.83887,0}; dir = 89.7795;};
					class Object4	{side = 8; vehicle = "Land_vn_b_trench_90_01"; rank = ""; position[] = {7.71191,-14.2852,0}; dir = 359.222;};
					class Object5	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {-4.77344,-14.77,0}; dir = 42.9641;};
					class Object6	{side = 8; vehicle = "Land_vn_b_trench_firing_03"; rank = ""; position[] = {3.2207,-14.1982,0}; dir = 0.220537;};
					class Object7	{side = 8; vehicle = "Land_vn_b_trench_firing_04"; rank = ""; position[] = {-16.3945,-2.3916,0}; dir = 227.661;};
					class Object8	{side = 8; vehicle = "Land_vn_b_trench_05_03"; rank = ""; position[] = {-13.3926,-5.84619,0}; dir = 48.6074;};
					class Object9	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-10.3193,-9.33887,0}; dir = 228.292;};
					class Object10	{side = 8; vehicle = "Land_vn_b_trench_cross_02"; rank = ""; position[] = {13.1514,-1.57813,0}; dir = 94.5516;};
					class Object11	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {6.07813,-1.8501,0}; dir = 90.7565;};
					class Object12	{side = 8; vehicle = "Land_vn_b_foxhole_01"; rank = ""; position[] = {3.78809,8.04785,0}; dir = 184.506;};
					class Object13	{side = 8; vehicle = "Land_vn_b_trench_45_02"; rank = ""; position[] = {8.43945,14.5684,0}; dir = 227.169;};
					class Object14	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {4.44922,13.0898,0}; dir = 271.002;};
					class Object15	{side = 8; vehicle = "Land_vn_b_trench_90_02"; rank = ""; position[] = {-14.4395,6.87451,0}; dir = 177.627;};
					class Object16	{side = 8; vehicle = "Land_vn_b_trench_05_03"; rank = ""; position[] = {-9.76074,2.45654,0}; dir = 311.938;};
					class Object17	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-16.167,-9.5,0}; dir = 48.7749;};
					class Object18	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-10.0664,-14.0396,0}; dir = 34.2943;};
					class Object19	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-3.39063,-18.063,0}; dir = 0.839905;};
					class Object20	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {4.90918,-16.8901,0}; dir = 352.834;};
					class Object21	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {16.9717,-7.40625,0}; dir = 98.7829;};
					class Object22	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-12.7891,14.2456,0}; dir = 133.968;};
					class Object23	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {5.92285,18.3604,0}; dir = 188.766;};
					class Object24	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {12.5068,14.3965,0}; dir = 209.367;};
					class Object25	{side = 8; vehicle = "vn_b_ammobox_supply_01"; rank = ""; position[] = {3.56152,-1.11768,0}; dir = 88.5391;};
					class Object26	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {11.8496,1.57715,0}; dir = 0;};
					class Object27	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {1.12109,-13.8301,0}; dir = 0;};
					class Object28	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-5.33691,-0.1875,0}; dir = 0;};
					class Object29	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-3.51953,12.8345,0}; dir = 0;};
				};
				class gdc_nam_fob_3
				{
					name = "FOB Sparfell 3";
					side = 8;
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					class Object0	{side = 8; vehicle = "Land_vn_b_trench_05_03"; rank = ""; position[] = {-0.545898,-15.9546,0}; dir = 341.797;};
					class Object1	{side = 8; vehicle = "vn_flag_usa_dmg"; rank = ""; position[] = {0.101563,-0.164063,0}; dir = 0;};
					class Object2	{side = 8; vehicle = "Land_vn_b_trench_bunker_01_03"; rank = ""; position[] = {-5.37305,-6.44336,0}; dir = 144.56;};
					class Object3	{side = 8; vehicle = "Land_vn_b_trench_bunker_03_04"; rank = ""; position[] = {8.97266,-1.47021,0}; dir = 0;};
					class Object4	{side = 8; vehicle = "Land_vn_b_trench_firing_04"; rank = ""; position[] = {16.916,-6.28955,0}; dir = 296.144;};
					class Object5	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {12.4033,-12.5923,0}; dir = 357.638;};
					class Object6	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {3.99023,-14.0889,0}; dir = 156.379;};
					class Object7	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {-8.28027,-16.3472,0}; dir = 50.8717;};
					class Object8	{side = 8; vehicle = "Land_vn_b_trench_05_03"; rank = ""; position[] = {-6.6875,13.8716,0}; dir = 51.1881;};
					class Object9	{side = 8; vehicle = "Land_vn_b_trench_firing_05"; rank = ""; position[] = {-12.918,-10.1279,0}; dir = 235.575;};
					class Object10	{side = 8; vehicle = "Land_vn_b_trench_firing_03"; rank = ""; position[] = {7.42285,15.6138,0}; dir = 29.2209;};
					class Object11	{side = 8; vehicle = "Land_vn_b_trench_firing_04"; rank = ""; position[] = {11.2705,13.479,0}; dir = 28.8535;};
					class Object12	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {-13.5527,9.63086,0}; dir = 145.739;};
					class Object13	{side = 8; vehicle = "Land_vn_b_trench_45_02"; rank = ""; position[] = {0.147461,17.4707,0}; dir = 186.01;};
					class Object14	{side = 8; vehicle = "Land_vn_b_trench_firing_03"; rank = ""; position[] = {-14.6055,2.19727,0}; dir = 278.831;};
					class Object15	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-14.4619,-2.59277,0}; dir = 255.672;};
					class Object16	{side = 8; vehicle = "Land_vn_b_trench_45_02"; rank = ""; position[] = {-2.99512,5.29053,0}; dir = 151.677;};
					class Object17	{side = 8; vehicle = "Land_vn_b_trench_end_01"; rank = ""; position[] = {3.20508,-4.25049,0}; dir = 0;};
					class Object18	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-19.1748,-0.877441,0}; dir = 82.5222;};
					class Object19	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {18.7529,1.34521,0}; dir = 269.824;};
					class Object20	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {17.7861,9.12451,0}; dir = 248.221;};
					class Object21	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {0.683594,20.502,0.0687637}; dir = 165.738;};
					class Object22	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {5.21973,-18.4902,0}; dir = 334.921;};
					class Object23	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-2.54883,-19.3232,0.0752897}; dir = 355.613;};
					class Object24	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-13.7432,12.7734,0}; dir = 125.031;};
					class Object25	{side = 8; vehicle = "vn_b_ammobox_supply_01"; rank = ""; position[] = {-1.30762,2.8291,0}; dir = 185.05;};
					class Object26	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {3.10645,5.51074,0}; dir = 0;};
					class Object27	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-9.03613,3.12598,0}; dir = 0;};
					class Object28	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {3.47949,-10.4453,0}; dir = 0;};
				};
				class gdc_nam_fob_4
				{
					name = "FOB Sparfell 4";
					side = 8;
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					class Object0	{side = 8; vehicle = "vn_flag_usa_dmg"; rank = ""; position[] = {-0.0800781,0.0200195,0}; dir = 0;};
					class Object1	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {8.34766,15.4614,0}; dir = 238.992;};
					class Object2	{side = 8; vehicle = "Land_vn_b_trench_firing_03"; rank = ""; position[] = {0.513672,16.7324,0}; dir = 184.15;};
					class Object3	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {-6.97266,16.2588,0}; dir = 174.433;};
					class Object4	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {11.9785,-10.9146,0}; dir = 355.361;};
					class Object5	{side = 8; vehicle = "Land_vn_b_trench_firing_05"; rank = ""; position[] = {16.4043,0.0610352,0}; dir = 269.323;};
					class Object6	{side = 8; vehicle = "Land_vn_b_trench_05_03"; rank = ""; position[] = {-16.0684,-2.19092,0}; dir = 2.25142;};
					class Object7	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {7.57422,-16.4482,0}; dir = 157.3;};
					class Object8	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {13.7246,-11.5762,0}; dir = 144.016;};
					class Object9	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {14.6543,13.147,0}; dir = 56.3428;};
					class Object10	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {7.75,17.7041,0}; dir = 27.5018;};
					class Object11	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-13.4688,-12.3271,0}; dir = 38.678;};
					class Object12	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-18.5264,1.34961,0}; dir = 277.9;};
					class Object13	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-17.0723,9.10791,0}; dir = 306.632;};
					class Object14	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-8.74414,17.1582,0}; dir = 326.235;};
					class Object15	{side = 8; vehicle = "Land_vn_hootch_02_01"; rank = ""; position[] = {0.974609,4.25488,9.53674e-007}; dir = 0;};
					class Object16	{side = 8; vehicle = "Land_vn_latrine_01"; rank = ""; position[] = {-14.9785,2.58936,0}; dir = 275.734;};
					class Object17	{side = 8; vehicle = "Land_vn_b_trench_firing_01"; rank = ""; position[] = {-3.07617,-10.4785,9.53674e-007}; dir = 184.889;};
					class Object18	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {15.916,-4.75537,0}; dir = 105.151;};
					class Object19	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {12.3203,8.80811,0}; dir = 64.3555;};
					class Object20	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {10.7715,1.80322,0}; dir = 20.1159;};
					class Object21	{side = 8; vehicle = "Land_vn_woodenshelter_01_f"; rank = ""; position[] = {7.40039,-4.18164,9.53674e-007}; dir = 91.9931;};
					class Object22	{side = 8; vehicle = "Land_vn_sandbagbarricade_01_half_f"; rank = ""; position[] = {9.24805,-5.15918,0}; dir = 93.4424;};
					class Object23	{side = 8; vehicle = "Land_vn_sandbagbarricade_01_half_f"; rank = ""; position[] = {9.19141,-2.96338,0}; dir = 275.769;};
					class Object24	{side = 8; vehicle = "Land_vn_sandbagbarricade_01_half_f"; rank = ""; position[] = {8.22461,-6.36719,0}; dir = 2.11613;};
					class Object25	{side = 8; vehicle = "Land_vn_sandbagbarricade_01_half_f"; rank = ""; position[] = {6.13477,-6.48096,0}; dir = 181.216;};
					class Object26	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-15.5996,2.27002,0}; dir = 279.306;};
					class Object27	{side = 8; vehicle = "Land_vn_b_trench_firing_04"; rank = ""; position[] = {-11.584,10.1357,0}; dir = 126.893;};
					class Object28	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-14.7285,5.39209,0}; dir = 304.451;};
					class Object29	{side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {-4.16992,7.87891,0}; dir = 89.8367;};
					class Object30	{side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {-4.11719,2.87842,0}; dir = 89.8367;};
					class Object31	{side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {4.79102,7.44336,0}; dir = 89.8367;};
					class Object32	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-15.4121,-5.93359,0}; dir = 243.888;};
					class Object33	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-12.9902,-9.53857,0}; dir = 226.66;};
					class Object34	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-9.91406,-11.8882,0}; dir = 206.207;};
					class Object35	{side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {-8.49609,-1.32471,0}; dir = 261.372;};
					class Object36	{side = 8; vehicle = "Land_vn_tyres_f"; rank = ""; position[] = {-9.50977,-11.8643,0}; dir = 200.082;};
					class Object37	{side = 8; vehicle = "Land_vn_bulldozer_01_wreck_f"; rank = ""; position[] = {-11.8008,-6.59766,0}; dir = 130.606;};
					class Object38	{side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {4.76953,2.66113,0}; dir = 89.8367;};
					class Object39	{side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {2.81055,10.2871,0}; dir = 1.56731;};
					class Object40	{side = 8; vehicle = "vn_b_ammobox_supply_01"; rank = ""; position[] = {1.99219,-4.14014,0}; dir = 88.5391;};
					class Object41	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-13.4648,3.81152,0}; dir = 0;};
					class Object42	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-0.859375,0.216309,0}; dir = 0;};
					class Object43	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {15.7129,-3.38574,0}; dir = 0;};
					class Object44	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-3.14258,-12.9385,0}; dir = 0;};
				};
				class gdc_nam_fob_5
				{
					name = "FOB Sparfell 5";
					side = 8;
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					class Object0	{side = 8; vehicle = "Land_vn_b_trench_bunker_02_01"; rank = ""; position[] = {7.61426,0.616211,0}; dir = 1.05754;};
					class Object1	{side = 8; vehicle = "Land_vn_b_trench_bunker_01_03"; rank = ""; position[] = {-10.084,1.36816,0}; dir = 271.599;};
					class Object2	{side = 8; vehicle = "vn_flag_usa_dmg"; rank = ""; position[] = {1.5127,0.145996,0}; dir = 82.6018;};
					class Object3	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {-17.4609,5.95557,0}; dir = 137.8;};
					class Object4	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {-16.8535,-4.74268,0}; dir = 82.6865;};
					class Object5	{side = 8; vehicle = "Land_vn_b_trench_firing_05"; rank = ""; position[] = {-10.9854,11.8091,0}; dir = 316.627;};
					class Object6	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {13.7988,11.9106,0}; dir = 252.927;};
					class Object7	{side = 8; vehicle = "Land_vn_b_trench_firing_03"; rank = ""; position[] = {6.56641,15.0552,0}; dir = 21.5366;};
					class Object8	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {-7.82617,-13.4824,0}; dir = 350.159;};
					class Object9	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {-0.983398,-16.252,0}; dir = 24.4123;};
					class Object10	{side = 8; vehicle = "Land_vn_b_trench_05_03"; rank = ""; position[] = {4.85645,-13.894,0}; dir = 162.601;};
					class Object11	{side = 8; vehicle = "Land_vn_b_trench_firing_05"; rank = ""; position[] = {12.3252,-10.0898,0}; dir = 321.933;};
					class Object12	{side = 8; vehicle = "Land_vn_b_trench_firing_03"; rank = ""; position[] = {15.6406,4.10303,0}; dir = 83.1106;};
					class Object13	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-3.22363,-18.2007,0}; dir = 199.237;};
					class Object14	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {4.48926,-18.21,0}; dir = 165.201;};
					class Object15	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {18.1582,-0.391602,0}; dir = 105.068;};
					class Object16	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {11.4756,15.23,0}; dir = 32.2717;};
					class Object17	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-1.64746,17.605,0}; dir = 354.036;};
					class Object18	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-19.6973,-0.402832,0.0445566}; dir = 273.789;};
					class Object19	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-16.5703,-7.7041,0}; dir = 231.665;};
					class Object20	{side = 8; vehicle = "Land_vn_quonset_02_01"; rank = ""; position[] = {-0.300781,5.2749,9.53674e-007}; dir = 0;};
					class Object21	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-2.64453,8.13672,0}; dir = 273.917;};
					class Object22	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-1.09961,9.9043,0}; dir = 350.365;};
					class Object23	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {2.53027,9.5415,0}; dir = 21.3848;};
					class Object24	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {2.26855,16.0068,0}; dir = 358.663;};
					class Object25	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-1.30566,14.9175,0}; dir = 324.04;};
					class Object26	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-4.42871,12.7764,0.0278587}; dir = 321.605;};
					class Object27	{side = 8; vehicle = "Land_vn_b_tower_01"; rank = ""; position[] = {-0.311523,-12.1357,0.0043602}; dir = 179.864;};
					class Object28	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-11.5576,-9.01221,0}; dir = 220.914;};
					class Object29	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {8.52539,-12.4663,0}; dir = 153.081;};
					class Object30	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {15.4072,0.0966797,0}; dir = 112.473;};
					class Object31	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {13.8311,-3.48779,0}; dir = 119.11;};
					class Object32	{side = 8; vehicle = "Land_vn_b_trench_end_01"; rank = ""; position[] = {-3.70313,-7.20801,0}; dir = 122.46;};
					class Object33	{side = 8; vehicle = "Land_vn_b_trench_end_01"; rank = ""; position[] = {-7.46387,-4.25098,0}; dir = 267.559;};
					class Object34	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {6.27441,-7.32861,0}; dir = 358.895;};
					class Object35	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {14.9434,-1.18213,0}; dir = 287.208;};
					class Object36	{side = 8; vehicle = "vn_b_ammobox_supply_01"; rank = ""; position[] = {-2.3252,-1.3291,0}; dir = 180.55;};
					class Object37	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-10.1836,-5.16895,0}; dir = 0;};
					class Object38	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {1.75488,-6.18506,0}; dir = 0;};
					class Object39	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {1.23633,14.98,0}; dir = 0;};
				};
				class gdc_nam_fob_6
				{
					name = "FOB Sparfell 6";
					side = 8;
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					class Object0	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {10.0332,-4.71533,0}; dir = 0;};
					class Object1	{side = 8; vehicle = "vn_flag_usa_dmg"; rank = ""; position[] = {1.12695,-3.27588,0}; dir = 82.6018;};
					class Object2	{side = 8; vehicle = "Land_vn_b_trench_bunker_01_03"; rank = ""; position[] = {11.041,5.3501,0}; dir = 358.059;};
					class Object3	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {3.75195,18.2437,0}; dir = 206.854;};
					class Object4	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {-11.0762,14.0991,0}; dir = 161.103;};
					class Object5	{side = 8; vehicle = "Land_vn_b_trench_firing_05"; rank = ""; position[] = {-16.7266,2.76318,0}; dir = 114.928;};
					class Object6	{side = 8; vehicle = "Land_vn_b_trench_bunker_04_01"; rank = ""; position[] = {11.4414,-5.85498,0}; dir = 357.779;};
					class Object7	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {11.5742,-13.75,0}; dir = 141.221;};
					class Object8	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {17.4375,5.4541,0}; dir = 73.8825;};
					class Object9	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-3.36719,18.3921,0}; dir = 349.677;};
					class Object10	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-10.4629,16.5542,0}; dir = 333.762;};
					class Object11	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-14.9082,10.2783,0}; dir = 300.85;};
					class Object12	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-12.1523,-13.9985,0}; dir = 216.164;};
					class Object13	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {-15.8047,-8.96875,0}; dir = 301.513;};
					class Object14	{side = 8; vehicle = "Land_vn_razorwire_f"; rank = ""; position[] = {0.173828,-18.5308,0}; dir = 181.017;};
					class Object15	{side = 8; vehicle = "Land_vn_houseblock_a2_ruins"; rank = ""; position[] = {-1.88672,8.26514,0}; dir = 0;};
					class Object16	{side = 8; vehicle = "Land_vn_houseblock_a1_1_ruins"; rank = ""; position[] = {-10.5508,-8.73926,0}; dir = 37.8764;};
					class Object17	{side = 8; vehicle = "Land_vn_b_trench_firing_04"; rank = ""; position[] = {10.75,14.5171,0}; dir = 29.0267;};
					class Object18	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-3.55859,16.104,0}; dir = 352.545;};
					class Object19	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-14.4961,7.17529,0}; dir = 299.752;};
					class Object20	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {1.56055,-12.2026,0}; dir = 244.292;};
					class Object21	{side = 8; vehicle = "Land_vn_b_trench_end_01"; rank = ""; position[] = {-15.9512,-3.51709,0}; dir = 331.262;};
					class Object22	{side = 8; vehicle = "Land_vn_b_trench_end_01"; rank = ""; position[] = {-11.3926,-0.812988,0}; dir = 149.107;};
					class Object23	{side = 8; vehicle = "Land_vn_b_trench_firing_04"; rank = ""; position[] = {3.38672,-15.7192,0}; dir = 63.4754;};
					class Object24	{side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {2.86328,-13.3032,0}; dir = 71.1278;};
					class Object25	{side = 8; vehicle = "vn_b_ammobox_supply_01"; rank = ""; position[] = {4.81641,-2.76563,0}; dir = 88.5391;};
					class Object26	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {2.55664,-0.211426,0}; dir = 0;};
					class Object27	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-10.8652,4.14404,0}; dir = 0;};
					class Object28	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {3.77539,17.8765,0}; dir = 0;};
				};
				class gdc_nam_fob_nemo_1
				{
					name = "FOB Nemo 1";
					side = 8;
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					class Object0	{side = 8; vehicle = "vn_flag_usa_dmg"; rank = ""; position[] = {-0.191406,-0.205566,0}; dir = 0;};
					class Object1	{side = 8; vehicle = "Land_vn_b_trench_tee_01"; rank = ""; position[] = {-0.0976563,16.2627,0}; dir = 180;};
					class Object2	{side = 8; vehicle = "Land_vn_b_trench_tee_01"; rank = ""; position[] = {-0.078125,-15.8965,0}; dir = 0;};
					class Object3	{side = 8; vehicle = "Land_vn_b_trench_tee_01"; rank = ""; position[] = {-16.168,0.17334,0}; dir = 90;};
					class Object4	{side = 8; vehicle = "Land_vn_b_trench_45_02"; rank = ""; position[] = {-16.584,7.5918,0}; dir = 134.312;};
					class Object5	{side = 8; vehicle = "Land_vn_b_trench_45_02"; rank = ""; position[] = {-16.1816,-7.72607,0}; dir = 90.7801;};
					class Object6	{side = 8; vehicle = "Land_vn_b_trench_45_02"; rank = ""; position[] = {7.75391,16.48,0}; dir = 226.471;};
					class Object7	{side = 8; vehicle = "Land_vn_b_trench_45_02"; rank = ""; position[] = {-8.34766,16.1592,0}; dir = 181.416;};
					class Object8	{side = 8; vehicle = "Land_vn_b_trench_45_02"; rank = ""; position[] = {-7.67578,-15.9692,0}; dir = 46.0432;};
					class Object9	{side = 8; vehicle = "Land_vn_b_trench_45_02"; rank = ""; position[] = {16.3984,7.85352,0}; dir = 271.589;};
					class Object10	{side = 8; vehicle = "Land_vn_b_trench_45_02"; rank = ""; position[] = {7.58008,-16.0703,0}; dir = 1.50102;};
					class Object11	{side = 8; vehicle = "Land_vn_b_trench_45_02"; rank = ""; position[] = {16.3594,-7.49072,0}; dir = 317.003;};
					class Object12	{side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {13.1523,12.6118,0.0577345}; dir = 45.6524;};
					class Object13	{side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {-13.4785,12.8975,0}; dir = 134.828;};
					class Object14	{side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {-12.8789,-12.6152,0}; dir = 43.1584;};
					class Object15	{side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {12.6934,-12.7715,0}; dir = 315.673;};
					class Object16	{side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {13.7012,2.41064,0}; dir = 359.581;};
					class Object17	{side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {8.9082,2.39307,0}; dir = 359.581;};
					class Object18	{side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {8.9082,-2.41064,0}; dir = 359.581;};
					class Object19	{side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {15.0449,2.41455,0}; dir = 359.581;};
					class Object20	{side = 8; vehicle = "Land_vn_b_trench_tee_01"; rank = ""; position[] = {-0.0078125,0.192871,0}; dir = 270;};
					class Object21	{side = 8; vehicle = "Land_vn_b_foxhole_01"; rank = ""; position[] = {-9.7168,10.0376,0}; dir = 134.062;};
					class Object22	{side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {13.6621,-2.4165,0}; dir = 359.581;};
					class Object23	{side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {15.1035,-2.40527,0}; dir = 359.581;};
					class Object24	{side = 8; vehicle = "Land_vn_b_foxhole_01"; rank = ""; position[] = {9.82422,-7.78906,0}; dir = 307.464;};
					class Object25	{side = 8; vehicle = "Land_vn_b_foxhole_01"; rank = ""; position[] = {9.19727,8.15283,0}; dir = 232.557;};
					class Object26	{side = 8; vehicle = "Land_vn_b_trench_bunker_01_01"; rank = ""; position[] = {-5.87891,-7.09375,0}; dir = 0;};
					class Object27	{side = 8; vehicle = "vn_b_ammobox_supply_01"; rank = ""; position[] = {4.96484,-9.85205,0}; dir = 183.039;};
					class Object28	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-16.4219,0.282227,0}; dir = 0;};
					class Object29	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-0.162109,16.4165,0}; dir = 0;};
					class Object30	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-0.1875,-16.063,0}; dir = 0;};
					class Object31	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {5.61914,-2.39453,0}; dir = 0;};
				};
				class gdc_nam_fob_warzen_1
				{
					name = "FOB Warzen 1";
					side = 8;
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					class Object0	{side = 8; vehicle = "Land_vn_temple_base_01"; rank = ""; position[] = {-4.73242,8.1416,0.479999}; dir = 144.847;};
					class Object1	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {12.8613,-9.80762,0}; dir = 331.032;};
					class Object2	{side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {3.49805,-16.0015,0}; dir = 9.47078;};
					class Object3	{side = 8; vehicle = "Land_vn_b_foxhole_01"; rank = ""; position[] = {17.0918,-1.38135,0}; dir = 280.352;};
					class Object4	{side = 8; vehicle = "Land_vn_temple_ruin_04"; rank = ""; position[] = {13.3574,5.30811,0}; dir = 0;};
					class Object5	{side = 8; vehicle = "Land_vn_b_trench_tee_01"; rank = ""; position[] = {-8.66602,-11.4087,0}; dir = 29.9516;};
					class Object6	{side = 8; vehicle = "Land_vn_b_trench_firing_04"; rank = ""; position[] = {-12.7988,-8.99561,0}; dir = 209.872;};
					class Object7	{side = 8; vehicle = "vn_flag_usa_dmg"; rank = ""; position[] = {-4.13086,6.38623,1.28266}; dir = 0;};
					class Object8	{side = 8; vehicle = "Land_vn_b_foxhole_01"; rank = ""; position[] = {8.33398,11.5737,0}; dir = 189.882;};
					class Object9	{side = 8; vehicle = "Land_vn_temple_ruin_02"; rank = ""; position[] = {3.62695,16.0483,-5.77762}; dir = 0;};
					class Object10	{side = 8; vehicle = "Land_vn_b_trench_firing_05"; rank = ""; position[] = {-13.4688,0.770996,0}; dir = 179.938;};
					class Object11	{side = 8; vehicle = "Land_vn_temple_statue_01"; rank = ""; position[] = {-8.625,13.5322,1.41251}; dir = 324.23;};
					class Object12	{side = 8; vehicle = "Land_vn_temple_ruin_04"; rank = ""; position[] = {-14.8887,7.57715,0}; dir = 237.539;};
					class Object13	{side = 8; vehicle = "vn_b_ammobox_supply_01"; rank = ""; position[] = {7.92578,-4.04053,0}; dir = 144.048;};
					class Object14	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-0.103516,-5.88916,1.00553}; dir = 0;};
					class Object15	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {9.0957,-2.51855,0}; dir = 0;};
					class Object16	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-5.26758,16.7793,1.00254}; dir = 0;};
					class Object17	{side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-9.39844,2.13086,0}; dir = 0;};
				};
				class gdc_nam_fob_warzen_2
				{
					name = "FOB Warzen 2";
					side = 8;
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					class Object0    {side = 8; vehicle = "Land_vn_temple_shrine_01"; rank = ""; position[] = {-4.93115,9.97632,0}; dir = 52.4872;};
					class Object1    {side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {13.5452,-10.676,0}; dir = 331.032;};
					class Object2    {side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {4.18213,-16.8701,0}; dir = 9.47078;};
					class Object3    {side = 8; vehicle = "Land_vn_b_foxhole_01"; rank = ""; position[] = {17.7749,-2.25024,0}; dir = 280.352;};
					class Object4    {side = 8; vehicle = "Land_vn_temple_ruin_04"; rank = ""; position[] = {14.0408,4.43921,0}; dir = 0;};
					class Object5    {side = 8; vehicle = "Land_vn_b_trench_tee_01"; rank = ""; position[] = {-7.98315,-12.2771,0}; dir = 29.9516;};
					class Object6    {side = 8; vehicle = "Land_vn_b_trench_firing_04"; rank = ""; position[] = {-12.115,-9.8645,0}; dir = 209.872;};
					class Object7    {side = 8; vehicle = "vn_flag_usa_dmg"; rank = ""; position[] = {-1.90552,-3.33716,0.23666}; dir = 0;};
					class Object8    {side = 8; vehicle = "Land_vn_b_foxhole_01"; rank = ""; position[] = {9.01636,10.7048,0}; dir = 189.882;};
					class Object9    {side = 8; vehicle = "Land_vn_temple_ruin_02"; rank = ""; position[] = {4.3103,15.1797,-6}; dir = 0;};
					class Object10    {side = 8; vehicle = "Land_vn_b_trench_firing_05"; rank = ""; position[] = {-12.7854,-0.0974121,0}; dir = 179.938;};
					class Object11    {side = 8; vehicle = "Land_vn_temple_statue_01"; rank = ""; position[] = {2.38623,15.9373,0}; dir = 334.348;};
					class Object12    {side = 8; vehicle = "Land_vn_temple_ruin_04"; rank = ""; position[] = {-14.2056,6.7085,-1}; dir = 237.539;};
					class Object13    {side = 8; vehicle = "Land_vn_b_trench_bunker_04_01"; rank = ""; position[] = {3.7207,0.03125,0}; dir = 292.708;};
					class Object14    {side = 8; vehicle = "vn_b_ammobox_supply_01"; rank = ""; position[] = {5.7041,0.496826,0}; dir = 297.576;};
					class Object15    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-0.251221,0.271484,0}; dir = 0;};
					class Object16    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-5.20508,11.5051,0.447288}; dir = 0;};
					class Object17    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-6.01025,-11.8899,0}; dir = 0;};
					class Object18    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {16.1094,4.6582,0}; dir = 0;};
				};
				class gdc_nam_fob_warzen_3
				{
					name = "FOB Warzen 3";
					side = 8;
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					class Object0    {side = 8; vehicle = "Land_vn_b_trench_bunker_06_02"; rank = ""; position[] = {-0.1875,-1.70264,1.00697}; dir = 199.476;};
					class Object1    {side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {14.041,-12.3855,0}; dir = 331.032;};
					class Object2    {side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {4.67798,-18.5796,0}; dir = 9.47078;};
					class Object3    {side = 8; vehicle = "Land_vn_b_foxhole_01"; rank = ""; position[] = {18.2708,-3.95972,0}; dir = 280.352;};
					class Object4    {side = 8; vehicle = "Land_vn_b_trench_tee_01"; rank = ""; position[] = {-7.4873,-13.9866,0}; dir = 29.9516;};
					class Object5    {side = 8; vehicle = "Land_vn_b_trench_firing_04"; rank = ""; position[] = {-11.6191,-11.574,0}; dir = 209.872;};
					class Object6    {side = 8; vehicle = "vn_flag_usa_dmg"; rank = ""; position[] = {-10.2458,-9.27783,0}; dir = 0;};
					class Object7    {side = 8; vehicle = "Land_vn_b_foxhole_01"; rank = ""; position[] = {12.6321,7.14258,0}; dir = 238.832;};
					class Object8    {side = 8; vehicle = "Land_vn_b_trench_firing_05"; rank = ""; position[] = {-12.2896,-1.80688,0}; dir = 179.938;};
					class Object9    {side = 8; vehicle = "Land_vn_temple_ruin_04"; rank = ""; position[] = {16.6902,3.77539,0}; dir = 47.0874;};
					class Object10    {side = 8; vehicle = "vn_air_uh1c_01_wreck"; rank = ""; position[] = {-3.00244,11.7781,-0.5}; dir = 58.154;};
					class Object11    {side = 8; vehicle = "Land_vn_b_trench_bunker_06_01"; rank = ""; position[] = {6.95386,-2.75537,1.00697}; dir = 0;};
					class Object12    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {7.47852,8.60962,0}; dir = 21.6706;};
					class Object13    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {1.66675,10.1621,0}; dir = 10.0488;};
					class Object14    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-8.52881,4.35181,0}; dir = 304.533;};
					class Object15    {side = 8; vehicle = "Land_vn_b_gunpit_01"; rank = ""; position[] = {2.97729,-1.9873,0}; dir = 165.957;};
					class Object16    {side = 8; vehicle = "vn_b_ammobox_supply_01"; rank = ""; position[] = {5.67651,4.21094,1.0128}; dir = 202.452;};
					class Object17    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {3.03223,5.26221,1.00697}; dir = 0;};
					class Object18    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-5.49634,-13.4805,0}; dir = 0;};
					class Object19    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {18.0522,2.33545,0}; dir = 0;};
					class Object20    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {7.27954,-15.6523,0}; dir = 0;};
				};
				class gdc_nam_fob_warzen_4
				{
					name = "FOB Warzen 4";
					side = 8;
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					class Object0    {side = 8; vehicle = "Land_vn_b_mortarpit_01"; rank = ""; position[] = {-6.30908,7.16357,0}; dir = 125.798;};
					class Object1    {side = 8; vehicle = "Land_vn_b_mortarpit_01"; rank = ""; position[] = {12.2856,0.806885,0}; dir = 269.864;};
					class Object2    {side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {14.9243,-10.4993,0}; dir = 331.032;};
					class Object3    {side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {2.24268,-16.9863,0}; dir = 18.797;};
					class Object4    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {8.56689,-13.8779,0}; dir = 153.463;};
					class Object5    {side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {-11.7227,-11.606,0}; dir = 69.3199;};
					class Object6    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-4.75244,-14.6106,0}; dir = 205.2;};
					class Object7    {side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {-15.4492,2.5647,0}; dir = 127.028;};
					class Object8    {side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {-1.47852,15.9409,0}; dir = 189.23;};
					class Object9    {side = 8; vehicle = "Land_vn_b_trench_45_01"; rank = ""; position[] = {12.0664,13.2397,0}; dir = 241.11;};
					class Object10    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-14.1206,-4.74341,0}; dir = 252.908;};
					class Object11    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-10.8501,8.51074,0}; dir = 310.764;};
					class Object12    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-7.71094,11.3586,0}; dir = 326.968;};
					class Object13    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {5.40723,14.8994,0}; dir = 11.7872;};
					class Object14    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {16.4546,1.82007,0}; dir = 88.7471;};
					class Object15    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {16.4258,-2.93774,0}; dir = 91.1851;};
					class Object16    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {15.3105,6.28101,0}; dir = 69.6838;};
					class Object17    {side = 8; vehicle = "Land_vn_b_trench_bunker_01_01"; rank = ""; position[] = {3.49365,0.0942383,0}; dir = 0;};
					class Object18    {side = 8; vehicle = "Land_vn_b_trench_05_03"; rank = ""; position[] = {-8.58643,-3.48779,0}; dir = 354.752;};
					class Object19    {side = 8; vehicle = "Land_vn_b_trench_05_03"; rank = ""; position[] = {-3.76074,-2.948,0}; dir = 354.752;};
					class Object20    {side = 8; vehicle = "vn_flag_usa_dmg"; rank = ""; position[] = {-3.28418,0.172363,0}; dir = 0;};
					class Object21    {side = 8; vehicle = "vn_b_ammobox_supply_01"; rank = ""; position[] = {4.50732,1.77539,0.240445}; dir = 0;};
					class Object22    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {2.2583,-0.406494,0.253777}; dir = 0;};
					class Object23    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-13.1748,-5.48608,0}; dir = 0;};
					class Object24    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {9.43555,-14.2329,0}; dir = 0;};
					class Object25    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {16.5356,5.1123,0}; dir = 0;};
				};
				class gdc_nam_fob_warzen_5
				{
					name = "FOB Warzen 5";
					side = 8;
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					class Object0    {side = 8; vehicle = "Land_vn_temple_ruin_03"; rank = ""; position[] = {2.96729,-6.84399,-4.76837e-007}; dir = 0;};
					class Object1    {side = 8; vehicle = "Land_vn_temple_ruin_01"; rank = ""; position[] = {-11.8906,2.94385,0}; dir = 88.2007;};
					class Object2    {side = 8; vehicle = "Land_vn_temple_ruin_05"; rank = ""; position[] = {6.1377,7.51147,1.65589}; dir = 37.272;};
					class Object3    {side = 8; vehicle = "Land_vn_b_trench_90_02"; rank = ""; position[] = {-6.51563,13.6418,0}; dir = 187.585;};
					class Object4    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-14.8081,-4.09741,0}; dir = 286.892;};
					class Object5    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-14.1187,-7.64331,0}; dir = 233.808;};
					class Object6    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-10.5679,-11.3145,0}; dir = 206.679;};
					class Object7    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-1.75244,-16.0857,0}; dir = 183.115;};
					class Object8    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {3.20313,-16.1904,0}; dir = 183.115;};
					class Object9    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {7.05176,-14.7249,0}; dir = 122.415;};
					class Object10    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {-5.98486,-14.7717,0}; dir = 219.911;};
					class Object11    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {14.7744,2.16528,0}; dir = 59.1519;};
					class Object12    {side = 8; vehicle = "Land_vn_b_trench_05_02"; rank = ""; position[] = {15.2788,-1.49365,0}; dir = 93.9552;};
					class Object13    {side = 8; vehicle = "vn_flag_usa_dmg"; rank = ""; position[] = {3.0752,9.53442,4.62775}; dir = 0;};
					class Object14    {side = 8; vehicle = "vn_b_ammobox_supply_01"; rank = ""; position[] = {-2.05811,-3.73145,0}; dir = 0;};
					class Object15    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-3.29736,-4.75757,0}; dir = 0;};
					class Object16    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {3.78271,8.13525,2.0595}; dir = 0;};
					class Object17    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-9.81445,1.83496,4.55678}; dir = 0;};
					class Object18    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {3.69727,-16.9446,0}; dir = 0;};
					class Object19    {side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {11.8843,8.6897,4.12726}; dir = 35.9479;};
					class Object20    {side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {8.37793,11.2891,4.27908}; dir = 35.9479;};
					class Object21    {side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {5.47559,13.4514,4.29286}; dir = 35.9479;};
					class Object22    {side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {16.3228,-7.52295,1.51537}; dir = 95.728;};
					class Object23    {side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {3.47656,14.8992,4.26327}; dir = 306.855;};
					class Object24    {side = 8; vehicle = "Land_vn_b_trench_revetment_05_01"; rank = ""; position[] = {13.7974,6.84253,4.28043}; dir = 306.855;};
				};
				class gdc_nam_fob_warzen_6
				{
					name = "FOB Warzen 6";
					side = 8;
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					class Object0    {side = 8; vehicle = "Land_vn_cargo_addon01_v1_f"; rank = ""; position[] = {14.877,8.09375,1.04384}; dir = 220.099;};
					class Object1    {side = 8; vehicle = "Land_vn_b_trench_bunker_04_01"; rank = ""; position[] = {9.19238,2.23535,0}; dir = 0;};
					class Object2    {side = 8; vehicle = "Land_vn_pillboxbunker_02_hex_f"; rank = ""; position[] = {6.14209,14.0007,0}; dir = 113.681;};
					class Object3    {side = 8; vehicle = "Land_vn_b_trench_firing_01"; rank = ""; position[] = {-11.9634,0.825195,0}; dir = 183.343;};
					class Object4    {side = 8; vehicle = "Land_vn_b_trench_firing_05"; rank = ""; position[] = {-2.74658,14.5376,0}; dir = 255.622;};
					class Object5    {side = 8; vehicle = "vn_flag_usa_dmg"; rank = ""; position[] = {-14.4463,1.54907,2.14991}; dir = 0;};
					class Object6    {side = 8; vehicle = "Land_vn_b_trench_45_02"; rank = ""; position[] = {-11.0049,9.51587,0}; dir = 152.465;};
					class Object7    {side = 8; vehicle = "Land_vn_b_trench_05_03"; rank = ""; position[] = {-1.79639,10.5552,0}; dir = 71.9531;};
					class Object8    {side = 8; vehicle = "Land_vn_b_trench_firing_02"; rank = ""; position[] = {-2.01709,-12.3457,0}; dir = 96.748;};
					class Object9    {side = 8; vehicle = "Land_vn_bagfence_short_f"; rank = ""; position[] = {-12.5571,0.720703,2.14991}; dir = 330.005;};
					class Object10    {side = 8; vehicle = "Land_vn_bagfence_short_f"; rank = ""; position[] = {-10.8433,1.32739,2.14991}; dir = 353.782;};
					class Object11    {side = 8; vehicle = "Land_vn_bagfence_short_f"; rank = ""; position[] = {-9.10693,1.49219,2.14991}; dir = 6.30264;};
					class Object12    {side = 8; vehicle = "Land_vn_bagfence_short_f"; rank = ""; position[] = {-5.6665,-0.334961,2.14991}; dir = 184.304;};
					class Object13    {side = 8; vehicle = "Land_vn_bagfence_short_f"; rank = ""; position[] = {-7.55859,-0.222412,2.14991}; dir = 183.739;};
					class Object14    {side = 8; vehicle = "vn_b_ammobox_supply_01"; rank = ""; position[] = {1.19873,-12.7803,0}; dir = 0;};
					class Object15    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {5.32031,-13.6882,0}; dir = 0;};
					class Object16    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-7.37061,11.9524,0}; dir = 0;};
					class Object17    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {10.3804,0.269531,0}; dir = 0;};
					class Object18    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {-15.2578,-2.56104,0}; dir = 0;};
					class Object19    {side = 8; vehicle = "Land_vn_us_common_lantern_01"; rank = ""; position[] = {5.85547,10.9094,0}; dir = 0;};
				};
			};
		};
	};
};