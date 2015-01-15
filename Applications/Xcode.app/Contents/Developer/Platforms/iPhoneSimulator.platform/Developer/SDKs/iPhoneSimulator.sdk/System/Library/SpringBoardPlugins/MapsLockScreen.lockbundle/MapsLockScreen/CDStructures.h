//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    CDStruct_c3b9c2ee _field5;
    CDStruct_c3b9c2ee _field6;
    CDStruct_c3b9c2ee _field7;
    CDStruct_c3b9c2ee _field8;
} CDStruct_3ca075e3;

typedef struct {
    struct CGSize referenceSize;
    double arrowStemWidth;
    double intersectionStemWidth;
    double intersectionStrokeWidth;
    struct CGSize arrowHeadSize;
    double arrowStemCornerRadius;
    double arbitraryCurveRadius;
    double uTurnRadius;
    long long arrowStyle;
    double rightTurnCurveRadius;
    double rightTurnInnerCurveRadius;
    double rightTurnStemLengthBeforeTurn;
    double rightTurnStemLengthAfterTurn;
    double fortyFiveDegreeSouthAngleStemLengthBeforeTurn;
    double fortyFiveDegreeSouthAngleStemLengthAfterTurn;
    double fortyFiveDegreeSouthAngleCornerRadius;
    double fortyFiveDegreeNorthAngleStemLengthBeforeTurn;
    double fortyFiveDegreeNorthAngleStemLengthAfterTurn;
    double fortyFiveDegreeNorthAngleCornerRadius;
    double exitStemLengthBeforeTurn;
    double exitStemLengthAfterTurn;
    double exitRoadNotTakenStemLength;
    double arrivalOuterCircleWidth;
    double arrivalGapBetweenCircles;
    double arrivalGapBetweenArrowAndCircles;
    _Bool arrivalCutOutArrowInInnerCircle;
    double mergeRightStemLengthBeforeTurn;
    double mergeRightStemLengthAfterTurn;
    double mergeRightCornerRadius;
    _Bool junctionsDrawEntryExitRightAngles;
    _Bool junctionsDrawEntryExitFortyFiveDegreeAngles;
} CDStruct_092aca68;

