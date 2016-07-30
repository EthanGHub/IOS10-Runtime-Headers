//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKLayoutRule.h>

@interface NTKSolarDigitalTimeLayoutRule : NTKLayoutRule
{
    double _sunToTimeMinimumDistance;
    double _mininumY;
    double _maxinumY;
    struct CGRect _sunFrame;
}

@property(nonatomic) double maxinumY; // @synthesize maxinumY=_maxinumY;
@property(nonatomic) double mininumY; // @synthesize mininumY=_mininumY;
@property(nonatomic) double sunToTimeMinimumDistance; // @synthesize sunToTimeMinimumDistance=_sunToTimeMinimumDistance;
@property(nonatomic) struct CGRect sunFrame; // @synthesize sunFrame=_sunFrame;
- (struct CGRect)calculateLayoutFrameForBoundsSize:(struct CGSize)arg1;
- (_Bool)acceptTimeFrame:(struct CGRect)arg1 containingFrame:(struct CGRect)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
