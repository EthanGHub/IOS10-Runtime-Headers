//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPStoreCompletionOfferResponse : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_itemsByVariant;
    NSDictionary *_responseDictionary;
}

@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void).cxx_destruct;
- (id)mediaItemsWithStoreOfferVariant:(long long)arg1;
- (id)initWithResponseDictionary:(id)arg1;

@end
