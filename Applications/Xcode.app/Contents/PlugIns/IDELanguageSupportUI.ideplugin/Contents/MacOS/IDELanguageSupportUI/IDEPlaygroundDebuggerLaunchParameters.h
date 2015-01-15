//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class DVTFilePath, NSArray, NSDictionary;

@interface IDEPlaygroundDebuggerLaunchParameters : NSObject <NSSecureCoding>
{
    BOOL _shouldDisableConsoleToySTDERR;
    unsigned int _uid;
    NSArray *_arguments;
    NSDictionary *_environment;
    DVTFilePath *_workingDirectory;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) BOOL shouldDisableConsoleToySTDERR; // @synthesize shouldDisableConsoleToySTDERR=_shouldDisableConsoleToySTDERR;
@property(readonly) unsigned int uid; // @synthesize uid=_uid;
@property(readonly) DVTFilePath *workingDirectory; // @synthesize workingDirectory=_workingDirectory;
@property(readonly) NSDictionary *environment; // @synthesize environment=_environment;
@property(readonly) NSArray *arguments; // @synthesize arguments=_arguments;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithArguments:(id)arg1 environment:(id)arg2 workingDirectory:(id)arg3 uid:(unsigned int)arg4 disableConsoleToySTDERR:(BOOL)arg5;

@end

