//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCFeedDescriptor.h>

@class FCPrivateZoneController;

@interface FCPrivateZoneFeedDescriptor : FCFeedDescriptor
{
    FCPrivateZoneController *_privateZoneController;
}

@property(retain, nonatomic) FCPrivateZoneController *privateZoneController; // @synthesize privateZoneController=_privateZoneController;
- (void).cxx_destruct;
- (id)backingHeadlineIDs;
- (id)streamOfLatestHeadlinesWithContext:(id)arg1;
- (id)initWithPrivateZoneController:(id)arg1 identifier:(id)arg2;
- (id)initWithIdentifier:(id)arg1;

@end

