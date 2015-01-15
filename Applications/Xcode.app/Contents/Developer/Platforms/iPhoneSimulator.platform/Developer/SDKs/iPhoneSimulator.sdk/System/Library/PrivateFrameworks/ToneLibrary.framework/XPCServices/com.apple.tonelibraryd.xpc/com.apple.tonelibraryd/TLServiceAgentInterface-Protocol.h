//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol TLServiceAgentInterface <NSObject>
- (void)removeAllUserGeneratedVibrationPatternsWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)setUserGeneratedVibrationPatterns:(NSDictionary *)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)retrieveUserGeneratedVibrationPatternsWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setCurrentToneIdentifier:(NSString *)arg1 forPreferenceKey:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)retrieveCurrentTonePreferencesWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
@end

