//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBBoundInspector.h"

@class NSButton, NSPopUpButton;

@interface IBOpenGLViewInspector : IBBoundInspector
{
    NSPopUpButton *colorSizePopUpButton;
    NSPopUpButton *depthSizePopUpButton;
    NSPopUpButton *stencilSizePopUpButton;
    NSPopUpButton *accumSizePopUpButton;
    NSPopUpButton *auxiliaryBuffersPopUpButton;
    NSButton *auxiliaryDepthStencilCheckBox;
    NSButton *doubleBufferCheckBox;
    NSButton *stereoBufferCheckBox;
    NSPopUpButton *samplesPopUpButton;
    NSPopUpButton *samplingTypePopUpButton;
    NSPopUpButton *rendererPopUpButton;
    NSButton *allowOfflineCheckBox;
    NSButton *recoveryCheckBox;
    NSPopUpButton *policyPopUpButton;
}

- (void)awakeFromNib;
- (void)refresh;
- (id)label;

@end

