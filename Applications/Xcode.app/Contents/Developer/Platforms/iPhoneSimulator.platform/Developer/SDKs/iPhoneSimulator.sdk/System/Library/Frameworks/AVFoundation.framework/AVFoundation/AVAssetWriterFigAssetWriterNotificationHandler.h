//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReference;

@interface AVAssetWriterFigAssetWriterNotificationHandler : NSObject
{
    struct OpaqueFigAssetWriter *_figAssetWriter;
    int _didNotCallDelegate;
    AVWeakReference *_weakReferenceToSelf;
    AVWeakReference *_weakReferenceToDelegate;
    int _notificationHandlersAreRegistered;
}

@property(retain) AVWeakReference *weakReferenceToDelegate; // @synthesize weakReferenceToDelegate=_weakReferenceToDelegate;
- (void)_handleFailedNotificationWithError:(id)arg1;
- (void)_handleCompletedWritingNotification;
- (void)_teardownNotificationHandlers;
- (void)_callDelegateIfNotCalledWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 weakReferenceToDelegate:(id)arg2;

@end

