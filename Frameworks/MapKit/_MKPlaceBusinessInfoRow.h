//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionItemView.h>

@class NSArray, NSMutableArray, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface _MKPlaceBusinessInfoRow : MKPlaceSectionItemView
{
    _Bool _needToRecalculateWidth;
    unsigned long long _numberOfColumns;
    NSMutableArray *_labels;
    NSArray *_constraints;
    UILayoutGuide *_leftColumnGuide;
    UILayoutGuide *_rightColumnGuide;
    NSArray *_items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

