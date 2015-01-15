//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCEDataNodeAdapterP.h"

@class NSString, XCPropertyDomainSpecification, XCTestGlassBuildTableUnit, XCTestGlassTwoFlavorsCell;

@interface TestGlassPropertyCategoryNodeAdapter : NSObject <XCEDataNodeAdapterP>
{
    XCPropertyDomainSpecification *_propertyDomain;
    XCTestGlassBuildTableUnit *_tableUnit;
    XCTestGlassTwoFlavorsCell *_twoFlavorCell;
}

@property(retain, nonatomic) XCTestGlassTwoFlavorsCell *twoFlavorCell; // @synthesize twoFlavorCell=_twoFlavorCell;
@property(nonatomic) XCTestGlassBuildTableUnit *tableUnit; // @synthesize tableUnit=_tableUnit;
@property(retain, nonatomic) XCPropertyDomainSpecification *propertyDomain; // @synthesize propertyDomain=_propertyDomain;
- (BOOL)dataNode:(id)arg1 matchesPersistentObjectComponent:(id)arg2;
- (id)dataNodePersistentObjectComponent:(id)arg1;
- (long long)compareDataNode:(id)arg1 withDataNode:(id)arg2;
- (id)dataNode:(id)arg1 outlineView:(id)arg2 dataCellForTableColumn:(id)arg3;
- (BOOL)dataNode:(id)arg1 outlineViewIsGroupItem:(id)arg2;
- (BOOL)isDataNodeSelectable:(id)arg1;
- (BOOL)isDataNodeExpandable:(id)arg1;
- (BOOL)filterChildData:(id)arg1 parentNode:(id)arg2 designatedAdapter:(id)arg3;
- (void)instantiateChildrenForDataNode:(id)arg1;
- (id)dataNode:(id)arg1 objectValueForTableColumn:(id)arg2;
- (id)nameForNode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

