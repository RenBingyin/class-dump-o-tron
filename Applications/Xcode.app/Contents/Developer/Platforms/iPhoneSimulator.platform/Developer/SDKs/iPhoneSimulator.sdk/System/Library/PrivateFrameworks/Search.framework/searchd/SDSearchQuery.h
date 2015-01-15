//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPSearchQuery.h"

#import "SPSearchResultsPipe.h"

@class NSMutableDictionary, SPXPCConnection, SPXPCMessage;

@interface SDSearchQuery : SPSearchQuery <SPSearchResultsPipe>
{
    SPXPCConnection *_connection;
    NSMutableDictionary *_serializers;
    unsigned int _externalID;
    SPXPCMessage *_message;
}

@property(retain, nonatomic) SPXPCMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) SPXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) unsigned int externalID; // @synthesize externalID=_externalID;
- (void)dealloc;
- (id)initWithSearchString:(id)arg1 forSearchDomains:(id)arg2 externalID:(unsigned int)arg3 connection:(id)arg4;
- (id)serializerForDomain:(int)arg1;
- (_Bool)storeCompletedSearch:(id)arg1;
- (void)domainCompletedSearch:(unsigned int)arg1;
- (void)sendFinishedDomains;
- (void)queryFinishedWithError:(id)arg1;
- (void)appendResults:(id)arg1 toSerializerDomain:(unsigned int)arg2;
- (void)appendResults:(id)arg1;
- (void)appendSection:(id)arg1 toSerializerDomain:(unsigned int)arg2;
- (void)sendQueryReset;
- (void)sendQueryCompleted;
- (void)sendError:(id)arg1;
- (void)sendResults:(id)arg1;

@end

