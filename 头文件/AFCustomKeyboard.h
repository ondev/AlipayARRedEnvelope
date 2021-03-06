//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFKeyboardBaseView.h"

#import "AFKeyboardViewDelegate.h"

@class AFHandicapKeyboardView, NSString;

@interface AFCustomKeyboard : AFKeyboardBaseView <AFKeyboardViewDelegate>
{
    CDUnknownBlockType _systemKeyboardBlock;
    id <UITextInput> _input;
    AFHandicapKeyboardView *_handicapView;
}

+ (id)sharedKeyboardWithMode:(long long)arg1 view:(id)arg2;
+ (id)sharedNumAndHandicapKeyboard:(id)arg1 defaultTab:(long long)arg2;
+ (id)sharedHandicapKeyboard:(id)arg1;
+ (id)sharedSystemKeyboard;
+ (id)sharedKeyboard;
+ (id)sharedStockKeyboard;
@property(retain, nonatomic) AFHandicapKeyboardView *handicapView; // @synthesize handicapView=_handicapView;
@property(retain, nonatomic) id <UITextInput> input; // @synthesize input=_input;
@property(copy, nonatomic) CDUnknownBlockType systemKeyboardBlock; // @synthesize systemKeyboardBlock=_systemKeyboardBlock;
- (void).cxx_destruct;
- (struct _NSRange)alipaySelectedRangeWithTextField:(id)arg1;
- (void)leaveInput:(id)arg1;
- (void)checkInput:(id)arg1;
- (void)inputNotification;
- (_Bool)allowTextChangeWithText:(id)arg1;
- (struct _NSRange)backRange:(struct _NSRange)arg1;
- (_Bool)allowBackspace;
- (void)systemKeyboardWithKey:(id)arg1;
- (void)dismissTapped;
- (void)backspaceTapped;
- (void)returnTapped;
- (void)functionKeyTappedWithKey:(id)arg1;
- (void)addTextWithKey:(id)arg1;
- (void)changeTextWithKey:(id)arg1;
- (void)functionShiftWithChoicType:(_Bool)arg1;
- (id)createViewWithKey:(id)arg1;
- (double)keyboardSCaleWithKey:(id)arg1;
- (void)drawSystemKeyboardWithKeys:(id)arg1;
- (long long)rowsWithKey:(id)arg1 rowsDict:(id)arg2;
- (void)drawKeyboardWithKeys:(id)arg1 rowsDict:(id)arg2;
- (void)createNumber;
- (void)createSystemInput;
- (void)createStockInput;
- (void)createViewWithMode:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

