#include <string>
#include <cstdlib>
#include <vector>

namespace nme {
	
	
	std::string CapabilitiesGetLanguage () {
		
		return "en-US";
		
		//char* country = NULL;
		//char* language = NULL;
		//
		//locale_get(&language, &country);
		//
		//return std::string(language) + "-" + std::string(country);
		
	}
	
	
	//double CapabilitiesGetScreenResolutionX() {
		//
		//return 0;
		//
	//}
	
	
	//double CapabilitiesGetScreenResolutionY() {
		//
		//return 0;
		//
	//}
	

	double CapabilitiesGetScreenDPI() {
		
		return 170;
		
	}
	

	double CapabilitiesGetPixelAspectRatio() {
		
		return 1;
		
	}

	
	//bool GetAcceleration (double &outX, double &outY, double &outZ) {
		//
		//return false;
		//
	//}
	
	
	void HapticVibrate (int period, int duration) {
		
		
		
	}
	
	
	bool LaunchBrowser (const char *inUtf8URL) {
		
		return false;
		//char* err;
		//
		//int result = navigator_invoke (inUtf8URL, &err);
		//
		//bps_free (err);
		//
		//return (result == BPS_SUCCESS);
		
	}
	
	
	std::string FileDialogFolder( const std::string &title, const std::string &text ) {
		return ""; 
	}
	
	std::string FileDialogOpen( const std::string &title, const std::string &text, const std::vector<std::string> &fileTypes ) { 
		return ""; 
	}
	
	std::string FileDialogSave( const std::string &title, const std::string &text, const std::vector<std::string> &fileTypes ) { 
		return ""; 
	}
	

}