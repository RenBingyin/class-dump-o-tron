//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRPointBrushImpl.h>

@interface XRLineBrushImpl : XRPointBrushImpl
{
}

- (void)renderPath:(id)arg1;
- (void)preparePathForRendering:(id)arg1;
- (BOOL)drawPointsForDatasource:(id)arg1;
- (void)run:(id)arg1 datasource:(id)arg2 renderPath:(id)arg3 sequences:(id)arg4 usingScale:(struct CGSize)arg5 graphAtIndex:(long long)arg6;
- (void)run:(id)arg1 datasource:(id)arg2 applyStyleForGraphAtIndex:(long long)arg3;
- (void)run:(id)arg1 datasource:(id)arg2 applyStyleToPath:(id)arg3 graphAtIndex:(long long)arg4;

@end

