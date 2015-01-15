//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APSSystemUser, APSTopicManagerOSX, NSData, NSString;

@interface APSTokenState : NSObject
{
    NSString *_tokenName;
    APSSystemUser *_systemUser;
    _Bool _darkWakeEnabled;
    NSData *_publicToken;
    NSString *_status;
    _Bool _defaultUser;
    _Bool _willConnect;
    _Bool _willDisconnect;
    _Bool _sentFilterMessage;
    _Bool _filterChanged;
    APSTopicManagerOSX *_topicManager;
}

+ (id)darkWakeEnabledTokenNameForUserID:(id)arg1;
@property(readonly, nonatomic) APSTopicManagerOSX *topicManager; // @synthesize topicManager=_topicManager;
@property(nonatomic, getter=hasFilterChanged) _Bool filterChanged; // @synthesize filterChanged=_filterChanged;
@property(nonatomic, getter=hasSentFilterMessage) _Bool sentFilterMessage; // @synthesize sentFilterMessage=_sentFilterMessage;
@property(nonatomic) _Bool willDisconnect; // @synthesize willDisconnect=_willDisconnect;
@property(nonatomic) _Bool willConnect; // @synthesize willConnect=_willConnect;
@property(readonly, nonatomic, getter=isDefaultUser) _Bool defaultUser; // @synthesize defaultUser=_defaultUser;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *publicToken; // @synthesize publicToken=_publicToken;
@property(readonly, nonatomic, getter=isDarkWakeEnabled) _Bool darkWakeEnabled; // @synthesize darkWakeEnabled=_darkWakeEnabled;
@property(readonly, nonatomic) APSSystemUser *systemUser; // @synthesize systemUser=_systemUser;
@property(readonly, nonatomic) NSString *tokenName; // @synthesize tokenName=_tokenName;
- (id)description;
- (_Bool)isDisconnecting;
- (_Bool)isDisconnected;
- (_Bool)isConnecting;
- (_Bool)isConnected;
- (_Bool)isConnectable;
- (void)dealloc;
- (id)initDefaultUserWithEnvironment:(id)arg1 tokenName:(id)arg2 delegate:(id)arg3;
- (id)initWithEnvironment:(id)arg1 tokenName:(id)arg2 delegate:(id)arg3;

@end

