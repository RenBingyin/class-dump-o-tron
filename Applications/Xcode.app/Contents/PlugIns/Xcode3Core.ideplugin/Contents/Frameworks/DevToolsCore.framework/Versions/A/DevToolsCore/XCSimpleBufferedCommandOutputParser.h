//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCBuildCommandOutputParser.h>

@class NSMutableString;

@interface XCSimpleBufferedCommandOutputParser : XCBuildCommandOutputParser
{
    NSMutableString *_bufferedString;
}

- (void).cxx_destruct;
- (void)close;
- (void)flush;
- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;

@end

