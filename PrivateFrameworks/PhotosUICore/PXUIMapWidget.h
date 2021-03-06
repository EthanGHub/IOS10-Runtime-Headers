//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>
#import <PhotosUICore/PXWidget-Protocol.h>

@class NSMutableDictionary, NSString, PXPhotosDetailsContext, PXPlacesMapFetchResultViewController, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec, UIView;
@protocol PXAnonymousView, PXWidgetDelegate;

@interface PXUIMapWidget : NSObject <PXPhotosDataSourceChangeObserver, PXWidget>
{
    double _height;
    struct CGSize _minimumInitialSize;
    struct CGSize _contentSize;
    _Bool _didDisplayContentView;
    _Bool _isLoaded;
    NSMutableDictionary *_fetchedImages;
    _Bool _showAddressLink;
    _Bool __shouldDisplayPlaceholder;
    id <PXWidgetDelegate> _widgetDelegate;
    PXPhotosDetailsContext *_context;
    PXWidgetSpec *_spec;
    UIView *__containerView;
    UIView *__contentView;
    PXPlacesMapFetchResultViewController *__mapViewController;
    UIView *__placeholderView;
    NSString *__cachedLocalizedTitle;
    NSString *__cachedLocalizedSubtitle;
    NSString *__cachedDisclosureTitle;
    CDStruct_02837cd9 __nearbyRect;
}

@property(nonatomic) CDStruct_02837cd9 _nearbyRect; // @synthesize _nearbyRect=__nearbyRect;
@property(retain, nonatomic) NSString *_cachedDisclosureTitle; // @synthesize _cachedDisclosureTitle=__cachedDisclosureTitle;
@property(retain, nonatomic) NSString *_cachedLocalizedSubtitle; // @synthesize _cachedLocalizedSubtitle=__cachedLocalizedSubtitle;
@property(retain, nonatomic) NSString *_cachedLocalizedTitle; // @synthesize _cachedLocalizedTitle=__cachedLocalizedTitle;
@property(retain, nonatomic, setter=_setPlaceholderView:) UIView *_placeholderView; // @synthesize _placeholderView=__placeholderView;
@property(nonatomic, setter=_setShouldDisplayPlaceholder:) _Bool _shouldDisplayPlaceholder; // @synthesize _shouldDisplayPlaceholder=__shouldDisplayPlaceholder;
@property(readonly, nonatomic) PXPlacesMapFetchResultViewController *_mapViewController; // @synthesize _mapViewController=__mapViewController;
@property(readonly, nonatomic) UIView *_contentView; // @synthesize _contentView=__contentView;
@property(readonly, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;
@property(nonatomic) _Bool showAddressLink; // @synthesize showAddressLink=_showAddressLink;
@property(retain, nonatomic) PXWidgetSpec *spec; // @synthesize spec=_spec;
@property(retain, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
- (void).cxx_destruct;
- (_Bool)_hasCachedSnapshotImageForKey:(id)arg1;
- (void)_handleSnapshotResponse:(id)arg1 viePort:(id)arg2 snapshotMapType:(unsigned long long)arg3 shouldFetchNearbyAssetCount:(_Bool)arg4 fetchedImageKey:(id)arg5 error:(id)arg6;
- (void)_fetchPlacesSnapshotUsingMapType:(unsigned long long)arg1 shouldFetchNearbyAssetCount:(_Bool)arg2;
- (void)_fetchNearbyCountUsingMapRect:(CDStruct_02837cd9)arg1;
- (void)_fetchNearbyCountForViewPort:(id)arg1;
- (void)_fadeInContentView;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (id)_mapViewControllerWithContentMode:(unsigned long long)arg1;
- (void)_showPlacesWithContentMode:(unsigned long long)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)userDidSelectDisclosureControl;
- (id)_firstAsset;
- (id)_localizedGeoDescriptionForFirstAsset;
- (void)_updateTitle:(id)arg1 subtitle:(id)arg2;
- (void)_loadAndUpdateLabelsUsingFirstAsset;
- (void)_refreshLabelsUsingFirstAsset;
- (void)userDidSelectSubtitle;
@property(readonly, nonatomic) _Bool allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
- (double)preferredContentHeightForWidth:(double)arg1;
@property(readonly, nonatomic) _Bool hasContentForCurrentInput;
- (void)_updateContentViewFrame;
- (void)_updatePlaceholderView;
- (id)_fetchResultsForSections;
- (void)unloadContentData;
- (void)loadContentData;
- (id)_imageView;
- (void)_loadContainerView;
- (void)setContentSize:(struct CGSize)arg1;
- (id)standaloneMapViewController;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
@property(readonly, nonatomic) long long contentViewAnchoringType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property(readonly, nonatomic) _Bool hasLoadedContentData;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(nonatomic, getter=isSelecting) _Bool selecting;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFaceMode;
@property(readonly, nonatomic) _Bool supportsSelection;

@end

