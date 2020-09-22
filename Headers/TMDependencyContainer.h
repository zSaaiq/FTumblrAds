//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TMAudioPlayer, TMFirstResponderProvider, TMWindowAccessor;
@protocol TMInvalidVideoEditAlertPresenter, TMURLOpenabilityChecker;

@interface TMDependencyContainer : NSObject
{
    TMWindowAccessor *_windowAccessor;
    TMFirstResponderProvider *_firstResponderProvider;
    id <TMURLOpenabilityChecker> _URLOpenabilityChecker;
    id <TMInvalidVideoEditAlertPresenter> _invalidVideoEditAlertPresenter;
    TMAudioPlayer *_audioPlayer;
}

+ (id)sharedContainer;
- (void).cxx_destruct;
@property(retain, nonatomic) TMAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) id <TMInvalidVideoEditAlertPresenter> invalidVideoEditAlertPresenter; // @synthesize invalidVideoEditAlertPresenter=_invalidVideoEditAlertPresenter;
@property(retain, nonatomic) id <TMURLOpenabilityChecker> URLOpenabilityChecker; // @synthesize URLOpenabilityChecker=_URLOpenabilityChecker;
@property(retain, nonatomic) TMFirstResponderProvider *firstResponderProvider; // @synthesize firstResponderProvider=_firstResponderProvider;
@property(retain, nonatomic) TMWindowAccessor *windowAccessor; // @synthesize windowAccessor=_windowAccessor;

@end

