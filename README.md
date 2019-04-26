# SFTextStorage
a basic subclass of NSTextStorage.

You can subclass `SFTextStorage` directly without implement four NSAttributedString primitives:

```objc
 - (NSString *)string;
 - (NSDictionary *)attributesAtIndex:(NSUInteger)location effectiveRange:(NSRangePointer)range;

 - (void)replaceCharactersInRange:(NSRange)range withString:(NSString *)str;
 - (void)setAttributes:(NSDictionary *)attrs range:(NSRange)range;
```
