//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray, NSString;
@protocol SAUITemplateItem;

@interface SAUITemplateTabularData : SAUITemplateBaseItem
{
}

+ (id)tabularDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)tabularData;
@property(nonatomic) _Bool showHeaderDivider;
@property(copy, nonatomic) NSString *layoutStyle;
@property(retain, nonatomic) id <SAUITemplateItem> headerItem;
@property(retain, nonatomic) id <SAUITemplateItem> footerItem;
@property(copy, nonatomic) NSArray *columns;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
