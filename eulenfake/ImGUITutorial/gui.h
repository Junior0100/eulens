#include <GLFW/glfw3.h>
#include <ImGUI/imgui.h>
#include <ImGUI/imgui_impl_glfw.h>
#include <ImGUI/imgui_impl_opengl3.h>
#include "Texteditor.cpp"

static int windowWidth = 1880;
static int windowHeight = 1220;



void Render(GLFWwindow* window)
{

		ImGui::SetNextWindowSize(ImVec2(windowWidth / 2.5, windowHeight / 2.5));

		ImGui::Begin("                                             Blackhat", 0);

		static int tab = 0;
		static const char* foods[]{ "Apple", "Bannana", "Orange" };
		static int selectedItem = 0;
		static bool checkBox = false;
		static float slider = 1.5f;

		if (ImGui::BeginTabBar(""))
		{
			if (ImGui::BeginTabItem("Character"))
			{
				tab = 1;
				ImGui::EndTabItem();
			}
			if (ImGui::BeginTabItem("Weapon"))
			{
				tab = 3;
				ImGui::EndTabItem();
			}
			if (ImGui::BeginTabItem("Vehicule"))
			{
				tab = 4;
				ImGui::EndTabItem();
			}
			if (ImGui::BeginTabItem("Lua"))
			{
				tab = 5;
				ImGui::EndTabItem();
			}
			if (ImGui::BeginTabItem("Misc"))
			{
				tab = 6;
				ImGui::EndTabItem();
			}
			if (ImGui::BeginTabItem("Resource"))
			{
				tab = 7;
				ImGui::EndTabItem();
			}
			if (ImGui::BeginTabItem("Dumper"))
			{
				tab = 8;
				ImGui::EndTabItem();
			}
			if (ImGui::BeginTabItem("Config"))
			{
				tab = 9;
				ImGui::EndTabItem();
			}
		}


		switch (tab)
		{
		case 1: // Main tab
			ImGui::BeginTabBar("TabBar1");
			{
				if (ImGui::BeginTabItem("Body"))
				{
					tab = 10;
					ImGui::EndTabItem();
				}
				if (ImGui::BeginTabItem("Teleport"))
				{
					tab = 11;
					ImGui::EndTabItem();
				}
				if (ImGui::BeginTabItem("Noclip"))
				{
					tab = 12;
					ImGui::EndTabItem();
				}
			}
			switch (tab)
			{
			case 10:
				ImGui::Columns(2);
				ImGui::SetColumnOffset(1, 350);
				{
					ImGui::Text("               [Character options]");

					ImGui::Spacing();
					if (ImGui::Button("Heal"))
					{
					}
					ImGui::SameLine();
					if (ImGui::Button("Armor"))
					{
					}
					ImGui::SameLine();
					if (ImGui::Button("Revive"))
					{
					}
					ImGui::SameLine();
					if (ImGui::Button("Suicid"))
					{
					}
					//check box body tab
					static bool opcion1 = false;
					static bool opcion2 = false;
					static bool opcion3 = false;
					static bool opcion4 = false;
					static bool opcion5 = false;
					static bool opcion6 = false;
					static bool opcion7 = false;
					static bool opcion8 = false;
					static bool opcion9 = false;
					static bool opcion10 = false;
					ImGui::Spacing();
					ImGui::Checkbox("Godmode", &opcion1);
					ImGui::Spacing();
					ImGui::Checkbox("Semi GodMode", &opcion2);
					ImGui::SameLine();
					ImGui::TextColored(ImVec4(1, 1, 1, 1), "(?)");
					if (ImGui::IsItemHovered())
						ImGui::SetTooltip("If you activate this option you can hold more health");
					ImGui::Spacing();
					ImGui::Checkbox("Fastrun", &opcion3);
					ImGui::Spacing();
					ImGui::Checkbox("Speed", &opcion4);
					ImGui::Spacing();
					ImGui::Checkbox("Invisible", &opcion5);
					ImGui::Spacing();
					ImGui::Checkbox("inf.stamina", &opcion6);
					ImGui::Spacing();
					ImGui::Checkbox("inf.armour", &opcion7);
					ImGui::Spacing();
					ImGui::Checkbox("Anty head", &opcion8);
					ImGui::SameLine();
					ImGui::TextColored(ImVec4(1, 1, 1, 1), "(?)");
					if (ImGui::IsItemHovered())
						ImGui::SetTooltip("If you activate this option you can hold more health");
					ImGui::Spacing();
					ImGui::Checkbox("NoRagdoll", &opcion9);
					ImGui::Spacing();
					ImGui::Checkbox("Infinite Roll", &opcion10);
					ImGui::SameLine();
					ImGui::TextColored(ImVec4(1, 1, 1, 1), "(?)");
					if (ImGui::IsItemHovered())
						ImGui::SetTooltip("If you activate this option you can hold more health");
					ImGui::Text("");
					ImGui::Text("");
					ImGui::Text("");
					ImGui::Text("");
					ImGui::Text("");
				}

				//right column
				ImGui::NextColumn();
				{



					ImGui::Text("                  [Character Info]");
					ImGui::Separator();
					ImGui::Spacing();
					ImGui::Text("Health: ");
					ImGui::Spacing();
					ImGui::Text("Max Health: ");
					ImGui::Spacing();
					ImGui::Text("Armor: ");
					ImGui::Spacing();
					ImGui::Text("Server ID: ");
				}



			}
			switch (tab)
			{
			case 11:
				ImGui::Text("                                          [Teleport options]");
				ImGui::Separator();
				ImGui::Spacing();
				ImGui::Spacing();
				static bool opcion11 = false;
				static bool opcion12 = false;


				ImGui::Checkbox("Auto Tp Waypoint", &opcion11);
				ImGui::Spacing();
				////////////////////////////////////////////////
				if (ImGui::Button("Tp To Waypoint"))
				{
				}
				ImGui::SameLine();
				if (ImGui::Button("Set Waypoint"))
				{
				}
				/////////////////////////////////////////////////
			}

			switch (tab)
			{
			case 12:


				ImGui::Text("                                               [Noclip]");
				ImGui::Separator();
				ImGui::Spacing();
				static bool opcion13 = false;
				ImGui::Checkbox("Enable", &opcion13);


			}

		}

		switch (tab)
		{
		case 5:
			ImGui::BeginTabBar("TabBar3");

			if (ImGui::BeginTabItem("Executor"))
			{
				tab = 25;
				ImGui::EndTabItem();

				switch (tab)
				{
				case 25:
					static Texteditor editor;
					if (ImGui::Button("Execute from file", ImVec2(200, 35))) {}

				}
			}

		}






		switch (tab)
		{
		case 3: // Main tab
			ImGui::BeginTabBar("TabBar2");
			{
				if (ImGui::BeginTabItem("Spawn"))
				{
					tab = 20;
					ImGui::EndTabItem();
				}

				if (ImGui::BeginTabItem("Cheats"))
				{
					tab = 21;
					ImGui::EndTabItem();
				}
				if (ImGui::BeginTabItem("Trigger"))
				{
					tab = 22;
					ImGui::EndTabItem();
				}

				switch (tab)
				{
				case 20:
					ImGui::Columns(2);
					ImGui::SetColumnOffset(1, 350);
					{
						ImGui::Text("                [Weapon Spawn]");
						ImGui::Spacing();
						ImGui::Spacing();

						if (ImGui::TreeNode("Melee")) {
							if (ImGui::Button("Dagger"))
							{
							}
							if (ImGui::Button("Bat"))
							{
							}
							if (ImGui::Button("Bottel"))
							{
							}
							if (ImGui::Button("Crowbar"))
							{
							}
							if (ImGui::Button("Flashlight"))
							{
							}
							if (ImGui::Button("Golfclub"))
							{
							}
							if (ImGui::Button("Hammer"))
							{
							}
							if (ImGui::Button("hatchet"))
							{
							}
							if (ImGui::Button("Knuckle"))
							{
							}
							if (ImGui::Button("Knife"))
							{
							}
							if (ImGui::Button("Machete"))
							{
							}
							if (ImGui::Button("Switchblade"))
							{
							}
							if (ImGui::Button("Nightstick"))
							{
							}
							if (ImGui::Button("Wrench"))
							{
							}
							if (ImGui::Button("Battleaxe"))
							{
							}
							if (ImGui::Button("Poolcue"))
							{
							}
							if (ImGui::Button("Stone_Hatchet"))
							{
							}
							ImGui::TreePop();
						}

						ImGui::Spacing();

						if (ImGui::TreeNode("Handguns")) {
							if (ImGui::Button("Handguns"))
							{
							}
							if (ImGui::Button("Pistol"))
							{
							}
							if (ImGui::Button("Pistol_mk2"))
							{
							}
							if (ImGui::Button("Combatpistol"))
							{
							}
							if (ImGui::Button("Appistol"))
							{
							}
							if (ImGui::Button("Stungun"))
							{
							}
							if (ImGui::Button("Pistol50"))
							{
							}
							if (ImGui::Button("Snspistol"))
							{
							}
							if (ImGui::Button("Snspistol_mk2"))
							{
							}
							if (ImGui::Button("Heavypistol"))
							{
							}
							if (ImGui::Button("Vintagepistol"))
							{
							}
							if (ImGui::Button("Flaregun"))
							{
							}
							if (ImGui::Button("Marksmanpistol"))
							{
							}
							if (ImGui::Button("Revolver"))
							{
							}
							if (ImGui::Button("Doubleaction"))
							{
							}
							if (ImGui::Button("Raypistol"))
							{
							}
							if (ImGui::Button("Ceramicpistol"))
							{
							}
							if (ImGui::Button("Navyrevolver"))
							{
							}
							ImGui::TreePop();
						}

						ImGui::Spacing();

						if (ImGui::TreeNode("Submachine")) {
							if (ImGui::Button("Micro_SMG"))
							{
							}
							if (ImGui::Button("SMG"))
							{
							}
							if (ImGui::Button("SMG_Mk2"))
							{
							}
							if (ImGui::Button("Assault_SMG"))
							{
							}
							if (ImGui::Button("Combat_PDW"))
							{
							}
							if (ImGui::Button("Machine_Pistol"))
							{
							}
							if (ImGui::Button("Mini_SMG"))
							{
							}
							if (ImGui::Button("Unholy_Hellbringer"))
							{
							}
							ImGui::TreePop();
						}

						ImGui::Spacing();

						if (ImGui::TreeNode("Shotguns")) {
							if (ImGui::Button("Pump_Shotgun"))
							{
							}
							if (ImGui::Button("Pump_Shotgun_Mk2"))
							{
							}
							if (ImGui::Button("Sawed-Off_Shotgun"))
							{
							}
							if (ImGui::Button("Assault_Shotgun"))
							{
							}
							if (ImGui::Button("Bullpup_Shotgun"))
							{
							}
							if (ImGui::Button("Musket"))
							{
							}
							if (ImGui::Button("Heavy_Shotgun"))
							{
							}
							if (ImGui::Button("Double_Barrel_Shotgun"))
							{
							}
							if (ImGui::Button("Sweeper_Shotgun"))
							{
							}
							if (ImGui::Button("Combat_Shotgun"))
							{
							}
							ImGui::TreePop();
						}

						ImGui::Spacing();


						if (ImGui::TreeNode("Assault Rifles")) {
							if (ImGui::Button("Assault_Rifle"))
							{
							}
							if (ImGui::Button("Assault_Rifle_Mk2"))
							{
							}
							if (ImGui::Button("Carbine_Rifle"))
							{
							}
							if (ImGui::Button("Carbine_Rifle_Mk2"))
							{
							}
							if (ImGui::Button("Advanced_Rifle"))
							{
							}
							if (ImGui::Button("Special_Carbine"))
							{
							}
							if (ImGui::Button("Special_Carbine_Mk2"))
							{
							}
							if (ImGui::Button("Bullpup_Rifle"))
							{
							}
							if (ImGui::Button("Bullpup_Rifle_Mk2"))
							{
							}
							if (ImGui::Button("Compact_Rifle"))
							{
							}
							if (ImGui::Button("Military_Rifle"))
							{
							}
							if (ImGui::Button("Heavy_Rifle"))
							{
							}
							if (ImGui::Button("Tactical_Rifle"))
							{
							}
							ImGui::TreePop();
						}

						ImGui::Spacing();


						if (ImGui::TreeNode("Machine Guns")) {
							if (ImGui::Button("MG"))
							{
							}
							if (ImGui::Button("Combat_MG"))
							{
							}
							if (ImGui::Button("Combat_MG_Mk2"))
							{
							}
							if (ImGui::Button("Gusenberg_Sweeper"))
							{
							}
							ImGui::TreePop();
						}

						ImGui::Spacing();


						if (ImGui::TreeNode("Sniper Rifles")) {
							if (ImGui::Button("Sniper_Rifle"))
							{
							}
							if (ImGui::Button("Heavy_Sniper"))
							{
							}
							if (ImGui::Button("Heavy_Sniper_Mk2"))
							{
							}
							if (ImGui::Button("Marksman_Rifle"))
							{
							}
							if (ImGui::Button("Marksman_Rifle_Mk2"))
							{
							}
							if (ImGui::Button("Precision_Rifle"))
							{
							}
							ImGui::TreePop();
						}

						ImGui::Spacing();


						if (ImGui::TreeNode("Heavy Weapons")) {
							if (ImGui::Button("RPG"))
							{
							}
							if (ImGui::Button("Grenade_Launcher"))
							{
							}
							if (ImGui::Button("Grenade_Launcher_Smoke"))
							{
							}
							if (ImGui::Button("Minigun"))
							{
							}
							if (ImGui::Button("Firework_Launcher"))
							{
							}
							if (ImGui::Button("Railgun"))
							{
							}
							if (ImGui::Button("Homing_Launcher"))
							{
							}
							if (ImGui::Button("Compact_Grenade_Launcher"))
							{
							}
							if (ImGui::Button("Widowmaker"))
							{
							}
							if (ImGui::Button("Compact_EMP_Launcher"))
							{
							}
							ImGui::TreePop();
						}

						ImGui::Spacing();

						if (ImGui::TreeNode("Throwables")) {
							if (ImGui::Button("Grenade"))
							{
							}
							if (ImGui::Button("BZ_Gas"))
							{
							}
							if (ImGui::Button("Molotov_Cocktail"))
							{
							}
							if (ImGui::Button("Sticky_Bomb"))
							{
							}
							if (ImGui::Button("Proximity_Mines"))
							{
							}
							if (ImGui::Button("Snowballs"))
							{
							}
							if (ImGui::Button("Pipe_Bombs"))
							{
							}
							if (ImGui::Button("Baseball"))
							{
							}
							if (ImGui::Button("Tear_Gas"))
							{
							}
							if (ImGui::Button("Flare"))
							{
							}
							ImGui::TreePop();
						}

						ImGui::Spacing();

						if (ImGui::TreeNode("Miscellaneous")) {
							if (ImGui::Button("Jerry_Can"))
							{
							}
							if (ImGui::Button("Parachute"))
							{
							}
							if (ImGui::Button("Fire_Extinguisher"))
							{
							}
							if (ImGui::Button("Hazardous_Jerry_Can"))
							{
							}
							if (ImGui::Button(" Fertilizer_Can"))
							{
							}
							ImGui::TreePop();
						}
						ImGui::Text("");
						ImGui::Text("");
						ImGui::Text("");
						ImGui::Text("");
						ImGui::Text("");
						ImGui::Text("");
						ImGui::Text("");
						ImGui::Text("");
						ImGui::Text("");
						ImGui::Text("");

					}
					ImGui::NextColumn();
					{
						ImGui::Text("                    [Weapon Option]");
						ImGui::Separator();

						static bool opcion20 = false;
						ImGui::Spacing();
						ImGui::Checkbox("Spawn Safe", &opcion20);

						ImGui::Spacing();
						if (ImGui::Button("Give All Weapon"))
						{
						}
						ImGui::Spacing();
						if (ImGui::Button("Remove All Weapon"))
						{
						}
						ImGui::Spacing();
						if (ImGui::Button("Refill Ammo"))
						{
						}

					}
					
				}


			}
		}
	glfwSetWindowSizeCallback(window, [](GLFWwindow* window, int width, int height)
		{
			windowWidth = width;
			windowHeight = height;
		});
}

