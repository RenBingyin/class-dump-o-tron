//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface TIWordSearchCandidateResultSet : NSObject <NSCopying>
{
    NSMutableArray *_mutableCandidates;
    NSMutableDictionary *_mutableCandidateRefsDictionary;
    NSArray *_initiallyHiddenCandidates;
    unsigned long long _selectedHiddenCandidateIndex;
    NSArray *_autoconvertedCandidates;
    NSString *_autoconvertedCandidateString;
    NSString *_autoconvertedInputString;
}

+ (id)emptySet;
@property(retain, nonatomic) NSString *autoconvertedInputString; // @synthesize autoconvertedInputString=_autoconvertedInputString;
@property(retain, nonatomic) NSString *autoconvertedCandidateString; // @synthesize autoconvertedCandidateString=_autoconvertedCandidateString;
@property(copy, nonatomic) NSArray *autoconvertedCandidates; // @synthesize autoconvertedCandidates=_autoconvertedCandidates;
@property(nonatomic) unsigned long long selectedHiddenCandidateIndex; // @synthesize selectedHiddenCandidateIndex=_selectedHiddenCandidateIndex;
@property(copy, nonatomic) NSArray *initiallyHiddenCandidates; // @synthesize initiallyHiddenCandidates=_initiallyHiddenCandidates;
@property(retain, nonatomic) NSMutableDictionary *mutableCandidateRefsDictionary; // @synthesize mutableCandidateRefsDictionary=_mutableCandidateRefsDictionary;
@property(retain, nonatomic) NSMutableArray *mutableCandidates; // @synthesize mutableCandidates=_mutableCandidates;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)moveCandidate:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)setAutoconvertedMecabraCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (void)insertMecabraCandidate:(id)arg1 mecabraCandidateRef:(void *)arg2 atIndex:(unsigned long long)arg3;
- (void)addMecabraCandidate:(id)arg1 mecabraCandidateRef:(void *)arg2;
- (void)insertSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2;
- (void)addCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
@property(readonly, retain, nonatomic) NSDictionary *candidateRefsDictionary;
@property(readonly, retain, nonatomic) NSArray *candidates;
- (void)dealloc;
- (id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2 initiallyHiddenCandidates:(id)arg3 selectedHiddenCandidateIndex:(unsigned long long)arg4;
- (id)init;

@end

