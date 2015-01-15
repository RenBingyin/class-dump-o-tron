//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFileAccessClaim.h>

@class NSArray, NSFileAccessNode, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface NSFileSubarbitrationClaim : NSFileAccessClaim
{
    NSArray *_readingURLs;
    unsigned long long _readingOptions;
    NSArray *_writingURLs;
    unsigned long long _writingOptions;
    CDUnknownBlockType _messageSender;
    NSArray *_readingLocations;
    NSArray *_writingLocations;
    NSFileAccessNode *_rootNode;
    NSMutableSet *_forwardedClaimIDs;
    NSMutableDictionary *_readRelinquishmentsByPresenterID;
    NSMutableDictionary *_writeRelinquishmentsByPresenterID;
}

- (void)forwardReacquisitionMessageWithKind:(id)arg1 parameters:(id)arg2 toPresenterForID:(id)arg3 usingReplySender:(CDUnknownBlockType)arg4;
- (void)forwardRelinquishmentMessageWithKind:(id)arg1 parameters:(id)arg2 toPresenter:(id)arg3 usingReplySender:(CDUnknownBlockType)arg4;
- (id)relinquishmentForMessageOfKind:(id)arg1 toPresenterForID:(id)arg2;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)devalueSelf;
- (void)revoked;
- (void)invokeClaimer;
- (void)granted;
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)devalueOldClaim:(id)arg1;
- (void)evaluateNewClaim:(id)arg1;
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;
- (void)forwardUsingMessageSender:(CDUnknownBlockType)arg1 crashHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)messageSender;
- (void)setMessageSender:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(CDUnknownBlockType)arg3;
- (id)initWithReadingURLs:(id)arg1 options:(unsigned long long)arg2 writingURLs:(id)arg3 options:(unsigned long long)arg4 claimer:(CDUnknownBlockType)arg5;

@end

