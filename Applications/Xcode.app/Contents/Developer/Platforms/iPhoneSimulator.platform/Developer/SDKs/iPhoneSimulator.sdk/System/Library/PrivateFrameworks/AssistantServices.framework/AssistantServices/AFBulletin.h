//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface AFBulletin : NSObject <NSSecureCoding>
{
    _Bool _read;
    _Bool _allDay;
    NSString *_bulletinID;
    NSDate *_date;
    NSDate *_endDate;
    NSString *_message;
    NSString *_modalAlertContentMessage;
    NSDate *_recencyDate;
    NSString *_sectionID;
    NSString *_subtitle;
    NSString *_timeZone;
    NSString *_title;
    NSString *_displayName;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(readonly, copy, nonatomic) NSDate *recencyDate; // @synthesize recencyDate=_recencyDate;
@property(readonly, copy, nonatomic) NSString *modalAlertContentMessage; // @synthesize modalAlertContentMessage=_modalAlertContentMessage;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property(nonatomic, getter=isRead) _Bool read; // @synthesize read=_read;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBulletin:(id)arg1;

@end

