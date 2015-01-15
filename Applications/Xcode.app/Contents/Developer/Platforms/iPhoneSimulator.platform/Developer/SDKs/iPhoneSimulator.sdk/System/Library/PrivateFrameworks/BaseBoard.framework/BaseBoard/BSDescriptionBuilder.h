//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString;

@interface BSDescriptionBuilder : NSObject
{
    NSObject *_object;
    NSMutableString *_description;
}

+ (id)descriptionForObject:(id)arg1 withObjectsAndNames:(id)arg2;
+ (id)descriptionForObject:(id)arg1;
+ (id)builderWithObject:(id)arg1;
+ (id)nameObjectSeparator;
+ (id)componentSeparator;
- (id)build;
- (id)appendString:(id)arg1;
- (void)tryAppendKey:(id)arg1;
- (id)appendKeys:(id)arg1;
- (id)appendKey:(id)arg1;
- (id)appendObjectsAndNames:(id)arg1 args:(struct __va_list_tag [1])arg2;
- (id)appendObjectsAndNames:(id)arg1;
- (id)appendRect:(struct CGRect)arg1 withName:(id)arg2;
- (id)appendSize:(struct CGSize)arg1 withName:(id)arg2;
- (id)appendPoint:(struct CGPoint)arg1 withName:(id)arg2;
- (id)appendQueue:(id)arg1 withName:(id)arg2;
- (id)appendCString:(const char *)arg1 withName:(id)arg2;
- (id)appendSelector:(SEL)arg1 withName:(id)arg2;
- (id)appendPointer:(void *)arg1 withName:(id)arg2;
- (id)appendFloat:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
- (id)appendFloat:(double)arg1 withName:(id)arg2;
- (id)appendUnsignedInt:(int)arg1 withName:(id)arg2;
- (id)appendInt:(int)arg1 withName:(id)arg2;
- (id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;
- (id)appendInteger:(long long)arg1 withName:(id)arg2;
- (id)appendBool:(_Bool)arg1 withName:(id)arg2;
- (id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(_Bool)arg3;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

