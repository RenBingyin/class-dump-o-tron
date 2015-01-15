//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKPendingInviteBase.h"

#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface GKPendingInvite : GKPendingInviteBase <NSSecureCoding>
{
    NSMutableDictionary *_requestDictionary;
    NSNumber *_declineReason;
    long long _natType;
    _Bool _serverHosted;
    NSString *_gameIconURLString;
    NSData *_gameIconData;
    NSDictionary *_clientDataDictionary;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *requestDictionary; // @synthesize requestDictionary=_requestDictionary;
@property(nonatomic) _Bool serverHosted; // @synthesize serverHosted=_serverHosted;
@property(nonatomic) long long natType; // @synthesize natType=_natType;
@property(retain, nonatomic) NSData *gameIconData; // @synthesize gameIconData=_gameIconData;
@property(retain, nonatomic) NSString *gameIconURLString; // @synthesize gameIconURLString=_gameIconURLString;
@property(retain, nonatomic) NSNumber *declineReason; // @synthesize declineReason=_declineReason;
@property(retain, nonatomic) NSDictionary *clientDataDictionary; // @synthesize clientDataDictionary=_clientDataDictionary;
@property(readonly, retain, nonatomic) NSDictionary *notificationDictionary;
@property(readonly, retain, nonatomic) NSString *originatorAlias;
@property(readonly, nonatomic) _Bool valid;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInviteDictionary:(id)arg1;
- (id)description;

@end

