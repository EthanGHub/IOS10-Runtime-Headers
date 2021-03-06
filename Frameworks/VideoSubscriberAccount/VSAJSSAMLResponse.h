//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/VSAJSSAMLResponse-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VSAJSSAMLResponse : IKJSObject <VSAJSSAMLResponse, NSCopying>
{
    NSString *_authN;
    NSString *_authZ;
    NSString *_userMetadata;
    NSString *_logout;
    NSArray *_userChannelList;
}

@property(copy, nonatomic) NSArray *userChannelList; // @synthesize userChannelList=_userChannelList;
@property(copy, nonatomic) NSString *logout; // @synthesize logout=_logout;
@property(copy, nonatomic) NSString *userMetadata; // @synthesize userMetadata=_userMetadata;
@property(copy, nonatomic) NSString *authZ; // @synthesize authZ=_authZ;
@property(copy, nonatomic) NSString *authN; // @synthesize authN=_authN;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

