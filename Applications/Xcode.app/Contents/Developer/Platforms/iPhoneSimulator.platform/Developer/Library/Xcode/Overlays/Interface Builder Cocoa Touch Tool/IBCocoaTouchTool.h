//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBAbstractInterfaceBuilderTool.h"

#import "IBCocoaTouchTool.h"

@class NSMutableDictionary, NSString;

@interface IBCocoaTouchTool : IBAbstractInterfaceBuilderTool <IBCocoaTouchTool>
{
    NSMutableDictionary *_frameDecisionDriversBySessionIdentifier;
}

- (void).cxx_destruct;
- (id)messageReceiveChannel:(id)arg1 preprocessException:(id)arg2;
- (void)initializeWithArguments:(id)arg1;
- (void)installFrameworkHooks;
- (id)evaluatedConstantValuesForRequest:(id)arg1 document:(id)arg2;
- (id)isClippingResolvedForRequest:(id)arg1 document:(id)arg2;
- (id)computeLayoutConstraintAbstractionRepresentationsAffectingLayoutForRequest:(id)arg1 document:(id)arg2;
- (id)computeAutolayoutStatusForRequest:(id)arg1 document:(id)arg2;
- (id)runOneShotIncrementalFrameDecisionRequest:(id)arg1 withFrameDecisionSessionRequest:(id)arg2 document:(id)arg3;
- (void)stopAutolayoutFrameDecisionSessionWithID:(id)arg1;
- (void)_stopAutolayoutFrameDecisionSessionWithIdentifier:(id)arg1;
- (id)runIncrementalFrameDecisionRequest:(id)arg1 forSessionWithID:(id)arg2;
- (id)_runIncrementalFrameDecisionRequest:(id)arg1 forSessionWithIdentifier:(id)arg2;
- (id)startAutolayoutFrameDecisionSessionWithRequest:(id)arg1 document:(id)arg2;
- (id)_startAutolayoutFrameDecisionSessionWithRequest:(id)arg1 document:(id)arg2 returningPackage:(id *)arg3;
- (id)constraintsToAddAndRemoveForArbitratingRequest:(id)arg1 document:(id)arg2;
- (void)configureSparseAutolayoutInfo:(id)arg1 withObjectPackage:(id)arg2 andPackageRequest:(id)arg3;
- (void)installLayoutRulesIfNeeded;
- (id)protocolCapabilities;
- (id)unregisterFontsAtURLs:(id)arg1;
- (id)registerFontsAtURLs:(id)arg1;
- (id)fontNameForFamily:(id)arg1 withSymbolicTraits:(id)arg2;
- (id)intermediateValueWithMarshaller:(id)arg1 resultMarshallerContext:(id)arg2 instantiatingBlock:(CDUnknownBlockType)arg3;
- (id)valueForKeyPath:(id)arg1 ofClassWithName:(id)arg2 resultMarshaller:(id)arg3 resultMarshallerContext:(id)arg4;
- (id)valuesForKeyPaths:(id)arg1 ofMarshalledObjectRequest:(id)arg2 resultMarshallerClassNames:(id)arg3 resultMarshallerContexts:(id)arg4;
- (id)intermediateValueForKeyPath:(id)arg1 ofObject:(id)arg2 usingMarshallerClassName:(id)arg3 andMarshallerContext:(id)arg4;
- (id)objectFromRequest:(id)arg1;
- (id)compileNibForRequest:(id)arg1 minimumCompatibility:(id)arg2 layoutInfo:(id)arg3;
- (id)renderImagesForRequests:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
