//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MFMessageInfo : NSObject
{
    unsigned int _flagged:1;
    unsigned int _read:1;
    unsigned int _deleted:1;
    unsigned int _uidIsLibraryID:1;
    unsigned int _hasAttachments:1;
    unsigned int _isVIP:1;
    unsigned int _uid;
    unsigned int _dateReceivedInterval;
    unsigned int _dateSentInterval;
    unsigned int _mailboxID;
    long long _conversationHash;
    long long _generationNumber;
}

+ (long long)newGenerationNumber;
@property(readonly, nonatomic) long long generationNumber; // @synthesize generationNumber=_generationNumber;
@property(nonatomic) unsigned int mailboxID; // @synthesize mailboxID=_mailboxID;
@property(nonatomic) long long conversationHash; // @synthesize conversationHash=_conversationHash;
@property(nonatomic) unsigned int dateSentInterval; // @synthesize dateSentInterval=_dateSentInterval;
@property(nonatomic) unsigned int dateReceivedInterval; // @synthesize dateReceivedInterval=_dateReceivedInterval;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (long long)generationCompare:(id)arg1;
- (id)initWithUid:(unsigned int)arg1 mailboxID:(unsigned int)arg2 dateReceivedInterval:(unsigned int)arg3 dateSentInterval:(unsigned int)arg4 conversationHash:(long long)arg5 read:(_Bool)arg6 knownToHaveAttachments:(_Bool)arg7 flagged:(_Bool)arg8 isVIP:(_Bool)arg9;
- (id)init;
@property(nonatomic) _Bool isVIP;
@property(nonatomic, getter=isKnownToHaveAttachments) _Bool knownToHaveAttachments;
@property(nonatomic) _Bool uidIsLibraryID;
@property(nonatomic) _Bool deleted;
@property(nonatomic) _Bool flagged;
@property(nonatomic) _Bool read;

@end

