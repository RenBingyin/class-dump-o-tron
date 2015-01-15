//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol MDRenderTarget <NSObject>
@property(readonly, nonatomic) struct CGSize sizeInPixels;
@property(readonly, nonatomic) double contentScale;
@property(readonly, nonatomic) struct CGSize size;

@optional
@property(readonly, nonatomic) float averageFPS;
- (void)didDrawView;
- (void)willDrawView;
@end

