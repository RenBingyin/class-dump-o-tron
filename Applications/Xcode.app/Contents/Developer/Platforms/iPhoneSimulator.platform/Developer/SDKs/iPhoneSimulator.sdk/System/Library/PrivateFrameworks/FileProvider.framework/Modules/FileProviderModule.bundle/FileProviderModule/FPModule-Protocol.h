//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol FPModule <NSObject>

@optional
- (void)FPRegisterFileProvidersForFileCoordinationCompletion:(void (^)(void))arg1;
- (void)FPDocumentURLFromBookmarkableString:(NSString *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (void)FPBookmarkableStringFromDocumentURL:(NSURL *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
@end

