/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKMessageComposition.h>

@class NSArray, NSDictionary, NSString;

@interface CKMessageStandaloneComposition : CKMessageComposition
{
    NSString *_textString;
    NSString *_markupString;
    NSString *_subject;
    NSDictionary *_resources;
    NSArray *_messageParts;
}

- (void)setSubject:(id)arg1;
- (id)subject;
- (id)markupString;
- (void)dealloc;
- (id)messageParts;
- (id)textString;
- (void)setResources:(id)arg1;
- (id)resources;
- (void)setMarkupString:(id)arg1;
- (void)_clearDerivedValues;

@end

