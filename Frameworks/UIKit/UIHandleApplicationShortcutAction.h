//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class SBSApplicationShortcutItem, UIApplicationShortcutItem;

@interface UIHandleApplicationShortcutAction : BSAction
{
}

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) UIApplicationShortcutItem *uiShortcutItem;
@property(readonly, copy, nonatomic) SBSApplicationShortcutItem *sbsShortcutItem;
- (long long)UIActionType;
- (id)initWithSBSShortcutItem:(id)arg1;

@end

