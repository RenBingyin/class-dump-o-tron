//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPStorageRangeProvider.h>

__attribute__((visibility("hidden")))
@interface TSWPStorageAttributeRangeProvider : TSWPStorageRangeProvider
{
    struct TSWPAttributeEnumerator *_enumerator;
}

- (void)nextRange;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 kind:(int)arg2;

@end

