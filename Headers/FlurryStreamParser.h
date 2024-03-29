//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryActor.h"

#import "IFlurryStreamParser-Protocol.h"

@class NSString;
@protocol FlurryStreamParserDelegate, IFlurryEntityRecordManager, IFlurryStreamEntityFactory, IFlurryStreamMessageDeserializer;

@interface FlurryStreamParser : FlurryActor <IFlurryStreamParser>
{
    id <FlurryStreamParserDelegate> _delegate;
    id <IFlurryStreamMessageDeserializer> _frameDeserializer;
    id <IFlurryEntityRecordManager> _entityRecordManager;
    id <IFlurryStreamEntityFactory> _entityFactory;
}

+ (id)streamParserWithMessageDeserializer:(id)arg1 entityFactory:(id)arg2 entityRecordManager:(id)arg3;
@property(retain, nonatomic) id <IFlurryStreamEntityFactory> entityFactory; // @synthesize entityFactory=_entityFactory;
@property(retain, nonatomic) id <IFlurryEntityRecordManager> entityRecordManager; // @synthesize entityRecordManager=_entityRecordManager;
@property(retain, nonatomic) id <IFlurryStreamMessageDeserializer> frameDeserializer; // @synthesize frameDeserializer=_frameDeserializer;
@property(nonatomic) __weak id <FlurryStreamParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onqueue_parseData:(id)arg1;
- (void)parseData:(id)arg1;
- (id)initWithWithMessageDeserializer:(id)arg1 entityFactory:(id)arg2 entityRecordManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

