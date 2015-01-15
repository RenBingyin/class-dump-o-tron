//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASSettingsTaskOofMessage : ASItem
{
    NSNumber *_audience;
    NSNumber *_enabled;
    NSString *_replyMessage;
    NSString *_bodyType;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSString *bodyType; // @synthesize bodyType=_bodyType;
@property(retain, nonatomic) NSString *replyMessage; // @synthesize replyMessage=_replyMessage;
@property(retain, nonatomic) NSNumber *enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSNumber *audience; // @synthesize audience=_audience;
- (void).cxx_destruct;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (id)description;
- (void)appliesToExternalUnknown:(id)arg1;
- (void)appliesToExternalKnown:(id)arg1;
- (void)appliesToInternal:(id)arg1;

@end

