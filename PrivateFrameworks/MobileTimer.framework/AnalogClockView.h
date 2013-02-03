/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class UIImageView, UIImage, HandView, NSTimeZone, NSBundle;

@interface AnalogClockView : UIView <Clock> {
    UIImageView *_background;
    UIImage *_backgroundEveningImage;
    UIImage *_backgroundImage;
    BOOL _evening;
    HandView *_hourHand;
    HandView *_minsHand;
    BOOL _registerForUpdates;
    NSBundle *_resourcesBundle;
    float _seconds;
    HandView *_secsHand;
    BOOL _snippetStyle;
    int _sweepIndex;
    NSTimeZone *_timeZone;
}

+ (void)_sweepBack;
+ (void)_updateTimes;
+ (struct CGSize { float x1; float x2; })defaultSize;
+ (void)registerClock:(id)arg1;
+ (void)startAllClocks;
+ (void)stopAllClocks;
+ (void)unregisterClock:(id)arg1;

- (void)_setEvening:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 registerForUpdates:(BOOL)arg2 offsets:(struct CGPoint { float x1; float x2; }*)arg3 scales:(struct CGSize { float x1; float x2; }*)arg4 bundle:(id)arg5 snippetStyle:(BOOL)arg6;
- (void)setTime:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (void)updateSweepBack;
- (void)updateTime;

@end