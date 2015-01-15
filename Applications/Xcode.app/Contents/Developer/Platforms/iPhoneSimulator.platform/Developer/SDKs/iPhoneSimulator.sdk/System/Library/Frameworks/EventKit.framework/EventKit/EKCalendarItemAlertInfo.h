//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString, NSTimeZone, NSURL;

@interface EKCalendarItemAlertInfo : NSObject <NSCopying>
{
    _Bool _allDay;
    _Bool _tentative;
    _Bool _acknowledged;
    _Bool _isOffsetFromTravelTimeStart;
    NSString *_publisherBulletinID;
    NSString *_title;
    NSString *_location;
    NSDate *_eventDate;
    NSDate *_endDate;
    NSTimeZone *_eventTimeZone;
    NSURL *_action;
    NSURL *_entityID;
    long long _proximity;
    NSString *_externalID;
    NSString *_dismissalID;
    NSString *_alarmID;
    id <EKTravelAdvice> _latestTravelAdvice;
    NSDate *_lastFireTimeOfAlertOffsetFromTravelTime;
    NSDate *_firstDateAlertedForTravelAdvice;
}

@property(retain, nonatomic) NSDate *firstDateAlertedForTravelAdvice; // @synthesize firstDateAlertedForTravelAdvice=_firstDateAlertedForTravelAdvice;
@property(retain, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime; // @synthesize lastFireTimeOfAlertOffsetFromTravelTime=_lastFireTimeOfAlertOffsetFromTravelTime;
@property(retain, nonatomic) id <EKTravelAdvice> latestTravelAdvice; // @synthesize latestTravelAdvice=_latestTravelAdvice;
@property(readonly, nonatomic) _Bool isOffsetFromTravelTimeStart; // @synthesize isOffsetFromTravelTimeStart=_isOffsetFromTravelTimeStart;
@property(readonly, nonatomic) NSString *alarmID; // @synthesize alarmID=_alarmID;
@property(readonly, nonatomic) NSString *dismissalID; // @synthesize dismissalID=_dismissalID;
@property(readonly, nonatomic) _Bool acknowledged; // @synthesize acknowledged=_acknowledged;
@property(readonly, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(readonly, nonatomic) long long proximity; // @synthesize proximity=_proximity;
@property(readonly, nonatomic) _Bool tentative; // @synthesize tentative=_tentative;
@property(readonly, nonatomic) _Bool allDay; // @synthesize allDay=_allDay;
@property(readonly, nonatomic) NSURL *entityID; // @synthesize entityID=_entityID;
@property(readonly, nonatomic) NSURL *action; // @synthesize action=_action;
@property(readonly, nonatomic) NSTimeZone *eventTimeZone; // @synthesize eventTimeZone=_eventTimeZone;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *eventDate; // @synthesize eventDate=_eventDate;
@property(readonly, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
@property(readonly, nonatomic) NSString *recordID;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 location:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 allDay:(_Bool)arg6 tentative:(_Bool)arg7 publisherBulletinID:(id)arg8 entityID:(id)arg9 action:(id)arg10 proximity:(long long)arg11 externalID:(id)arg12 acknowledged:(_Bool)arg13 dismissalID:(id)arg14 alarmID:(id)arg15 isOffsetFromTravelTimeStart:(_Bool)arg16;

@end

