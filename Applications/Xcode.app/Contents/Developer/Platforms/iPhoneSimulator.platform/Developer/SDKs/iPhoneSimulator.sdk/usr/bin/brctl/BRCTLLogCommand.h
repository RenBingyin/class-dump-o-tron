//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCTermDumper, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface BRCTLLogCommand : NSObject
{
    struct __asl_object_s *_store;
    NSNumber *_use_color;
    NSNumber *_page;
    NSNumber *_use_multiline;
    NSNumber *_initial_count;
    NSString *_log_path;
    NSString *_home_path;
    _Bool _waitForMoreMessages;
    _Bool _shorten;
    _Bool _digest;
    NSMutableArray *_filters;
    BRCTermDumper *_dumper;
    double _firstStamp;
    NSMutableDictionary *_uuidToSection;
    NSArray *_regularExpressionReplacementInfos;
}

- (void).cxx_destruct;
- (void)parseOption:(int)arg1 arg:(const char *)arg2;
- (int)dumpToFd:(int)arg1;
- (struct __asl_object_s *)_compileQuery;
- (_Bool)fetchMaxID:(unsigned long long *)arg1;
- (void)closeLog;
- (_Bool)openLog;
- (void)printMsg:(struct __asl_object_s *)arg1;
- (id)_parseMessage:(const char *)arg1;
- (void)_dumpLevel:(int)arg1;
- (void)computeRealOptionsForFd:(id)arg1;
- (id)logPath;
- (void)dealloc;
- (id)init;

@end

