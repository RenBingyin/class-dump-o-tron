//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class DVTGradientImageButton, NSImageView, NSMenu, NSPopUpButton, NSTextField;

@interface XRCountersSetupFormulaEditorCellView : NSTableCellView
{
    NSTextField *_nameCellView;
    NSTextField *_formulaTextField;
    DVTGradientImageButton *_cancelButton;
    DVTGradientImageButton *_acceptButton;
    NSPopUpButton *_insertFormulaMnemonicButton;
    NSMenu *_insertFormulaMnemonicButtonMenu;
    NSImageView *_warningImageView;
    NSTextField *_warningTextField;
}

@property(retain) NSTextField *warningTextField; // @synthesize warningTextField=_warningTextField;
@property(retain) NSImageView *warningImageView; // @synthesize warningImageView=_warningImageView;
@property(retain) NSMenu *insertFormulaMnemonicButtonMenu; // @synthesize insertFormulaMnemonicButtonMenu=_insertFormulaMnemonicButtonMenu;
@property(retain) NSPopUpButton *insertFormulaMnemonicButton; // @synthesize insertFormulaMnemonicButton=_insertFormulaMnemonicButton;
@property(retain) DVTGradientImageButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain) DVTGradientImageButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain) NSTextField *formulaTextField; // @synthesize formulaTextField=_formulaTextField;
@property(retain) NSTextField *nameCellView; // @synthesize nameCellView=_nameCellView;
- (void).cxx_destruct;

@end

