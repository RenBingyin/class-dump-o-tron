//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSCompletionListItem.h"

@class NSArray, NSDictionary, NSNumber, NSString, NSURL, WBSParsecImageRepresentation;

@interface WBSParsecSearchResult : NSObject <WBSCompletionListItem>
{
    WBSParsecImageRepresentation *_icon;
    WBSParsecImageRepresentation *_completionIcon;
    NSURL *_reportProblemURL;
    NSString *_title;
    NSString *_descriptionText;
    NSString *_identifier;
    NSString *_feedbackIdentifier;
    NSString *_urlString;
    NSString *_sectionHeader;
    NSNumber *_iTunesItemIdentifier;
    NSString *_completion;
    unsigned long long _type;
    unsigned long long _minimumRankOfTopHitToSuppressResult;
    NSArray *_supportedStyleOverrides;
    NSDictionary *_styleOverrides;
}

+ (id)resultWithDictionary:(id)arg1 cache:(id)arg2;
+ (Class)replacementClass;
+ (void)setReplacementClass:(Class)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDictionary *styleOverrides; // @synthesize styleOverrides=_styleOverrides;
@property(readonly, nonatomic) NSArray *supportedStyleOverrides; // @synthesize supportedStyleOverrides=_supportedStyleOverrides;
@property(readonly, nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult; // @synthesize minimumRankOfTopHitToSuppressResult=_minimumRankOfTopHitToSuppressResult;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSNumber *iTunesItemIdentifier; // @synthesize iTunesItemIdentifier=_iTunesItemIdentifier;
@property(readonly, nonatomic) NSString *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
@property(readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, nonatomic) NSString *feedbackIdentifier; // @synthesize feedbackIdentifier=_feedbackIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_setStyleOverridesWithDictionary:(id)arg1;
- (unsigned long long)_constructTypeMaskForTypeString:(id)arg1;
- (id)_glyphsFromGlyphRepresentations:(id)arg1 withSession:(id)arg2;
- (id)_glyphRepresentationsFromGlyphDictionaries:(id)arg1;
- (id)completionIconWithSession:(id)arg1;
- (id)iconWithSession:(id)arg1;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
@property(readonly, nonatomic) NSURL *reportProblemURL;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

