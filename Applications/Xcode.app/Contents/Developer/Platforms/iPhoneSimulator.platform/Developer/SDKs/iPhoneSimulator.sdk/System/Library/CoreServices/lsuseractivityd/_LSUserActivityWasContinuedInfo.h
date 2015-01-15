//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@interface _LSUserActivityWasContinuedInfo : NSObject
{
    _Bool _submitted;
    _Bool _browserFallback;
    _Bool _cancelled;
    int _interactionType;
    NSString *_bundleIdentifier;
    NSString *_activityType;
    unsigned long long _payloadSize;
    double _transferSpeed;
    double _transferDuration;
    NSError *_error;
}

@property int interactionType; // @synthesize interactionType=_interactionType;
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy) NSError *error; // @synthesize error=_error;
@property double transferDuration; // @synthesize transferDuration=_transferDuration;
@property double transferSpeed; // @synthesize transferSpeed=_transferSpeed;
@property unsigned long long payloadSize; // @synthesize payloadSize=_payloadSize;
@property(getter=isBrowserFallback) _Bool browserFallback; // @synthesize browserFallback=_browserFallback;
@property(copy) NSString *activityType; // @synthesize activityType=_activityType;
@property(copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)submit;

@end

