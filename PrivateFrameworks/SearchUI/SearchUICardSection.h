//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUI/SearchUICardSection-Protocol.h>

@class NSArray, NSString, NSURL;

@interface SearchUICardSection : NSObject <SearchUICardSection>
{
    _Bool _hideDivider;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    NSString *_type;
    NSURL *_url;
    NSString *_punchoutPickerLabel;
    NSString *_punchoutPickerDismissLabel;
    NSArray *_punchoutOptions;
}

@property(retain, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
@property(retain, nonatomic) NSString *punchoutPickerDismissLabel; // @synthesize punchoutPickerDismissLabel=_punchoutPickerDismissLabel;
@property(retain, nonatomic) NSString *punchoutPickerLabel; // @synthesize punchoutPickerLabel=_punchoutPickerLabel;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool hideDivider; // @synthesize hideDivider=_hideDivider;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
