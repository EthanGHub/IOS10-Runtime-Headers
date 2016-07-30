//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface KNSlideNodeDepthMap : NSObject
{
    NSArray *_slideNodes;
    NSArray *_depthsOfSlideNodes;
}

@property(readonly, nonatomic) NSArray *depthsOfSlideNodes; // @synthesize depthsOfSlideNodes=_depthsOfSlideNodes;
@property(readonly, nonatomic) NSArray *slideNodes; // @synthesize slideNodes=_slideNodes;
- (void)enumerateSlideNodesAndDepthsUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSlideNodes:(id)arg1 depths:(id)arg2;

@end
