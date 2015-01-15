//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriterInputPassDescription, NSObject<OS_dispatch_queue>;

@interface AVAssetWriterInputPassDescriptionResponder : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _stoppedResponding;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    _Bool _hasRespondedAtLeastOnce;
    AVAssetWriterInputPassDescription *_mostRecentPassDescription;
    CDUnknownBlockType _callbackBlock;
}

- (_Bool)_hasStoppedResponding;
- (void)stopRespondingToPassDescriptions;
- (void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;
- (void)respondToNewPassDescription:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithCallbackQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

@end

