//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSInputStream;

@interface MZStringStreamReader : NSObject
{
    unsigned long long _encoding;
    unsigned int _cfencoding;
    NSInputStream *_stream;
    void *_private1;
    unsigned long long _index;
    BOOL _atEnd;
}

- (BOOL)isAtEnd;
- (void)pushCharacter:(unsigned short)arg1;
- (unsigned long long)position;
- (BOOL)getNextCharacter:(unsigned short *)arg1 error:(id *)arg2;
- (void)pushBytes:(char *)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithEncoding:(unsigned long long)arg1 stream:(id)arg2;

@end

