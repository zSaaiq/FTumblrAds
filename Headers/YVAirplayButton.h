//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPVolumeView, NSMutableArray;

@interface YVAirplayButton : UIView
{
    MPVolumeView *_airplayButton;
    NSMutableArray *_airplayButtonObservers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *airplayButtonObservers; // @synthesize airplayButtonObservers=_airplayButtonObservers;
@property(retain, nonatomic) MPVolumeView *airplayButton; // @synthesize airplayButton=_airplayButton;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

