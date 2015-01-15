//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDDrawableInfo.h>

#import "TSSStyleClient.h"

@class NSString, TSDReflection, TSDShadow, TSDStroke, TSSStyle;

__attribute__((visibility("hidden")))
@interface TSDStyledInfo : TSDDrawableInfo <TSSStyleClient>
{
}

- (id)commandForSettingBoxedValue:(id)arg1 forProperty:(int)arg2;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (id)styleIdentifierTemplateForNewPreset;
- (id)propertyMapForNewPreset;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)i_setValue:(id)arg1 forProperty:(int)arg2;
- (void)setValuesForProperties:(id)arg1;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (id)objectForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1;
@property(copy, nonatomic) TSDShadow *shadow;
@property(copy, nonatomic) TSDReflection *reflection;
@property(nonatomic) float opacity;
@property(copy, nonatomic) TSDStroke *stroke;
- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2;
- (id)stylesForCopyStyle;
@property(retain, nonatomic) TSSStyle *style;
- (Class)styleClass;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

