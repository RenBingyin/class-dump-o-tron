//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PBXRecordVector;

@interface _PBXPropertyDeclarationDescriptor : NSObject
{
    PBXRecordVector *_vector;
    unsigned long long _declarationRow;
    NSString *_setterAttribute;
    NSString *_getterAttribute;
    unsigned long long _setterAttributeLineNumber;
    unsigned long long _getterAttributeLineNumber;
    BOOL _isReadOnly;
}

@property BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property unsigned long long getterAttributeLineNumber; // @synthesize getterAttributeLineNumber=_getterAttributeLineNumber;
@property unsigned long long setterAttributeLineNumber; // @synthesize setterAttributeLineNumber=_setterAttributeLineNumber;
@property unsigned long long declarationRow; // @synthesize declarationRow=_declarationRow;
- (void)setGetterAttribute:(id)arg1;
- (id)getterAttribute;
- (void)setSetterAttribute:(id)arg1;
- (id)setterAttribute;
- (void)setVector:(id)arg1;
- (id)vector;
- (void)dealloc;
- (id)init;

@end

