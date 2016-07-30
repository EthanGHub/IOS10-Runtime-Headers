//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUGridCell.h>

#import <HomeUI/HUAccessoryViewCellProtocol-Protocol.h>

@class HFItem, HUGridServiceCellAccessoryViewContainer, HUGridServiceCellLayoutOptions, HUGridServiceCellTextView, HUIconView, NSArray, NSString, UIActivityIndicatorView, UILabel, UIView;
@protocol NACancelable;

@interface HUGridServiceCell : HUGridCell <HUAccessoryViewCellProtocol>
{
    _Bool _shouldColorDescription;
    HFItem *_serviceItem;
    HUIconView *_iconView;
    HUGridServiceCellTextView *_serviceTextView;
    UILabel *_coloredDescriptionLabel;
    HUGridServiceCellAccessoryViewContainer *_accessoryViewContainer;
    UIActivityIndicatorView *_activityIndicator;
    NSArray *_serviceCellConstraints;
    id <NACancelable> _showProgressIndicatorAfterDelayToken;
}

+ (Class)layoutOptionsClass;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) id <NACancelable> showProgressIndicatorAfterDelayToken; // @synthesize showProgressIndicatorAfterDelayToken=_showProgressIndicatorAfterDelayToken;
@property(retain, nonatomic) NSArray *serviceCellConstraints; // @synthesize serviceCellConstraints=_serviceCellConstraints;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) HUGridServiceCellAccessoryViewContainer *accessoryViewContainer; // @synthesize accessoryViewContainer=_accessoryViewContainer;
@property(retain, nonatomic) UILabel *coloredDescriptionLabel; // @synthesize coloredDescriptionLabel=_coloredDescriptionLabel;
@property(retain, nonatomic) HUGridServiceCellTextView *serviceTextView; // @synthesize serviceTextView=_serviceTextView;
@property(retain, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool shouldColorDescription; // @synthesize shouldColorDescription=_shouldColorDescription;
@property(retain, nonatomic) HFItem *serviceItem; // @synthesize serviceItem=_serviceItem;
- (void).cxx_destruct;
- (void)_getDescription:(id *)arg1 nameTextColor:(id *)arg2 descriptionTextColor:(id *)arg3 forPrimaryState:(long long)arg4;
- (void)updateConstraints;
- (void)_invalidateConstraints;
- (void)contentEffectDidChange;
- (void)layoutOptionsDidChange;
- (void)animateFlash;
- (void)_updateUIWithAnimation:(_Bool)arg1 overridePrimaryState:(long long)arg2;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)setItem:(id)arg1;
- (id)item;
@property(nonatomic) _Bool disableContinuousIconAnimation;
@property(retain, nonatomic) UIView *accessoryView;
- (void)_setServiceItem:(id)arg1 updateUI:(_Bool)arg2;
- (void)_setupServiceCell;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) HUGridServiceCellLayoutOptions *layoutOptions; // @dynamic layoutOptions;
@property(readonly) Class superclass;

@end
