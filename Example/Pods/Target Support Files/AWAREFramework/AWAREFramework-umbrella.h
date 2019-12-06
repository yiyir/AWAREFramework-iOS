#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "AWARECore.h"
#import "AWAREMotionSensor.h"
#import "AWARESensor.h"
#import "AWARESensorManager.h"
#import "AWARESensors.h"
#import "AWAREStorage.h"
#import "CSVStorage.h"
#import "JSONStorage.h"
#import "SQLiteStorage.h"
#import "BRLineReader.h"
#import "BaseCoreDataHandler.h"
#import "CoreDataHandler.h"
#import "ExternalCoreDataHandler.h"
#import "DBTableCreator.h"
#import "SyncExecutor.h"
#import "TCQMaker.h"
#import "AWAREStudy.h"
#import "AWAREEventLogger.h"
#import "AWAREKeys.h"
#import "AWAREStatusMonitor.h"
#import "AWAREUtils.h"
#import "EntityAWAREStatus+CoreDataClass.h"
#import "EntityAWAREStatus+CoreDataProperties.h"
#import "EntityEventLog+CoreDataClass.h"
#import "EntityEventLog+CoreDataProperties.h"
#import "Reachability.h"
#import "Accelerometer.h"
#import "AWAREAccelerometerIndexOM+CoreDataClass.h"
#import "AWAREAccelerometerIndexOM+CoreDataProperties.h"
#import "AWAREAccelerometerOM+CoreDataClass.h"
#import "AWAREAccelerometerOM+CoreDataProperties.h"
#import "EntityAccelerometer+CoreDataProperties.h"
#import "EntityAccelerometer.h"
#import "Barometer.h"
#import "EntityBarometer+CoreDataProperties.h"
#import "EntityBarometer.h"
#import "BasicSettings.h"
#import "Battery.h"
#import "BatteryCharge.h"
#import "BatteryDischarge.h"
#import "EntityBattery+CoreDataProperties.h"
#import "EntityBattery.h"
#import "EntityBatteryCharge+CoreDataProperties.h"
#import "EntityBatteryCharge.h"
#import "EntityBatteryDischarge+CoreDataProperties.h"
#import "EntityBatteryDischarge.h"
#import "Calls.h"
#import "EntityCall+CoreDataProperties.h"
#import "EntityCall.h"
#import "AWAREDevice.h"
#import "DeviceUsage.h"
#import "EntityDeviceUsage+CoreDataProperties.h"
#import "EntityDeviceUsage.h"
#import "EntityFitbitData+CoreDataClass.h"
#import "EntityFitbitData+CoreDataProperties.h"
#import "EntityFitbitDevice+CoreDataClass.h"
#import "EntityFitbitDevice+CoreDataProperties.h"
#import "Fitbit.h"
#import "FitbitData.h"
#import "FitbitDevice.h"
#import "EntityLocationVisit+CoreDataProperties.h"
#import "EntityLocationVisit.h"
#import "FusedLocations.h"
#import "AWAREGoogleLoginViewController.h"
#import "GoogleLogin.h"
#import "EntityGravity+CoreDataProperties.h"
#import "EntityGravity.h"
#import "Gravity.h"
#import "EntityGyroscope+CoreDataProperties.h"
#import "EntityGyroscope.h"
#import "Gyroscope.h"
#import "IOSESM.h"
#import "EntityLinearAccelerometer+CoreDataProperties.h"
#import "EntityLinearAccelerometer.h"
#import "LinearAccelerometer.h"
#import "EntityLocation+CoreDataProperties.h"
#import "EntityLocation.h"
#import "Locations.h"
#import "VisitLocations.h"
#import "EntityMagnetometer+CoreDataProperties.h"
#import "EntityMagnetometer.h"
#import "Magnetometer.h"
#import "EntityMemory+CoreDataProperties.h"
#import "EntityMemory.h"
#import "Memory.h"
#import "EntityNetwork+CoreDataProperties.h"
#import "EntityNetwork.h"
#import "Network.h"
#import "EntityNTPTime+CoreDataProperties.h"
#import "EntityNTPTime.h"
#import "NTPTime.h"
#import "EntityOpenWeather+CoreDataProperties.h"
#import "EntityOpenWeather.h"
#import "OpenWeather.h"
#import "Orientation.h"
#import "EntityProcessor+CoreDataProperties.h"
#import "EntityProcessor.h"
#import "Processor.h"
#import "EntityProximity+CoreDataProperties.h"
#import "EntityProximity.h"
#import "Proximity.h"
#import "EntityPushNotification+CoreDataProperties.h"
#import "EntityPushNotification.h"
#import "PushNotification.h"
#import "EntityRotation+CoreDataProperties.h"
#import "EntityRotation.h"
#import "Rotation.h"
#import "EntityScreen+CoreDataProperties.h"
#import "EntityScreen.h"
#import "Screen.h"
#import "EntitySignificantMotion+CoreDataClass.h"
#import "EntitySignificantMotion+CoreDataProperties.h"
#import "SignificantMotion.h"
#import "EntityTimezone+CoreDataProperties.h"
#import "EntityTimezone.h"
#import "Timezone.h"
#import "EntitySensorWifi+CoreDataClass.h"
#import "EntitySensorWifi+CoreDataProperties.h"
#import "EntityWifi+CoreDataProperties.h"
#import "EntityWifi.h"
#import "MobileWiFi.h"
#import "WiFiDeviceClient.h"
#import "WiFiManager.h"
#import "WiFiNetwork.h"
#import "SensorWifi.h"
#import "Wifi.h"
#import "ESM.h"
#import "EntityESM+CoreDataClass.h"
#import "EntityESM+CoreDataProperties.h"
#import "EntityESMAnswer+CoreDataProperties.h"
#import "EntityESMAnswer.h"
#import "EntityESMAnswerHistory+CoreDataClass.h"
#import "EntityESMAnswerHistory+CoreDataProperties.h"
#import "EntityESMSchedule+CoreDataClass.h"
#import "EntityESMSchedule+CoreDataProperties.h"
#import "ESMItem.h"
#import "ESMSchedule.h"
#import "ESMScheduleManager.h"
#import "BaseESMView.h"
#import "ESMAudioView.h"
#import "ESMCheckBoxView.h"
#import "ESMClockLineView.h"
#import "ESMClockTimePickerView.h"
#import "ESMDateTimePickerView.h"
#import "ESMLikertScaleView.h"
#import "ESMNumberView.h"
#import "ESMPAMView.h"
#import "PamSchema.h"
#import "ESMPictureView.h"
#import "ESMQuickAnswerView.h"
#import "ESMRadioView.h"
#import "ESMScaleView.h"
#import "ESMFreeTextView.h"
#import "ESMVideoView.h"
#import "ESMWebView.h"
#import "ESMScrollViewController.h"

FOUNDATION_EXPORT double AWAREFrameworkVersionNumber;
FOUNDATION_EXPORT const unsigned char AWAREFrameworkVersionString[];

