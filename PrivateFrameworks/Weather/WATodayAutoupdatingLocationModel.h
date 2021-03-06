//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Weather/WATodayModel.h>

#import <Weather/CLLocationManagerDelegate-Protocol.h>
#import <Weather/SynchronizedDefaultsDelegate-Protocol.h>

@class NSMutableSet, NSString, WeatherLocationManager, WeatherPreferences;

@interface WATodayAutoupdatingLocationModel : WATodayModel <CLLocationManagerDelegate, SynchronizedDefaultsDelegate>
{
    _Bool _isLocationTrackingEnabled;
    _Bool _locationServicesActive;
    _Bool _hasLocationChangedSinceLastUpdate;
    WeatherLocationManager *_locationManager;
    unsigned long long _citySource;
    NSMutableSet *_locationCompletionHandlers;
    WeatherPreferences *_preferences;
    CDUnknownBlockType _WeatherLocationManagerGenerator;
}

+ (id)_loadSavedFirstCityFromPreferences:(id)arg1;
+ (id)_loadSavedLastForecastModelFromPreferences:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType WeatherLocationManagerGenerator; // @synthesize WeatherLocationManagerGenerator=_WeatherLocationManagerGenerator;
@property(retain, nonatomic) WeatherPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) NSMutableSet *locationCompletionHandlers; // @synthesize locationCompletionHandlers=_locationCompletionHandlers;
@property(nonatomic) unsigned long long citySource; // @synthesize citySource=_citySource;
@property(nonatomic) _Bool hasLocationChangedSinceLastUpdate; // @synthesize hasLocationChangedSinceLastUpdate=_hasLocationChangedSinceLastUpdate;
@property(nonatomic) _Bool locationServicesActive; // @synthesize locationServicesActive=_locationServicesActive;
@property(nonatomic) _Bool isLocationTrackingEnabled; // @synthesize isLocationTrackingEnabled=_isLocationTrackingEnabled;
@property(retain, nonatomic) WeatherLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)_clearLocalWeatherUpdateState:(_Bool)arg1;
- (void)_persistState;
- (_Bool)_reloadForecastData:(_Bool)arg1;
- (void)ubiquitousDefaultsDidChange:(id)arg1;
- (void)_executeLocationUpdateForFirstWeatherCityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_executeLocationUpdateForLocalWeatherCityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchWFLocationFromCLLocation:(id)arg1;
- (void)_executeForecastRetrievalForLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_executeLocationUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_weatherPreferencesWereSynchronized:(id)arg1;
- (void)_teardownLocationManager;
- (void)_kickstartLocationManager;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)setCitySource:(unsigned long long)arg1 fireNotification:(_Bool)arg2;
- (id)forecastModel;
- (id)location;
- (void)setLocation:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

