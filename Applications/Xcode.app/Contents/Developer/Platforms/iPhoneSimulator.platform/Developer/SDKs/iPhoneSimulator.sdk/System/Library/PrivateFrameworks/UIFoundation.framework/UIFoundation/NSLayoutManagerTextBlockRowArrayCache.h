//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSLayoutManagerTextBlockRowArrayCache : NSObject
{
    struct _NSRange _rowCharRange;
    double _containerWidth;
    NSArray *_rowArray;
    _Bool _collapseBorders;
}

- (void)dealloc;
- (id)initWithRowCharRange:(struct _NSRange)arg1 containerWidth:(double)arg2 rowArray:(id)arg3 collapseBorders:(_Bool)arg4;

@end

