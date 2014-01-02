/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSOperationQueue, NSURL, SKUIClientContext, SSVLoadURLOperation;

@interface SKUIGiftValidator : NSObject
{
    SKUIClientContext *_clientContext;
    NSOperationQueue *_operationQueue;
    long long _validationCount;
    SSVLoadURLOperation *_validationOperation;
    NSURL *_validationURL;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)_validateWithBodyDictionary:(id)arg1 completionBlock:(id)arg2;
- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2 attemptNumber:(long long)arg3 block:(id)arg4;
- (void)validateGift:(id)arg1 withCompletionBlock:(id)arg2;
- (void)validateDonation:(id)arg1 withCompletionBlock:(id)arg2;
@property(readonly, nonatomic, getter=isValidating) _Bool validating;
- (void)cancelValidation;
- (id)initWithValidationURL:(id)arg1 clientContext:(id)arg2;

@end
