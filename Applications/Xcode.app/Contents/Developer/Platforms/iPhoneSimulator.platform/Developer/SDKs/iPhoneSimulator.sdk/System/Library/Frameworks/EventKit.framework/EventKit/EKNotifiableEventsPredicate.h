//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPredicate.h"

#import "EKDefaultPropertiesLoading.h"
#import "NSSecureCoding.h"

@class NSString;

@interface EKNotifiableEventsPredicate : NSPredicate <EKDefaultPropertiesLoading, NSSecureCoding>
{
}

+ (id)predicate;
+ (_Bool)supportsSecureCoding;
- (id)defaultPropertiesToLoad;
- (_Bool)shouldLoadDefaultProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)evaluateWithObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

