//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (AXConstraintBasedLayout)
- (void)ax_setContentHuggingAndCompressionResistance:(CDStruct_818bb265)arg1;
- (id)ax_pinConstraintsInAllDimensionsToView:(id)arg1;
- (id)ax_firstCommonAncestorWithView:(id)arg1;
- (unsigned long long)_ax_depth;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6 priority:(float)arg7;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6;
- (void)ax_constrainLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6 priority:(float)arg7;
- (void)ax_constrainLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2 priority:(float)arg3;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2 priority:(float)arg3;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2 priority:(float)arg3;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2 priority:(float)arg3;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 priority:(float)arg3;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2 priority:(float)arg3;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 priority:(float)arg3;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2 priority:(float)arg3;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2;
@end

