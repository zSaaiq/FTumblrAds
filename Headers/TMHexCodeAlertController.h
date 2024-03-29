//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIAlertAction, UITextField;

@interface TMHexCodeAlertController : UIAlertController <UITextFieldDelegate>
{
    UITextField *_textField;
    UIAlertAction *_confirmAction;
}

+ (id)alertControllerWithHexString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak UIAlertAction *confirmAction; // @synthesize confirmAction=_confirmAction;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
- (void)dealloc;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)clearText;
- (void)textChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

