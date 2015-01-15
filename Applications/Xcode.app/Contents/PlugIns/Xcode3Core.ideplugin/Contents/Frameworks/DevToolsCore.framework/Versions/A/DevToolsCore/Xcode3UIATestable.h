//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/Xcode3OCUnitTestable.h>

@class DVTDispatchLock, DVTNotificationToken, NSOperationQueue, Xcode3UIATestScanner;

@interface Xcode3UIATestable : Xcode3OCUnitTestable
{
    DVTNotificationToken *_indexDidIndexNotificationToken;
    DVTNotificationToken *_indexDidChangeStateNotificationToken;
    DVTNotificationToken *_indexDidChangeNotificationToken;
    Xcode3UIATestScanner *_scanner;
    DVTDispatchLock *_testSearchGenerationLock;
    NSOperationQueue *_testSearchQueue;
    unsigned long long _currentTestSearchGeneration;
}

+ (BOOL)isTestableForTarget:(id)arg1;
+ (id)_buildableProductForTarget:(id)arg1;
@property unsigned long long currentTestSearchGeneration; // @synthesize currentTestSearchGeneration=_currentTestSearchGeneration;
@property(retain) NSOperationQueue *testSearchQueue; // @synthesize testSearchQueue=_testSearchQueue;
@property(retain) DVTDispatchLock *testSearchGenerationLock; // @synthesize testSearchGenerationLock=_testSearchGenerationLock;
@property(retain) Xcode3UIATestScanner *scanner; // @synthesize scanner=_scanner;
- (void).cxx_destruct;
- (BOOL)_checkIfCanceledWithLocalGeneration:(unsigned long long)arg1;
- (id)_gatherImportSearchDirectories;
- (void)_searchForTests;
- (void)_indexDidUpdate:(id)arg1;
- (BOOL)isSearchingForTests;
- (BOOL)matchesBlueprint:(id)arg1;
- (void)waitUntilTestSearchIsFinished;
- (void)searchForTestsInWorkspace:(id)arg1;
- (id)newTestRunner;
- (void)primitiveInvalidate;
- (id)initWithTarget:(id)arg1;

@end
