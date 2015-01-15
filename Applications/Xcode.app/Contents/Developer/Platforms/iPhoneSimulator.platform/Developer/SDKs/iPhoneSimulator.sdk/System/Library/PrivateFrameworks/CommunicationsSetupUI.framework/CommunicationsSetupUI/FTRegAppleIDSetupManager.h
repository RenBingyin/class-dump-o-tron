//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString;

@interface FTRegAppleIDSetupManager : NSObject
{
    NSMutableDictionary *_setupOperations;
    CDUnknownBlockType _handler;
    NSArray *_candidateAliases;
    NSArray *_selectedAliases;
    NSString *_selectionSummaryText;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *selectionSummaryText; // @synthesize selectionSummaryText=_selectionSummaryText;
@property(copy, nonatomic) NSArray *selectedAliases; // @synthesize selectedAliases=_selectedAliases;
@property(copy, nonatomic) NSArray *candidateAliases; // @synthesize candidateAliases=_candidateAliases;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSMutableDictionary *setupOperations; // @synthesize setupOperations=_setupOperations;
- (_Bool)beginSetupWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateCandidateAliases;
- (void)_updateSelectionSummaryText;
- (id)phoneNumberDisplayString;
- (_Bool)showsPhoneNumberDisplayString;
- (_Bool)aliasIsEnabled:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShowAliasSelectionUI; // @dynamic shouldShowAliasSelectionUI;
- (_Bool)_shouldShowAliasSelectionUI;
- (void)addSetupDictionary:(id)arg1 forService:(long long)arg2;
- (id)_appleID;
- (id)_aliasesForDictionary:(id)arg1;
- (void)_notifyFailureWithError:(id)arg1;
- (void)_notifySuccess;
- (void)_notifySuccess:(_Bool)arg1 error:(id)arg2;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

