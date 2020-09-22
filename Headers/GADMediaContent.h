//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADMediaContentDisplaying-Protocol.h"
#import "GADSlotAdEventDelegate-Protocol.h"
#import "GADSlotAdLoadDelegate-Protocol.h"
#import "GADSlotDelegate-Protocol.h"

@class GADAdViewVideoController, GADNativeAdImage, GADSlot, GADVideoOptions, NSDictionary, NSString, UIImageView;
@protocol GADMediaContentDelegate;

@interface GADMediaContent : NSObject <GADSlotAdEventDelegate, GADSlotAdLoadDelegate, GADSlotDelegate, GADMediaContentDisplaying>
{
    NSDictionary *_configuration;
    GADNativeAdImage *_placeholderImage;
    UIImageView *_placeholderImageView;
    _Bool _hasLoaded;
    CDUnknownBlockType _completionHandler;
    GADVideoOptions *_videoOptions;
    id <GADMediaContentDelegate> _delegate;
    GADSlot *_slot;
}

+ (id)videoSupportURL;
@property(readonly, nonatomic) GADSlot *slot; // @synthesize slot=_slot;
@property(nonatomic) __weak id <GADMediaContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)slot:(id)arg1 didLoadVideoWithSize:(struct CGSize)arg2;
- (struct CGRect)frameInInterface;
- (void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2;
- (void)slotFinishedLoadingAdContent:(id)arg1;
- (void)handleJavaScriptLoadedNotification:(id)arg1;
- (void)notifyVideoLoadCompletedWithError:(id)arg1;
@property(readonly, nonatomic) GADAdViewVideoController *videoController;
- (id)mediaView;
- (void)loadVideoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithVideoDictionary:(id)arg1 placeholderImage:(id)arg2 videoOptions:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