void SetupStyle()
{
	ImGuiStyle* style = &ImGui::GetStyle();
	ImVec4* colors = style->Colors;

	colors[ImGuiCol_Text] = ImVec4(1.000f, 1.000f, 1.000f, 1.000f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.500f, 0.500f, 0.500f, 1.000f);
	colors[ImGuiCol_WindowBg] = ImVec4(0.180f, 0.180f, 0.180f, 1.000f);
	colors[ImGuiCol_ChildBg] = ImVec4(0.280f, 0.280f, 0.280f, 0.000f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.313f, 0.313f, 0.313f, 1.000f);
	colors[ImGuiCol_Border] = ImVec4(0.266f, 0.266f, 0.266f, 1.000f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.000f, 0.000f, 0.000f, 0.000f);
	colors[ImGuiCol_FrameBg] = ImVec4(0.160f, 0.160f, 0.160f, 1.000f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.200f, 0.200f, 0.200f, 1.000f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.280f, 0.280f, 0.280f, 1.000f);
	colors[ImGuiCol_TitleBg] = ImVec4(0.277f, 0.277f, 0.277f, 1.000f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.277f, 0.277f, 0.277f, 1.000f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.148f, 0.148f, 0.148f, 1.000f);
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.195f, 0.195f, 0.195f, 1.000f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.160f, 0.160f, 0.160f, 1.000f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.277f, 0.277f, 0.277f, 1.000f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.300f, 0.300f, 0.300f, 1.000f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.277f, 0.277f, 0.277f, 1.000);
	colors[ImGuiCol_CheckMark] = ImVec4(1.000f, 1.000f, 1.000f, 1.000f);
	colors[ImGuiCol_SliderGrab] = ImVec4(0.277f, 0.277f, 0.277f, 1.000f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.277f, 0.277f, 0.277f, 1.000f);
	colors[ImGuiCol_Button] = ImVec4(0.195f, 0.195f, 0.195f, 1.000f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(1.000f, 1.000f, 1.000f, 0.156f);
	colors[ImGuiCol_ButtonActive] = ImVec4(1.000f, 1.000f, 1.000f, 0.391f);
	colors[ImGuiCol_Header] = ImVec4(0.313f, 0.313f, 0.313f, 1.000f);
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.469f, 0.469f, 0.469f, 1.000f);
	colors[ImGuiCol_HeaderActive] = ImVec4(0.469f, 0.469f, 0.469f, 1.000f);
	colors[ImGuiCol_Separator] = colors[ImGuiCol_Border];
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.391f, 0.391f, 0.391f, 1.000f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(0.277f, 0.277f, 0.277f, 1.000);
	colors[ImGuiCol_ResizeGrip] = ImVec4(1.000f, 1.000f, 1.000f, 0.250f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(1.000f, 1.000f, 1.000f, 0.670f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.277f, 0.277f, 0.277f, 1.000);
	colors[ImGuiCol_Tab] = ImVec4(0.098f, 0.098f, 0.098f, 1.000f);
	colors[ImGuiCol_TabHovered] = ImVec4(0.352f, 0.352f, 0.352f, 1.000f);
	colors[ImGuiCol_TabActive] = ImVec4(0.195f, 0.195f, 0.195f, 1.000f);
	colors[ImGuiCol_TabUnfocused] = ImVec4(0.098f, 0.098f, 0.098f, 1.000f);
	colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.195f, 0.195f, 0.195f, 1.000f);
	colors[ImGuiCol_PlotLines] = ImVec4(0.469f, 0.469f, 0.469f, 1.000f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.277f, 0.277f, 0.277f, 1.000);
	colors[ImGuiCol_PlotHistogram] = ImVec4(0.586f, 0.586f, 0.586f, 1.000f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.277f, 0.277f, 0.277f, 1.000);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(1.000f, 1.000f, 1.000f, 0.156f);
	colors[ImGuiCol_DragDropTarget] = ImVec4(0.277f, 0.277f, 0.277f, 1.000);
	colors[ImGuiCol_NavHighlight] = ImVec4(0.277f, 0.277f, 0.277f, 1.000);
	colors[ImGuiCol_NavWindowingHighlight] = ImVec4(0.277f, 0.277f, 0.277f, 1.000);
	colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.000f, 0.000f, 0.000f, 0.586f);
	colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.000f, 0.000f, 0.000f, 0.586f);

	style->ChildRounding = 4.0f;
	style->FrameBorderSize = 0.0f;
	style->FrameRounding = 2.0f;
	style->GrabMinSize = 7.0f;
	style->PopupRounding = 2.0f;
	style->ScrollbarRounding = 12.0f;
	style->ScrollbarSize = 13.0f;
	style->TabBorderSize = 0.0f;
	style->TabRounding = 3.0f;
	style->WindowRounding = 2.0f;

	ImGui::PushStyleVar(ImGuiStyleVar_IndentSpacing, 20.0f);

}