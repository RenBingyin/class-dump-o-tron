//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSArray, NSMutableArray;

@interface ASMeetingResponseResponse : ASItem
{
    NSMutableArray *_mSingularResponses;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSMutableArray *mSingularResponses; // @synthesize mSingularResponses=_mSingularResponses;
- (void).cxx_destruct;
- (id)description;
- (void)_addSingularResponse:(id)arg1;
@property(readonly, nonatomic) NSArray *singularResponses;
- (id)init;

@end

