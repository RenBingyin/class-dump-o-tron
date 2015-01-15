//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMDMSARoutingAgent.h"

@interface IMDMSASMSRoutingAgent : IMDMSARoutingAgent
{
}

+ (id)smsRoutingAgent;
- (void)getRoutableMessages:(CDUnknownBlockType)arg1;
- (_Bool)canSendMessage:(id)arg1;
- (_Bool)shouldSendMessage:(id)arg1;
- (double)_lowerDowngradeIntervalForMessage:(id)arg1;
- (_Bool)_messageHasDowngradeMarkers:(id)arg1;
- (void)_getCandidateMessages:(CDUnknownBlockType)arg1;
- (int)_undeliveredMessageWaterMark;
- (void)_updateUndeliveredMessageWaterMark:(int)arg1;
- (double)_upperDowngradeInterval;
- (_Bool)_attachmentCanBeSentViaMMS:(id)arg1;
- (_Bool)__attachmentPassesMMSRestrictions:(id)arg1;
- (_Bool)__attachmentPassesDurationRestrictions:(id)arg1;
- (_Bool)__isSendableType:(id)arg1;
- (long long)_bagValueForKey:(id)arg1 defaultValue:(long long)arg2 minimumValue:(long long)arg3;
- (id)init;

@end
