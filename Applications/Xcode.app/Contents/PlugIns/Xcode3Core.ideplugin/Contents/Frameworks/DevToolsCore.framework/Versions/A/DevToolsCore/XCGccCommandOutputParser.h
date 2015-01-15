//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCBuildCommandOutputParser.h>

@class NSMutableArray, NSMutableString;

@interface XCGccCommandOutputParser : XCBuildCommandOutputParser
{
    BOOL _isInsideUndefinedSymbolsList;
    BOOL _isInsideFileInclusion;
    char *_pathForLastIncludedMessage;
    NSMutableArray *_pendedFileInclusionNoteMessages;
    BOOL _pendingMessagesHaveBeenAdded;
    BOOL _warningsBeingTreatedAsErrors;
    NSMutableString *_bufferedMessages;
}

+ (id)gccMessageMatchPatternList;
- (void).cxx_destruct;
- (void)flush;
- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithNextOutputStream:(id)arg1;

@end

