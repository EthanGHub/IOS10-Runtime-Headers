//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference;
@protocol OS_dispatch_queue;

@interface AVAssetResourceLoadingDataRequestInternal : NSObject
{
    long long requestedOffset;
    long long requestedLength;
    long long currentOffset;
    NSObject<OS_dispatch_queue> *dataResponseQueue;
    _Bool requestsAllDataToEndOfResource;
    _Bool canSupplyIncrementalDataImmediately;
    AVWeakReference *weakReferenceToLoadingRequest;
}

@end
