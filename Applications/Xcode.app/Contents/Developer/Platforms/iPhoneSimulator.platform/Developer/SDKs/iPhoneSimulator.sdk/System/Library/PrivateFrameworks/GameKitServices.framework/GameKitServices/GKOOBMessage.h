//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface GKOOBMessage : NSObject
{
    unsigned short _type;
}

@property(readonly) unsigned short type; // @synthesize type=_type;
- (_Bool)_checkSize:(unsigned long long)arg1;
- (_Bool)_checkType:(unsigned short)arg1;
- (id)data;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithMessageType:(unsigned short)arg1;

@end

