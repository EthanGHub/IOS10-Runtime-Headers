//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface SuggestedAppsController : NSObject
{
    NSArray *_specifiers;
}

- (void).cxx_destruct;
- (void)setAppStore:(id)arg1 specifier:(id)arg2;
- (id)appStore:(id)arg1;
- (void)setMyApps:(id)arg1 specifier:(id)arg2;
- (id)myApps:(id)arg1;
- (void)reloadSpecifiers;
@property(readonly, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;

@end
