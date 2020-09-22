//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIAlertAction, UITextField;
@protocol TMDeleteBlogAlertControllerDelegate, TMSession, TMTumblrCoreDataController, _TtP9Analytics14EventBuffering_;

@interface TMDeleteBlogAlertController : UIAlertController <UITextFieldDelegate>
{
    UIAlertAction *_deleteAction;
    CDUnknownBlockType _deleteActionHandler;
    UITextField *_textField;
    id <TMTumblrCoreDataController> _coreDataController;
    id <TMSession> _session;
    NSString *_password;
    NSString *_uuid;
    id <TMDeleteBlogAlertControllerDelegate> _delegate;
    id <_TtP9Analytics14EventBuffering_> _analyticsBuffer;
}

+ (id)deleteBlogAlertControllerWithBlog:(id)arg1 withDelegate:(id)arg2 withPassword:(id)arg3 coreDataController:(id)arg4 session:(id)arg5 analyticsBuffer:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) id <_TtP9Analytics14EventBuffering_> analyticsBuffer; // @synthesize analyticsBuffer=_analyticsBuffer;
@property(nonatomic) __weak id <TMDeleteBlogAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) id <TMSession> session; // @synthesize session=_session;
@property(nonatomic) __weak id <TMTumblrCoreDataController> coreDataController; // @synthesize coreDataController=_coreDataController;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) CDUnknownBlockType deleteActionHandler; // @synthesize deleteActionHandler=_deleteActionHandler;
@property(nonatomic) __weak UIAlertAction *deleteAction; // @synthesize deleteAction=_deleteAction;
- (void)dismissWithHandler:(CDUnknownBlockType)arg1;
- (void)deleteBlog:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearText;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

