//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TMMultipartRequestBodyFactory : NSObject
{
}

+ (id)keyArrayOfLength:(long long)arg1 key:(id)arg2;
+ (id)defaultMultipartRequestBodyForParameters:(id)arg1 filePathArray:(id)arg2 contentTypeArray:(id)arg3 fileNameArray:(id)arg4 type:(id)arg5;
+ (id)multipartRequestBodyForParameters:(id)arg1 filePathArray:(id)arg2 contentTypeArray:(id)arg3 fileNameArray:(id)arg4 type:(id)arg5 keys:(id)arg6;
+ (id)multipartRequestBodyRequestForParameters:(id)arg1 filePathArray:(id)arg2 contentTypeArray:(id)arg3 fileNameArray:(id)arg4 keyArray:(id)arg5 encodeJSON:(_Bool)arg6 livePhotoFilePaths:(id)arg7 livePhotoContentTypes:(id)arg8 livePhotoFileNames:(id)arg9 type:(id)arg10;

@end

