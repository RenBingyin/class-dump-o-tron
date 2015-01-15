//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBUIBannerTarget.h"

@class NSString;

@interface SBUIBannerTargetProxy : NSObject <SBUIBannerTarget>
{
    void *_identifier;
    long long _idiom;
    id <SBUIBannerTargetImplementation> _implementation;
}

@property(readonly, nonatomic) long long bannerTargetIdiom; // @synthesize bannerTargetIdiom=_idiom;
@property(readonly, nonatomic) void *bannerTargetIdentifier; // @synthesize bannerTargetIdentifier=_identifier;
@property(readonly, copy) NSString *description;
- (void)removeCachedBannerForContext:(id)arg1;
- (void)cacheBannerForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dismissCurrentBannerContextForSource:(id)arg1;
- (id)currentBannerContextForSource:(id)arg1;
- (void)signalSource:(id)arg1;
- (_Bool)isShowingModalBanner;
- (void)modallyPresentBannerWithContext:(id)arg1;
- (void)unregisterSource:(id)arg1;
- (void)registerSource:(id)arg1;
- (void)invalidate;
- (id)initWithTargetImplementation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

