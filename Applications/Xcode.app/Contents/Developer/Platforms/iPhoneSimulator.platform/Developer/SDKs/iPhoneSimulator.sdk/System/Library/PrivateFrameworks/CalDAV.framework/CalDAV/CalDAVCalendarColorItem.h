//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItem.h"

@class NSString;

@interface CalDAVCalendarColorItem : CoreDAVItem
{
    NSString *_symbolicColorName;
}

@property(retain, nonatomic) NSString *symbolicColorName; // @synthesize symbolicColorName=_symbolicColorName;
- (void)write:(id)arg1;
@property(retain, nonatomic) NSString *colorString;
- (void)parserFoundAttributes:(id)arg1;
- (void)dealloc;
- (id)init;

@end

