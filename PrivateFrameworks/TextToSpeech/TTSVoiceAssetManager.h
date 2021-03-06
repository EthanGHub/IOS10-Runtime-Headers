//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TTSVoiceAssetManager : NSObject
{
    NSMutableDictionary *_resourceCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)automaticallyDownloadVoiceAssetsIfNeeded;
- (void)_automaticallyDownloadVoiceAssetsIfNeeded;
- (void)getAutoDownloadedVoiceAssets:(CDUnknownBlockType)arg1;
- (id)_autoDownloadedAssets;
- (void)setAutoDownloadedVoiceAssets:(id)arg1;
- (void)startDownloadingVoiceAsset:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getCustomVoiceAssetsLocalOnly:(_Bool)arg1 language:(id)arg2 voiceType:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (id)_voiceAssetForASAsset:(id)arg1 voiceType:(long long)arg2;
- (id)resourcePathForLanguage:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 voiceName:(id)arg4 voiceType:(long long)arg5 outAsset:(id *)arg6;
- (id)_voiceAssetQueryForVoiceName:(id)arg1 language:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 version:(id)arg5 voiceType:(long long)arg6 localOnly:(_Bool)arg7;

@end

