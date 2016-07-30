//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCAnimatableBlurringView.h>

#import <UserNotificationsUIKit/NCCustomContentContainingLookView-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationStaticContentAccepting-Protocol.h>
#import <UserNotificationsUIKit/UIScrollViewDelegate-Protocol.h>

@class NCKeyLineView, NCLookHeaderContentView, NCNotificationContentView, NSArray, NSDate, NSString, UIButton, UIImage, UIInterfaceActionGroupView, UIScrollView, UIView;

@interface NCNotificationLongLookView : NCAnimatableBlurringView <UIScrollViewDelegate, NCNotificationStaticContentAccepting, NCCustomContentContainingLookView>
{
    UIView *_headerClippingView;
    NCLookHeaderContentView *_headerContentView;
    UIView *_headerDivider;
    UIView *_mainContentView;
    UIView *_mainContentClippingView;
    UIView *_topRubberbandingView;
    UIView *_customContentView;
    NCNotificationContentView *_notificationContentView;
    NCKeyLineView *_actionsKeyLineView;
    UIView *_actionsClippingView;
    UIView *_actionsBackgroundView;
    UIInterfaceActionGroupView *_actionsView;
    _Bool _hidesNotificationContent;
    unsigned long long _customContentLocation;
    UIScrollView *_scrollView;
    struct CGSize _customContentSize;
}

@property(readonly, nonatomic, getter=_scrollView) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool hidesNotificationContent; // @synthesize hidesNotificationContent=_hidesNotificationContent;
@property(nonatomic) unsigned long long customContentLocation; // @synthesize customContentLocation=_customContentLocation;
@property(nonatomic) struct CGSize customContentSize; // @synthesize customContentSize=_customContentSize;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)_layoutActionsView;
- (void)_layoutCustomContentViewInRelationToContentView;
- (void)_layoutNotificationContentView;
- (void)_layoutCustomContentView;
- (void)_layoutMainContentClippingView;
- (void)_layoutMainContentView;
- (void)_layoutTopRubberbandingView;
- (void)_layoutScrollView;
- (void)_layoutHeader;
- (void)_configureActionViewIfNecessaryWithActions:(id)arg1;
- (void)_configureActionsBackgroundViewIfNecessaryWithActions:(id)arg1;
- (void)_configureActionsClippingViewIfNecessaryWithActions:(id)arg1;
- (void)_configureActionsKeyLineViewIfNecessaryWithActions:(id)arg1;
- (void)_configureNotificationContentViewIfNecessary;
- (void)_configureCustomContentViewIfNecessary;
- (void)_configureMainContentClippingViewIfNecessary;
- (void)_configureMainContentViewIfNecessary;
- (void)_configureScrollViewIfNecessary;
- (void)_configureHeaderContentViewIfNecessary;
- (void)_configureHeaderClippingViewIfNecessary;
@property(readonly, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
- (long long)lookStyle;
@property(readonly, nonatomic) struct CGSize contentSizeExcludingActions;
- (struct CGSize)contentSizeForSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;
- (struct CGSize)_contentSizeThatFitsContentWithSizeExcludingActions:(struct CGSize)arg1;
@property(retain, nonatomic) UIImage *thumbnail;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *primarySubtitleText;
@property(copy, nonatomic) NSString *primaryText;
@property(retain, nonatomic) NSArray *interfaceActions;
@property(retain, nonatomic) UIView *colorInfusionView;
@property(nonatomic, getter=isBanner) _Bool banner;
@property(nonatomic, getter=isBackgroundBlurred) _Bool backgroundBlurred;
@property(readonly, nonatomic) UIButton *iconButton;
@property(readonly, nonatomic) UIButton *utilityButton;
@property(copy, nonatomic) NSDate *date;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *icon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *hintText;
@property(readonly) Class superclass;

@end
