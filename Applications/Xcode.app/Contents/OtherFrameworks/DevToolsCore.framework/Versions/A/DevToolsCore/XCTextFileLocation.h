//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCFileLocation.h>

@interface XCTextFileLocation : XCFileLocation
{
    unsigned long long _startingLineNumber;
    unsigned long long _startingColumnNumber;
    unsigned long long _endingLineNumber;
    unsigned long long _endingColumnNumber;
}

- (void)writeToSerializer:(id)arg1;
- (id)initFromDeserializer:(id)arg1;
- (id)description;
- (BOOL)containsTextFileLocation:(id)arg1;
- (unsigned long long)lineNumber;
- (unsigned long long)endingColumnNumber;
- (unsigned long long)endingLineNumber;
- (unsigned long long)startingColumnNumber;
- (unsigned long long)startingLineNumber;
- (id)initWithFilePath:(id)arg1 lineNumber:(unsigned long long)arg2;
- (id)initWithFilePath:(id)arg1 lineNumber:(unsigned long long)arg2 columnNumber:(unsigned long long)arg3;
- (id)initWithFilePath:(id)arg1 startingLineNumber:(unsigned long long)arg2 endingLineNumber:(unsigned long long)arg3;
- (id)initWithFilePath:(id)arg1 lineNumber:(unsigned long long)arg2 startingColumnNumber:(unsigned long long)arg3 endingColumnNumber:(unsigned long long)arg4;
- (id)initWithFilePath:(id)arg1 startingLineNumber:(unsigned long long)arg2 startingColumnNumber:(unsigned long long)arg3 endingLineNumber:(unsigned long long)arg4 endingColumnNumber:(unsigned long long)arg5;

@end

