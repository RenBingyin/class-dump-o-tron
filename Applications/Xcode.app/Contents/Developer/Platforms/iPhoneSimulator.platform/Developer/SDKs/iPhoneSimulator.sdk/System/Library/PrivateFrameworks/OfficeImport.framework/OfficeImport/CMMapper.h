//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CMMapperRootArchiver.h"

__attribute__((visibility("hidden")))
@interface CMMapper : NSObject <CMMapperRootArchiver>
{
    CMMapper *mParent;
}

- (void)finishMappingWithState:(id)arg1;
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(_Bool)arg4;
- (void)startMappingWithState:(id)arg1;
- (void)mapStylesheetAt:(id)arg1 stylesheet:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)addStyle:(id)arg1 withName:(id)arg2;
- (void)addStyleUsingGlobalCacheTo:(id)arg1 style:(id)arg2 embedStyle:(_Bool)arg3;
- (void)addStyleUsingGlobalCacheTo:(id)arg1 style:(id)arg2;
- (void)addAttribute:(id)arg1 toNode:(id)arg2 value:(id)arg3;
- (id)archiver;
- (id)root;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)initWithParent:(id)arg1;

@end

