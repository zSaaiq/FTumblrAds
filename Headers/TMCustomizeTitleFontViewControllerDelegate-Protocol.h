//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TMCustomizeTitleFontViewController, TMThemeFontFamily;

@protocol TMCustomizeTitleFontViewControllerDelegate <NSObject>
- (void)customizeTitleFontViewController:(TMCustomizeTitleFontViewController *)arg1 didChangeVisibility:(_Bool)arg2;
- (void)customizeTitleFontViewController:(TMCustomizeTitleFontViewController *)arg1 didSelectThemeFontFamily:(TMThemeFontFamily *)arg2 isBold:(_Bool)arg3;
@end
