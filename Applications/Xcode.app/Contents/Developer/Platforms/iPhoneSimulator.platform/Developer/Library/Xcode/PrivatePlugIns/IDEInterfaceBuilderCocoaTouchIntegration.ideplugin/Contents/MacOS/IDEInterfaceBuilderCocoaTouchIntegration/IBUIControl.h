//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import "IBDocumentArchiving.h"
#import "NSCoding.h"

@class NSString;

@interface IBUIControl : IBUIView <IBDocumentArchiving, NSCoding>
{
    BOOL enabled;
    BOOL highlighted;
    BOOL selected;
    int contentVerticalAlignment;
    int contentHorizontalAlignment;
}

@property(nonatomic) int contentVerticalAlignment; // @synthesize contentVerticalAlignment;
@property(nonatomic) int contentHorizontalAlignment; // @synthesize contentHorizontalAlignment;
@property(nonatomic) BOOL selected; // @synthesize selected;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted;
@property(nonatomic) BOOL enabled; // @synthesize enabled;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibSetupTriggerForSegueTemplate:(id)arg1 inCompilationUnit:(id)arg2;
- (long long)ibPreferredResizeDirection;
- (BOOL)ibIsBaselineAtIndex:(long long)arg1 inMotionWithKnob:(long long)arg2;
- (id)ibSegueTriggers;
- (id)ibDefaultSegueTrigger;
- (BOOL)ibCanBeCollectionViewBackgroundView;
- (BOOL)ibCanBeTableViewBracketingView;
- (BOOL)ibSupportsInsertionIntoBarButtonItems;
- (id)ibFieldEditorConfigurationForTextKeyPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

