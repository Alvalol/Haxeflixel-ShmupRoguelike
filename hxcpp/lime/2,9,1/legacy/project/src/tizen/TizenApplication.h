#ifndef TIZEN_APPLICATION_H
#define TIZEN_APPLICATION_H


#include "./TizenFrame.h"
#include "../opengl/Egl.h"
#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FUi.h>
#include <FUiIme.h>
#include <FGraphics.h>
//#include <FUix.h>


namespace nme {
	
	
	class TizenApplication : public Tizen::App::UiApp, public Tizen::System::IScreenEventListener, public Tizen::Ui::IKeyEventListener, public Tizen::Base::Runtime::ITimerEventListener, public Tizen::Ui::ITouchEventListener /*, public Tizen::Uix::Sensor::ISensorEventListener*/ {
		
		public:
			
			static Tizen::App::Application* CreateInstance (void);
			
			TizenApplication (void);
			virtual ~TizenApplication (void);
			
			//virtual bool OnAppInitialized (void); 
			virtual bool OnAppInitializing (Tizen::App::AppRegistry& appRegistry);
			virtual bool OnAppTerminating (Tizen::App::AppRegistry& appRegistry, bool forcedTermination = false);
			//virtual bool OnAppWillTerminate (void); 
			virtual void OnBackground (void);
			virtual void OnBatteryLevelChanged (Tizen::System::BatteryLevel batteryLevel);
			//virtual void OnDataReceived (Tizen::Uix::Sensor::SensorType sensorType, Tizen::Uix::Sensor::SensorData& sensorData, result r);
			virtual void OnForeground (void);
			virtual void OnLowMemory (void);
			virtual void OnKeyLongPressed (const Tizen::Ui::Control& source, Tizen::Ui::KeyCode keyCode);
			virtual void OnKeyPressed (const Tizen::Ui::Control& source, Tizen::Ui::KeyCode keyCode);
			virtual void OnKeyReleased (const Tizen::Ui::Control& source, Tizen::Ui::KeyCode keyCode);
			virtual void OnScreenOff (void);
			virtual void OnScreenOn (void);
			virtual void OnTimerExpired (Tizen::Base::Runtime::Timer& timer);
			virtual void OnTouchCanceled (const Tizen::Ui::Control &source, const Tizen::Graphics::Point &currentPosition, const Tizen::Ui::TouchEventInfo &touchInfo);
			virtual void OnTouchFocusIn (const Tizen::Ui::Control &source, const Tizen::Graphics::Point &currentPosition, const Tizen::Ui::TouchEventInfo &touchInfo);
			virtual void OnTouchFocusOut (const Tizen::Ui::Control &source, const Tizen::Graphics::Point &currentPosition, const Tizen::Ui::TouchEventInfo &touchInfo);
			virtual void OnTouchMoved (const Tizen::Ui::Control &source, const Tizen::Graphics::Point &currentPosition, const Tizen::Ui::TouchEventInfo &touchInfo);
			virtual void OnTouchPressed (const Tizen::Ui::Control &source, const Tizen::Graphics::Point &currentPosition, const Tizen::Ui::TouchEventInfo &touchInfo);
			virtual void OnTouchReleased (const Tizen::Ui::Control &source, const Tizen::Graphics::Point &currentPosition, const Tizen::Ui::TouchEventInfo &touchInfo);
		
		private:
			
			void Cleanup (void);
			
			Tizen::Ui::Controls::Form* mForm;
			//Tizen::Uix::Sensor::SensorManager* mSensorManager;
			Tizen::Base::Runtime::Timer* mTimer;
		
	};
	
	
	class TizenForm : public Tizen::Ui::Controls::Form {
		
		public:
			
			TizenForm (TizenApplication* inApplication) : mApplication (inApplication) {}
			virtual ~TizenForm (void) {}
			
			virtual result OnDraw (void) {
				
				return E_SUCCESS;
				
			}
			
		private:
			
			TizenApplication* mApplication;
		
	};
	
	
}


#endif
