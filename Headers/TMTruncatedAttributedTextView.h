//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TMTruncatedAttributedTextView : UIView
{
    struct __CTFrame *_frameRef;
    struct __CTLine *_truncationToken;
    struct __CTLine *_truncatedLine;
    struct CGPoint _lineOrigin;
}

@property(nonatomic) struct CGPoint lineOrigin; // @synthesize lineOrigin=_lineOrigin;
@property(nonatomic) struct __CTLine *truncatedLine; // @synthesize truncatedLine=_truncatedLine;
@property(nonatomic) struct __CTLine *truncationToken; // @synthesize truncationToken=_truncationToken;
@property(nonatomic) struct __CTFrame *frameRef; // @synthesize frameRef=_frameRef;
- (void)_calculateTruncatedFrame;
- (void)_clearLayout;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end
