//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INCache.h>

@interface INImageCache : INCache
{
}

+ (id)sharedCache;
- (void)flush;
- (id)consumeImageForIdentifier:(id)arg1;
- (id)imageForIdentifier:(id)arg1;
- (void)removeImage:(id)arg1;
- (void)addImage:(id)arg1;

@end
