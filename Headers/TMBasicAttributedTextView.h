//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIColor;
@protocol _TtP10CoreTumblr24LinkAttributeTapHandling_;

@interface TMBasicAttributedTextView : UIView
{
    NSString *_text;
    NSAttributedString *_attributedText;
    const struct __CTFrame *_frameRef;
    id <_TtP10CoreTumblr24LinkAttributeTapHandling_> _delegate;
    UIColor *_blockQuoteColor;
    double _textInsetTop;
    struct _NSRange _selectedRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(nonatomic) double textInsetTop; // @synthesize textInsetTop=_textInsetTop;
@property(retain, nonatomic) UIColor *blockQuoteColor; // @synthesize blockQuoteColor=_blockQuoteColor;
@property(nonatomic) __weak id <_TtP10CoreTumblr24LinkAttributeTapHandling_> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) const struct __CTFrame *frameRef; // @synthesize frameRef=_frameRef;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawRangeAsSelection:(struct _NSRange)arg1 inContext:(struct CGContext *)arg2;
- (void)drawBlockqoute:(id)arg1 index:(long long)arg2 lines:(id)arg3 originX:(double)arg4 origins:(struct CGPoint *)arg5 context:(struct CGContext *)arg6 white:(double)arg7;
- (long long)closestIndexToPoint:(struct CGPoint)arg1;
- (struct _NSRange)rangeIntersection:(struct _NSRange)arg1 withSecond:(struct _NSRange)arg2;
- (void)clearLayout;
- (void)dealloc;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end
