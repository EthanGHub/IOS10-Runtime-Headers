//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKSharedContentsCollectionViewCell.h>

@class CKAudioProgressView, UIDateLabel;

@interface CKSharedAudioCollectionViewCell : CKSharedContentsCollectionViewCell
{
    CKAudioProgressView *_audioPlaybackView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) CKAudioProgressView *audioPlaybackView; // @synthesize audioPlaybackView=_audioPlaybackView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)formattedCreatedDateTextFromDate:(id)arg1;
- (id)formattedDurationTextForAsset:(id)arg1;
- (void)configureWithAttachmentItem:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UIDateLabel *previewTitleLabel; // @dynamic previewTitleLabel;

@end
