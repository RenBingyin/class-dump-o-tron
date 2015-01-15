//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APSProtocolParser : NSObject
{
}

- (void)_setSerialItemInParameters:(id)arg1 commandID:(unsigned long long)arg2 itemID:(unsigned long long)arg3 itemData:(id)arg4;
- (_Bool)_parseSerialMessage:(id)arg1 parameters:(id *)arg2 isInvalid:(_Bool *)arg3 lengthParsed:(unsigned long long *)arg4;
- (_Bool)_parseKeepAliveResponseMessage:(id)arg1 parameters:(id *)arg2 isInvalid:(_Bool *)arg3 lengthParsed:(unsigned long long *)arg4;
- (_Bool)_parseMessageMessage:(id)arg1 parameters:(id *)arg2 isInvalid:(_Bool *)arg3 lengthParsed:(unsigned long long *)arg4;
- (_Bool)_parseConnectedMessage:(id)arg1 parameters:(id *)arg2 isInvalid:(_Bool *)arg3 lengthParsed:(unsigned long long *)arg4;
- (_Bool)parseMessage:(id)arg1 parameters:(id *)arg2 isInvalid:(_Bool *)arg3 lengthParsed:(unsigned long long *)arg4;
- (id)copySetActiveState:(_Bool)arg1 forInterval:(unsigned int)arg2;
- (id)copySetActiveIntervalMessageWithInterval:(unsigned int)arg1;
- (id)copyAppTokenGenerateMessageWithTopicHash:(id)arg1 appId:(unsigned short)arg2;
- (id)copyFlushResponseMessageWithPaddingLength:(unsigned long long)arg1;
- (id)copyFlushMessageWithWantPaddingLength:(unsigned long long)arg1 paddingLength:(unsigned long long)arg2;
- (id)copyMessageWithTopicHash:(id)arg1 identifier:(unsigned long long)arg2 payload:(id)arg3 token:(id)arg4;
- (id)copyKeepAliveMessageWithMetadata:(id)arg1;
- (id)copyMessageTransportAcknowledgeMessage;
- (id)copyMessageAcknowledgeMessageWithResponse:(long long)arg1 messageId:(id)arg2 token:(id)arg3;
- (id)copyFilterMessageWithEnabledHashes:(id)arg1 ignoredHashes:(id)arg2 opportunisticHashes:(id)arg3 pausedHashes:(id)arg4 token:(id)arg5;
- (id)copyConnectMessageWithToken:(id)arg1 state:(int)arg2 presenceFlags:(unsigned int)arg3 interface:(long long)arg4 activeInterval:(unsigned int)arg5 metadata:(id)arg6 certificate:(id)arg7 nonce:(id)arg8 signature:(id)arg9;
- (id)copyConnectMessageWithToken:(id)arg1 state:(int)arg2 interface:(long long)arg3 activeInterval:(unsigned int)arg4 metadata:(id)arg5 certificate:(id)arg6 nonce:(id)arg7 signature:(id)arg8;
- (id)copyConnectMessageWithToken:(id)arg1 interface:(long long)arg2 activeInterval:(unsigned int)arg3 metadata:(id)arg4;

@end

