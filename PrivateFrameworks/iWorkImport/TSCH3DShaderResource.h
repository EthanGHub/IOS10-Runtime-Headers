//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DResource.h>

@class TSCH3DShaderProgram;

__attribute__((visibility("hidden")))
@interface TSCH3DShaderResource : TSCH3DResource
{
    TSCH3DShaderProgram *mProgram;
}

+ (pair_10e2d813)stringsFromBuffer:(id)arg1;
- (id)get;
@property(readonly, nonatomic) TSCH3DShaderProgram *program;
- (void)appendShaderResourceString:(IteratorRange_617e5e79)arg1 toDataBuffer:(id)arg2;
- (IteratorRange_617e5e79)resourceStringOfString:(id)arg1;
- (void)dealloc;
- (id)initWithCaching:(int)arg1 version:(id)arg2;
- (id)initWithCaching:(int)arg1;

@end
