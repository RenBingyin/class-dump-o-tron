//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/MFRegion.h>

@class OITSDBezierPath;

__attribute__((visibility("hidden")))
@interface MFPhoneRegion : MFRegion
{
    OITSDBezierPath *m_path;
    struct CGRect m_bounds;
}

- (id).cxx_construct;
- (int)invert:(id)arg1;
- (int)frame:(id)arg1:(id)arg2;
- (int)fill:(id)arg1:(id)arg2;
- (int)setClip:(id)arg1:(int)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1:(struct CGRect)arg2;
- (id)initWithRects:(id)arg1:(struct CGRect)arg2:(id)arg3;

@end

