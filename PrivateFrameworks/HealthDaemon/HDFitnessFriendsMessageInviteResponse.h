//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDFitnessFriendsMessageShareLocations, NSString;

@interface HDFitnessFriendsMessageInviteResponse : PBCodable <NSCopying>
{
    NSString *_handshakeToken;
    NSString *_inviteeCloudKitAddress;
    HDFitnessFriendsMessageShareLocations *_inviteeShareLocations;
    int _responseCode;
    struct {
        unsigned int responseCode:1;
    } _has;
}

@property(retain, nonatomic) HDFitnessFriendsMessageShareLocations *inviteeShareLocations; // @synthesize inviteeShareLocations=_inviteeShareLocations;
@property(retain, nonatomic) NSString *inviteeCloudKitAddress; // @synthesize inviteeCloudKitAddress=_inviteeCloudKitAddress;
@property(nonatomic) int responseCode; // @synthesize responseCode=_responseCode;
@property(retain, nonatomic) NSString *handshakeToken; // @synthesize handshakeToken=_handshakeToken;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasInviteeShareLocations;
@property(readonly, nonatomic) _Bool hasInviteeCloudKitAddress;
@property(nonatomic) _Bool hasResponseCode;
@property(readonly, nonatomic) _Bool hasHandshakeToken;

@end
