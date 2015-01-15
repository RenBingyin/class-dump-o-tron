//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface IDSLocalDeliveryQueue : NSObject
{
    NSMutableArray *_messages;
    NSString *_identifier;
    NSMutableDictionary *_statistics;
}

@property(readonly) NSDictionary *statistics;
- (void)_removeMessageFromStatistics:(id)arg1;
- (void)_addMessageToStatistics:(id)arg1;
- (id)nextSocketPairMessage;
- (void)dequeueMessage:(id)arg1;
- (void)enqueueMessage:(id)arg1;
- (void)cancelMessageID:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, retain, nonatomic) NSArray *messages;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

