/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SKRequestInternal : NSObject
{
    int _backgroundTaskIdentifier;
    id <SKRequestDelegate> _delegate;
    NSString *_identifier;
    int _state;
}

- (void)dealloc;

@end

