//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCFilterOutputStream.h>

@interface XCLineBufferedOutputStream : XCFilterOutputStream
{
    char *_bufferedBytes;
    unsigned long long _numBufferedBytes;
}

- (void)flush;
- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithNextOutputStream:(id)arg1;

@end

