//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMRequestBody-Protocol.h"

@class NSArray, NSDictionary;

@interface TMMultipartRequestBody : NSObject <TMRequestBody>
{
    _Bool _encodeJSONBody;
    NSArray *_filePaths;
    NSArray *_contentTypes;
    NSArray *_fileNames;
    NSDictionary *_parameters;
    NSArray *_keys;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool encodeJSONBody; // @synthesize encodeJSONBody=_encodeJSONBody;
@property(readonly, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) NSArray *fileNames; // @synthesize fileNames=_fileNames;
@property(readonly, nonatomic) NSArray *contentTypes; // @synthesize contentTypes=_contentTypes;
@property(readonly, nonatomic) NSArray *filePaths; // @synthesize filePaths=_filePaths;
- (_Bool)hasMultipleDistinctFiles;
- (_Bool)encodeParameters;
- (id)bodyData;
- (id)contentEncoding;
- (id)contentType;
- (id)description;
- (id)initWithFilePaths:(id)arg1 contentTypes:(id)arg2 fileNames:(id)arg3 parameters:(id)arg4 keys:(id)arg5 encodeJSONBody:(_Bool)arg6;

@end

