//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCParsing/Declaration.h>

@interface ObjcMethodDeclaration : Declaration
{
    BOOL _isClassMethod;
}

- (id)prettyPrint;
- (id)interfaceInstance;
- (void)setIsClassMethod;
- (BOOL)isClassMethod;
- (id)definingInstance;
- (id)description;
- (id)initWithDeclName:(id)arg1 containingScope:(id)arg2;

@end

