//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_accessLevel;
}

@property(retain, nonatomic) CoreDAVItemWithNoChildren *accessLevel; // @synthesize accessLevel=_accessLevel;
- (id)copyParseRules;
- (id)description;
- (void)dealloc;
- (id)initWithAccess:(int)arg1;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)init;

@end

