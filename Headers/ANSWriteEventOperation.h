//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ANSEvent, NSString, NSURL;
@protocol ANSMetadataSerializable;

@interface ANSWriteEventOperation : NSOperation
{
    _Bool _success;
    ANSEvent *_event;
    id <ANSMetadataSerializable> _metadata;
    NSURL *_logFileUrl;
    NSString *_formattedEvent;
    NSString *_formattedMetadata;
}

@property(retain, nonatomic) NSString *formattedMetadata; // @synthesize formattedMetadata=_formattedMetadata;
@property(retain, nonatomic) NSString *formattedEvent; // @synthesize formattedEvent=_formattedEvent;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSURL *logFileUrl; // @synthesize logFileUrl=_logFileUrl;
@property(readonly, nonatomic) id <ANSMetadataSerializable> metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) ANSEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)logLineWithTimestamp:(id)arg1 eventName:(id)arg2 payloadDictionary:(id)arg3;
- (id)generateFormattedLogLineWithMetdata:(id)arg1 timestamp:(id)arg2;
- (id)generateFormattedLogLineWithEvent:(id)arg1;
- (_Bool)appendLogLine:(id)arg1 toFileDescriptor:(int)arg2;
- (_Bool)writeDataToDescriptor:(int)arg1 withPreexistingFile:(_Bool)arg2;
- (void)main;
- (id)initWithEvent:(id)arg1 metadata:(id)arg2 logFileUrl:(id)arg3;

@end

