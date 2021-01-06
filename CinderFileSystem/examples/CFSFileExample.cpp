#include "../src/CinderFileSys.h"

int main() {
	Cinder::CFSFile file;
	file = Cinder::CFSFile("some_data.txt");

	file.EmptyFile();
	file.DoEachWord([&](std::string& word, uint32_t counter) {
		if (word == "something")
			file.Write("More data");
		return false;
	});

	file.GetFileSizeInBytes();
	file.ResetReadLocation();

	return 0;
}