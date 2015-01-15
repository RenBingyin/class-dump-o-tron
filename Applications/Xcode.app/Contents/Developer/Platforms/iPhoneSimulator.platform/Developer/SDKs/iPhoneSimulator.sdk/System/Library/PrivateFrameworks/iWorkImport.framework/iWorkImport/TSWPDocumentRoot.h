//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKDocumentRoot.h>

__attribute__((visibility("hidden")))
@interface TSWPDocumentRoot : TSKDocumentRoot
{
}

@property(readonly, nonatomic, getter=isChangeTrackingEnabled) _Bool changeTrackingEnabled;
@property(readonly, nonatomic) _Bool supportHeaderFooterParagraphAlignmentInInspectors;
- (int)verticalAlignmentForTextStorage:(id)arg1;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (id)unavailableDocumentFonts;
- (id)documentFonts;
- (_Bool)useLigatures;
- (struct __CFLocale *)hyphenationLocale;
- (_Bool)shouldHyphenate;
- (id)changeVisibility;
- (id)changeSessionManagerForModel:(id)arg1;

@end

