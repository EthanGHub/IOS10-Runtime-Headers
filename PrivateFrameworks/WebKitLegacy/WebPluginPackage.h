//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKitLegacy/WebBasePluginPackage.h>

@class NSBundle;

__attribute__((visibility("hidden")))
@interface WebPluginPackage : WebBasePluginPackage
{
    NSBundle *nsBundle;
}

- (id)bundle;
- (_Bool)load;
- (Class)viewFactory;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
