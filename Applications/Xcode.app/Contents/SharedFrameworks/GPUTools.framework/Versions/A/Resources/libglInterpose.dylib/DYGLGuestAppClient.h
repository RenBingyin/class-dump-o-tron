//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYGuestAppClient.h"

__attribute__((visibility("hidden")))
@interface DYGLGuestAppClient : DYGuestAppClient
{
    BOOL _checkGLErrors;
}

- (BOOL)_canTriggerCaptureOnNextGraphicsCommand;
- (void)_appendLinkTimeLibrariesToVersionsDictionary:(id)arg1;
- (void)_appendToAllCaptureDataSentMessagePayload:(id)arg1;
- (void)_waitForGraphicsThreads;
- (void)_populateQueueAndThreadLabelMaps;
- (void)sendContextInfoUpdate;
- (void)processMessage:(id)arg1;
- (id)_copyContextsInfo;

@end

