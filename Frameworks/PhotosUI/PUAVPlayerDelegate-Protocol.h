//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUAVPlayer;

@protocol PUAVPlayerDelegate <NSObject>

@optional
- (void)avPlayerDidDeallocate;
- (void)avPlayerStatusDidChange:(PUAVPlayer *)arg1;
- (void)avPlayerRateDidChange:(PUAVPlayer *)arg1;
@end

