//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSInputStream, NSObject<OS_dispatch_queue>, NSOutputStream, NSString;

@interface MSVStreamWriter : NSObject <NSStreamDelegate>
{
    _Bool _closeOnStop;
    struct z_stream_s *_zstreamp;
    _Bool _compressed;
    unsigned long long _maximumBufferSize;
    double _timestamp;
    unsigned long long _bytesWritten;
    CDUnknownBlockType _canWriteDataBlock;
    CDUnknownBlockType _didFinishWritingBlock;
    CDUnknownBlockType _didEncounterErrorBlock;
    NSOutputStream *_outputStream;
    NSInputStream *_inputStream;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(copy, nonatomic) CDUnknownBlockType didEncounterErrorBlock; // @synthesize didEncounterErrorBlock=_didEncounterErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType didFinishWritingBlock; // @synthesize didFinishWritingBlock=_didFinishWritingBlock;
@property(copy, nonatomic) CDUnknownBlockType canWriteDataBlock; // @synthesize canWriteDataBlock=_canWriteDataBlock;
@property(nonatomic) unsigned long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic, getter=isCompressed) _Bool compressed; // @synthesize compressed=_compressed;
@property(nonatomic) unsigned long long maximumBufferSize; // @synthesize maximumBufferSize=_maximumBufferSize;
- (void).cxx_destruct;
- (id)_decompressData:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)writeStreamError:(CDStruct_87dc826d)arg1;
- (_Bool)writeAllData:(id)arg1 error:(id *)arg2;
- (void)writeAllData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

