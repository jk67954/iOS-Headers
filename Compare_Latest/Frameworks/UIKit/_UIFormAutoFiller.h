/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DOMElement, DOMHTMLInputElement, NSMutableArray, NSMutableDictionary, WebFrame;

@interface _UIFormAutoFiller : NSObject
{
    WebFrame *_frame;
    DOMElement *_form;
    int _formType;
    DOMHTMLInputElement *_usernameElement;
    DOMHTMLInputElement *_passwordElement;
    NSMutableArray *_autoFilledControls;
    NSMutableDictionary *_fieldsFilledFromAB;
    NSMutableArray *_continuationFields;
    BOOL _hasAutoFilled;
}

+ (id)fieldNameForAutoFillOfControl:(id)arg1 rep:(id)arg2 respectHTMLAutocompleteAttribute:(BOOL)arg3;
+ (int)indexOfItemInRadioButtonGroup:(id)arg1 forSynonyms:(id)arg2;
+ (id)radioButtonGroupContaining:(id)arg1 inFormElements:(id)arg2;
+ (int)indexOfItemInSelectElement:(id)arg1 forSynonyms:(id)arg2;
+ (void)clearAutoFilledTextField:(id)arg1 inFrame:(id)arg2 form:(id)arg3;
+ (void)clearAutoFillStateForFrame:(id)arg1;
+ (void)recordABMatch:(id)arg1 inFrame:(id)arg2 form:(id)arg3 fieldName:(id)arg4;
+ (BOOL)isContinuationField:(id)arg1 inFrame:(id)arg2 form:(id)arg3;
+ (id)abMatchInFrame:(id)arg1 form:(id)arg2 fieldName:(id)arg3;
+ (id)matchForControl:(id)arg1 rep:(id)arg2 fieldLabels:(id)arg3 useFieldName:(BOOL)arg4 foundByPageScan:(char *)arg5;
+ (id)autoFillerForFrame:(id)arg1 form:(id)arg2 create:(BOOL)arg3;
- (void)clearAutoFilledTextField:(id)arg1;
- (void)recordABContinuationField:(id)arg1;
- (void)recordABMatch:(id)arg1 fieldName:(id)arg2;
- (int)autoFillPhoneOrZipStartingAtControl:(id)arg1 match:(id)arg2;
- (void)autoFillAddressStartingAtControl:(id)arg1 match:(id)arg2;
- (void)autoFill;
- (BOOL)hasAutoFilled;
- (int)_reflectAutoFillMatch:(id)arg1 inControls:(id)arg2 currIndex:(int)arg3 fieldName:(id)arg4;
- (int)_reflectMultiFieldMatch:(id)arg1 inControls:(id)arg2 currIndex:(unsigned int)arg3 fieldName:(id)arg4 isPhoneNumber:(BOOL)arg5;
- (void)_insertABValue:(id)arg1 inTextFieldElement:(id)arg2 match:(id)arg3 fieldName:(id)arg4;
- (id)_decomposeStreetAddress:(id)arg1 style:(int)arg2;
- (int)_itemInSelectElement:(id)arg1 forMatch:(id)arg2;
- (id)passwordElement;
- (id)usernameElement;
- (int)formType;
- (void)_scanElements;
- (id)visibleControlsInForm;
- (void)dealloc;
- (id)init;

@end

