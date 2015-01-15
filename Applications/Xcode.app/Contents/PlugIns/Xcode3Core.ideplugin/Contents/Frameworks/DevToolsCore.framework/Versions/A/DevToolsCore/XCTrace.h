//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOutputStream, NSString;

@interface XCTrace : NSObject
{
    int _lock;
    NSString *_filePackagePath;
    NSOutputStream *_timelineStream;
    double _baseTime;
}

+ (id)sharedTrace;
+ (id)defaultTraceName;
+ (id)defaultTraceDirectoryPath;
+ (void)setCurrentThreadName:(unsigned int)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)addAttachment:(id)arg1 withName:(id)arg2;
- (void)addEvent:(id)arg1;
- (void)endActivity:(id)arg1;
- (void)beginActivity:(id)arg1;
- (void)dealloc;
- (void)close;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

