//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/MPUCompletionQueryDataSource.h>

@class MPMediaPredicate;

@interface MCDQueryDataSource : MPUCompletionQueryDataSource
{
    MPMediaPredicate *_localPredicate;
}

- (void).cxx_destruct;
- (id)_queryForNowPlayingComparisonAtIndex:(unsigned long long)arg1;
- (void)_predicateBehaviorsChangedNotification:(id)arg1;
- (_Bool)_updateQueryPredicatesAndOrdering;
- (_Bool)queryIsNowPlayingAtIndex:(unsigned long long)arg1;
- (_Bool)showsIndexBar;
- (id)playbackContextForIndex:(unsigned long long)arg1;
- (_Bool)entityIsNowPlayingAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 entityType:(long long)arg2;

@end
