//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TMPost, UITableViewCell, _TtC11TumblrTheme14AppColorScheme;
@protocol TMPostCellType;

@protocol TMPostCellUpdater
- (void)updateCell:(UITableViewCell<TMPostCellType> *)arg1 withPost:(TMPost *)arg2 spacerHeight:(double)arg3 andForcePostImageReload:(_Bool)arg4 forceViewModelRecreation:(_Bool)arg5 appColorScheme:(_TtC11TumblrTheme14AppColorScheme *)arg6;
@end
