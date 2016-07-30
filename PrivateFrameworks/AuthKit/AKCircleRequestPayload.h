//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface AKCircleRequestPayload : NSObject <NSSecureCoding>
{
    NSString *_serverInfo;
    NSData *_clientInfo;
    long long _clientErrorCode;
    NSString *_altDSID;
    NSString *_transactionId;
    NSDictionary *_responseInfo;
    unsigned long long _circleStep;
}

+ (_Bool)supportsSecureCoding;
+ (id)payloadWithInfo:(id)arg1;
@property(nonatomic) unsigned long long circleStep; // @synthesize circleStep=_circleStep;
@property(retain, nonatomic) NSDictionary *responseInfo; // @synthesize responseInfo=_responseInfo;
@property(retain, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(nonatomic) long long clientErrorCode; // @synthesize clientErrorCode=_clientErrorCode;
@property(retain, nonatomic) NSData *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) NSString *serverInfo; // @synthesize serverInfo=_serverInfo;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)replyPayload;
- (_Bool)isAcceptingPayload;
- (_Bool)isRequestingPayload;

@end
