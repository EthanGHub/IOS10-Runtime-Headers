//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Search/NSCoding-Protocol.h>
#import <Search/NSCopying-Protocol.h>
#import <Search/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface SPSearchResult : PBCodable <NSCopying, NSCoding, NSSecureCoding>
{
    unsigned long long _identifier;
    NSMutableDictionary *_additionalPropertyDict;
    NSDictionary *featuresSet;
    NSString *_auxiliarySubtitle;
    NSString *_auxiliaryTitle;
    int _flags;
    unsigned int _numberOfSummaryLines;
    NSString *_subtitle;
    NSString *_summary;
    NSString *_title;
    NSString *_url;
    unsigned long long _score;
    union {
        struct {
            unsigned int identifier:1;
            unsigned int flags:1;
            unsigned int numberOfSummaryLines:1;
            unsigned int searchResultDomain:1;
        } ;
        int _hasBits;
    } _has;
    NSString *_predictionIdentifier;
    NSString *_externalIdentifier;
    NSString *_userActivityType;
    NSString *_userActivityRequiredString;
    NSString *_userActivitySecondaryString;
    NSData *_userActivityData;
    NSString *_bundleID;
    NSString *_resultBundleID;
    NSString *_contentURL;
    _Bool _isQuickGlance;
    unsigned int _searchResultDomain;
    double _geoUserSessionStartTime;
    NSString *_geoUserSessionIDString;
    _Bool _userActivityEligibleForPublicIndexing;
    _Bool _hasAssociatedUserActivity;
    _Bool _topHit;
    unsigned long long score;
    _Bool _hasSearchResultDomain;
    _Bool _supportsImageAsyncLoading;
    NSString *_protectionClass;
    long long _currentDisplayPosition;
    double _resultScore;
    double _sectionScore;
    NSDictionary *_featuresSet;
    NSArray *_contactIdentifiers;
    id _rankingProperties;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id rankingProperties; // @synthesize rankingProperties=_rankingProperties;
@property(retain, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property(nonatomic) double geoUserSessionStartTime; // @synthesize geoUserSessionStartTime=_geoUserSessionStartTime;
@property(retain, nonatomic) NSString *geoUserSessionIDString; // @synthesize geoUserSessionIDString=_geoUserSessionIDString;
@property(nonatomic) _Bool supportsImageAsyncLoading; // @synthesize supportsImageAsyncLoading=_supportsImageAsyncLoading;
@property(retain, nonatomic) NSString *predictionIdentifier; // @synthesize predictionIdentifier=_predictionIdentifier;
@property(retain, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(nonatomic) _Bool hasSearchResultDomain; // @synthesize hasSearchResultDomain=_hasSearchResultDomain;
@property(retain, nonatomic) NSDictionary *featuresSet; // @synthesize featuresSet=_featuresSet;
@property double sectionScore; // @synthesize sectionScore=_sectionScore;
@property double resultScore; // @synthesize resultScore=_resultScore;
@property long long currentDisplayPosition; // @synthesize currentDisplayPosition=_currentDisplayPosition;
@property(nonatomic) _Bool hasAssociatedUserActivity; // @synthesize hasAssociatedUserActivity=_hasAssociatedUserActivity;
@property(nonatomic) _Bool userActivityEligibleForPublicIndexing; // @synthesize userActivityEligibleForPublicIndexing=_userActivityEligibleForPublicIndexing;
@property(nonatomic) _Bool isQuickGlance; // @synthesize isQuickGlance=_isQuickGlance;
@property(retain, nonatomic) NSString *resultBundleID; // @synthesize resultBundleID=_resultBundleID;
@property(retain, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *protectionClass; // @synthesize protectionClass=_protectionClass;
@property(retain, nonatomic) NSData *userActivityData; // @synthesize userActivityData=_userActivityData;
@property(retain, nonatomic) NSString *userActivitySecondaryString; // @synthesize userActivitySecondaryString=_userActivitySecondaryString;
@property(retain, nonatomic) NSString *userActivityRequiredString; // @synthesize userActivityRequiredString=_userActivityRequiredString;
@property(retain, nonatomic) NSString *userActivityType; // @synthesize userActivityType=_userActivityType;
@property(nonatomic) unsigned long long score; // @synthesize score=_score;
@property(nonatomic) _Bool topHit; // @synthesize topHit=_topHit;
@property(nonatomic) unsigned int numberOfSummaryLines; // @synthesize numberOfSummaryLines=_numberOfSummaryLines;
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *auxiliarySubtitle; // @synthesize auxiliarySubtitle=_auxiliarySubtitle;
@property(retain, nonatomic) NSString *auxiliaryTitle; // @synthesize auxiliaryTitle=_auxiliaryTitle;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int searchResultDomain; // @synthesize searchResultDomain=_searchResultDomain;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSNumber *documentIdentifier;
@property(retain, nonatomic) NSString *filename;
@property(retain, nonatomic) NSNumber *parentFileIdentifier;
@property(retain, nonatomic) NSNumber *fileIdentifier;
- (id)description;
@property(readonly, nonatomic) _Bool hasGeoUserSessionInformation;
- (unsigned long long)additionalPropertiesCount;
- (void)clearAdditionalProperties;
@property(readonly, nonatomic) NSMutableDictionary *additionalPropertyDict; // @synthesize additionalPropertyDict=_additionalPropertyDict;
@property(nonatomic) _Bool hasNumberOfSummaryLines;
@property(nonatomic) _Bool hasFlags;
@property(readonly, nonatomic) _Bool hasUrl;
@property(nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasAuxiliarySubtitle;
@property(readonly, nonatomic) _Bool hasAuxiliaryTitle;
@property(readonly, nonatomic) _Bool hasSummary;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(retain, nonatomic) NSString *compatibilityTitle;

@end
