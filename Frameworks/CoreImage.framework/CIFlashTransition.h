/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIColor, CIImage, CIVector, NSNumber;

@interface CIFlashTransition : CIFilter {
    CIVector *inputCenter;
    CIColor *inputColor;
    CIVector *inputExtent;
    NSNumber *inputFadeThreshold;
    CIImage *inputImage;
    NSNumber *inputMaxStriationRadius;
    NSNumber *inputStriationContrast;
    NSNumber *inputStriationStrength;
    CIImage *inputTargetImage;
    NSNumber *inputTime;
}

@property(retain) CIVector * inputCenter;
@property(retain) CIColor * inputColor;
@property(retain) CIVector * inputExtent;
@property(retain) NSNumber * inputFadeThreshold;
@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputMaxStriationRadius;
@property(retain) NSNumber * inputStriationContrast;
@property(retain) NSNumber * inputStriationStrength;
@property(retain) CIImage * inputTargetImage;
@property(retain) NSNumber * inputTime;

+ (id)customAttributes;

- (id)_colorKernel;
- (id)_geomKernel;
- (id)inputCenter;
- (id)inputColor;
- (id)inputExtent;
- (id)inputFadeThreshold;
- (id)inputImage;
- (id)inputMaxStriationRadius;
- (id)inputStriationContrast;
- (id)inputStriationStrength;
- (id)inputTargetImage;
- (id)inputTime;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputCenter:(id)arg1;
- (void)setInputColor:(id)arg1;
- (void)setInputExtent:(id)arg1;
- (void)setInputFadeThreshold:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputMaxStriationRadius:(id)arg1;
- (void)setInputStriationContrast:(id)arg1;
- (void)setInputStriationStrength:(id)arg1;
- (void)setInputTargetImage:(id)arg1;
- (void)setInputTime:(id)arg1;

@end
