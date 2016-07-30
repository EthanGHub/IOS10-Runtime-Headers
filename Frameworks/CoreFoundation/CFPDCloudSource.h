//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreFoundation/CFPDContainerSource.h>

@class SYDRemotePreferencesSource;

__attribute__((visibility("hidden")))
@interface CFPDCloudSource : CFPDContainerSource
{
    SYDRemotePreferencesSource *cloudSource;
    struct __CFString *_configurationPath;
}

- (void)_writeToDisk:(_Bool)arg1;
- (int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 currentPlistData:(id)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;
- (struct __CFString *)cloudConfigurationPath;
- (struct __CFString *)debugDump;
- (id)copyPropertyList;
- (void)synchronizeWithCloud:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (id)copyPropertyListWithoutDrainingPendingChanges;
- (void)enqueueNewKey:(id)arg1 value:(id)arg2 size:(unsigned long long)arg3 encoding:(int)arg4;
- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 storeName:(id)arg3 configurationPath:(struct __CFString *)arg4 containerPath:(struct __CFString *)arg5 shmemIndex:(short)arg6 daemon:(id)arg7;
- (void)registerForChangeNotifications;
- (id)copyConfigurationFromPath:(struct __CFString *)arg1;

@end
