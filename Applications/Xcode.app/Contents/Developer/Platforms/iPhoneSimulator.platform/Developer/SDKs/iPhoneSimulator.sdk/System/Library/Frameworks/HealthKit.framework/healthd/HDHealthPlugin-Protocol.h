//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKObjectType, HKSampleType, NSNumber, NSString;

@protocol HDHealthPlugin <NSObject>
- (id)initWithHealthDaemon:(id <HDHealthDaemon>)arg1;

@optional
- (void)setDataCollectionOptionForType:(HKSampleType *)arg1 key:(NSString *)arg2 value:(NSNumber *)arg3;
- (_Bool)daemonDidReceiveNotification:(const char *)arg1;
- (void)stopDataStreamingForDataType:(HKObjectType *)arg1;
- (void)startDataStreamingForDataType:(HKObjectType *)arg1;
- (void)syncIfPossible;
@end

