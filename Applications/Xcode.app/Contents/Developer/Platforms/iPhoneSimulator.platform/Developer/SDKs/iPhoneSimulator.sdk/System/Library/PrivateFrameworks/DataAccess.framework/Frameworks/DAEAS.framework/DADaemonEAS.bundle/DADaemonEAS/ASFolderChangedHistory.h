//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface ASFolderChangedHistory : NSObject
{
    int _count;
    NSDate *_startTime;
}

@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)initWithCount:(int)arg1;

@end

