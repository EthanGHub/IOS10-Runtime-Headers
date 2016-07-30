//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MSSubscribedStream, NSArray;
@protocol MSSubscriberDelegate;

@protocol MSSubscriber
@property(nonatomic) id <MSSubscriberDelegate> delegate;
- (void)stop;
- (void)abort;
- (MSSubscribedStream *)ownSubscribedStream;
- (NSArray *)subscribedStreams;
- (void)retrieveAssets:(NSArray *)arg1;
- (void)checkForOutstandingActivities;
- (void)checkForNewAssetCollections;
- (void)resetSync;
@end
