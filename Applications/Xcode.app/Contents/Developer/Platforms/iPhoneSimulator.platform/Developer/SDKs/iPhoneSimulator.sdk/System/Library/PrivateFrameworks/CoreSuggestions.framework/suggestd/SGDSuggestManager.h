//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGDSuggestManagerProtocol.h"

@class NSObject<SGMailClient>, NSString, NSXPCConnection, SGSuggestHistory;

@interface SGDSuggestManager : NSObject <SGDSuggestManagerProtocol>
{
    NSObject<SGMailClient> *_mailClient;
    NSXPCConnection *_connection;
    SGSuggestHistory *_history;
    CDUnknownBlockType _ekStoreFactory;
    double _warmTime;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)sendRTCLogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)relevantABRecordIDsWithLimit:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetConfirmationAndRejectionHistory:(CDUnknownBlockType)arg1;
- (void)rejectContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rejectEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canSeeCalendar;
- (void)messagesToRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)realtimeContactsFromDissectedEntity:(id)arg1 withStore:(id)arg2;
- (id)curatedEventKeyForExactMatchOfPseudoEvent:(id)arg1 candidates:(id)arg2;
- (id)curatedEventsWithSameOpaqueKeyAsPseudoEvent:(id)arg1;
- (id)shortNamesAndRealtimeEventsFromDissectedEntity:(id)arg1 withStore:(id)arg2;
- (void)eventsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)contactsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)eventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)contactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)contactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)contactsWithPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)contactFromABRecordID:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)isEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearCachesFully:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)prepareForRealtimeExtraction:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithMailClient:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (id)createEKStore;
- (void)setEKStoreFactoryForTesting:(CDUnknownBlockType)arg1;
- (void)setupManagerWithMailClient:(id)arg1 connection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

