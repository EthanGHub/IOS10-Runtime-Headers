//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMediaPlaybackItemMetadata.h>

@class MPModelObject, MPModelSong, NSObject;
@protocol MPModelObjectPlaybackItemMetadataDelegate, OS_dispatch_queue;

@interface MPModelObjectPlaybackItemMetadata : MPMediaPlaybackItemMetadata
{
    MPModelSong *_song;
    NSObject<OS_dispatch_queue> *_writeQueue;
    id <MPModelObjectPlaybackItemMetadataDelegate> _modelObjectDelegate;
    MPModelObject *_modelObject;
}

+ (id)_requiredSongProperties;
+ (id)_requiredPlaylistEntryProperties;
+ (id)requiredPropertiesForModelObjectClass:(Class)arg1;
+ (_Bool)_shouldRespectStoreCellularDataSetting;
+ (_Bool)_shouldRespectMusicCellularDataSetting;
@property(retain, nonatomic) MPModelObject *modelObject; // @synthesize modelObject=_modelObject;
@property(nonatomic) __weak id <MPModelObjectPlaybackItemMetadataDelegate> modelObjectDelegate; // @synthesize modelObjectDelegate=_modelObjectDelegate;
- (void).cxx_destruct;
- (id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(_Bool)arg1 returningAssetQuality:(unsigned long long *)arg2 protectionType:(unsigned long long *)arg3 usesPurchaseBundle:(_Bool *)arg4;
- (float)volumeNormalization;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4;
- (long long)storeSubscriptionAdamID;
- (unsigned long long)storeSagaID;
- (long long)storeAdamID;
- (unsigned long long)storeAccountID;
- (_Bool)showComposer;
- (_Bool)shouldReportPlayEventsToStore;
- (void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)protectedContentSupportStorageURL;
- (id)modelSong;
- (long long)mediaLibraryPersistentID;
- (id)mediaItem;
- (id)localNetworkContentURL;
- (void)loadMediaItemWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)iTunesStoreContentDSID;
- (id)iTunesStoreContentID;
- (_Bool)isExplicitTrack;
- (double)expectedDuration;
- (long long)endpointType;
- (long long)downloadIdentifier;
- (id)copyrightText;
- (unsigned long long)contentType;
- (id)contentTitle;
- (id)composerName;
- (void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long *)arg1 protectionType:(unsigned long long *)arg2 usesPurchaseBundle:(_Bool *)arg3;
- (id)buyParameters;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (long long)artistStoreAdamID;
- (id)artistName;
- (_Bool)allowsInitiatingPlayWhileDownload;
- (_Bool)allowsAssetCaching;
- (id)albumTitle;
- (long long)albumStoreAdamID;
- (id)albumArtistName;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;

@end

