/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

@class NSOperationQueue, NSString, SKUIClientContext, SKUIRedeemStepViewController;

@interface SKUIRedeemViewController : UINavigationController
{
    int _category;
    SKUIClientContext *_clientContext;
    NSString *_initialCode;
    SKUIRedeemStepViewController *_rootViewController;
    NSOperationQueue *_operationQueue;
}

+ (id)startingViewControllerForCategory:(int)arg1;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(copy, nonatomic) NSString *initialCode; // @synthesize initialCode=_initialCode;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) int category; // @synthesize category=_category;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithRedeemCategory:(int)arg1;

@end

