//
//  SFTextStorage.h
//  SFTextStorage
//
//  Created by vvveiii on 2019/4/26.
//  Copyright © 2019 lvv. All rights reserved.
//

#include <TargetConditionals.h>

#if TARGET_OS_OSX
#import <AppKit/AppKit.h>
#else
#import <UIKit/UIKit.h>
#endif

@interface SFTextStorage : NSTextStorage

- (NSString *)string;
- (NSDictionary *)attributesAtIndex:(NSUInteger)location effectiveRange:(NSRangePointer)range;

- (void)replaceCharactersInRange:(NSRange)range withString:(NSString *)str;
- (void)setAttributes:(NSDictionary *)attrs range:(NSRange)range;

@end
