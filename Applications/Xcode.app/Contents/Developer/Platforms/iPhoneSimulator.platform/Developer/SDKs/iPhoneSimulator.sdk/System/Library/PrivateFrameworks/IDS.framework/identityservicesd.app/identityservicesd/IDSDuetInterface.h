//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IDSDuetInterface : NSObject
{
    id <IDSDuetInterfaceDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) id <IDSDuetInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)meteringUpdate:(id)arg1;
- (void)_sendMeteringUpdateToDuet;
- (void)checkAvailabilityForValues:(id)arg1 priority:(long long)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_checkAvailabilityForValues:(id)arg1 priority:(long long)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)_deviceToSendTo;
- (id)_pairedDevice;
- (id)_localDevice;
- (void)_resourceAvailabilityChangedForIdentifiers:(id)arg1;
- (void)dealloc;
- (id)init;

@end

