//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YEBTransferRecordTimelineItemModel : NSObject
{
    NSString *_mainDesc;
    NSString *_secondDesc;
    NSString *_stateColor;
    NSString *_stateDesc;
}

@property(retain, nonatomic) NSString *stateDesc; // @synthesize stateDesc=_stateDesc;
@property(retain, nonatomic) NSString *stateColor; // @synthesize stateColor=_stateColor;
@property(retain, nonatomic) NSString *secondDesc; // @synthesize secondDesc=_secondDesc;
@property(retain, nonatomic) NSString *mainDesc; // @synthesize mainDesc=_mainDesc;
- (void).cxx_destruct;
- (id)initWithTouZiBaoRpcObject:(id)arg1;

@end

