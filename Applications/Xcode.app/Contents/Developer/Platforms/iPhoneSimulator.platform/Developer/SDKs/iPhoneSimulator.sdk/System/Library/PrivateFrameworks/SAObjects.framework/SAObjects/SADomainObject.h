//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceIdentifiable.h"

@class NSString, NSURL;

@interface SADomainObject : AceObject <SAAceIdentifiable>
{
}

+ (id)domainObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObject;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSURL *identifier; // @dynamic identifier;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

