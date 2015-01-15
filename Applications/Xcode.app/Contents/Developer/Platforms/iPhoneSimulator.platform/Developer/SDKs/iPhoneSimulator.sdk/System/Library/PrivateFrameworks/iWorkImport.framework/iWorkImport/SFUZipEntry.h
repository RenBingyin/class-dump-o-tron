//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/SFUDataRepresentation.h>

@class SFUCryptoKey, SFUDataRepresentation<SFUZipArchiveDataRepresentation>;

__attribute__((visibility("hidden")))
@interface SFUZipEntry : SFUDataRepresentation
{
    SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;
    int mCompressionMethod;
    unsigned long long mCompressedSize;
    unsigned long long mUncompressedSize;
    unsigned long long mOffset;
    unsigned int mCrc;
    unsigned long long mDataOffset;
    _Bool mHasDataOffset;
    unsigned long long mEncodedLength;
    _Bool mHasEncodedLength;
    SFUCryptoKey *mCryptoKey;
}

- (void)setDataLength:(long long)arg1;
- (void)setCryptoKey:(id)arg1;
- (void)setCompressionFlags:(unsigned short)arg1;
- (void)readZip64ExtraField:(const char *)arg1 size:(unsigned long long)arg2;
- (unsigned int)crc;
- (unsigned long long)backingFileDataOffset;
- (id)backingFilePath;
- (_Bool)isBackedByFile;
- (_Bool)isEncrypted;
- (_Bool)isCompressed;
- (void)copyToFile:(id)arg1;
- (id)data;
- (id)inputStream;
- (long long)encodedLength;
- (long long)dataLength;
- (_Bool)isReadable;
- (void)dealloc;
- (id)initWithDataRepresentation:(id)arg1 compressionMethod:(int)arg2 compressedSize:(unsigned long long)arg3 uncompressedSize:(unsigned long long)arg4 offset:(unsigned long long)arg5 crc:(unsigned int)arg6;
- (id)initFromCentralFileHeader:(const char *)arg1 dataRepresentation:(id)arg2;
- (unsigned long long)calculateEncodedLength;
- (unsigned long long)dataOffset;

@end

