//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDShareInvitationResponseURLRequest : CKDURLRequest
{
    CDUnknownBlockType _invitationResponsePostedBlock;
    NSArray *_invitationsToAccept;
    NSArray *_invitationsToDecline;
    NSMutableDictionary *_invitationIDByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *invitationIDByRequestID; // @synthesize invitationIDByRequestID=_invitationIDByRequestID;
@property(retain, nonatomic) NSArray *invitationsToDecline; // @synthesize invitationsToDecline=_invitationsToDecline;
@property(retain, nonatomic) NSArray *invitationsToAccept; // @synthesize invitationsToAccept=_invitationsToAccept;
@property(copy, nonatomic) CDUnknownBlockType invitationResponsePostedBlock; // @synthesize invitationResponsePostedBlock=_invitationResponsePostedBlock;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithInvitationsToAccept:(id)arg1 invitationsToDecline:(id)arg2;

@end

