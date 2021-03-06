//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPAVController, MPAVItem, UIView;

@protocol MPControllerProtocol <NSObject>
@property(readonly, retain, nonatomic) UIView *view;
@property(retain, nonatomic) MPAVController *player;
@property(nonatomic) long long orientation;
@property(retain, nonatomic) MPAVItem *item;
@property(nonatomic) __weak id delegate;
- (void)setOrientation:(long long)arg1 animate:(_Bool)arg2;
- (void)noteIgnoredChangeTypes:(unsigned long long)arg1;
- (void)clearWeakReferencesToObject:(id)arg1;
@end

