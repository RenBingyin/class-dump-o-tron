//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBKTransaction;

__attribute__((visibility("hidden")))
@interface SBKRequestData : NSObject
{
    SBKTransaction *_transaction;
}

+ (id)propertyListBodyWithTransaction:(id)arg1;
@property(retain) SBKTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (id)serializableRequestBodyPropertyList;
- (id)initWithTransaction:(id)arg1;

@end

