//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMBannerView.h"

@class NSString, TMBasicAttributedTextView, TMNotificationAvatarIconView, TMNotificationPostTypeIconView, UIImageView;

@interface TMNotificationBannerView : TMBannerView
{
    TMNotificationAvatarIconView *_avatarIcon;
    TMNotificationPostTypeIconView *_postIcon;
    NSString *_message;
    NSString *_fromBlogName;
    NSString *_targetBlogName;
    long long _activityItemType;
    TMBasicAttributedTextView *_textView;
    UIImageView *_staticIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *staticIcon; // @synthesize staticIcon=_staticIcon;
@property(retain, nonatomic) TMBasicAttributedTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) long long activityItemType; // @synthesize activityItemType=_activityItemType;
@property(retain, nonatomic) NSString *targetBlogName; // @synthesize targetBlogName=_targetBlogName;
@property(retain, nonatomic) NSString *fromBlogName; // @synthesize fromBlogName=_fromBlogName;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) TMNotificationPostTypeIconView *postIcon; // @synthesize postIcon=_postIcon;
@property(retain, nonatomic) TMNotificationAvatarIconView *avatarIcon; // @synthesize avatarIcon=_avatarIcon;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBarTintColor:(id)arg1 tintColor:(id)arg2;
- (id)initWithMessage:(id)arg1 activityItemType:(long long)arg2 fromBlogName:(id)arg3 isFromNSFWBlog:(_Bool)arg4 targetBlog:(id)arg5 targetPostType:(int)arg6 mediaURL:(id)arg7;

@end

