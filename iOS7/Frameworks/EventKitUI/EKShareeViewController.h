/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "UIActionSheetDelegate-Protocol.h"

@class EKSharee, UIActionSheet;

@interface EKShareeViewController : UITableViewController <UIActionSheetDelegate>
{
    UIActionSheet *_alertSheet;
    BOOL _allowEditing;
    EKSharee *_sharee;
    id <EKShareeViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <EKShareeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL allowEditing; // @synthesize allowEditing=_allowEditing;
@property(retain, nonatomic) EKSharee *sharee; // @synthesize sharee=_sharee;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)removeClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)contentSizeForViewInPopover;
- (void)_allowEditingChanged:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)_reloadTitle;
- (int)_rowForSubitem:(int)arg1;
- (int)_subitemAtRow:(int)arg1;
- (BOOL)_shouldDisplayResendInvitationButton;
- (id)initWithSharee:(id)arg1;

@end

