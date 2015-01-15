//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDNotificationServiceGetUpdatesTask.h"

@class NSString;

@interface PDNotificationServiceGetSpecificUpdatesTask : PDNotificationServiceGetUpdatesTask
{
    NSString *_dpanIdentifier;
    NSString *_lastUpdatedTag;
}

+ (id)getSpecificUpdatesTaskWithNotificationService:(id)arg1 dpanIdentifier:(id)arg2 lastUpdatedTag:(id)arg3;
@property(retain, nonatomic) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property(retain, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
- (_Bool)pertainsToNotificationService:(id)arg1 andDPANIdentifier:(id)arg2;
- (_Bool)matchesTask:(id)arg1;
- (id)description;
- (id)endpointComponents;
- (id)queryFields;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithNotificationService:(id)arg1 dpanIdentifier:(id)arg2 lastUpdatedTag:(id)arg3;

@end
