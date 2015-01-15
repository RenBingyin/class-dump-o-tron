//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDDiscoverUserInfosURLRequest : CKDURLRequest
{
    CDUnknownBlockType _progressBlock;
    NSArray *_emailsToDiscover;
    NSArray *_userRecordIDsToDiscover;
    NSMutableDictionary *_emailAliasToEmailAddress;
    NSMutableDictionary *_hashedEmailByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *hashedEmailByRequestID; // @synthesize hashedEmailByRequestID=_hashedEmailByRequestID;
@property(retain, nonatomic) NSMutableDictionary *emailAliasToEmailAddress; // @synthesize emailAliasToEmailAddress=_emailAliasToEmailAddress;
@property(retain, nonatomic) NSArray *userRecordIDsToDiscover; // @synthesize userRecordIDsToDiscover=_userRecordIDsToDiscover;
@property(retain, nonatomic) NSArray *emailsToDiscover; // @synthesize emailsToDiscover=_emailsToDiscover;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2;

@end

