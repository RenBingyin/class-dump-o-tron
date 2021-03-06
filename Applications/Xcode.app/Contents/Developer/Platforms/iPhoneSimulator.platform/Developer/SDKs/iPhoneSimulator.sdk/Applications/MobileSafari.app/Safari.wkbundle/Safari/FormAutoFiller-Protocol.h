//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FormAutoFillFrameHandle, NSDictionary, NSNumber, NSString, NSURL;

@protocol FormAutoFiller <NSObject>
- (void)resumeLoadingAfterSavingFormData;
- (void)clearAutoFillMetadata;
- (void)collectMetadataForTextField:(NSString *)arg1 inFrame:(FormAutoFillFrameHandle *)arg2 atURL:(NSURL *)arg3 replyIdentifier:(NSNumber *)arg4;
- (void)collectFormMetadataForPrefillingAtURL:(NSURL *)arg1;
- (void)autoFillForm:(NSNumber *)arg1 inFrame:(FormAutoFillFrameHandle *)arg2 withGeneratedPassword:(NSString *)arg3;
- (void)autoFillFormSynchronouslyInFrame:(FormAutoFillFrameHandle *)arg1 withValues:(NSDictionary *)arg2;
- (void)autoFillFormAsynchronouslyInFrame:(FormAutoFillFrameHandle *)arg1 withValues:(NSDictionary *)arg2 selectFieldAfterFilling:(NSString *)arg3;
@end

