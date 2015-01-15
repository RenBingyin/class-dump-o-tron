//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WBSCloudHistoryConfiguration : NSObject
{
    NSString *_singleDeviceSaveChangesThrottlingPolicyString;
    NSString *_multipleDeviceSaveChangesThrottlingPolicyString;
    NSString *_singleDeviceFetchChangesThrottlingPolicyString;
    NSString *_multipleDeviceFetchChangesThrottlingPolicyString;
    NSString *_syncCircleSizeRetrievalThrottlingPolicyString;
    unsigned long long _maximumRequestCharacterCount;
    unsigned long long _syncWindow;
}

+ (id)existingSharedCloudHistoryConfiguration;
@property unsigned long long syncWindow; // @synthesize syncWindow=_syncWindow;
@property unsigned long long maximumRequestCharacterCount; // @synthesize maximumRequestCharacterCount=_maximumRequestCharacterCount;
@property(retain) NSString *syncCircleSizeRetrievalThrottlingPolicyString; // @synthesize syncCircleSizeRetrievalThrottlingPolicyString=_syncCircleSizeRetrievalThrottlingPolicyString;
@property(retain) NSString *multipleDeviceFetchChangesThrottlingPolicyString; // @synthesize multipleDeviceFetchChangesThrottlingPolicyString=_multipleDeviceFetchChangesThrottlingPolicyString;
@property(retain) NSString *singleDeviceFetchChangesThrottlingPolicyString; // @synthesize singleDeviceFetchChangesThrottlingPolicyString=_singleDeviceFetchChangesThrottlingPolicyString;
@property(retain) NSString *multipleDeviceSaveChangesThrottlingPolicyString; // @synthesize multipleDeviceSaveChangesThrottlingPolicyString=_multipleDeviceSaveChangesThrottlingPolicyString;
@property(retain) NSString *singleDeviceSaveChangesThrottlingPolicyString; // @synthesize singleDeviceSaveChangesThrottlingPolicyString=_singleDeviceSaveChangesThrottlingPolicyString;
- (void).cxx_destruct;
- (void)applyRemoteConfiguration:(id)arg1;
- (void)applyPlatformConfiguration:(id)arg1 withTolerance:(long long)arg2;
- (id)remoteConfiguration;
- (id)platformBuiltInConfiguration;
- (id)_sharedBuiltInConfiguration;
- (void)_applyConfiguration:(id)arg1 withTolerance:(long long)arg2;
- (void)_applyBuiltInConfiguration:(id)arg1;
- (id)_builtInConfiguration;
- (id)init;

@end

