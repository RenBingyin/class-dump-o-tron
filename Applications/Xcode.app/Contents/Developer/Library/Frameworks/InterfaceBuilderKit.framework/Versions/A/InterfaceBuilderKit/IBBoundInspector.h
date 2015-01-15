//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InterfaceBuilderKit/IBInspector.h>

@class IBCFMutableDictionary;

@interface IBBoundInspector : IBInspector
{
    IBCFMutableDictionary *bindings;
}

- (void)textDidEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (id)documentationInfoForView:(id)arg1;
- (id)affectedKeyPathsOfInspectedObjectsForView:(id)arg1;
- (void)putWidgetInMixedState:(id)arg1;
- (void)refresh;
- (id)boundWidgets;
- (void)okAndConstrainBoundsToNearestLegalSize:(id)arg1;
- (void)ok:(id)arg1;
- (void)unbindWidget:(id)arg1;
- (void)bindWidget:(id)arg1 toKeyPath:(id)arg2 ofType:(long long)arg3;
- (void)bindWidget:(id)arg1 toKeyPath:(id)arg2 ofType:(long long)arg3 aliasedKeyPath:(id)arg4;
- (void)setValue:(id)arg1 forBindingOption:(id)arg2 onWidget:(id)arg3;
- (void)bindWidget:(id)arg1 toKeyPath:(id)arg2 ofType:(long long)arg3 aliasedKeyPaths:(id)arg4;
- (void)dealloc;

@end

