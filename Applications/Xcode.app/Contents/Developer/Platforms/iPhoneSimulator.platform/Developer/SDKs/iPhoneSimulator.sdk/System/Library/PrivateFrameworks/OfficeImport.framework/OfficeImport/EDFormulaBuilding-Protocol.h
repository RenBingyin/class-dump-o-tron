//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDLinkReference, EDLinksCollection;

@protocol EDFormulaBuilding <NSObject>
- (_Bool)isSupportedFormula;
- (int)warningType;
- (void)setWarning:(int)arg1;
- (_Bool)uppercaseArgAtIndex:(unsigned int)arg1;
- (_Bool)fixTableOfConstantsRefs;
- (_Bool)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (_Bool)addInfixOperator:(int)arg1 atIndex:(unsigned int)arg2 factor:(double)arg3;
- (_Bool)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (void)markLastTokenAsSpanningRefVertically:(_Bool)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (void)markLastTokenAsDuration;
- (EDLinkReference *)lastTokenRefOrArea3dLinkRefIsValid:(_Bool *)arg1 withEDLinks:(EDLinksCollection *)arg2;
- (_Bool)convertLastRefsToArea;
- (_Bool)convertToIntersect:(unsigned int)arg1;
- (_Bool)convertToList:(unsigned int)arg1;
- (_Bool)convertToList:(unsigned int)arg1 withFinalParen:(_Bool)arg2;
- (_Bool)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (_Bool)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned int)arg3;
- (_Bool)insertName:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (void)removeTokenAtIndex:(unsigned long long)arg1;
- (int)tokenTypeAtIndex:(unsigned long long)arg1;
@end

