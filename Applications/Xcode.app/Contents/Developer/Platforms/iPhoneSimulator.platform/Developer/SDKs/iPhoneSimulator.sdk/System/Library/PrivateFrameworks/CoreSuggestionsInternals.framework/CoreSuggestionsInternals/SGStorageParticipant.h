//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SGIdentityKey, SGStorageContact;

@interface SGStorageParticipant : NSObject
{
    unsigned int _role;
    SGStorageContact *_contact;
    SGIdentityKey *_participatingIdentity;
}

+ (id)participantWithContact:(id)arg1 participatingIdentity:(id)arg2 roleType:(unsigned int)arg3;
@property(retain, nonatomic) SGIdentityKey *participatingIdentity; // @synthesize participatingIdentity=_participatingIdentity;
@property(retain, nonatomic) SGStorageContact *contact; // @synthesize contact=_contact;
@property(nonatomic) unsigned int role; // @synthesize role=_role;
- (void).cxx_destruct;

@end

