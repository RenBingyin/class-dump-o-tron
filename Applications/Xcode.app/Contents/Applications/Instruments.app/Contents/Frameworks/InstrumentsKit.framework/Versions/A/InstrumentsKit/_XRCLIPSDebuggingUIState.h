//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSMutableAttributedString, NSMutableSet, NSString;

@interface _XRCLIPSDebuggingUIState : NSObject
{
    BOOL _autoRun;
    NSMutableSet *_availableModuleSet;
    NSMutableAttributedString *_consoleAttributedText;
    NSMutableAttributedString *_factAttributedText;
    NSDictionary *_ruleAttributedTextByName;
    NSString *_chosenModuleName;
    NSMutableArray *_availableModuleNames;
}

@property(retain, nonatomic) NSMutableArray *availableModuleNames; // @synthesize availableModuleNames=_availableModuleNames;
@property(retain, nonatomic) NSString *chosenModuleName; // @synthesize chosenModuleName=_chosenModuleName;
@property(nonatomic) BOOL autoRun; // @synthesize autoRun=_autoRun;
@property(retain, nonatomic) NSDictionary *ruleAttributedTextByName; // @synthesize ruleAttributedTextByName=_ruleAttributedTextByName;
@property(retain, nonatomic) NSMutableAttributedString *factAttributedText; // @synthesize factAttributedText=_factAttributedText;
@property(retain, nonatomic) NSMutableAttributedString *consoleAttributedText; // @synthesize consoleAttributedText=_consoleAttributedText;
@property(retain, nonatomic) NSMutableSet *availableModuleSet; // @synthesize availableModuleSet=_availableModuleSet;
- (void).cxx_destruct;
- (id)init;

@end

