//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "TMScreenIdentifying-Protocol.h"

@class NSString, TMAvatarView, TMFastReblogProgressView, UIImageView, UIView;

@interface TMFastReblogControl : UIControl <TMScreenIdentifying>
{
    struct CGPoint _fromPosition;
    TMAvatarView *_avatarView;
    TMFastReblogProgressView *_progressView;
    UIView *_reblogView;
    UIImageView *_reblogIconView;
    _Bool _hiding;
    _Bool _fired;
    int _advertisementType;
    NSString *_screenIdentifier;
    NSString *_postID;
    NSString *_reblogKey;
    NSString *_originatingBlogName;
    NSString *_placementIdentifier;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFired) _Bool fired; // @synthesize fired=_fired;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *placementIdentifier; // @synthesize placementIdentifier=_placementIdentifier;
@property(nonatomic) int advertisementType; // @synthesize advertisementType=_advertisementType;
@property(copy, nonatomic) NSString *originatingBlogName; // @synthesize originatingBlogName=_originatingBlogName;
@property(copy, nonatomic) NSString *reblogKey; // @synthesize reblogKey=_reblogKey;
@property(copy, nonatomic) NSString *postID; // @synthesize postID=_postID;
@property(copy, nonatomic) NSString *screenIdentifier; // @synthesize screenIdentifier=_screenIdentifier;
- (void)hide:(_Bool)arg1;
- (void)simulateFastReblogWithDelay:(double)arg1;
- (void)showInView:(id)arg1 fromPosition:(struct CGPoint)arg2;
- (void)progressChanged:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 blog:(id)arg2 screenIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

