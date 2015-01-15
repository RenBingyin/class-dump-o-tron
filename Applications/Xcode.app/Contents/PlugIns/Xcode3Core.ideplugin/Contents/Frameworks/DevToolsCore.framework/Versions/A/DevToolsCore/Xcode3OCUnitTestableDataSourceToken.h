//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, NSString, Xcode3OCUnitTestableDataSource;

@interface Xcode3OCUnitTestableDataSourceToken : NSObject <DVTInvalidation>
{
    Xcode3OCUnitTestableDataSource *_dataSource;
    NSString *_indexableIdentifier;
    CDUnknownBlockType _callbackBlock;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)waitUntilTestSearchIsFinished;
- (void)search;
- (void)primitiveInvalidate;
- (void)_clearDataSource;
- (void)_setIdentifiersToLocations:(id)arg1;
- (id)_initWithDataSource:(id)arg1 indexableIdentifier:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

