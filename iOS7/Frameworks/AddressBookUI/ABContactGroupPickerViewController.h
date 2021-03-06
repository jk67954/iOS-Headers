/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, UITableView;

@interface ABContactGroupPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_pickableGroups;
    UITableView *_tableView;
    id <ABContactGroupPickerDelegate> _groupPickerDelegate;
}

+ (id)pickableGroupsWithPickedGroups:(id)arg1;
+ (id)propertySections;
+ (BOOL)propertiesLeftToPickWithPickedGroups:(id)arg1;
@property(nonatomic) id <ABContactGroupPickerDelegate> groupPickerDelegate; // @synthesize groupPickerDelegate=_groupPickerDelegate;
- (id)_loadPickableGroupsWithPickedGroups:(id)arg1;
- (void)cancel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithGroups:(id)arg1;

@end

