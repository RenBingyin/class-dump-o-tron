//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol BBServerConduitServerInterface <NSObject>
- (void)weeAppWithBundleID:(NSString *)arg1 getHiddenFromUser:(void (^)(NSNumber *, NSError *))arg2;
- (void)weeAppWithBundleID:(NSString *)arg1 setHiddenFromUser:(_Bool)arg2;
- (void)sendMessageToDataProviderSectionID:(NSString *)arg1 name:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
@end

