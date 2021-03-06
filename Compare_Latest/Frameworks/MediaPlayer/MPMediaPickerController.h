/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class NSString;

@interface MPMediaPickerController : UIViewController
{
    id <MPMediaPickerControllerDelegate> _delegate;
    unsigned int _mediaTypes;
    id _modalContext;
    NSString *_prompt;
    int _prevStatusBarStyle;
    unsigned int _allowsPickingMultipleItems:1;
    unsigned int _showsCloudItems:1;
}

+ (void)preheatMediaPicker;
- (void).cxx_destruct;
- (void)_pickerDidPickItems:(id)arg1;
- (void)_pickerDidCancel;
@property(nonatomic) BOOL showsCloudItems;
@property(nonatomic) BOOL allowsPickingMultipleItems;
@property(copy, nonatomic) NSString *prompt;
@property(nonatomic) __weak id <MPMediaPickerControllerDelegate> delegate;
@property(readonly, nonatomic) unsigned int mediaTypes;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithMediaTypes:(unsigned int)arg1;
- (id)init;

@end

