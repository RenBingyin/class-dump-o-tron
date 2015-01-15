//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface XCSpecificationFilter : NSObject
{
    Class _specClass;
    BOOL _includeAllSpecs;
    NSMutableArray *_includedSpecs;
    NSMutableArray *_excludedSpecs;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)includesSpecification:(id)arg1;
- (BOOL)includesAnySpecifications;
- (BOOL)includesAllSpecifications;
- (void)addExcludedSpecificationComposition:(id)arg1;
- (void)addIncludedSpecificationComposition:(id)arg1;
- (void)removeExcludedSpecification:(id)arg1;
- (void)addExcludedSpecification:(id)arg1;
- (void)addExcludedSpecifications:(id)arg1;
- (id)excludedSpecifications;
- (void)removeIncludedSpecification:(id)arg1;
- (void)addIncludedSpecification:(id)arg1;
- (void)addIncludedSpecifications:(id)arg1;
- (id)includedSpecifications;
- (void)_addSpecification:(id)arg1 toList:(id)arg2;
- (id)init;
- (id)initWithSpecificationClass:(Class)arg1;
- (id)initWithSpecificationClass:(Class)arg1 includeAllByDefault:(BOOL)arg2;

@end

