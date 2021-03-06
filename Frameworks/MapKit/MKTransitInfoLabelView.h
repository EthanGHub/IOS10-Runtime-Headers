//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MKUILabel.h>

@class MKMapItem, NSArray;

@interface MKTransitInfoLabelView : _MKUILabel
{
    _Bool _hasCustomShieldSize;
    _Bool _hasCustomIconSize;
    _Bool _hasCustomFont;
    _Bool _truncateBySwitchingToTextOnly;
    _Bool _containsText;
    double _maxWidth;
    MKMapItem *_mapItem;
    long long _shieldSize;
    long long _iconSize;
    NSArray *_labelItems;
    double _spaceBetweenShields;
}

@property(readonly, nonatomic) _Bool containsText; // @synthesize containsText=_containsText;
@property(nonatomic) double spaceBetweenShields; // @synthesize spaceBetweenShields=_spaceBetweenShields;
@property(copy, nonatomic) NSArray *labelItems; // @synthesize labelItems=_labelItems;
@property(nonatomic) long long iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) long long shieldSize; // @synthesize shieldSize=_shieldSize;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) _Bool truncateBySwitchingToTextOnly; // @synthesize truncateBySwitchingToTextOnly=_truncateBySwitchingToTextOnly;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (void).cxx_destruct;
- (long long)_iconSizeForContentSizeCategory:(id)arg1;
- (long long)_shieldSizeForContentSizeCategory:(id)arg1;
- (void)_contentSizeCategoryDidChange;
- (void)_setFont:(id)arg1 custom:(_Bool)arg2;
- (void)setFont:(id)arg1;
- (id)_imageForShieldDataSource:(id)arg1;
- (id)_imageForArtworkDataSource:(id)arg1;
- (id)_imageForLabelItem:(id)arg1;
- (id)_stringAttributes;
- (id)_generateText:(_Bool)arg1 allowElipsis:(_Bool)arg2;
- (void)_setupLabelInfo;
- (void)dealloc;
- (id)init;
- (id)initWithMapItem:(id)arg1 maxWidth:(double)arg2;
- (id)initWithMapItem:(id)arg1;

@end

