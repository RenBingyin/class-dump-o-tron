//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class GKAchievementInternal, NSString, UIImage;

@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding>
{
    GKAchievementInternal *_internal;
    UIImage *_image;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadAchievementDescriptionsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain) GKAchievementInternal *internal; // @synthesize internal=_internal;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *achievedDescription; // @dynamic achievedDescription;
@property(readonly, retain, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden; // @dynamic hidden;
@property(readonly, copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, nonatomic) long long maximumPoints; // @dynamic maximumPoints;
@property(readonly, nonatomic, getter=isReplayable) _Bool replayable; // @dynamic replayable;
@property(readonly, copy, nonatomic) NSString *title; // @dynamic title;
@property(readonly, copy, nonatomic) NSString *unachievedDescription; // @dynamic unachievedDescription;

@end
