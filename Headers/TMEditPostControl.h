//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMIconPostControl.h"

@class TMLoadingControl;

@interface TMEditPostControl : TMIconPostControl
{
    TMLoadingControl *_loadingControl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TMLoadingControl *loadingControl; // @synthesize loadingControl=_loadingControl;
- (void)hideLoadingControl;
- (void)showLoadingControl;
- (void)willMoveToSuperview:(id)arg1;
- (id)accessibilityLabel;
- (id)iconImage;
- (long long)type;

@end

