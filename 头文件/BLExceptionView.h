//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APExceptionView.h"

@class UILabel;

@interface BLExceptionView : APExceptionView
{
    UILabel *_infoLabel;
}

@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
- (void).cxx_destruct;
- (void)setDetailWithText:(id)arg1;
- (void)setTipWithText:(id)arg1;
- (id)initLimitWithFrame:(struct CGRect)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initErrorWithFrame:(struct CGRect)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initNetErrorWithFrame:(struct CGRect)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2 exceptionType:(int)arg3 target:(id)arg4 action:(SEL)arg5;

@end

