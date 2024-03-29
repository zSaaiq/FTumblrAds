//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMInputView.h"

@class NSDictionary, UISegmentedControl;
@protocol TMCustomizeTitlePhoneInputAccessoryViewDelegate;

@interface TMCustomizeTitlePhoneInputAccessoryView : TMInputView
{
    UISegmentedControl *_segmentedControl;
    id <TMCustomizeTitlePhoneInputAccessoryViewDelegate> _delegate;
    NSDictionary *_segmentTitlesToActions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *segmentTitlesToActions; // @synthesize segmentTitlesToActions=_segmentTitlesToActions;
@property(nonatomic) __weak id <TMCustomizeTitlePhoneInputAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void)segmentWasSelected;
- (void)selectSegmentAtIndex:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

