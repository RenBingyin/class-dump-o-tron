//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, NSString;

@protocol AAUIAccountCreationDelegate
- (void)accountCreationWasCanceled;
- (void)accountCreationDidFailWithError:(NSError *)arg1;
- (void)accountCreationDidSucceedWithAppleID:(NSString *)arg1 password:(NSString *)arg2 emailChoice:(NSString *)arg3;
- (void)accountCreationWillBeginWithAppleID:(NSString *)arg1 password:(NSString *)arg2;
@end

