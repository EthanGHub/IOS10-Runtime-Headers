//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BBDismissalItem, NSString;

@interface BBDismissalSyncBulletinMatch : NSObject
{
    NSString *_sectionID;
    BBDismissalItem *_dismissalItem;
    NSString *_dismissalID;
    unsigned long long _feeds;
}

@property(nonatomic) unsigned long long feeds; // @synthesize feeds=_feeds;
@property(copy, nonatomic) NSString *dismissalID; // @synthesize dismissalID=_dismissalID;
@property(retain, nonatomic) BBDismissalItem *dismissalItem; // @synthesize dismissalItem=_dismissalItem;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDismissalDictionaryItem:(id)arg1;
- (id)initWithDismissalID:(id)arg1 andItem:(id)arg2;

@end
