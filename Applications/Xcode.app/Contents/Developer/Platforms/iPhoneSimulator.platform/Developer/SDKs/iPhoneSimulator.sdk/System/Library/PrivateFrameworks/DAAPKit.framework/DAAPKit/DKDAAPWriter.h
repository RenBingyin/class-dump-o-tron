//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSOutputStream, NSString, _DKDAAPWriterContainer;

@interface DKDAAPWriter : NSObject <NSStreamDelegate>
{
    NSObject<OS_dispatch_queue> *_outputStreamAccessQueue;
    NSMutableArray *_containerStack;
    _DKDAAPWriterContainer *_currentContainer;
    NSOutputStream *_outputStream;
    unsigned long long _state;
}

@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
- (void).cxx_destruct;
- (id)_writeDataToOutputStream:(id)arg1;
- (void)writeContainerData:(id)arg1;
- (void)writeBytes:(char *)arg1 ofLength:(unsigned int)arg2 withCode:(unsigned int)arg3;
- (void)writeCString:(const char *)arg1 withCode:(unsigned int)arg2;
- (void)writeString:(id)arg1 withCode:(unsigned int)arg2;
- (void)writeSInt64:(long long)arg1 withCode:(unsigned int)arg2;
- (void)writeUInt64:(unsigned long long)arg1 withCode:(unsigned int)arg2;
- (void)writeSInt32:(int)arg1 withCode:(unsigned int)arg2;
- (void)writeUInt32:(unsigned int)arg1 withCode:(unsigned int)arg2;
- (void)writeSInt16:(short)arg1 withCode:(unsigned int)arg2;
- (void)writeUInt16:(unsigned short)arg1 withCode:(unsigned int)arg2;
- (void)writeSInt8:(BOOL)arg1 withCode:(unsigned int)arg2;
- (void)writeUInt8:(unsigned char)arg1 withCode:(unsigned int)arg2;
- (void)writeData:(id)arg1 withCode:(unsigned int)arg2;
- (void)endContainerWithCode:(unsigned int)arg1;
- (void)startContainerWithCode:(unsigned int)arg1;
- (void)close;
- (id)initWithStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

