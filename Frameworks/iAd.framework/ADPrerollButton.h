/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrerollButton : UIButton {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _alignmentRectInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _hitRectInsets;
}

@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } alignmentRectInsets;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } hitRectInsets;

+ (id)buttonWithType:(int)arg1;

- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })hitRectInsets;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setAlignmentRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setHitRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;

@end