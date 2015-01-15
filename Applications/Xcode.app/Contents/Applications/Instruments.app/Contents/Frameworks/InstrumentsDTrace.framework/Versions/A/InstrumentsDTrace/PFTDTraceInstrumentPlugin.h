//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFTInstrumentPlugin.h"

@class NSLock, NSMutableDictionary, XRDTraceBuilderViewController;

@interface PFTDTraceInstrumentPlugin : PFTInstrumentPlugin
{
    struct AuthorizationOpaqueRef *_authorizationRef;
    NSLock *_authorizationLock;
    NSMutableDictionary *_traceScripts;
    XRDTraceBuilderViewController *_dTraceBuilderViewController;
}

+ (BOOL)doesStringContainOutputActions:(id)arg1 outputScriptRange:(struct _NSRange *)arg2;
+ (BOOL)doesPathContainIllegalCharacters:(id)arg1;
+ (BOOL)doesScriptContainIllegalCalls:(id)arg1;
@property(retain, nonatomic) XRDTraceBuilderViewController *dTraceBuilderViewController; // @synthesize dTraceBuilderViewController=_dTraceBuilderViewController;
- (void).cxx_destruct;
- (id)keywordsForType:(id)arg1;
- (void)endInstruments:(id)arg1 forCommand:(id)arg2;
- (BOOL)prepareInstruments:(id)arg1 forCommand:(id)arg2 error:(id *)arg3;
- (BOOL)canInstruments:(id)arg1 performCommand:(id)arg2;
- (void)_editEnded:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)editInstrumentType:(id)arg1 forClient:(id)arg2 errorMessage:(id)arg3 errorSection:(id)arg4;
- (BOOL)isInstrumentTypeDeletable:(id)arg1;
- (BOOL)isInstrumentTypeEditable:(id)arg1;
- (id)createInstrumentForType:(id)arg1;
- (struct AuthorizationOpaqueRef *)obtainAuthorizaton:(BOOL)arg1;
- (id)decodeTypeWithUUID:(id)arg1 withCoder:(id)arg2;
- (void)encodeType:(id)arg1 withCoder:(id)arg2;
- (void)removeType:(id)arg1;
- (void)addType:(id)arg1;
- (void)_findDTraceInstrumentsUserOnly:(BOOL)arg1;
- (void)_findDTraceInstruments;
- (void)dealloc;
- (id)initWithExtension:(id)arg1;
- (void)exportInstrument:(id)arg1 toPath:(id)arg2;
- (void)exportInstrument:(id)arg1 withIdentifier:(id)arg2;
- (id)_userInstrumentFileURLForIdentifier:(id)arg1 createDirectory:(BOOL)arg2;
- (id)_userInstrumentsDirectoryURL;

@end

