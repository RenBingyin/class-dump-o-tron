//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MZStringLoader : NSObject
{
    unsigned long long _defaultEncoding;
}

+ (unsigned long long)defaultEncodingForNewLoaders;
+ (id)defaultLoader;
- (unsigned long long)bomAwareEncodingForData:(id)arg1 length:(unsigned long long *)arg2;
- (id)bomAwareStringFromData:(id)arg1;
- (id)bomAwareStringFromFile:(id)arg1 error:(id *)arg2;
- (void)setDefaultEncoding:(unsigned long long)arg1;
- (unsigned long long)defaultEncoding;
- (id)init;

@end

