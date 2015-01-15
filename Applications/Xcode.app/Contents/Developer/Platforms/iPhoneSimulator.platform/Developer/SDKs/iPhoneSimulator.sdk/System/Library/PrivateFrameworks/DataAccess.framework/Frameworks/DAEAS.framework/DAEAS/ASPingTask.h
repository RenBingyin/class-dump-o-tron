//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class NSSet;

@interface ASPingTask : ASTask
{
    NSSet *_folders;
    NSSet *_oldFolders;
    int _seconds;
    int _oldSeconds;
}

- (void).cxx_destruct;
- (_Bool)shouldReportTimeInNetwork;
- (_Bool)shouldHandleServerErrorRetryLater;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (void)finishWithError:(id)arg1;
- (void)requestCancelTaskWithReason:(int)arg1;
- (_Bool)processContext:(id)arg1;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)requestBody;
- (void)loadRequest:(id)arg1;
- (double)timeoutInterval;
- (id)folders;
- (int)heartbeat;
- (_Bool)shouldStallAfterConnectionLost;
- (int)commandCode;
- (_Bool)shouldHoldPowerAssertion;
- (int)interfaceBinding;
- (id)initWithHeartbeat:(int)arg1 folders:(id)arg2 oldHeartbeat:(int)arg3 oldFolders:(id)arg4;

@end

