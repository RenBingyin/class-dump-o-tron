//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSNumber, NSString;

@interface HAPKeychainItem : NSObject
{
    _Bool _syncable;
    NSString *_accessGroup;
    NSNumber *_type;
    NSString *_label;
    NSString *_itemDescription;
    NSString *_account;
    NSData *_valueData;
    void *_platformReference;
    NSData *_genericData;
}

@property(retain, nonatomic) NSData *genericData; // @synthesize genericData=_genericData;
@property(nonatomic) void *platformReference; // @synthesize platformReference=_platformReference;
@property(nonatomic, getter=isSyncable) _Bool syncable; // @synthesize syncable=_syncable;
@property(retain, nonatomic) NSData *valueData; // @synthesize valueData=_valueData;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(retain, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithQueryResult:(struct __CFDictionary *)arg1 shouldIncludeData:(_Bool)arg2;

@end

