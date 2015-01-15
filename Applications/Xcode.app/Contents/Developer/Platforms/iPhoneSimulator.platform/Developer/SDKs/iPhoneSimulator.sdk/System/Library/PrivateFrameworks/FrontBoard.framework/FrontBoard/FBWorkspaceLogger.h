//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoard/FBFileLogger.h>

@interface FBWorkspaceLogger : FBFileLogger
{
    _Bool _useOverrideDestinations;
    unsigned long long _overrideDestinations;
}

- (void)willBeginLoggingToPath:(id)arg1;
- (void)_configureOverrideDestinationForString:(id)arg1;
- (void)reloadFromDefaults;
- (unsigned long long)logDestinations;
- (id)logPrefixForCategory:(id)arg1 destination:(unsigned long long)arg2;
- (int)maxLogSize;
- (int)maxLogCount;
- (void)_setEnabled:(_Bool)arg1;
- (id)name;
- (_Bool)isEnabled;
- (id)init;

@end

