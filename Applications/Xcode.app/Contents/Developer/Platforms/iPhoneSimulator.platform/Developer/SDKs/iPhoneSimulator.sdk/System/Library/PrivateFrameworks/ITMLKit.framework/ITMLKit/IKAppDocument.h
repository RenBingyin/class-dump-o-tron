//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IKJSDOMDocumentAppBridge.h"

@class IKAppContext, IKDOMDocument, IKHeadElement, IKJSNavigationDocument, IKJSObject, IKViewElement, JSManagedValue, NSError, NSMutableDictionary, NSMutableSet, NSString;

@interface IKAppDocument : NSObject <IKJSDOMDocumentAppBridge>
{
    _Bool _updated;
    _Bool _subtreeUpdated;
    IKAppContext *_appContext;
    IKDOMDocument *_jsDocument;
    NSString *_identifier;
    IKHeadElement *_headElement;
    IKViewElement *_navigationBarElement;
    IKViewElement *_templateElement;
    NSError *_error;
    id <IKAppDocumentDelegate> _delegate;
    double _impressionThreshold;
    IKJSObject *_owner;
    NSMutableSet *_impressions;
    NSMutableDictionary *_impressionsDict;
    JSManagedValue *_jsManagedDocument;
}

@property(retain, nonatomic) JSManagedValue *jsManagedDocument; // @synthesize jsManagedDocument=_jsManagedDocument;
@property(retain, nonatomic) NSMutableDictionary *impressionsDict; // @synthesize impressionsDict=_impressionsDict;
@property(retain, nonatomic) NSMutableSet *impressions; // @synthesize impressions=_impressions;
@property(readonly, nonatomic) __weak IKJSObject *owner; // @synthesize owner=_owner;
@property(nonatomic) double impressionThreshold; // @synthesize impressionThreshold=_impressionThreshold;
@property(getter=isSubtreeUpdated) _Bool subtreeUpdated; // @synthesize subtreeUpdated=_subtreeUpdated;
@property(nonatomic, getter=isUpdated) _Bool updated; // @synthesize updated=_updated;
@property(nonatomic) __weak id <IKAppDocumentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) IKViewElement *templateElement; // @synthesize templateElement=_templateElement;
@property(retain, nonatomic) IKViewElement *navigationBarElement; // @synthesize navigationBarElement=_navigationBarElement;
@property(retain, nonatomic) IKHeadElement *headElement; // @synthesize headElement=_headElement;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) __weak IKDOMDocument *jsDocument; // @synthesize jsDocument=_jsDocument;
@property(readonly) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (void).cxx_destruct;
- (void)_impressionDataFromViewElements:(id)arg1 timestamp:(long long)arg2 impressions:(id)arg3 impressionsDict:(id)arg4;
- (_Bool)_clearUpdatesForElement:(id)arg1;
- (void)_updateWithXML:(id)arg1;
- (void)runTestWithName:(id)arg1 options:(id)arg2;
- (void)scrollToTop;
- (id)recordedImpressions;
- (id)snapshotImpressions;
- (void)setNeedsUpdateForDocument:(id)arg1;
- (void)updateForDocument:(id)arg1;
- (id)retrieveJSElementForViewElement:(id)arg1 jsContext:(id)arg2;
- (void)recordImpressionsForViewElements:(id)arg1;
- (void)onViewAttributesChangeWithArguments:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onUpdate;
- (void)onNeedsUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)onDisappear;
- (void)onAppear;
- (void)onUnload;
- (void)onLoad;
@property(readonly, nonatomic) __weak IKJSNavigationDocument *navigationDocument;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 document:(id)arg2 owner:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

