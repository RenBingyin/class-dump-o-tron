//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSParsecSearchMapsResult.h"

#import "CompletionItem.h"

@class NSString;

@interface UniversalSearchMapsResult : WBSParsecSearchMapsResult <CompletionItem>
{
}

- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;
- (void)acceptCompletionWithActionHandler:(id)arg1;
- (id)completionTableViewCell;
- (id)completionTableViewCellReuseIdentifier;

// Remaining properties
@property(readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
@property(readonly) Class superclass;

@end

