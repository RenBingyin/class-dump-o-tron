//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface StreamingUnzipState : NSObject
{
    struct z_stream_s _zlibState;
    unsigned long long _lastResumptionSavedOffset;
    unsigned long long _hashedChunkSize;
    unsigned long long _bytesHashedInChunk;
    unsigned long long _uncompressedBytesOutput;
    NSString *_unzipPath;
    NSArray *_hashes;
    unsigned long long _currentLFRecordAllocationSize;
    CDStruct_3b890e00 _hashContext;
    NSDictionary *_streamInfoDict;
    NSString *_lastChunkPartialHash;
    NSMutableData *_unsureData;
    NSMutableData *_inMemoryFileData;
    NSMutableData *_unfinishedCompressedData;
    CDStruct_6e051504 *_currentLFRecord;
    CDStruct_1e765437 *_dataDescriptor;
    unsigned long long _thisStageBytesComplete;
    unsigned long long _currentOffset;
    unsigned long long _outputFileOffsetAtLastBlockEnd;
    unsigned long long _recordsProcessed;
    unsigned long long _totalRecordCount;
    unsigned long long _currentCRC32;
    int _currentOutputFD;
    unsigned short _currentLFMode;
    unsigned char _streamState;
    unsigned char _lastBlockEndNumUnusedBits;
    unsigned char _lastBlockEndLastByte;
    _Bool _storeCurrentFileInMemory;
    _Bool _currentLFRequiresDataDescriptor;
}

+ (id)unzipStateWithPath:(id)arg1 options:(id)arg2 error:(id *)arg3;
@property(nonatomic) CDStruct_1e765437 *dataDescriptor; // @synthesize dataDescriptor=_dataDescriptor;
@property(nonatomic) unsigned long long uncompressedBytesOutput; // @synthesize uncompressedBytesOutput=_uncompressedBytesOutput;
@property(readonly, nonatomic) unsigned long long hashedChunkSize; // @synthesize hashedChunkSize=_hashedChunkSize;
@property(readonly, nonatomic) unsigned long long bytesHashedInChunk; // @synthesize bytesHashedInChunk=_bytesHashedInChunk;
@property(nonatomic) _Bool currentLFRequiresDataDescriptor; // @synthesize currentLFRequiresDataDescriptor=_currentLFRequiresDataDescriptor;
@property(nonatomic) _Bool storeCurrentFileInMemory; // @synthesize storeCurrentFileInMemory=_storeCurrentFileInMemory;
@property(nonatomic) unsigned char streamState; // @synthesize streamState=_streamState;
@property(nonatomic) unsigned short currentLFMode; // @synthesize currentLFMode=_currentLFMode;
@property(nonatomic) unsigned long long totalRecordCount; // @synthesize totalRecordCount=_totalRecordCount;
@property(nonatomic) unsigned long long recordsProcessed; // @synthesize recordsProcessed=_recordsProcessed;
@property(nonatomic) int currentOutputFD; // @synthesize currentOutputFD=_currentOutputFD;
@property(nonatomic) unsigned long long currentCRC32; // @synthesize currentCRC32=_currentCRC32;
@property(nonatomic) unsigned long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property(nonatomic) unsigned long long thisStageBytesComplete; // @synthesize thisStageBytesComplete=_thisStageBytesComplete;
@property(nonatomic) unsigned long long currentLFRecordAllocationSize; // @synthesize currentLFRecordAllocationSize=_currentLFRecordAllocationSize;
@property(nonatomic) CDStruct_6e051504 *currentLFRecord; // @synthesize currentLFRecord=_currentLFRecord;
@property(retain, nonatomic) NSMutableData *unfinishedCompressedData; // @synthesize unfinishedCompressedData=_unfinishedCompressedData;
@property(retain, nonatomic) NSMutableData *inMemoryFileData; // @synthesize inMemoryFileData=_inMemoryFileData;
@property(retain, nonatomic) NSMutableData *unsureData; // @synthesize unsureData=_unsureData;
@property(retain, nonatomic) NSString *lastChunkPartialHash; // @synthesize lastChunkPartialHash=_lastChunkPartialHash;
@property(retain, nonatomic) NSDictionary *streamInfoDict; // @synthesize streamInfoDict=_streamInfoDict;
@property(readonly, nonatomic) CDStruct_3b890e00 hashContext; // @synthesize hashContext=_hashContext;
@property(readonly, nonatomic) NSString *unzipPath; // @synthesize unzipPath=_unzipPath;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)finishStream;
- (id)updateHashFromOffset:(unsigned long long)arg1 withBytes:(const void *)arg2 length:(unsigned long long)arg3;
- (id)updateHashFromOffset:(unsigned long long)arg1 withBytes:(const void *)arg2 length:(unsigned long long)arg3 onlyFinishCurrentChunk:(_Bool)arg4;
- (id)checkLastChunkPartialHash;
- (id)_checkHashForOffset:(unsigned long long)arg1;
- (id)serializeState;
- (void)markResumptionPointWithLastCompressedByte:(unsigned char)arg1;
- (void)markResumptionPoint;
- (void)clearSavedState;
- (void)_internalSetStreamState:(unsigned char)arg1;
@property(readonly, nonatomic) struct z_stream_s *zlibState;
- (void)dealloc;
- (id)init;

@end

