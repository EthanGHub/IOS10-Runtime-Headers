//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUICardSection.h>

#import <SearchUI/SearchUITableRowCardSection-Protocol.h>

@class NSArray, NSString, NSURL;
@protocol SearchUITableAlignmentSchema;

@interface SearchUITableRowCardSection : SearchUICardSection <SearchUITableRowCardSection>
{
    NSString *_tabGroupID;
    NSString *_tableID;
    id <SearchUITableAlignmentSchema> _alignmentSchema;
    unsigned long long _rowType;
    NSArray *_values;
}

+ (id)rowWithItems:(id)arg1 tableID:(id)arg2;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(nonatomic) unsigned long long rowType; // @synthesize rowType=_rowType;
@property(retain, nonatomic) id <SearchUITableAlignmentSchema> alignmentSchema; // @synthesize alignmentSchema=_alignmentSchema;
@property(copy, nonatomic) NSString *tableID; // @synthesize tableID=_tableID;
@property(copy, nonatomic) NSString *tabGroupID; // @synthesize tabGroupID=_tabGroupID;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasBottomPadding;
@property(readonly, nonatomic) _Bool hasTopPadding;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool hideDivider;
@property(readonly, nonatomic) NSArray *punchoutOptions;
@property(readonly, nonatomic) NSString *punchoutPickerDismissLabel;
@property(readonly, nonatomic) NSString *punchoutPickerLabel;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSURL *url;

@end

