//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFDConfigModel, AFDLoginConfigModel;

@interface AFDConfigManager : NSObject
{
    AFDConfigModel *_model;
    AFDLoginConfigModel *_loginModel;
    AFDLoginConfigModel *_sampleModel;
}

@property(retain, nonatomic) AFDLoginConfigModel *sampleModel; // @synthesize sampleModel=_sampleModel;
@property(retain, nonatomic) AFDLoginConfigModel *loginModel; // @synthesize loginModel=_loginModel;
@property(retain, nonatomic) AFDConfigModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)parseResponse:(id)arg1;
- (id)init;

@end

