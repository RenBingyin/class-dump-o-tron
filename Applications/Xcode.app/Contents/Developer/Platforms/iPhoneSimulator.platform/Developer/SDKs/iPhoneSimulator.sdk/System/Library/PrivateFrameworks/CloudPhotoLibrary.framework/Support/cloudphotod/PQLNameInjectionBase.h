//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface PQLNameInjectionBase : NSData
{
    unsigned long long _length;
    char *_bytes;
}

- (id)initWithData:(id)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
@property(readonly, nonatomic) NSData *sql;
- (void)dealloc;
- (const void *)bytes;
- (unsigned long long)length;

@end

