//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SGEntityTag : NSObject <NSCopying>
{
    _Bool _indexed;
    _Bool _stored;
    NSString *_name;
}

+ (id)testTag:(int)arg1;
+ (id)extractedFromTemplateWithShortName:(id)arg1;
+ (id)messageWithMessageIdHash:(long long)arg1 fromSource:(id)arg2;
+ (id)containsEntityExtraction:(long long)arg1;
+ (id)extraKey:(id)arg1;
+ (id)identity:(id)arg1;
+ (id)contactDetail:(id)arg1;
+ (id)url:(id)arg1;
+ (id)tagForPrefix:(id)arg1 value:(id)arg2;
+ (id)fromReply;
+ (id)fromForwardedMessage;
+ (id)defaultDuration;
+ (id)hardName;
+ (id)human;
+ (id)inhuman;
+ (id)allDay;
+ (id)extractedEventCancellation;
+ (id)fromExtractedDomain;
+ (id)extractedSocial;
+ (id)extractedFood;
+ (id)extractedMovie;
+ (id)extractedTicket;
+ (id)extractedCarRental;
+ (id)extractedHotel;
+ (id)extractedTrain;
+ (id)extractedBus;
+ (id)extractedFlight;
+ (id)extractedEvent;
+ (id)resolveName:(id)arg1;
+ (void)initialize;
+ (void)rememberPrefix:(id)arg1 stored:(_Bool)arg2 indexed:(_Bool)arg3;
+ (id)remember:(id)arg1;
@property(readonly, nonatomic) _Bool stored; // @synthesize stored=_stored;
@property(readonly, nonatomic) _Bool indexed; // @synthesize indexed=_indexed;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isTemplateShortName;
- (_Bool)isExtraKey;
- (_Bool)isContactDetail;
- (_Bool)isUrl;
- (id)description;
- (id)value;
- (_Bool)isEqualToEntityTag:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 stored:(_Bool)arg2 indexed:(_Bool)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

