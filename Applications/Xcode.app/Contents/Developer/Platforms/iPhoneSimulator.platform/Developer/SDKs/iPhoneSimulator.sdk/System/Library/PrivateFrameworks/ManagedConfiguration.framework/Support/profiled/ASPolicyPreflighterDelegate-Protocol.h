//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ASPolicyPreflighter, NSDictionary, NSError, NSString;

@protocol ASPolicyPreflighterDelegate
- (void)preflighter:(ASPolicyPreflighter *)arg1 error:(NSError *)arg2;
- (void)preflighterRemoteWipeRequestResponseAcknowledged:(ASPolicyPreflighter *)arg1;
- (void)preflighterRemoteWipeRequested:(ASPolicyPreflighter *)arg1;
- (void)preflighter:(ASPolicyPreflighter *)arg1 successWithMCFeatures:(NSDictionary *)arg2 perAccountPolicies:(NSDictionary *)arg3 policyKey:(NSString *)arg4;
- (void)preflighter:(ASPolicyPreflighter *)arg1 needsComplianceWithMCFeatures:(NSDictionary *)arg2 perAccountPolicies:(NSDictionary *)arg3;
@end

