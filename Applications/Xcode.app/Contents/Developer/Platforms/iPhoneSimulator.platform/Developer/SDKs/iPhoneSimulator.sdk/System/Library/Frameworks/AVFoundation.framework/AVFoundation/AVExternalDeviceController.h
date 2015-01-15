//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVExternalDeviceControllerInternal, NSArray;

@interface AVExternalDeviceController : NSObject
{
    AVExternalDeviceControllerInternal *_externalDeviceController;
}

- (_Bool)isExternalDeviceCurrent:(id)arg1;
- (_Bool)setCurrentExternalDevice:(id)arg1;
- (_Bool)setCurrentExternalDevice:(id)arg1 withPassword:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *availableExternalDevices;
@property(nonatomic) __weak id <AVExternalDeviceControllerDelegate> delegate;
@property(nonatomic) long long discoveryMode;
- (void)dealloc;
- (id)init;

@end

