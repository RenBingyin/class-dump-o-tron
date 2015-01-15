//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUUID;

@interface RCSXPCTransaction : NSObject
{
    NSUUID *_identifier;
    NSString *_name;
}

+ (id)activeTransactions;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)_identifier;
- (void)endTransactionOnDate:(id)arg1;
- (void)endTransaction;
- (void)beginTransaction;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

@end

