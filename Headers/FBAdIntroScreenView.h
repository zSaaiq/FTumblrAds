//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBAdDetailsVerticalView;

@interface FBAdIntroScreenView : UIView
{
    FBAdDetailsVerticalView *_adDetailsView;
}

@property(nonatomic) __weak FBAdDetailsVerticalView *adDetailsView; // @synthesize adDetailsView=_adDetailsView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupAdDetailsViewWithTitle:(id)arg1 subtitle:(id)arg2 iconURL:(id)arg3 iconStyle:(unsigned long long)arg4;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 iconURL:(id)arg3 iconStyle:(unsigned long long)arg4;

@end
