//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSTLayoutProcessChangesActions : NSObject
{
    _Bool mLayoutInvalidate;
    _Bool mLayoutInvalidateProvider;
    _Bool mLayoutInvalidateSize;
    _Bool mLayoutInvalidateTableNameVisibility;
    _Bool mLayoutSpacesInvalidateCoordinates;
    _Bool mLayoutSpacesInvalidateTableOffsets;
}

@property(nonatomic) _Bool layoutSpacesInvalidateTableOffsets; // @synthesize layoutSpacesInvalidateTableOffsets=mLayoutSpacesInvalidateTableOffsets;
@property(nonatomic) _Bool layoutSpacesInvalidateCoordinates; // @synthesize layoutSpacesInvalidateCoordinates=mLayoutSpacesInvalidateCoordinates;
@property(nonatomic) _Bool layoutInvalidateTableNameVisibility; // @synthesize layoutInvalidateTableNameVisibility=mLayoutInvalidateTableNameVisibility;
@property(nonatomic) _Bool layoutInvalidateSize; // @synthesize layoutInvalidateSize=mLayoutInvalidateSize;
@property(nonatomic) _Bool layoutInvalidateProvider; // @synthesize layoutInvalidateProvider=mLayoutInvalidateProvider;
@property(nonatomic) _Bool layoutInvalidate; // @synthesize layoutInvalidate=mLayoutInvalidate;

@end
