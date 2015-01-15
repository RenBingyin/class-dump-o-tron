//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RAPQuestion.h"

#import "RAPReportComposerCommentPartOutput.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface RAPCommentQuestion : RAPQuestion <RAPReportComposerCommentPartOutput>
{
    NSString *_commentsTitle;
    NSString *_commentsPlaceholderText;
    long long _emphasis;
    NSString *_comment;
    NSArray *_photos;
}

+ (id)photosFooter;
+ (id)_localizedOptionalInformationTitle;
+ (id)_localizedMoreInformationTitle;
@property(copy, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) long long emphasis; // @synthesize emphasis=_emphasis;
@property(readonly, nonatomic) NSString *commentsPlaceholderText; // @synthesize commentsPlaceholderText=_commentsPlaceholderText;
@property(readonly, nonatomic) NSString *commentsTitle; // @synthesize commentsTitle=_commentsTitle;
- (void).cxx_destruct;
- (void)_fillSubmittableProblem:(id)arg1;
- (_Bool)_isNowComplete;
- (void)_setCommentsTitle:(id)arg1 placeholderText:(id)arg2;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 title:(id)arg3 placeholderText:(id)arg4 emphasis:(long long)arg5;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

