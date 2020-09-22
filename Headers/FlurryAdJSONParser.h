//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FlurryAdJSONParser : NSObject
{
    NSString *_path;
    id _payload;
    CDUnknownBlockType _validationFailureCallback;
    unsigned long long _options;
}

+ (id)createWithPath:(id)arg1 payload:(id)arg2 options:(unsigned long long)arg3 validationFailureCallback:(CDUnknownBlockType)arg4;
+ (id)createWithPath:(id)arg1 payload:(id)arg2 validationFailureCallback:(CDUnknownBlockType)arg3;
+ (Class)manifestClass;
+ (Class)expectedRootType;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType validationFailureCallback; // @synthesize validationFailureCallback=_validationFailureCallback;
@property(copy, nonatomic) id payload; // @synthesize payload=_payload;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)safeReadPath:(id)arg1;
- (id)readField:(id)arg1 ifArrayOfLength:(unsigned long long)arg2 required:(_Bool)arg3 validationErrorsTo:(id)arg4;
- (id)readFieldIfURL:(id)arg1 required:(_Bool)arg2 validationErrorsTo:(id)arg3;
- (id)readField:(id)arg1 ifOfType:(Class)arg2 required:(_Bool)arg3 validationErrorsTo:(id)arg4;
- (id)readStringField:(id)arg1 required:(_Bool)arg2 allowBlank:(_Bool)arg3 validationErrorsTo:(id)arg4;
- (id)build;
- (void)validateFieldsStoringErrorsTo:(id)arg1;
- (void)validateRootStoringErrorsTo:(id)arg1;
- (_Bool)validate:(id *)arg1;
- (id)parseInternal:(id *)arg1;
- (id)parse:(id *)arg1;
- (id)subPathFor:(id)arg1;
@property(readonly, nonatomic) _Bool payloadOptional;
@property(readonly, copy, nonatomic) NSDictionary *rootDictionary;
- (id)initWithPath:(id)arg1 payload:(id)arg2 options:(unsigned long long)arg3 validationFailureCallback:(CDUnknownBlockType)arg4;
- (id)parseAtSubPath:(id)arg1 payload:(id)arg2 validationErrors:(id *)arg3;
- (id)parseDictionary:(id)arg1 parserType:(Class)arg2 subPath:(id)arg3 validationBehavior:(int)arg4 validationErrors:(id *)arg5;
- (id)parseArray:(id)arg1 parserType:(Class)arg2 subPath:(id)arg3 validationBehavior:(int)arg4 validationErrors:(id *)arg5;

@end

