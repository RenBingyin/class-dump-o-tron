//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface LogDumpUtility : NSObject
{
}

+ (id)createLogFilename:(int)arg1 logNameType:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 marcoLog:(int)arg5;
+ (id)openLogDump:(int)arg1 logNameType:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 marcoLog:(int)arg5 fullFilename:(id *)arg6;
+ (void)AddFileToMarco:(id)arg1 logCategory:(int)arg2;
+ (_Bool)createDirectoy:(id)arg1;
+ (id)getDefaultLogDumpPath;
+ (id)getHomeDirPath;

@end

