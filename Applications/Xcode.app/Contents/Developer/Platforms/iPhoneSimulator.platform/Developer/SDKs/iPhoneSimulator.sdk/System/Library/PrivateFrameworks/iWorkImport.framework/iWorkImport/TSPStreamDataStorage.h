//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSPDataStorage.h"

@class NSString, SFUCryptoKey;

__attribute__((visibility("hidden")))
@interface TSPStreamDataStorage : NSObject <TSPDataStorage>
{
}

- (_Bool)isInPackage:(id)arg1;
@property(readonly, nonatomic) _Bool readOnly;
@property(readonly, nonatomic) unsigned long long encodedLength;
- (_Bool)writeData:(id)arg1 toPackageWriter:(id)arg2 preferredFilename:(id)arg3 filename:(id *)arg4 didCopyDataToPackage:(_Bool *)arg5 isMissingData:(_Bool *)arg6;
- (void)archiveInfoMessage:(struct DataInfo *)arg1 archiver:(id)arg2;
- (id)filenameForPreferredFilename:(id)arg1;
@property(readonly, nonatomic) _Bool isMissingData;
@property(readonly, nonatomic) _Bool isReadable;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSString *packageLocator;
@property(readonly, nonatomic) NSString *documentResourceLocator;
- (id)AVAssetWithOptions:(id)arg1 usingResourceLoaderWithContentTypeUTI:(id)arg2;
- (id)AVAssetWithOptions:(id)arg1 contentTypeUTI:(id)arg2;
- (id)NSDataWithOptions:(unsigned long long)arg1;
- (struct CGImageSource *)newCGImageSource;
- (struct CGDataProvider *)newCGDataProvider;
- (id)bookmarkDataWithOptions:(unsigned long long)arg1;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned int CRC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) SFUCryptoKey *decryptionKey;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool gilligan_isRemote;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool needsDownload;
@property(readonly) Class superclass;

@end

