//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VASNativeViewComponent-Protocol.h"

@class NSString, UIColor, UIFont;

@protocol VASNativeTextComponent <VASNativeViewComponent>
@property(nonatomic, retain) UIColor *backgroundColor;
@property(nonatomic, retain) UIColor *textColor;
@property(nonatomic, retain) UIFont *font;
@property(nonatomic, readonly) NSString *text;
@end

