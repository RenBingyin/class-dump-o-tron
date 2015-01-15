//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKRenderStyle.h>

__attribute__((visibility("hidden")))
@interface VKGenericShieldDrawStyle : VKRenderStyle
{
    struct StyleData *_customData;
}

+ (int)renderStyleID;
@property(readonly, nonatomic) Matrix_5173352a dropShadowColor;
@property(readonly, nonatomic) float dropShadowSize;
@property(readonly, nonatomic) struct CGSize dropShadowOffset;
@property(readonly, nonatomic) Matrix_5173352a haloColor;
@property(readonly, nonatomic) float haloSize;
@property(readonly, nonatomic) Matrix_5173352a textColor;
@property(readonly, nonatomic) Matrix_5173352a borderColor;
@property(readonly, nonatomic) Matrix_5173352a backgroundColor;
@property(readonly, nonatomic) int style;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 backgroundColor:(Matrix_5173352a)arg2 textColor:(Matrix_5173352a)arg3;
- (id)initWithStyleData:(struct StyleData *)arg1 info:(id)arg2;

@end

