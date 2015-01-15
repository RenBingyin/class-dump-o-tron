//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLAuthenticationChallengeSender.h"

@class AVAssetResourceLoaderInternal, NSObject<OS_dispatch_queue>, NSString;

@interface AVAssetResourceLoader : NSObject <NSURLAuthenticationChallengeSender>
{
    AVAssetResourceLoaderInternal *_resourceLoader;
}

- (void)_noteFinishingOfRequest:(id)arg1;
- (void)_poseAuthenticationChallengeWithKey:(id)arg1 data:(id)arg2 requestDictionary:(id)arg3 fallbackHandler:(CDUnknownBlockType)arg4;
- (void)_issueLoadingRequestWithKey:(id)arg1 requestDictionary:(id)arg2 fallbackHandler:(CDUnknownBlockType)arg3;
- (void)_cancelRequestWithKey:(id)arg1 requestDictionary:(id)arg2 fallbackHandler:(CDUnknownBlockType)arg3;
- (void)_performDelegateSelector:(SEL)arg1 withObject:(id)arg2 representingNewRequest:(_Bool)arg3 key:(id)arg4 fallbackHandler:(CDUnknownBlockType)arg5;
- (void)_performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:(id)arg1 delegateCallbackBlock:(CDUnknownBlockType)arg2;
- (void)cancelLoading;
- (id)asset;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) id <AVAssetResourceLoaderDelegate> delegate;
- (id)stateQueue;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)_weakReference;
- (void)finalize;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (id)init;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)_rejectChallenge:(id)arg1 withError:(id)arg2;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (id)cachedContentInformationForURL:(id)arg1;
- (void)cacheContentInformation:(id)arg1 forURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
