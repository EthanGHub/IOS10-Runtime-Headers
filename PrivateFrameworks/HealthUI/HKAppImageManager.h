//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/NSURLSessionDataDelegate-Protocol.h>
#import <HealthUI/NSURLSessionDelegate-Protocol.h>
#import <HealthUI/NSURLSessionTaskDelegate-Protocol.h>

@class NSCache, NSMapTable, NSMutableDictionary, NSString, NSURLSession;

@interface HKAppImageManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSCache *_iconCache;
    NSURLSession *_session;
    NSMapTable *_containers;
    NSMutableDictionary *_urlConnections;
}

+ (id)sharedImageManager;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)cancelLoadAppImageAtURL:(id)arg1;
- (void)loadAppImageAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearImageCache;
- (id)defaultAppIcon;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

