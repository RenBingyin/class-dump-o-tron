//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

#import "NSCopying.h"

@interface PBXObjectID : NSString <NSCopying>
{
    NSString *_string;
    unsigned long long _hash;
}

- (void).cxx_destruct;
- (id)description;
- (id)stringRepresentation;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initFromStringRepresentation:(id)arg1;

@end
