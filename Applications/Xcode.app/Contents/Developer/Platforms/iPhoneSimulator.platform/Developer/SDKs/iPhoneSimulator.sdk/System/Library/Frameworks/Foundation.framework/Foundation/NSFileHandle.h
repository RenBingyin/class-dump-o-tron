//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData;

@interface NSFileHandle : NSObject <NSSecureCoding>
{
}

+ (id)fileHandleForUpdatingURL:(id)arg1 mode:(unsigned short)arg2 error:(id *)arg3;
+ (id)fileHandleForWritingToURL:(id)arg1 mode:(unsigned short)arg2 error:(id *)arg3;
+ (id)fileHandleForReadingFromURL:(id)arg1 mode:(unsigned short)arg2 error:(id *)arg3;
+ (id)fileHandleForUpdatingURL:(id)arg1 error:(id *)arg2;
+ (id)fileHandleForWritingToURL:(id)arg1 error:(id *)arg2;
+ (id)fileHandleForReadingFromURL:(id)arg1 error:(id *)arg2;
+ (id)fileHandleForUpdatingAtPath:(id)arg1;
+ (id)fileHandleForWritingAtPath:(id)arg1;
+ (id)fileHandleForReadingAtPath:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)fileHandleWithNullDevice;
+ (id)fileHandleWithStandardError;
+ (id)fileHandleWithStandardOutput;
+ (id)fileHandleWithStandardInput;
+ (void)initialize;
- (void)setReadabilityHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)readabilityHandler;
- (void)setWriteabilityHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)writeabilityHandler;
- (int)fileDescriptor;
- (void)closeFile;
- (void)synchronizeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (unsigned long long)seekToEndOfFile;
@property(readonly) unsigned long long offsetInFile;
- (void)writeData:(id)arg1;
- (id)readDataOfLength:(unsigned long long)arg1;
- (id)readDataToEndOfFile;
@property(readonly, copy) NSData *availableData;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(_Bool)arg2;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;

@end

