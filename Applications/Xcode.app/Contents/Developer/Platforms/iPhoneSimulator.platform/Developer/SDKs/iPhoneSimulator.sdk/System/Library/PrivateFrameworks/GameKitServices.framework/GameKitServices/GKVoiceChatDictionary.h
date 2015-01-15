//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GKVoiceChatDictionary : NSObject
{
    NSMutableDictionary *actualDictionary;
    unsigned long long type;
    unsigned int orignalCallID;
}

+ (_Bool)validateFocus:(id)arg1;
+ (_Bool)validateCancel:(id)arg1;
+ (_Bool)validateReply:(id)arg1;
+ (_Bool)validateInvite:(id)arg1;
+ (_Bool)validateDictionary:(id)arg1;
+ (id)dictionaryFromData:(id)arg1;
+ (id)inviteDictionaryToParticipantID:(id)arg1 fromParticipantID:(id)arg2 connectionData:(id)arg3 callID:(unsigned int)arg4 focus:(_Bool)arg5;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)setRemoteVCPartyID:(id)arg1;
- (id)setLocalVCPartyID:(id)arg1;
- (id)remoteVCPartyID;
- (id)localVCPartyID;
@property unsigned int callID;
- (id)createBlob;
- (id)version;
- (void)setFocus:(_Bool)arg1;
- (_Bool)isFocus;
- (_Bool)matchesNonce:(long long)arg1;
@property long long nonce;
- (id)participantID;
- (void)setFromParticipantID:(id)arg1;
- (id)fromParticipantID;
- (id)connectionData;
- (unsigned long long)response;
- (unsigned long long)type;
- (_Bool)matchesResponse:(id)arg1;
- (_Bool)isFocusDictionary;
- (_Bool)isReplyDictionary;
- (_Bool)isCancelDictionary;
- (_Bool)isInviteDictionary;
- (id)focusDictionary:(_Bool)arg1;
- (id)cancelDictionary;
- (id)replyDictionary:(unsigned long long)arg1 connectionData:(id)arg2 callID:(unsigned int)arg3 focus:(_Bool)arg4;
@property(readonly) unsigned int originalCallID;
- (void)dealloc;

@end

