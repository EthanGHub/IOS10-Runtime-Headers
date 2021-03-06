//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBReadingListAddRemove : PBCodable <NSCopying>
{
    long long _personalizationTreatmentId;
    int _addRemoveReadingListLocation;
    NSString *_articleId;
    int _articleType;
    int _backendArticleVersion;
    NSString *_campaignId;
    NSString *_campaignType;
    int _characterCount;
    NSString *_creativeId;
    int _feedType;
    NSString *_language;
    NSMutableArray *_namedEntities;
    NSString *_notificationId;
    int _publisherArticleVersion;
    NSString *_referencedArticleId;
    NSString *_sectionHeadlineId;
    NSString *_sourceChannelId;
    NSString *_surfacedByChannelId;
    NSString *_surfacedBySectionId;
    NSString *_surfacedByTopicId;
    int _userAction;
    _Bool _isDigitalReplicaAd;
    _Bool _isFreeArticle;
    _Bool _isNotificationArticle;
    _Bool _isUserSubscribedToFeed;
    struct {
        unsigned int personalizationTreatmentId:1;
        unsigned int addRemoveReadingListLocation:1;
        unsigned int articleType:1;
        unsigned int backendArticleVersion:1;
        unsigned int characterCount:1;
        unsigned int feedType:1;
        unsigned int publisherArticleVersion:1;
        unsigned int userAction:1;
        unsigned int isDigitalReplicaAd:1;
        unsigned int isFreeArticle:1;
        unsigned int isNotificationArticle:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

+ (Class)namedEntitiesType;
@property(retain, nonatomic) NSString *notificationId; // @synthesize notificationId=_notificationId;
@property(nonatomic) _Bool isNotificationArticle; // @synthesize isNotificationArticle=_isNotificationArticle;
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(nonatomic) _Bool isFreeArticle; // @synthesize isFreeArticle=_isFreeArticle;
@property(nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property(nonatomic) _Bool isDigitalReplicaAd; // @synthesize isDigitalReplicaAd=_isDigitalReplicaAd;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *surfacedByTopicId; // @synthesize surfacedByTopicId=_surfacedByTopicId;
@property(retain, nonatomic) NSString *surfacedBySectionId; // @synthesize surfacedBySectionId=_surfacedBySectionId;
@property(retain, nonatomic) NSString *surfacedByChannelId; // @synthesize surfacedByChannelId=_surfacedByChannelId;
@property(retain, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property(nonatomic) int backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(nonatomic) int publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(retain, nonatomic) NSMutableArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) int characterCount; // @synthesize characterCount=_characterCount;
@property(nonatomic) _Bool isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasNotificationId;
@property(nonatomic) _Bool hasIsNotificationArticle;
@property(readonly, nonatomic) _Bool hasCreativeId;
@property(readonly, nonatomic) _Bool hasCampaignType;
@property(readonly, nonatomic) _Bool hasCampaignId;
@property(nonatomic) _Bool hasIsFreeArticle;
@property(nonatomic) _Bool hasPersonalizationTreatmentId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(nonatomic) _Bool hasIsDigitalReplicaAd;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasSurfacedByTopicId;
@property(readonly, nonatomic) _Bool hasSurfacedBySectionId;
@property(readonly, nonatomic) _Bool hasSurfacedByChannelId;
@property(nonatomic) _Bool hasUserAction;
@property(nonatomic) int userAction; // @synthesize userAction=_userAction;
@property(readonly, nonatomic) _Bool hasSectionHeadlineId;
@property(nonatomic) _Bool hasBackendArticleVersion;
@property(nonatomic) _Bool hasPublisherArticleVersion;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (void)addNamedEntities:(id)arg1;
- (void)clearNamedEntities;
@property(readonly, nonatomic) _Bool hasLanguage;
@property(nonatomic) _Bool hasCharacterCount;
- (int)StringAsArticleType:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasArticleType;
@property(nonatomic) int articleType; // @synthesize articleType=_articleType;
@property(nonatomic) _Bool hasIsUserSubscribedToFeed;
@property(nonatomic) _Bool hasAddRemoveReadingListLocation;
@property(nonatomic) int addRemoveReadingListLocation; // @synthesize addRemoveReadingListLocation=_addRemoveReadingListLocation;
@property(readonly, nonatomic) _Bool hasReferencedArticleId;
@property(readonly, nonatomic) _Bool hasArticleId;

@end

