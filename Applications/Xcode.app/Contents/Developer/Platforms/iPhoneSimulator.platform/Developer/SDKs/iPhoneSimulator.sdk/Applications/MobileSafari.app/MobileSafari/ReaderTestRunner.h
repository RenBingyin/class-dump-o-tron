//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReplayPagesTestRunner.h"

@interface ReaderTestRunner : ReplayPagesTestRunner
{
    struct OwnPtr<ReaderPageTest> _currentTest;
    ReaderTestRunner *_sharedReaderTestRunner;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)log:(id)arg1;
- (void)finishedTestPage:(id)arg1;
- (void)_performTest;
- (void)addPageURL:(id)arg1;

@end

