//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBKVOController;

@interface TMKeyboardFrameTracker : NSObject
{
    _Bool _liveTracking;
    _Bool _willShowBlockCalled;
    _Bool _didShowBlockCalled;
    _Bool _rotating;
    CDUnknownBlockType _keyboardWillShow;
    CDUnknownBlockType _keyboardDidShow;
    CDUnknownBlockType _keyboardWillHide;
    FBKVOController *_kvoController;
    struct CGRect _keyboardFrame;
}

+ (id)sharedFrameTracker;
- (void).cxx_destruct;
@property(nonatomic) _Bool rotating; // @synthesize rotating=_rotating;
@property(nonatomic) _Bool didShowBlockCalled; // @synthesize didShowBlockCalled=_didShowBlockCalled;
@property(nonatomic) _Bool willShowBlockCalled; // @synthesize willShowBlockCalled=_willShowBlockCalled;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(copy, nonatomic) CDUnknownBlockType keyboardWillHide; // @synthesize keyboardWillHide=_keyboardWillHide;
@property(copy, nonatomic) CDUnknownBlockType keyboardDidShow; // @synthesize keyboardDidShow=_keyboardDidShow;
@property(copy, nonatomic) CDUnknownBlockType keyboardWillShow; // @synthesize keyboardWillShow=_keyboardWillShow;
@property(nonatomic, getter=isLiveTracking) _Bool liveTracking; // @synthesize liveTracking=_liveTracking;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
- (void)setupKVOControllerForView:(id)arg1;
- (void)checkForKeyboard;
- (void)calculateKeyboardFrame:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (double)visibleKeyboardPercentageInView:(id)arg1;
- (id)init;

@end

