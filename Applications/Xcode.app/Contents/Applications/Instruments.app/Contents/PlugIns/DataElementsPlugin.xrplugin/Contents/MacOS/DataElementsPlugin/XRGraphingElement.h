//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFTDataElement.h"

@class NSMutableSet;

@interface XRGraphingElement : PFTDataElement
{
    NSMutableSet *_boundControls;
}

@property(retain, nonatomic) NSMutableSet *boundControls; // @synthesize boundControls=_boundControls;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponderInContent;
- (id)createView;
- (void)_imageMenuAction:(id)arg1;
- (void)unbindTarget;

@end

