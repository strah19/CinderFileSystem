#include "../src/CinderFileSys.h"

int main() {
	Cinder::CinderStructure structure;
	structure.LoadCinderStructure("window_settings.txt");

	structure.WriteSection("CinderStructure");
	structure.WriteKeyValueToSection("CinderStructure", "Window_Pos_X", "0");
	structure.WriteKeyValueToSection("CinderStructure", "Window_Pos_Y", "100");
	structure.Log();

	structure.DeleteKey("CinderStructure", "Window_Pos_X");
	structure.DeleteSection("CinderStructure");
	return 0;
}