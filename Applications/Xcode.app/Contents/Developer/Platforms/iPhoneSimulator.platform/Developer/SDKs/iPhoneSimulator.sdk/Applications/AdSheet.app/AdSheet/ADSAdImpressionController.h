//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ADAdImpressionPublicAttributes, ADSAdImpression, ADSCreativeController, NSMutableSet, NSString, NSTimer;

@interface ADSAdImpressionController : NSObject
{
    _Bool _supportsAuthentication;
    _Bool _policyEngineManagedAd;
    ADSAdImpression *_ad;
    NSString *_authenticationUserName;
    CDUnknownBlockType _loadCompletionHandler;
    NSMutableSet *_pendingRequiredItems;
    NSMutableSet *_allDownloadJobs;
    NSTimer *_loadTimeoutTimer;
    ADSCreativeController *_creativeController;
    NSString *_clientBundleIdentifier;
}

+ (_Bool)validateAdCandidate:(id)arg1 forContainerSize:(struct CGSize)arg2 creativeType:(int)arg3;
+ (void)validateAdData:(id)arg1 forClient:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)probeDictionaryForAdData:(id)arg1;
+ (id)sharedDownloader;
@property(readonly, copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(retain, nonatomic) ADSCreativeController *creativeController; // @synthesize creativeController=_creativeController;
@property(retain, nonatomic) NSTimer *loadTimeoutTimer; // @synthesize loadTimeoutTimer=_loadTimeoutTimer;
@property(retain, nonatomic) NSMutableSet *allDownloadJobs; // @synthesize allDownloadJobs=_allDownloadJobs;
@property(retain, nonatomic) NSMutableSet *pendingRequiredItems; // @synthesize pendingRequiredItems=_pendingRequiredItems;
@property(copy, nonatomic) CDUnknownBlockType loadCompletionHandler; // @synthesize loadCompletionHandler=_loadCompletionHandler;
@property(nonatomic) _Bool policyEngineManagedAd; // @synthesize policyEngineManagedAd=_policyEngineManagedAd;
@property(nonatomic) _Bool supportsAuthentication; // @synthesize supportsAuthentication=_supportsAuthentication;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(readonly, nonatomic) ADSAdImpression *ad; // @synthesize ad=_ad;
- (void)reportAdRewardResult:(_Bool)arg1 forReward:(id)arg2 withErrorMessage:(id)arg3;
- (void)reportServerErrorWithCode:(int)arg1 details:(id)arg2 failingURLs:(id)arg3;
- (void)reportContentErrorWithInfo:(id)arg1;
- (void)reportContentEvent:(id)arg1;
- (void)reportSystemEvent:(int)arg1;
- (void)reportExternalActionApproved:(_Bool)arg1;
- (void)reportConfirmedClick;
- (void)reportAdResumed;
- (void)reportAdPaused;
- (void)reportAdStartedForImpressionSource:(int)arg1;
- (void)reportAdPlaybackFailedForURL:(id)arg1;
- (void)reportAdHasFinishedForContentHash:(id)arg1;
- (void)reportClickAtLocation:(struct CGPoint)arg1 withAdViewFrame:(struct CGRect)arg2;
- (void)reportAdActionBegan;
- (void)reportDidHideAd;
- (void)reportDidShowAd;
- (void)reportPrerollDidStop;
- (void)reportPrerollDidStart;
- (void)reportImpression;
@property(readonly, copy, nonatomic) NSString *adIdentifier;
@property(readonly, nonatomic) _Bool hasValidAdIdentifier;
- (void)adActionEndedWithSystemEvent:(int)arg1;
- (void)setAdSpaceType:(int)arg1;
@property(readonly, nonatomic) double accumulatedVisibleTime;
- (void)requestReward:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)scheduleTimeBasedConfirmedClickIfNeeded;
@property(readonly, nonatomic) _Bool shouldPreloadActionViewController;
@property(readonly, nonatomic) _Bool shouldUseTimeBasedConfirmedClick;
- (void)loadCreativeControllerForSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_load;
- (void)_loadTimedOut;
- (void)_fetchWebArchiveWithURL:(id)arg1 injectQueryString:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchDataAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_handleArchiveSubResource:(id)arg1 maxAge:(double)arg2;
- (id)_assetRetrieveErrorForURLString:(id)arg1 errorMessage:(id)arg2;
- (void)_failWithError:(id)arg1;
- (void)cancelLoading;
- (void)_processCompletionOfItem:(id)arg1 error:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) ADAdImpressionPublicAttributes *publicAttributes;
- (id)initWithAdData:(id)arg1 bundleID:(id)arg2 loadedCompletion:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

