//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FlurryPLCrashReportSymbolInfo;

@interface FlurryPLCrashReportStackFrameInfo : NSObject
{
    unsigned long long _instructionPointer;
    FlurryPLCrashReportSymbolInfo *_symbolInfo;
}

@property(readonly, nonatomic) FlurryPLCrashReportSymbolInfo *symbolInfo; // @synthesize symbolInfo=_symbolInfo;
@property(readonly, nonatomic) unsigned long long instructionPointer; // @synthesize instructionPointer=_instructionPointer;
- (void)dealloc;
- (id)initWithInstructionPointer:(unsigned long long)arg1 symbolInfo:(id)arg2;

@end
