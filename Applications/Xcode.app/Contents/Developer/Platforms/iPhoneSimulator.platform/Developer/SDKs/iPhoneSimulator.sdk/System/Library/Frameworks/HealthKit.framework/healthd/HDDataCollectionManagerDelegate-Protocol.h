//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDSourceEntity, HDUserDefault, HKObjectType, NSArray;

@protocol HDDataCollectionManagerDelegate <NSObject>
- (void)didStopCollectionForDataType:(HKObjectType *)arg1;
- (void)didStartCollectionForDataType:(HKObjectType *)arg1;
- (void)userDefaultReceived:(HDUserDefault *)arg1;
- (_Bool)healthDataReceived:(NSArray *)arg1 provenance:(unsigned long long)arg2 sourceEntity:(HDSourceEntity *)arg3 error:(id *)arg4;
@end

