//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRRemoteSamplerDataReceiver.h"

@interface XRRemoteCoreProfileDataReceiver : XRRemoteSamplerDataReceiver
{
    unsigned int _fieldCount;
    BOOL _includesCPUAndRegCount;
    BOOL _kernelStacks;
    BOOL _userStacks;
}

+ (id)channelForDevice:(id)arg1 version:(unsigned long long *)arg2;
+ (id)descriptorIdentifier;
- (void)configureChannelForCollection:(id)arg1;
- (void)processMessage:(id)arg1;
- (BOOL)recordPid:(int)arg1;

@end

