/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PKPhysicsBody.h"

// Not exported
@interface PKExtendedPhysicsBody : PKPhysicsBody
{
    long long _associations;
    double _areaFactor;
}

+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)arg1;
+ (id)bodyWithPolygonFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1;
+ (id)bodyWithCircleOfRadius:(double)arg1;
- (_Bool)dissociate;
- (void)associate;
- (id)description;
- (id)initWithRectangleOfSize:(struct CGSize)arg1;
@property(nonatomic) double normalizedDensity;
- (id)init;

@end
