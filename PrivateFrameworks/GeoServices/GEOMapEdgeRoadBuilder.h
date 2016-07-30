//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOMapEdgeBuilder.h>

__attribute__((visibility("hidden")))
@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder
{
    struct deque<GEORoadEdge, std::__1::allocator<GEORoadEdge>> _edges;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
- (id)_lastTile;
- (id)_firstTile;
- (Matrix_8746f91e)_lastPoint;
- (Matrix_8746f91e)_firstPoint;
- (unsigned long long)_connectionTypeForEdge:(CDStruct_91f75a7f *)arg1 points:(CDStruct_b2fbf00d *)arg2 connectingTilePoint:(Matrix_8746f91e)arg3;
- (_Bool)_shouldFindEdgeBehind;
- (_Bool)_shouldFindEdgeAhead;
- (_Bool)_findEdgeBehindInTile:(id)arg1;
- (_Bool)_findEdgeAheadInTile:(id)arg1;
- (void)_buildCompleteEdge;
- (unsigned long long)_maxTileCount;
- (void)dealloc;
- (id)initWithMap:(id)arg1 roadFeature:(CDStruct_2244da21 *)arg2 shouldFlip:(_Bool)arg3;

@end
