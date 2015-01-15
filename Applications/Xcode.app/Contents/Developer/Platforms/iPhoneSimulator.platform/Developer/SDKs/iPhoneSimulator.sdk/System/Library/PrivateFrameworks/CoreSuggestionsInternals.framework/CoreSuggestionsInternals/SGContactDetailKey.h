//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGEntityKey.h"

@class NSString, SGIdentityKey;

@interface SGContactDetailKey : NSObject <SGEntityKey>
{
    SGIdentityKey *_identityKey;
    NSString *_label;
    NSString *_value;
}

+ (_Bool)isSupportedEntityType:(long long)arg1;
+ (id)prefixForForIdentityKey:(id)arg1;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) SGIdentityKey *identityKey; // @synthesize identityKey=_identityKey;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToContactDetailKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentityKey:(id)arg1 label:(id)arg2 normalizedValue:(id)arg3;
- (id)serialize;
- (id)initWithSerialized:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

