//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol MCMDMXPCProtocol <NSObject>
- (void)uprootMDMWithCompletion:(void (^)(NSError *))arg1;
- (void)retryNotNowWithCompletion:(void (^)(NSError *))arg1;
- (void)simulatePushWithCompletion:(void (^)(NSError *))arg1;
- (void)scheduleTokenUpdateWithCompletion:(void (^)(NSError *))arg1;
- (void)notifyNewConfigurationWithCompletion:(void (^)(NSError *))arg1;
@end

