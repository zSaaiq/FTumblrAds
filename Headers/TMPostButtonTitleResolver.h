//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TMPostButtonTitleResolver : NSObject
{
    _Bool _editing;
    _Bool _submitting;
    int _originalPostState;
    int _originalQueueState;
}

@property(readonly, nonatomic) int originalQueueState; // @synthesize originalQueueState=_originalQueueState;
@property(readonly, nonatomic) int originalPostState; // @synthesize originalPostState=_originalPostState;
@property(readonly, nonatomic, getter=isSubmitting) _Bool submitting; // @synthesize submitting=_submitting;
@property(readonly, nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
- (id)possibleValues;
- (id)buttonTitleForState:(int)arg1 queueState:(int)arg2 scheduledPublishTime:(id)arg3;
- (id)initWithOriginalState:(int)arg1 queueState:(int)arg2 isEditing:(_Bool)arg3 isSubmission:(_Bool)arg4;

@end

