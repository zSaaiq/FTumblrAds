//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBGHTMLEntityEncoder : NSObject
{
}

- (id)rangesOfCharacters:(id)arg1 string:(id)arg2;
- (id)nonASCIICharacterSet;
- (id)basicEntitiesCharacterSet;
- (_Bool)stringContainsOnlyASCII:(id)arg1;
- (unsigned long long)defaultFormats;
- (_Bool)stringNeedsEncoding:(id)arg1;
- (void)encodeStringInPlace:(id)arg1 withFormats:(unsigned long long)arg2;
- (void)encodeStringInPlace:(id)arg1;
- (id)encode:(id)arg1 withFormats:(unsigned long long)arg2;
- (id)encode:(id)arg1;

@end

