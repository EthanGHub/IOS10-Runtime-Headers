//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSessionDataTask, SPUISearchMovieCell, UIImage;

@interface SPUISearchMovie : NSObject
{
    UIImage *_posterImage;
    NSURLSessionDataTask *_dataTask;
    SPUISearchMovieCell *_cell;
}

@property(retain) SPUISearchMovieCell *cell; // @synthesize cell=_cell;
@property(retain) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain) UIImage *posterImage; // @synthesize posterImage=_posterImage;
- (void).cxx_destruct;

@end

