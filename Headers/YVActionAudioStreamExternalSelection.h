//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class YVAudioStreamOption;

@interface YVActionAudioStreamExternalSelection : NSObject
{
    _Bool _fromUserInteraction;
    YVAudioStreamOption *_selectedStream;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool fromUserInteraction; // @synthesize fromUserInteraction=_fromUserInteraction;
@property(readonly, nonatomic) YVAudioStreamOption *selectedStream; // @synthesize selectedStream=_selectedStream;
- (id)initWithSelectedStream:(id)arg1 fromUserInteraction:(_Bool)arg2;

@end

