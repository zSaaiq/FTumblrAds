//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TMAvatarButton, TMBlog, UIView, _TtC11TumblrTheme7TMTheme;

@protocol _TtP6Tumblr30BlogHeaderPresentationDelegate_
- (void)presentEditHeaderImageAlertWithHeaderImage:(UIView *)arg1 didChooseToEditHeader:(void (^)(void))arg2 didChooseToViewHeader:(void (^)(void))arg3;
- (void)presentEditAvatarAlertWithAvatarButton:(TMAvatarButton *)arg1 didChooseToEditAvatar:(void (^)(void))arg2 didChooseToViewAvatar:(void (^)(void))arg3;
- (void)presentHeaderImageWith:(_TtC11TumblrTheme7TMTheme *)arg1;
- (void)presentAvatarImageWithAvatarButton:(TMAvatarButton *)arg1 for:(TMBlog *)arg2;
@end

