//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAWebSearch : SADomainCommand
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *query;
@property(copy, nonatomic) NSString *provider;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

