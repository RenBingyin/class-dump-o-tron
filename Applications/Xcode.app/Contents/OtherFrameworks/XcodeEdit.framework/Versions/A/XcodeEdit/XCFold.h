//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface XCFold : NSObject
{
    struct _NSRange _relativeLocation;
    XCFold *_parent;
    NSMutableArray *_children;
    NSString *_label;
    unsigned long long _foldStyle;
}

+ (id)foldsFromString:(id)arg1;
+ (id)decodeFold:(id)arg1 forParent:(id)arg2;
@property unsigned long long foldStyle; // @synthesize foldStyle=_foldStyle;
@property(copy) NSString *label; // @synthesize label=_label;
- (id)foldedIconString;
- (id)children;
- (unsigned long long)numberOfChildren;
- (id)removeChildren:(id)arg1;
- (void)addChild:(id)arg1;
- (void)setParent:(id)arg1;
- (id)parent;
- (id)findFoldContainingRange:(struct _NSRange)arg1;
- (id)findFoldWithRange:(struct _NSRange)arg1;
- (unsigned long long)subtractOutFolds:(unsigned long long)arg1;
- (unsigned long long)addInFolds:(unsigned long long)arg1;
- (id)adjustFoldsForRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;
- (id)foldsEnclosingRange:(struct _NSRange)arg1;
- (void)_addFoldsEnclosingRange:(struct _NSRange)arg1 toArray:(id)arg2;
- (id)foldsTouchingRange:(struct _NSRange)arg1;
- (BOOL)rangeIsInsideAFold:(struct _NSRange)arg1;
- (void)offsetBy:(long long)arg1;
- (void)setRange:(struct _NSRange)arg1;
- (struct _NSRange)range;
- (BOOL)validate;
- (id)description;
- (id)innerDescription:(id)arg1;
- (id)stringValue;
- (id)_pList;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange)arg1;

@end

