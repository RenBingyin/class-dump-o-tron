//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEDiagnosticActivityLogMessage.h>

@interface IDEClangDiagnosticActivityLogMessage : IDEDiagnosticActivityLogMessage
{
    int _diagnosticSeverity;
}

+ (void)initialize;
- (int)diagnosticSeverity;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2 pathMap:(id)arg3 workingDirectory:(id)arg4 documentURL:(id)arg5;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2 pathMap:(id)arg3 workingDirectory:(id)arg4;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2 pathMap:(id)arg3 documentURL:(id)arg4;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2 documentURL:(id)arg3;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2 pathMap:(id)arg3;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2;

@end

