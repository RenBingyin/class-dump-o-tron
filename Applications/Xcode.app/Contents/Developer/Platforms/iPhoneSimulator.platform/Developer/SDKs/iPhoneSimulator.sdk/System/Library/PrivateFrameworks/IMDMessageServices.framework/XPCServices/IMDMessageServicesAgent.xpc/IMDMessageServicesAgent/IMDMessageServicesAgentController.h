//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMDMessageServicesAgentController : NSObject
{
}

+ (id)sharedInstance;
- (void)checkExpireStateWithHandler:(CDUnknownBlockType)arg1;
- (void)checkExpireStateForMessage:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)checkForPendingRoutingWithHandler:(CDUnknownBlockType)arg1;
- (void)chooseRouteForMessage:(id)arg1 withError:(unsigned int)arg2 inChat:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_chooseRouteForMessage:(id)arg1 error:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;
- (struct _IMDChatRecordStruct *)copyBestChatWithGuid:(id)arg1 message:(struct _IMDMessageRecordStruct *)arg2;
- (id)_routingDictionaryForService:(id)arg1 extraFlags:(unsigned long long)arg2 updateProperties:(_Bool)arg3;

@end

