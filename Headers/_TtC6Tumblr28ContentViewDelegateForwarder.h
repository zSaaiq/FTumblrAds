//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6Tumblr28ContentViewDelegateForwarder : NSObject
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *imageLoadingCoordinator;
    MISSING_TYPE *dataSavingModeDeterminer;
}

- (void).cxx_destruct;
- (id)init;
- (void)userVoteFor:(id)arg1 selection:(id)arg2 extras:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)userDidVote:(id)arg1;
- (void)didInteractWithCTAWithUrl:(id)arg1;
- (void)didSelectAudioView:(id)arg1 audioBlock:(id)arg2;
- (void)fireBeacon:(id)arg1 eventProvider:(id)arg2;
- (void)didSelectAppUpdatePrompt;
- (void)didSelectAvatarFor:(id)arg1 blogUUID:(id)arg2 contentDataModelID:(id)arg3 avatarView:(id)arg4 hasMedia:(_Bool)arg5;
- (void)didSelectPermalinkFor:(id)arg1 postID:(id)arg2;
- (void)didLongPressURL:(id)arg1 from:(id)arg2 sourceRect:(struct CGRect)arg3;
- (void)didSelectURL:(id)arg1 from:(id)arg2;
- (void)didScrubGIF;
- (void)didLongPressWithImageView:(id)arg1 at:(struct CGPoint)arg2;
- (void)didTapWithImageView:(id)arg1;
- (void)didFinishLoadingWithImageView:(id)arg1;
- (_Bool)shouldAutoPlayVideoWith:(id)arg1;
- (_Bool)shouldLoadFullImages;

@end

