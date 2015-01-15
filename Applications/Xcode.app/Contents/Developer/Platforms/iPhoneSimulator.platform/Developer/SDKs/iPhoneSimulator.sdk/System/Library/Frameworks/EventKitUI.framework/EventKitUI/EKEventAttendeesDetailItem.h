//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class EKEventDetailAttendeesCell, NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EKEventAttendeesDetailItem : EKEventDetailItem
{
    NSMutableDictionary *_attendeesCells;
    EKEventDetailAttendeesCell *_cell;
    int _status;
    NSArray *_attendees;
}

@property(retain, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (unsigned long long)numberOfSubitems;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)reset;

@end

