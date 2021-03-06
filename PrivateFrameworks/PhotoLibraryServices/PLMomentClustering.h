//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLGeocoder, NSArray, NSMutableDictionary, NSSet, PLMomentNodeCache;

@interface PLMomentClustering : NSObject
{
    _Bool _dirty;
    _Bool _shouldApplyUserInfluenceBeforeClustering;
    _Bool _accumulatesSmallClusters;
    _Bool _spatialJoinsAdjacentClusters;
    CDUnknownBlockType _progressBlock;
    NSArray *_clusters;
    NSSet *_insertedClusters;
    NSSet *_updatedClusters;
    NSSet *_deletedClusters;
    double _sigma;
    double _theta;
    unsigned long long _accumulationSize;
    double _accumulationTimeInterval;
    double _accumulationJoinThreshold;
    double _accumulationRejectionThreshold;
    double _accumulationRejectionTimeInterval;
    double _spatialJoinTimeInterval;
    double _spatialJoinThreshold;
    unsigned long long __minimumNumberOfNodes;
    unsigned long long __numberOfVisitedNodes;
    unsigned long long __totalNumberOfNodes;
    PLMomentNodeCache *__nodeCache;
    CLGeocoder *__geocoder;
    NSMutableDictionary *__markedNodesByObjectID;
    NSMutableDictionary *__clustersByObjectID;
    NSMutableDictionary *__clustersByNodeObjectID;
}

+ (double)maximumClusterTime;
@property(readonly, nonatomic) NSMutableDictionary *_clustersByNodeObjectID; // @synthesize _clustersByNodeObjectID=__clustersByNodeObjectID;
@property(readonly, nonatomic) NSMutableDictionary *_clustersByObjectID; // @synthesize _clustersByObjectID=__clustersByObjectID;
@property(readonly, nonatomic) NSMutableDictionary *_markedNodesByObjectID; // @synthesize _markedNodesByObjectID=__markedNodesByObjectID;
@property(readonly, nonatomic) CLGeocoder *_geocoder; // @synthesize _geocoder=__geocoder;
@property(readonly, nonatomic) PLMomentNodeCache *_nodeCache; // @synthesize _nodeCache=__nodeCache;
@property(nonatomic, setter=_setTotalNumberOfNodes:) unsigned long long _totalNumberOfNodes; // @synthesize _totalNumberOfNodes=__totalNumberOfNodes;
@property(nonatomic, setter=_setNumberOfVisitedNodes:) unsigned long long _numberOfVisitedNodes; // @synthesize _numberOfVisitedNodes=__numberOfVisitedNodes;
@property(nonatomic, setter=_setMinimumNumberOfNodes:) unsigned long long _minimumNumberOfNodes; // @synthesize _minimumNumberOfNodes=__minimumNumberOfNodes;
@property(nonatomic) double spatialJoinThreshold; // @synthesize spatialJoinThreshold=_spatialJoinThreshold;
@property(nonatomic) double spatialJoinTimeInterval; // @synthesize spatialJoinTimeInterval=_spatialJoinTimeInterval;
@property(nonatomic) _Bool spatialJoinsAdjacentClusters; // @synthesize spatialJoinsAdjacentClusters=_spatialJoinsAdjacentClusters;
@property(nonatomic) double accumulationRejectionTimeInterval; // @synthesize accumulationRejectionTimeInterval=_accumulationRejectionTimeInterval;
@property(nonatomic) double accumulationRejectionThreshold; // @synthesize accumulationRejectionThreshold=_accumulationRejectionThreshold;
@property(nonatomic) double accumulationJoinThreshold; // @synthesize accumulationJoinThreshold=_accumulationJoinThreshold;
@property(nonatomic) double accumulationTimeInterval; // @synthesize accumulationTimeInterval=_accumulationTimeInterval;
@property(nonatomic) unsigned long long accumulationSize; // @synthesize accumulationSize=_accumulationSize;
@property(nonatomic) _Bool accumulatesSmallClusters; // @synthesize accumulatesSmallClusters=_accumulatesSmallClusters;
@property(nonatomic) _Bool shouldApplyUserInfluenceBeforeClustering; // @synthesize shouldApplyUserInfluenceBeforeClustering=_shouldApplyUserInfluenceBeforeClustering;
@property(nonatomic, getter=isDirty, setter=_setDirty:) _Bool dirty; // @synthesize dirty=_dirty;
@property(nonatomic) double theta; // @synthesize theta=_theta;
@property(nonatomic) double sigma; // @synthesize sigma=_sigma;
@property(copy, nonatomic, setter=_setDeletedClusters:) NSSet *deletedClusters; // @synthesize deletedClusters=_deletedClusters;
@property(copy, nonatomic, setter=_setUpdatedClusters:) NSSet *updatedClusters; // @synthesize updatedClusters=_updatedClusters;
@property(copy, nonatomic, setter=_setInsertedClusters:) NSSet *insertedClusters; // @synthesize insertedClusters=_insertedClusters;
@property(copy, nonatomic, setter=_setClusters:) NSArray *clusters; // @synthesize clusters=_clusters;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void)markNodeForDiagnosis:(id)arg1;
@property(readonly, nonatomic) _Bool hasMarkedNodes;
- (id)_clustersByMergingUserInfluencedClusters:(id)arg1;
- (id)_clustersBySplittingUserInfluencedClusters:(id)arg1;
- (id)clustersByApplyingUserInfluenceToClusters:(id)arg1;
- (id)spatialJoinClustersFromClusters:(id)arg1;
- (id)accumulateSmallClustersFromClusters:(id)arg1;
- (id)neighborsOfTaggedNode:(id)arg1;
- (id)neighborsOfNode:(id)arg1;
- (id)temporalSnapshotOfNode:(id)arg1 withRange:(double)arg2;
- (id)clustersWithNodes:(id)arg1 sigma:(double)arg2 theta:(double)arg3;
- (void)generateClustersForAssets:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)generateClustersForAssets:(id)arg1;
- (void)dealloc;
- (id)initWithManagedMoments:(id)arg1;
- (id)init;
- (void)_commonPLMomentClusteringManagerInitialization;

@end

