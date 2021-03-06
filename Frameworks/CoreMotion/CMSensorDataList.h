//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSFastEnumeration-Protocol.h>

@class CLSensorRecorderAccelMeta, CMSensorRecorderInternal, NSArray, NSMutableArray;
@protocol OS_xpc_object;

@interface CMSensorDataList : NSObject <NSFastEnumeration>
{
    CMSensorRecorderInternal *fProxy;
    NSObject<OS_xpc_object> *fDataBuffer;
    CLSensorRecorderAccelMeta *fCurrentBlock;
    unsigned long long fCurrentBlockIdentifier;
    long long fCurrentBlockDataIdentifier;
    double fCurrentBlockStartTime;
    unsigned long long fCurrentBlockTimestamp;
    char *fDataBufferPtr;
    unsigned long long fDataBufferLength;
    unsigned long long fCurrentIdentifier;
    unsigned long long fStartingIdentifier;
    long long fRetrievedDataBufferIdentifier;
    unsigned long long fBlockOffset;
    struct Unpacker fAccelUnpacker;
    NSMutableArray *fCachedAccel;
    NSArray *fMetaArray;
}

- (id).cxx_construct;
- (_Bool)_updatePointers;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)_updateCurrentBlockProperties;
- (void)dealloc;
- (id)initFrom:(double)arg1 to:(double)arg2;
- (id)initWithIdentifier:(unsigned long long)arg1;

@end

