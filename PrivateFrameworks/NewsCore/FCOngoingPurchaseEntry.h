//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface FCOngoingPurchaseEntry : NSObject
{
    _Bool _webAccessOptIn;
    NSString *_tagID;
    NSString *_purchaseID;
    NSString *_productIdentifier;
    NSNumber *_appAdamID;
    NSNumber *_storeExternalVersion;
    NSString *_vendorIdentifier;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(copy, nonatomic) NSNumber *storeExternalVersion; // @synthesize storeExternalVersion=_storeExternalVersion;
@property(copy, nonatomic) NSNumber *appAdamID; // @synthesize appAdamID=_appAdamID;
@property(nonatomic) _Bool webAccessOptIn; // @synthesize webAccessOptIn=_webAccessOptIn;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSString *purchaseID; // @synthesize purchaseID=_purchaseID;
@property(copy, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 productIdentifier:(id)arg4 webAccessOptIn:(_Bool)arg5 appAdamID:(id)arg6 storeExternalVersion:(id)arg7 vendorIdentifier:(id)arg8;

@end

