//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PreferencesUI/NSObject-Protocol.h>

@class NSArray, NSURL, PSSearchController;

@protocol PSSearchControllerDelegate <NSObject>
- (NSArray *)rootSpecifiersForSearchController:(PSSearchController *)arg1;
- (void)searchController:(PSSearchController *)arg1 openURL:(NSURL *)arg2;
@end

