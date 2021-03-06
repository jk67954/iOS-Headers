/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFContactsSearchConsumer-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MFContactsSearchManager, MFContactsSearchResultsModel, NSArray, NSNumber, UITableView, UIView;

@interface SKUIGiftContactSearchController : NSObject <MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate>
{
    void *_addressBook;
    id <SKUIGiftContactSearchDelegate> _delegate;
    NSArray *_results;
    MFContactsSearchResultsModel *_resultsModel;
    MFContactsSearchManager *_searchManager;
    UIView *_searchResultsView;
    NSNumber *_searchTaskIdentifier;
    UITableView *_tableView;
}

@property(nonatomic) __weak id <SKUIGiftContactSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_tableView;
- (void)_setResults:(id)arg1;
- (void)_finishSearchWithResults:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(int)arg1;
- (void)endedNetworkActivity;
- (void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3;
- (void)beganNetworkActivity;
@property(readonly, nonatomic) UIView *searchResultsView;
- (void)searchForText:(id)arg1;
- (void)resetSearch;
@property(readonly, nonatomic) int numberOfResults;
- (BOOL)cancelSearch;
- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1;

@end

