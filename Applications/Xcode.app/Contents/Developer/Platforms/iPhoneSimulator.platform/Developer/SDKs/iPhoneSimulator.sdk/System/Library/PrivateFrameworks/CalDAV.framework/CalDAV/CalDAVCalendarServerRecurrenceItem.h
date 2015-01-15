//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItem.h"

@class CalDAVCalendarServerChangesItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_master;
    CoreDAVLeafItem *_recurrenceID;
    CalDAVCalendarServerChangesItem *_changes;
}

@property(retain, nonatomic) CalDAVCalendarServerChangesItem *changes; // @synthesize changes=_changes;
@property(retain, nonatomic) CoreDAVLeafItem *recurrenceID; // @synthesize recurrenceID=_recurrenceID;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *master; // @synthesize master=_master;
@property(readonly, nonatomic) _Bool isMaster;
- (id)copyParseRules;
- (id)description;
- (void)dealloc;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)init;

@end

