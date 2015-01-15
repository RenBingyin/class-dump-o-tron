//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPCopying.h"
#import "NSCopying.h"

@class CPDocument, CPPage, NSMutableArray;

@interface CPObject : NSObject <NSCopying, CPCopying>
{
    CPObject *parent;
    NSMutableArray *children;
    CPDocument *document;
    CPPage *page;
    long long zOrder;
}

- (int)depth;
- (id)page;
- (void)setPage:(id)arg1;
- (id)firstDescendantsOfClass:(Class)arg1;
- (void)clearCachedInfo;
- (void)setZOrder:(long long)arg1;
- (void)updateZOrder:(long long)arg1;
- (void)recomputeZOrder;
- (long long)zOrder;
- (id)document;
- (void)setDocument:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)indexOf:(id)arg1;
- (void)accept:(id)arg1;
- (unsigned int)countOfFirstDescendantsOfClass:(Class)arg1;
- (id)lastDescendantOfClass:(Class)arg1;
- (id)firstDescendantOfClass:(Class)arg1;
- (id)descendantsOfClass:(Class)arg1 omitTraversing:(Class)arg2;
- (id)shallowDescendantsOfClass:(Class)arg1;
- (id)descendantsOfClass:(Class)arg1;
- (void)descendantsOfClass:(Class)arg1 to:(id)arg2;
- (id)descendantsOfClass:(Class)arg1 deep:(_Bool)arg2;
- (id)children;
- (void)map:(SEL)arg1 target:(id)arg2 last:(_Bool)arg3;
- (void)map:(SEL)arg1 target:(id)arg2;
- (void)mapSafely:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3;
- (void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3;
- (void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 last:(_Bool)arg4;
- (void)performSelector:(SEL)arg1;
- (id)childrenNotOfClass:(Class)arg1;
- (id)childrenOfClass:(Class)arg1;
- (void)childrenOfClass:(Class)arg1 into:(id)arg2;
- (id)ancestorOfClass:(Class)arg1;
- (void)promoteChildren;
- (void)removeAll;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)remove;
- (void)removeLastChild;
- (void)removeFirstChild;
- (void)remove:(id)arg1;
- (void)addChildrenOf:(id)arg1;
- (void)addChildren:(id)arg1;
- (void)add:(id)arg1 atIndex:(unsigned int)arg2;
- (void)add:(id)arg1;
- (id)firstSibling;
- (id)lastSibling;
- (id)previousSibling;
- (id)nextSibling;
- (id)lastChild;
- (id)firstChild;
- (id)childAtIndex:(unsigned int)arg1;
- (unsigned int)countOfClass:(Class)arg1;
- (unsigned int)count;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)newTakeChildrenAmong:(id)arg1;
- (id)newTakeChildren;
- (id)copyAndSplitChildrenAtIndex:(unsigned int)arg1;
- (id)copyWithoutChildren;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)disposeDescendants;
- (void)dealloc;
- (id)initSuper;
- (id)init;

@end

