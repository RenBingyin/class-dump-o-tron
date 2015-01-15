//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MFMailSignatureController : NSObject
{
    NSString *_currentSignatureString;
    _Bool _hasSignature;
    _Bool _firstSignaturePassComplete;
}

+ (id)_lineWiseRegexStringForSignature:(id)arg1 usingContentWords:(id)arg2;
+ (id)_regexStringFromArray:(id)arg1;
+ (id)_arrayNOT:(id)arg1 notArray:(id)arg2;
+ (id)_wordsAndNewlinesArrayFromContents:(id)arg1;
+ (id)_regexEscape:(id)arg1;
+ (id)_htmlConvertToWhitespace:(id)arg1;
- (void)clearSignatureState;
- (void)removeSignatureForSender:(id)arg1 bodyField:(id)arg2;
- (void)updateSignatureForSender:(id)arg1 bodyField:(id)arg2;
- (struct _NSRange)_replaceSignatureForSender:(id)arg1 oldSignature:(id)arg2 withSignature:(id)arg3 document:(id)arg4 backwardsFromNode:(id)arg5 maxParagraphs:(unsigned long long)arg6;
- (struct _NSRange)_locateSignatureForSender:(id)arg1 oldSignature:(id)arg2 withSignature:(id)arg3 inContents:(id)arg4;
- (id)_updateSignatureElement:(id)arg1 withSignature:(id)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)_isEmptyHTMLElement:(id)arg1;
- (_Bool)_isDraftRestore:(id)arg1;
- (struct _NSRange)_locateTrailingMarkupForContents:(id)arg1 withRange:(struct _NSRange)arg2;
- (struct _NSRange)_locateLeadingMarkupForContents:(id)arg1 withRange:(struct _NSRange)arg2;
- (struct _NSRange)_fuzzySearchForSignature:(id)arg1 inContents:(id)arg2;
- (struct _NSRange)_preciseSearchForSignatureForSender:(id)arg1 inContents:(id)arg2;
- (struct _NSRange)_preciseSearchForDefaultSignatureInContents:(id)arg1;
- (struct _NSRange)_preciseSearchForSignature:(id)arg1 inContents:(id)arg2;
- (id)_stripSignatureMarkup:(id)arg1;
- (id)_regexForSignature:(id)arg1;
- (id)_prependSignatureForSender:(id)arg1 document:(id)arg2 node:(id)arg3 includeMarkup:(_Bool)arg4;
- (id)_createSignatureForSender:(id)arg1 document:(id)arg2 prepend:(_Bool)arg3 node:(id)arg4 usingMarkup:(_Bool)arg5;
- (void)addSignatureForSender:(id)arg1 bodyField:(id)arg2 prepend:(_Bool)arg3;
- (id)_domDocumentForComposeBodyField:(id)arg1;
- (id)_createSignatureElement:(id)arg1 prepend:(_Bool)arg2 node:(id)arg3;
- (_Bool)isDefaultSignatureForSender:(id)arg1;
- (id)_signatureMarkupStringForSender:(id)arg1;
- (id)_signatureStringForSender:(id)arg1;
- (void)dealloc;
- (id)init;

@end

