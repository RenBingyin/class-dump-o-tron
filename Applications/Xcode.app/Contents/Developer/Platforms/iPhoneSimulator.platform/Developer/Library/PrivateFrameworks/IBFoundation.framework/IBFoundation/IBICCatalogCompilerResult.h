//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface IBICCatalogCompilerResult : NSObject <IBBinaryArchiving>
{
    NSMutableArray *_outputFiles;
    NSMutableArray *_errors;
    NSMutableArray *_issues;
    _Bool _success;
    NSMutableDictionary *_partialInfoPlist;
}

+ (id)resultWithSingleError:(id)arg1;
@property(retain) NSMutableDictionary *partialInfoPlist; // @synthesize partialInfoPlist=_partialInfoPlist;
@property(copy, nonatomic) NSArray *issues; // @synthesize issues=_issues;
@property(copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(copy, nonatomic) NSArray *outputFiles; // @synthesize outputFiles=_outputFiles;
@property _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (void)mergeResults:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)addOutputFiles:(id)arg1;
- (void)addOutputFile:(id)arg1;
- (void)addIssues:(id)arg1;
- (void)addIssue:(id)arg1;
- (void)addErrors:(id)arg1;
- (void)addError:(id)arg1 wrappedWithDescription:(id)arg2;
- (void)addError:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

