//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLPublishingAgentDelegate.h"

@class NSMutableArray, NSTimer, PLProgressView;

@interface PUPhotoSharingManager : NSObject <PLPublishingAgentDelegate>
{
    PLProgressView *_publishingProgressView;
    NSTimer *_publishingProgressTimer;
    NSMutableArray *_publishingAgents;
    long long _videoRemakingCount;
    long long _appSuspensionCount;
    long long _networkPromptCount;
    unsigned long long _backgroundTaskIdentifier;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)publishingAgentCancelButtonClicked:(id)arg1;
- (void)publishingAgentDoneButtonClicked:(id)arg1;
- (void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2;
- (void)publishingAgentDidBeginPublishing:(id)arg1;
- (void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(_Bool)arg2;
- (void)publishingAgentDidStartRemaking:(id)arg1;
- (void)publishingAgentWillBeDisplayed:(id)arg1;
- (void)_removePublishingAgent:(id)arg1;
- (void)_addPublishingAgentIfNeeded:(id)arg1;
- (void)_cleanUpPublishingProgressView;
- (void)_updatePublishingProgressView:(id)arg1;
- (void)_schedulePublishingProgressViewUpdate;
- (id)_currentPublishingAgent;
- (void)_setDelaysAppSuspend:(_Bool)arg1;
- (void)_setNetworkPromptShowing:(_Bool)arg1;
- (void)_setFlag:(_Bool)arg1 forReferenceCounter:(long long *)arg2 performIfChanged:(CDUnknownBlockType)arg3;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)cancelPublishing;
@property(readonly, nonatomic) PLProgressView *publishingProgressView;
@property(nonatomic, getter=isRemaking) _Bool remaking;
- (void)dealloc;

@end

