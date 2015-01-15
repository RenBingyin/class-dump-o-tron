//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

__attribute__((visibility("hidden")))
@interface WebCascadeList : NSArray
{
    const struct Font *_font;
    int _character;
    unsigned long long _count;
    struct Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16, WTF::CrashOnOverflow> _fontDescriptors;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithFont:(const struct Font *)arg1 character:(int)arg2;

@end

