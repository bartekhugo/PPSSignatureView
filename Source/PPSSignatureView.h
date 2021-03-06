#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@interface PPSSignatureView : GLKView

@property (assign, nonatomic) BOOL hasSignature;
@property (strong, nonatomic) UIImage *signatureImage;

@property (readonly, strong, nonatomic) NSString *svgPath;

- (void)erase;

@end
