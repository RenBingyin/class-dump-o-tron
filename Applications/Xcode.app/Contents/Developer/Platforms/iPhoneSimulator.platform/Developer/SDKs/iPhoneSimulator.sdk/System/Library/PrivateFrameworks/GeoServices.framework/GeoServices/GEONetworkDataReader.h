//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface GEONetworkDataReader : NSObject
{
    NSMutableData *_data;
    unsigned long long _dataLength;
    const void *_bytes;
    unsigned long long _bookmarkOffset;
    unsigned long long _offset;
}

- (_Bool)hasUnreadData;
- (void)seekToMarkedOffset;
- (void)markOffset;
- (id)readData:(unsigned int)arg1;
- (_Bool)readUnsignedInt:(unsigned int *)arg1;
- (_Bool)readUnsignedShort:(unsigned short *)arg1;
- (id)readString;
- (void)appendNetworkData:(id)arg1;
- (id)allData;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

