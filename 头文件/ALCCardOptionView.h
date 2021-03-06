//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString;

@interface ALCCardOptionView : UIView
{
    _Bool _isUpTriangle;
    UIView *_menuView;
    UIView *_triangleView;
    NSArray *_optionLabelArray;
    NSString *_cardId;
}

@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSArray *optionLabelArray; // @synthesize optionLabelArray=_optionLabelArray;
@property(nonatomic) _Bool isUpTriangle; // @synthesize isUpTriangle=_isUpTriangle;
@property(retain, nonatomic) UIView *triangleView; // @synthesize triangleView=_triangleView;
@property(retain, nonatomic) UIView *menuView; // @synthesize menuView=_menuView;
- (void).cxx_destruct;
- (void)actionTouched:(id)arg1;
- (void)hide;
- (void)showAtPoint:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1 actions:(id)arg2 cardId:(id)arg3;

@end

