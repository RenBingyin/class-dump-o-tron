//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AudioFileConverter, NSLock, NSString;

@interface AudioConverter : NSObject
{
    NSString *_file;
    NSString *_outputDirectory;
    NSString *_destinationFile;
    unsigned int _outputFormat;
    unsigned int _outputFileType;
    AudioFileConverter *_converter;
    NSLock *_lock;
}

+ (unsigned int)outputFileType;
+ (void)initialize;
- (unsigned long long)position;
- (void)cancel;
- (id)destinationFile;
- (id)file;
- (long long)convert;
- (void)dealloc;
- (id)initWithFile:(id)arg1 outputDirectory:(id)arg2 outputFormat:(unsigned int)arg3 outputFileType:(unsigned int)arg4;
- (id)initWithFile:(id)arg1 outputDirectory:(id)arg2;

@end

