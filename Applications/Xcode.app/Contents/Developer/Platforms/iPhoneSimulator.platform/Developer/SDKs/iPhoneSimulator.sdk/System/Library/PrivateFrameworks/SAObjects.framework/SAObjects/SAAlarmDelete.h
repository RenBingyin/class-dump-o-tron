//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SAAlarmDelete : SADomainCommand
{
}

+ (id)deleteWithDictionary:(id)arg1 context:(id)arg2;
+ (id)delete;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *alarmIds;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

