//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SinfsArray : NSObject
{
    NSArray *_sinfs;
}

- (_Bool)_isRecognizedProperty:(id)arg1;
- (id)_copyValueForSINF:(id)arg1 property:(id)arg2 error:(id *)arg3;
@property(readonly) NSArray *sinfs;
- (id)copyValueForProperty:(id)arg1 error:(id *)arg2;
- (id)copyValueForField:(long long)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithSINFs:(id)arg1;
- (id)init;

@end

