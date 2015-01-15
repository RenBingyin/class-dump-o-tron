//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEInspectorViewController.h"

@class NSArray;

@interface IDEMappingModelEntityMappingInspectorController : IDEInspectorViewController
{
}

+ (id)keyPathsForValuesDestinationEntityNames;
+ (id)keyPathsForValuesAffectingSourceEntityNames;
+ (id)keyPathsForValuesAffectingDestinationEntities;
+ (id)keyPathsForValuesAffectingSourceEntities;
+ (id)keyPathsForValuesAffectingMappingModel;
@property(readonly) NSArray *destinationEntityNames;
@property(readonly) NSArray *sourceEntityNames;
@property(readonly) NSArray *destinationEntities;
@property(readonly) NSArray *sourceEntities;
- (id)mappingModel;

@end

