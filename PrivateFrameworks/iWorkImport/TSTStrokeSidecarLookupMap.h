//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexSet, TSTCellRegion, TSTStrokeLayer, TSTStrokeSidecar;

__attribute__((visibility("hidden")))
@interface TSTStrokeSidecarLookupMap : NSObject
{
    TSTStrokeSidecar *_strokeSidecar;
    TSTCellRegion *_region;
    NSIndexSet *_columnIndiciesInRow;
    TSTStrokeLayer *_topStrokeLayer;
    TSTStrokeLayer *_bottomStrokeLayer;
}

@property(retain, nonatomic) TSTStrokeLayer *bottomStrokeLayer; // @synthesize bottomStrokeLayer=_bottomStrokeLayer;
@property(retain, nonatomic) TSTStrokeLayer *topStrokeLayer; // @synthesize topStrokeLayer=_topStrokeLayer;
@property(retain, nonatomic) NSIndexSet *columnIndiciesInRow; // @synthesize columnIndiciesInRow=_columnIndiciesInRow;
@property(retain, nonatomic) TSTCellRegion *region; // @synthesize region=_region;
@property(retain, nonatomic) TSTStrokeSidecar *strokeSidecar; // @synthesize strokeSidecar=_strokeSidecar;
- (_Bool)cellBorderAtColumn:(unsigned char)arg1;
- (_Bool)anyCellBordersInThisRow;
- (void)setIteratorToRow:(unsigned short)arg1;
- (void)dealloc;
- (id)initWithStrokeSidecar:(id)arg1 region:(id)arg2;

@end

