//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEORoutePreloadSession-Protocol.h>

@class GEOComposedRoute, NSMutableArray, NSString;
@protocol GEORoutePreloadSessionDelegate;

@interface GEORoutePreloader : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadSession>
{
    GEOComposedRoute *_route;
    NSMutableArray *_tileSetStyles;
    _Bool _loggingEnabled;
    _Bool _minimalDebuggingEnabled;
    _Bool _fullDebuggingEnabled;
    _Bool _enabled;
    _Bool _paused;
    _Bool _allStationTilesBatchMade;
    double _currentRoutePosition;
    int _downloadState;
    CDUnknownBlockType _batteryHandler;
    unsigned long long _networkQuality;
    id <GEORoutePreloadSessionDelegate> _delegate;
    double _stepSizeInMeters;
}

+ (id)preloaderForRoute:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType batteryHandler; // @synthesize batteryHandler=_batteryHandler;
@property(nonatomic) unsigned long long networkQuality; // @synthesize networkQuality=_networkQuality;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property __weak id <GEORoutePreloadSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)tilesChanged;
- (void)reachabilityChanged:(id)arg1;
- (void)_cancelPreloadTasks;
- (void)_retryFailuresWithErrorsReset:(_Bool)arg1;
- (void)setTraits:(id)arg1;
- (void)preloaderLog:(id)arg1;
- (void)updateWithRouteMatch:(id)arg1;
- (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee *)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long *)arg3;
- (int)preloadStateForTile:(const struct _GEOTileKey *)arg1;
- (void)addTileSetStyle:(int)arg1;
- (void)start;
- (void)stop;
- (void)stopLoading;
- (void)beginLoading;
- (_Bool)loggingEnabled;
- (_Bool)fullDebuggingEnabled;
- (_Bool)minimalDebuggingEnabled;
- (_Bool)isSufficientlyLoaded;
- (void)dealloc;
- (id)initSuperWithRoute:(id)arg1 loggingEnabled:(_Bool)arg2 minimalDebugging:(_Bool)arg3 fullDebugging:(_Bool)arg4 batteryHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
