/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIScrollView, NSString, UIAutoscroll;

@interface _UIActivityDragGestureRecognizer : UILongPressGestureRecognizer <UIAutoscrollDelegate, _UIScrollNotification> {
    UIScrollView *_targetScrollView;
    UIAutoscroll *_autoscroll;
    double _autoscrollFactor;
    long long _autoscrollRamp;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _draggingInsets;
}

@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } draggingInsets;
@property(retain) UIScrollView * targetScrollView;
@property(retain) UIAutoscroll * autoscroll;
@property double autoscrollFactor;
@property long long autoscrollRamp;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setState:(long long)arg1;
- (void)reset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })draggingInsets;
- (int)autoscrollDirectionsForPoint:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (double)autoscrollFactor;
- (long long)autoscrollRamp;
- (void)setAutoscrollRamp:(long long)arg1;
- (void)setAutoscrollFactor:(double)arg1;
- (id)targetScrollView;
- (void)setAutoscroll:(id)arg1;
- (id)autoscroll;
- (void)beginAutoscrollAndUpdateDirectionIfNeeded;
- (void)setTargetScrollView:(id)arg1;
- (void)setDraggingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)updateAutoscroll:(id)arg1;
- (void)cancelAutoscroll;
- (void)autoscrollWillNotStart;
- (void)_didScroll;
- (void)_updateBackdropMaskViewsInScrollView:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end