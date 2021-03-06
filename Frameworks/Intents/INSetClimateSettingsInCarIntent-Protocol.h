//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSNumber;

@protocol INSetClimateSettingsInCarIntent <NSObject, JSExport>
@property(nonatomic) long long relativeTemperatureSetting;
@property(copy, nonatomic) NSNumber *temperature;
@property(nonatomic) long long temperatureUnit;
@property(nonatomic) long long relativeFanSpeedSetting;
@property(copy, nonatomic) NSNumber *fanSpeedPercentage;
@property(copy, nonatomic) NSNumber *fanSpeedIndex;
@property(nonatomic) long long airCirculationMode;
@property(copy, nonatomic) NSNumber *enableAutoMode;
@property(copy, nonatomic) NSNumber *enableClimateControl;
@property(copy, nonatomic) NSNumber *enableAirConditioner;
@property(copy, nonatomic) NSNumber *enableFan;
@end

