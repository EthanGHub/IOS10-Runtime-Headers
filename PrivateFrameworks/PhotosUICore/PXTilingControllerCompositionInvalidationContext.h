//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PXTilingController;
@protocol NSObject;

@interface PXTilingControllerCompositionInvalidationContext : NSObject
{
    id <NSObject> _animationOptions;
    PXTilingController *_originatingTilingController;
}

@property(retain, nonatomic) PXTilingController *originatingTilingController; // @synthesize originatingTilingController=_originatingTilingController;
@property(retain, nonatomic) id <NSObject> animationOptions; // @synthesize animationOptions=_animationOptions;
- (void).cxx_destruct;
- (id)description;

@end

