//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/NSSecureCoding-Protocol.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface QLToolbarButton : NSObject <NSSecureCoding>
{
    _Bool _shouldTryToCenter;
    _Bool _forceToNavBar;
    _Bool _selected;
    NSString *_identifier;
    UIImage *_image;
    long long _systemItem;
    NSString *_title;
    NSString *_accessibilityIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property _Bool selected; // @synthesize selected=_selected;
@property _Bool forceToNavBar; // @synthesize forceToNavBar=_forceToNavBar;
@property(readonly) _Bool shouldTryToCenter; // @synthesize shouldTryToCenter=_shouldTryToCenter;
@property(copy) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) long long systemItem; // @synthesize systemItem=_systemItem;
@property(readonly) UIImage *image; // @synthesize image=_image;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)barButtonWithTarget:(id)arg1 action:(SEL)arg2 maxSize:(struct CGSize)arg3;
- (id)initWithIdentifier:(id)arg1 systemItem:(long long)arg2 shouldTryToCenter:(_Bool)arg3;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 shouldTryToCenter:(_Bool)arg3;
- (id)initWithIdentifier:(id)arg1 image:(id)arg2 shouldTryToCenter:(_Bool)arg3;
- (id)init;

@end
