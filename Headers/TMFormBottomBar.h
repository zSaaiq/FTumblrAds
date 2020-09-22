//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class TMLoadingControl, UIButton;

@interface TMFormBottomBar : UIView
{
    _Bool _displayLoadingIndicatorOnSubmit;
    UIButton *_cancelButton;
    UIButton *_submitButton;
    TMLoadingControl *_loader;
    UIView *_centerDivider;
    UIView *_topDivider;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _submitBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType submitBlock; // @synthesize submitBlock=_submitBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) UIView *topDivider; // @synthesize topDivider=_topDivider;
@property(retain, nonatomic) UIView *centerDivider; // @synthesize centerDivider=_centerDivider;
@property(retain, nonatomic) TMLoadingControl *loader; // @synthesize loader=_loader;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) _Bool displayLoadingIndicatorOnSubmit; // @synthesize displayLoadingIndicatorOnSubmit=_displayLoadingIndicatorOnSubmit;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)cancel;
- (void)stopLoading;
- (void)submit;
@property(nonatomic) _Bool canBeSubmitted;
@property(nonatomic) _Bool displaysTopDivider;
- (id)initWithCancelButtonTitle:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 submitButtonTitle:(id)arg3 submitBlock:(CDUnknownBlockType)arg4 appColorScheme:(id)arg5;
- (id)initWithCancelButtonTitle:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 submitButtonTitle:(id)arg3 submitBlock:(CDUnknownBlockType)arg4 displayLoadingIndicatorOnSubmit:(_Bool)arg5 appColorScheme:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
