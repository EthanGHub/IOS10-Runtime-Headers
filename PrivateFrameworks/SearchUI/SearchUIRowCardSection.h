//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUICardSection.h>

#import <SearchUI/SearchUIRowCardSection-Protocol.h>

@class NSArray, NSString, NSURL, UIImage;

@interface SearchUIRowCardSection : SearchUICardSection <SearchUIRowCardSection>
{
    _Bool _imageIsRightAligned;
    NSString *_leftText;
    NSString *_rightText;
    UIImage *_image;
    double _imageCornerRadius;
}

@property(nonatomic) double imageCornerRadius; // @synthesize imageCornerRadius=_imageCornerRadius;
@property(nonatomic) _Bool imageIsRightAligned; // @synthesize imageIsRightAligned=_imageIsRightAligned;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *rightText; // @synthesize rightText=_rightText;
@property(copy, nonatomic) NSString *leftText; // @synthesize leftText=_leftText;
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
