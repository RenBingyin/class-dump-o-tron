//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVOctetStreamParser.h>

@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser
{
    NSFileHandle *_fileHandle;
}

@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
- (_Bool)processData:(id)arg1 forTask:(id)arg2;
- (void)dealloc;
- (id)initWithFileHandle:(id)arg1;

@end

