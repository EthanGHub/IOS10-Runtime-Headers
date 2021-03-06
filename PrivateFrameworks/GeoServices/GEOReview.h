//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOUser, NSString;

@interface GEOReview : PBCodable <NSCopying>
{
    double _reviewTime;
    double _score;
    NSString *_languageCode;
    GEOUser *_reviewer;
    NSString *_snippet;
    NSString *_uid;
    struct {
        unsigned int reviewTime:1;
        unsigned int score:1;
    } _has;
}

@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) GEOUser *reviewer; // @synthesize reviewer=_reviewer;
@property(nonatomic) double reviewTime; // @synthesize reviewTime=_reviewTime;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(readonly, nonatomic) _Bool hasUid;
@property(readonly, nonatomic) _Bool hasReviewer;
@property(nonatomic) _Bool hasReviewTime;
@property(nonatomic) _Bool hasScore;
@property(readonly, nonatomic) _Bool hasSnippet;
- (void)dealloc;

@end

