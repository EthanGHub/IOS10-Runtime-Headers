//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPImage, NSString, NSURL;

@interface LPCustomLinkMetadata : NSObject
{
    NSURL *_URL;
    NSString *_title;
    LPImage *_icon;
    LPImage *_image;
}

@property(retain, nonatomic) LPImage *image; // @synthesize image=_image;
@property(retain, nonatomic) LPImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)dataRepresentation;

@end

