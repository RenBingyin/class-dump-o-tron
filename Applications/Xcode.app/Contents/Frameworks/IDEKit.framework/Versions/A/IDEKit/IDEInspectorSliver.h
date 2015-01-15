//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEInspectorLayoutGroup.h>

@class NSTextField, NSValue;

@interface IDEInspectorSliver : IDEInspectorLayoutGroup
{
    NSTextField *titleView;
    IDEInspectorLayoutGroup *rightSubgroup;
    CDUnknownBlockType titleOriginBlock;
    NSValue *fixedTitleOrigin;
}

+ (id)sliverForXMLElement:(id)arg1 boundTo:(id)arg2;
+ (id)sliverWithProperties:(id)arg1 title:(id)arg2 attributedTitle:(id)arg3 fullWidth:(BOOL)arg4;
+ (id)label;
+ (id)defaultLabelAttributes;
- (void).cxx_destruct;
- (void)pushFrameOriginsToViews;
- (void)layoutGroupsBottomUp;
- (void)layoutGroupsTopDown;
- (void)uninstallFromInspectorContentView;
- (void)installIntoInspectorContentView:(id)arg1;
- (void)insertSubgroup:(id)arg1 atIndex:(long long)arg2;
- (void)primitiveInvalidate;
- (id)initWithTitle:(id)arg1 attributedTitle:(id)arg2 rightSubgroup:(id)arg3 rightSubgroupInset:(CDStruct_bf6d4a14)arg4 fixedTitleOrigin:(id)arg5;
- (id)initWithTitle:(id)arg1 attributedTitle:(id)arg2 titleOrigin:(struct CGPoint)arg3 rightSubgroup:(id)arg4 rightSubgroupInset:(CDStruct_bf6d4a14)arg5;

@end

