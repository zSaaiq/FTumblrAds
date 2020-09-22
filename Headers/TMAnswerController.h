//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMComposeAnswerPrivateSwitchTableViewCellDelegate-Protocol.h"

@class NSString, TMAnswerPostParameters;
@protocol TMAnswerControllerDelegate;

@interface TMAnswerController : NSObject <TMComposeAnswerPrivateSwitchTableViewCellDelegate>
{
    _Bool _shouldDisplayPrivateSwitchCell;
    TMAnswerPostParameters *_postParameters;
    id <TMAnswerControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <TMAnswerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TMAnswerPostParameters *postParameters; // @synthesize postParameters=_postParameters;
@property(readonly, nonatomic) _Bool shouldDisplayPrivateSwitchCell; // @synthesize shouldDisplayPrivateSwitchCell=_shouldDisplayPrivateSwitchCell;
- (void)privateSwitchTableViewCell:(id)arg1 changedPrivateState:(_Bool)arg2;
- (id)initWithPostParameters:(id)arg1 anonymous:(_Bool)arg2 cell:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
