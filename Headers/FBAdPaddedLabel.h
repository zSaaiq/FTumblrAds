//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface FBAdPaddedLabel : UILabel
{
    struct UIEdgeInsets _textInsets;
}

@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;

@end

